$ErrorActionPreference = 'Stop'
$clippRepo = $PSScriptRoot
if ($clippRepo.Length -gt 85) { throw '请先将源码解压到较短路径（例如 E:\Clipp-zh），避免 Windows 编译依赖时超出路径长度限制。' }
$clippVswhere = Join-Path ${env:ProgramFiles(x86)} 'Microsoft Visual Studio\Installer\vswhere.exe'
if (-not (Test-Path -LiteralPath $clippVswhere)) { throw '请先安装 Visual Studio C++ 桌面构建工具。' }
$clippVsRoot = & $clippVswhere -latest -products '*' -requires Microsoft.VisualStudio.Component.VC.Tools.x86.x64 -property installationPath
if (-not $clippVsRoot) { throw '未找到 MSVC C++ 编译器。' }
$clippVcVars = Join-Path $clippVsRoot 'VC\Auxiliary\Build\vcvarsall.bat'
$env:VSLANG = '1033'
$clippEnvironment = & cmd.exe /d /s /c "call `"$clippVcVars`" amd64 >nul && set"
if ($LASTEXITCODE -ne 0) { throw 'vcvarsall 失败。' }
foreach ($clippLine in $clippEnvironment) {
    if ($clippLine -match '^([^=]+)=(.*)$') { Set-Item -Path "Env:$($Matches[1])" -Value $Matches[2] }
}
$clippCmake = Join-Path $clippVsRoot 'Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin\cmake.exe'
$clippNinja = Join-Path $clippVsRoot 'Common7\IDE\CommonExtensions\Microsoft\CMake\Ninja\ninja.exe'
$clippToolchain = Join-Path $clippVsRoot 'VC\vcpkg\scripts\buildsystems\vcpkg.cmake'
foreach ($clippRequired in @($clippCmake,$clippNinja,$clippToolchain)) {
    if (-not (Test-Path -LiteralPath $clippRequired)) { throw "缺少构建工具：$clippRequired。请安装 C++ CMake 和 vcpkg 组件。" }
}
$clippBuild = Join-Path $clippRepo 'build\windows-release'
$clippDeps = Join-Path $clippRepo 'build\vcpkg_installed'
$clippBuildTrees = Join-Path $clippRepo 'build\vb'
$env:VCPKG_MAX_CONCURRENCY = '4'
& $clippCmake -S $clippRepo -B $clippBuild -G Ninja "-DCMAKE_MAKE_PROGRAM=$clippNinja" "-DCMAKE_TOOLCHAIN_FILE=$clippToolchain" "-DVCPKG_MANIFEST_DIR=$clippRepo\src" "-DVCPKG_INSTALLED_DIR=$clippDeps" '-DVCPKG_TARGET_TRIPLET=x64-windows-static' '-DCMAKE_BUILD_TYPE=Release' '-DVCPKG_MANIFEST_FEATURES=tests' '-DCLIPP_BUILD_TESTS=ON' "-DVCPKG_INSTALL_OPTIONS=--x-buildtrees-root=$clippBuildTrees;--clean-buildtrees-after-build;--clean-packages-after-build" '-DCLIPP_VERSION=1.5.0.160'
if ($LASTEXITCODE -ne 0) { throw 'CMake 配置失败。' }
& $clippCmake --build $clippBuild --parallel 4
if ($LASTEXITCODE -ne 0) { throw '编译失败。' }
$clippCtest = Join-Path (Split-Path $clippCmake -Parent) 'ctest.exe'
& $clippCtest --test-dir $clippBuild --verbose
if ($LASTEXITCODE -ne 0) { throw '项目测试失败。' }
& (Join-Path $clippBuild 'clipp.com') --version
if ($LASTEXITCODE -ne 0) { throw '版本检查失败。' }
Write-Output "已编译：$clippBuild\clipp.exe"

