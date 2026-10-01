#pragma once

// Local Simplified Chinese build, based on upstream v1.5.0.160.
// Presentation strings only; keys, paths, protocol and CLI verbs stay unchanged.

#undef CLP_UI_NETWORK
#define CLP_UI_NETWORK "网络"

#undef CLP_UI_SETTINGS
#define CLP_UI_SETTINGS "设置"

#undef CLP_UI_LOGS
#define CLP_UI_LOGS "日志"

#undef CLP_UI_DIAGNOSTICS
#define CLP_UI_DIAGNOSTICS "诊断"

#undef CLP_UI_ABOUT
#define CLP_UI_ABOUT "关于"

#undef CLP_UI_OPEN_CLIPP
#define CLP_UI_OPEN_CLIPP "打开 Clipp"

#undef CLP_UI_ABOUT_CLIPP
#define CLP_UI_ABOUT_CLIPP "关于 Clipp"

#undef CLP_UI_EXIT_CLIPP
#define CLP_UI_EXIT_CLIPP "退出 Clipp"

#undef CLP_UI_NAME
#define CLP_UI_NAME "群组名称"

#undef CLP_UI_SECRET
#define CLP_UI_SECRET "配对密码"

#undef CLP_UI_NETWORK_KEY
#define CLP_UI_NETWORK_KEY "群组密钥"

#undef CLP_UI_NETWORK_KEY_FINGERPRINT
#define CLP_UI_NETWORK_KEY_FINGERPRINT "群组密钥指纹，用于核对配对结果。这不是密码。"

#undef CLP_UI_ENTER_NETWORK_SECRET
#define CLP_UI_ENTER_NETWORK_SECRET "输入群组名称和配对密码，与其他设备配对。"

#undef CLP_UI_SECRET_TOO_SHORT
#define CLP_UI_SECRET_TOO_SHORT "配对密码至少需要 8 个字符。"

#undef CLP_UI_WORKING
#define CLP_UI_WORKING "正在处理…"

#undef CLP_UI_SENDTO_DESCRIPTION
#define CLP_UI_SENDTO_DESCRIPTION "发送到 Clipp 剪贴板"

#undef CLP_UI_SENDTO_ERR_NO_FILES
#define CLP_UI_SENDTO_ERR_NO_FILES "没有可发送的文件。"

#undef CLP_UI_SENDTO_ERR_STARTUP
#define CLP_UI_SENDTO_ERR_STARTUP "无法启动 Clipp，发送失败。"

#undef CLP_UI_SENDTO_ERR_NOT_PAIRED
#define CLP_UI_SENDTO_ERR_NOT_PAIRED "此设备尚未配对。请先打开 Clipp 并加入群组。"

#undef CLP_UI_SENDTO_ERR_NO_GATEWAY
#define CLP_UI_SENDTO_ERR_NO_GATEWAY "无法连接到其他 Clipp 设备以接收内容。"

#undef CLP_UI_SENDTO_ERR_UNREADABLE
#define CLP_UI_SENDTO_ERR_UNREADABLE "无法读取。"

#undef CLP_UI_SENDTO_ERR_TOO_LARGE
#define CLP_UI_SENDTO_ERR_TOO_LARGE "内容过大，无法共享。"

#undef CLP_UI_SENDTO_ERR_EMPTY
#define CLP_UI_SENDTO_ERR_EMPTY "内容为空。"

#undef CLP_UI_SENDTO_ERR_NOT_TEXT
#define CLP_UI_SENDTO_ERR_NOT_TEXT "不是 PNG、JPEG 图片或文本文件。"

#undef CLP_UI_SENDTO_ERR_ENCODE
#define CLP_UI_SENDTO_ERR_ENCODE "无法编码。"

#undef CLP_UI_CLIPBOARD
#define CLP_UI_CLIPBOARD "剪贴板"

#undef CLP_UI_CLIPBOARD_EMPTY
#define CLP_UI_CLIPBOARD_EMPTY "剪贴板会自动同步，最近的文本和图片将在此显示。"

#undef CLP_UI_NO_NETWORK_KEY_CONFIGURED
#define CLP_UI_NO_NETWORK_KEY_CONFIGURED "尚未配对"

#undef CLP_UI_THIS_DEVICE
#define CLP_UI_THIS_DEVICE "此设备"

#undef CLP_UI_COPY
#define CLP_UI_COPY "复制"

#undef CLP_UI_PASTE
#define CLP_UI_PASTE "粘贴"

#undef CLP_UI_DELETE
#define CLP_UI_DELETE "删除"

#undef CLP_UI_TRAY_POPUP
#define CLP_UI_TRAY_POPUP "剪贴板历史"

#undef CLP_UI_POPUP_FILTER_HINT
#define CLP_UI_POPUP_FILTER_HINT "输入文字以筛选…"

#undef CLP_UI_POPUP_TOAST
#define CLP_UI_POPUP_TOAST "方向键选择，Enter 粘贴"

#undef CLP_UI_POPUP_MORE
#define CLP_UI_POPUP_MORE "继续输入以缩小筛选范围…"

#undef CLP_UI_POPUP_EMPTY
#define CLP_UI_POPUP_EMPTY "暂无内容。"

#undef CLP_UI_POPUP_REGISTERS
#define CLP_UI_POPUP_REGISTERS "收藏"

#undef CLP_UI_POPUP_RENAME
#define CLP_UI_POPUP_RENAME "重命名"

#undef CLP_UI_POPUP_SAVE_TIP
#define CLP_UI_POPUP_SAVE_TIP "保存到收藏 (Ctrl+S)"

#undef CLP_UI_POPUP_RENAME_TIP
#define CLP_UI_POPUP_RENAME_TIP "重命名 (F2)"

#undef CLP_UI_POPUP_DELETE_TIP
#define CLP_UI_POPUP_DELETE_TIP "在所有设备上删除 (Del)"

#undef CLP_UI_POPUP_MAKE_PRIVATE
#define CLP_UI_POPUP_MAKE_PRIVATE "标记为私密"

#undef CLP_UI_POPUP_MAKE_PUBLIC
#define CLP_UI_POPUP_MAKE_PUBLIC "取消私密标记"

#undef CLP_UI_POPUP_UNDO_TIP
#define CLP_UI_POPUP_UNDO_TIP "撤销上次删除 (Ctrl+Z)"

#undef CLP_UI_POPUP_TYPE_TIP
#define CLP_UI_POPUP_TYPE_TIP "逐字模拟键盘输入 (Ctrl+T)"

#undef CLP_UI_POPUP_TYPE_TIP_MAC
#define CLP_UI_POPUP_TYPE_TIP_MAC "逐字模拟键盘输入 (⌘T)"

#undef CLP_UI_POPUP_TYPE_TIP_TYPING
#define CLP_UI_POPUP_TYPE_TIP_TYPING "正在输入…（按任意键或点击可停止）"

#undef CLP_UI_POPUP_TYPE_CONFIRM_SUFFIX
#define CLP_UI_POPUP_TYPE_CONFIRM_SUFFIX " — 再次点击开始输入"

#undef CLP_UI_POPUP_TYPE_ENTER_PREFIX
#define CLP_UI_POPUP_TYPE_ENTER_PREFIX "将按 Enter "

#undef CLP_UI_POPUP_TYPE_KEYSTROKES_PREFIX
#define CLP_UI_POPUP_TYPE_KEYSTROKES_PREFIX ""

#undef CLP_UI_POPUP_TYPE_KEYSTROKES_MIDDLE
#define CLP_UI_POPUP_TYPE_KEYSTROKES_MIDDLE " 次按键，约 "

#undef CLP_UI_POPUP_TYPE_KEYSTROKES_SUFFIX
#define CLP_UI_POPUP_TYPE_KEYSTROKES_SUFFIX " 秒"

#undef CLP_UI_POPUP_TYPE_NO_TEXT
#define CLP_UI_POPUP_TYPE_NO_TEXT "此项不是文本，无法模拟键盘输入。"

#undef CLP_UI_POPUP_TYPE_IME
#define CLP_UI_POPUP_TYPE_IME "模拟输入需要普通键盘布局，请先切换到英文键盘布局。"

#undef CLP_UI_POPUP_TYPE_CANT_PREFIX
#define CLP_UI_POPUP_TYPE_CANT_PREFIX "无法输入 "

#undef CLP_UI_POPUP_TYPE_CANT_LINE
#define CLP_UI_POPUP_TYPE_CANT_LINE " — 行："

#undef CLP_UI_POPUP_TYPE_CANT_COLUMN
#define CLP_UI_POPUP_TYPE_CANT_COLUMN "，列："

#undef CLP_UI_TYPING_PROGRESS_PREFIX
#define CLP_UI_TYPING_PROGRESS_PREFIX "正在输入…剩余 "

#undef CLP_UI_TYPING_PROGRESS_MIDDLE
#define CLP_UI_TYPING_PROGRESS_MIDDLE " 次按键（约 "

#undef CLP_UI_TYPING_PROGRESS_SUFFIX
#define CLP_UI_TYPING_PROGRESS_SUFFIX " 秒），按任意键或点击可停止"

#undef CLP_UI_POPUP_UNDO_OF_PREFIX
#define CLP_UI_POPUP_UNDO_OF_PREFIX "撤销删除："

#undef CLP_UI_POPUP_TOAST_MAC
#define CLP_UI_POPUP_TOAST_MAC "方向键选择，Return 粘贴"

#undef CLP_UI_POPUP_SAVE_TIP_MAC
#define CLP_UI_POPUP_SAVE_TIP_MAC "保存到收藏 (⌘S)"

#undef CLP_UI_POPUP_RENAME_TIP_MAC
#define CLP_UI_POPUP_RENAME_TIP_MAC "重命名 (F2)"

#undef CLP_UI_POPUP_DELETE_TIP_MAC
#define CLP_UI_POPUP_DELETE_TIP_MAC "在所有设备上删除 (⌦)"

#undef CLP_UI_POPUP_UNDO_TIP_MAC
#define CLP_UI_POPUP_UNDO_TIP_MAC "撤销上次删除 (⌘Z)"

#undef CLP_UI_POPUP_AX_TITLE_MAC
#define CLP_UI_POPUP_AX_TITLE_MAC "允许 Clipp 为你粘贴"

#undef CLP_UI_POPUP_AX_BODY_MAC
#define CLP_UI_POPUP_AX_BODY_MAC "Clipp 需要辅助功能权限才能向其他应用粘贴。macOS 会请你确认此更改。"

#undef CLP_UI_POPUP_AX_BUTTON_MAC
#define CLP_UI_POPUP_AX_BUTTON_MAC "打开系统设置…"

#undef CLP_UI_POPUP_AX_GRANTED_MAC
#define CLP_UI_POPUP_AX_GRANTED_MAC "✓ 设置完成，可以粘贴"

#undef CLP_UI_POPUP_AX_CLOSE_TIP
#define CLP_UI_POPUP_AX_CLOSE_TIP "关闭提示"

#undef CLP_UI_POPUP_HOTKEYS
#define CLP_UI_POPUP_HOTKEYS "剪贴板历史弹窗"

#undef CLP_UI_POPUP_HOTKEY_PRIMARY
#define CLP_UI_POPUP_HOTKEY_PRIMARY "主快捷键"

#undef CLP_UI_POPUP_HOTKEY_SECONDARY
#define CLP_UI_POPUP_HOTKEY_SECONDARY "备用快捷键"

#undef CLP_UI_POPUP_HOTKEY_CAPTURE
#define CLP_UI_POPUP_HOTKEY_CAPTURE "请按下新的快捷键…"

#undef CLP_UI_POPUP_HOTKEY_NONE
#define CLP_UI_POPUP_HOTKEY_NONE "无"

#undef CLP_UI_POPUP_HOTKEY_HELP
#define CLP_UI_POPUP_HOTKEY_HELP "点击快捷键可修改。录入时，Esc 取消，Delete 清除。清除两个快捷键后，仍可通过托盘图标打开历史。"

#undef CLP_UI_POPUP_HOTKEY_NEEDS_MODIFIER
#define CLP_UI_POPUP_HOTKEY_NEEDS_MODIFIER "快捷键需包含 Ctrl、Alt 或 Win。"

#undef CLP_UI_POPUP_HOTKEY_NEEDS_MODIFIER_MAC
#define CLP_UI_POPUP_HOTKEY_NEEDS_MODIFIER_MAC "快捷键需包含 ⌘、⌃ 或 ⌥。"

#undef CLP_UI_POPUP_HOTKEY_IN_USE
#define CLP_UI_POPUP_HOTKEY_IN_USE "此快捷键已被其他应用占用。"

#undef CLP_UI_POPUP_HOTKEY_APPLIED
#define CLP_UI_POPUP_HOTKEY_APPLIED "弹窗快捷键已更新。"

#undef CLP_UI_POPUP_TEACH_PREFIX
#define CLP_UI_POPUP_TEACH_PREFIX "按 "

#undef CLP_UI_POPUP_TEACH_OR
#define CLP_UI_POPUP_TEACH_OR " 或 "

#undef CLP_UI_POPUP_TEACH_SUFFIX
#define CLP_UI_POPUP_TEACH_SUFFIX " 可打开剪贴板历史，粘贴之前复制的内容。"

#undef CLP_UI_POPUP_TEACH_DISMISS
#define CLP_UI_POPUP_TEACH_DISMISS "关闭提示"

#undef CLP_UI_LINK
#define CLP_UI_LINK "链接"

#undef CLP_UI_TEXT
#define CLP_UI_TEXT "文本"

#undef CLP_UI_IMAGE
#define CLP_UI_IMAGE "图片"

#undef CLP_UI_PRIVATE_TEXT
#define CLP_UI_PRIVATE_TEXT "私密文本"

#undef CLP_UI_PRIVATE_BADGE
#define CLP_UI_PRIVATE_BADGE "私密"

#undef CLP_UI_PEEK
#define CLP_UI_PEEK "查看"

#undef CLP_UI_PEEK_HIDE
#define CLP_UI_PEEK_HIDE "隐藏"

#undef CLP_UI_PRIVATE_PLACEHOLDER_TITLE
#define CLP_UI_PRIVATE_PLACEHOLDER_TITLE "已标记为私密"

#undef CLP_UI_PRIVATE_PLACEHOLDER_DETAIL
#define CLP_UI_PRIVATE_PLACEHOLDER_DETAIL "来源应用请求不要同步此剪贴板内容。"

#undef CLP_UI_UNSUPPORTED_CLIPBOARD_ITEM
#define CLP_UI_UNSUPPORTED_CLIPBOARD_ITEM "不支持的剪贴板内容"

#undef CLP_UI_CLI_BANNER_TITLE
#define CLP_UI_CLI_BANNER_TITLE "在命令行中使用 Clipp"

#undef CLP_UI_CLI_BANNER_BODY
#define CLP_UI_CLI_BANNER_BODY "在终端运行此命令，将 clipp 添加到 PATH，即可在脚本或 SSH 中使用 clipp copy 和 clipp paste。"

#undef CLP_UI_CLI_BANNER_COPY
#define CLP_UI_CLI_BANNER_COPY "复制命令"

#undef CLP_UI_CLI_BANNER_COPIED
#define CLP_UI_CLI_BANNER_COPIED "已复制"

#undef CLP_UI_CLI_BANNER_DISMISS
#define CLP_UI_CLI_BANNER_DISMISS "关闭提示"

#undef CLP_UI_PEERS
#define CLP_UI_PEERS "已配对设备"

#undef CLP_UI_NO_PEERS_HELP
#define CLP_UI_NO_PEERS_HELP "其他设备配对成功且处于同一局域网时，将在此显示。各设备的群组名称和配对密码必须完全一致，均区分大小写。"

#undef CLP_UI_UNKNOWN_HOST
#define CLP_UI_UNKNOWN_HOST "（未知设备）"

#undef CLP_UI_CONNECTED
#define CLP_UI_CONNECTED "已连接"

#undef CLP_UI_NOT_CONNECTED
#define CLP_UI_NOT_CONNECTED "未连接"

#undef CLP_UI_CONNECTED_FOR
#define CLP_UI_CONNECTED_FOR "已连接 "

#undef CLP_UI_DAY_SUFFIX
#define CLP_UI_DAY_SUFFIX " 天，"

#undef CLP_UI_DAYS_SUFFIX
#define CLP_UI_DAYS_SUFFIX " 天，"

#undef CLP_UI_BYTES_SENT
#define CLP_UI_BYTES_SENT "已发送字节："

#undef CLP_UI_BYTES_RECEIVED
#define CLP_UI_BYTES_RECEIVED "已接收字节："

#undef CLP_UI_INCOMING
#define CLP_UI_INCOMING "接收："

#undef CLP_UI_OUTGOING
#define CLP_UI_OUTGOING "发送："

#undef CLP_UI_TCP_PORT
#define CLP_UI_TCP_PORT "TCP 端口"

#undef CLP_UI_LISTENER_IP
#define CLP_UI_LISTENER_IP "监听 IP"

#undef CLP_UI_APPLY_NETWORK_SETTINGS
#define CLP_UI_APPLY_NETWORK_SETTINGS "应用网络设置"

#undef CLP_UI_HOST_ID
#define CLP_UI_HOST_ID "设备 ID"

#undef CLP_UI_CURRENT_HOST_ID
#define CLP_UI_CURRENT_HOST_ID "当前设备 ID"

#undef CLP_UI_RESET
#define CLP_UI_RESET "重置"

#undef CLP_UI_HOST_ID_COLLISION_WARNING
#define CLP_UI_HOST_ID_COLLISION_WARNING "检测到设备 ID 可能重复。如果此设备由备份还原或克隆，请重置设备 ID。"

#undef CLP_UI_NETWORK_SETTINGS_APPLIED
#define CLP_UI_NETWORK_SETTINGS_APPLIED "网络设置已应用。"

#undef CLP_UI_UNAVAILABLE
#define CLP_UI_UNAVAILABLE "不可用"

#undef CLP_UI_UNABLE_TO_RESET_HOST_ID
#define CLP_UI_UNABLE_TO_RESET_HOST_ID "无法重置设备 ID。"

#undef CLP_UI_HOST_ID_RESET
#define CLP_UI_HOST_ID_RESET "设备 ID 已重置。"

#undef CLP_UI_CLIPBOARD_HISTORY
#define CLP_UI_CLIPBOARD_HISTORY "剪贴板历史"

#undef CLP_UI_HISTORY_MEMORY_LIMIT
#define CLP_UI_HISTORY_MEMORY_LIMIT "内存上限"

#undef CLP_UI_HISTORY_TIME_LIMIT
#define CLP_UI_HISTORY_TIME_LIMIT "保留时间"

#undef CLP_UI_HISTORY_ITEM_LIMIT
#define CLP_UI_HISTORY_ITEM_LIMIT "条目上限"

#undef CLP_UI_UNLIMITED
#define CLP_UI_UNLIMITED "不限"

#undef CLP_UI_CLIPBOARD_HISTORY_SETTINGS_APPLIED
#define CLP_UI_CLIPBOARD_HISTORY_SETTINGS_APPLIED "剪贴板历史设置已应用。"

#undef CLP_UI_PRIVACY
#define CLP_UI_PRIVACY "隐私"

#undef CLP_UI_MASK_SHORT_TEXT_PREVIEWS
#define CLP_UI_MASK_SHORT_TEXT_PREVIEWS "隐藏无空格短文本的预览"

#undef CLP_UI_MASK_SHORT_TEXT_PREVIEWS_HELP
#define CLP_UI_MASK_SHORT_TEXT_PREVIEWS_HELP "不含空格的短文本可能是密码，因此隐藏其预览。内容仍会同步，点击眼睛图标可查看。"

#undef CLP_UI_HONOR_PRIVACY_MARKERS
#define CLP_UI_HONOR_PRIVACY_MARKERS "遵守其他应用的“不要同步”请求"

#undef CLP_UI_HONOR_PRIVACY_MARKERS_HELP
#define CLP_UI_HONOR_PRIVACY_MARKERS_HELP "其他应用将剪贴板内容标记为私密时（如 Chrome 或密码管理器中的密码），Clipp 不会将其同步到其他设备。"

#undef CLP_UI_PRIVACY_SETTINGS_APPLIED
#define CLP_UI_PRIVACY_SETTINGS_APPLIED "隐私设置已应用。"

#undef CLP_UI_FEEDBACK
#define CLP_UI_FEEDBACK "动态提示"

#undef CLP_UI_ANIMATE_FLOW_FEEDBACK
#define CLP_UI_ANIMATE_FLOW_FEEDBACK "发送或接收时显示图标动画"

#undef CLP_UI_ANIMATE_FLOW_FEEDBACK_HELP
#define CLP_UI_ANIMATE_FLOW_FEEDBACK_HELP "复制的内容发送到其他设备或从其他设备接收时，状态图标会播放简短动画。"

#undef CLP_UI_FEEDBACK_SETTINGS_APPLIED
#define CLP_UI_FEEDBACK_SETTINGS_APPLIED "动态提示设置已应用。"

#undef CLP_UI_STARTUP
#define CLP_UI_STARTUP "启动"

#undef CLP_UI_LAUNCH_AT_LOGIN
#define CLP_UI_LAUNCH_AT_LOGIN "登录时启动 Clipp"

#undef CLP_UI_LIVE_DIAGNOSTIC_OUTPUT
#define CLP_UI_LIVE_DIAGNOSTIC_OUTPUT "Clipp 实时诊断日志。"

#undef CLP_UI_COPY_LOG_LINES_FORMAT
#define CLP_UI_COPY_LOG_LINES_FORMAT "复制 %d 行"

#undef CLP_UI_ABOUT_TITLE
#define CLP_UI_ABOUT_TITLE "Clipp 中文版"

#undef CLP_UI_TAGLINE
#define CLP_UI_TAGLINE "在可信设备之间同步跨平台剪贴板。"

#undef CLP_UI_PROJECT
#define CLP_UI_PROJECT "项目"

#undef CLP_UI_MIT_LICENSE
#define CLP_UI_MIT_LICENSE "依据 MIT 许可证发布。"

#undef CLP_UI_OPEN_SOURCE_ACKNOWLEDGEMENTS
#define CLP_UI_OPEN_SOURCE_ACKNOWLEDGEMENTS "开源项目致谢"

#undef CLP_UI_ACK_LIBSODIUM
#define CLP_UI_ACK_LIBSODIUM "libsodium — 使用 ISC 许可证的加密库"

#undef CLP_UI_ACK_XXHASH
#define CLP_UI_ACK_XXHASH "xxHash — 使用 BSD-2-Clause 许可证的非加密哈希库"

#undef CLP_UI_ACK_ZSTD
#define CLP_UI_ACK_ZSTD "Zstandard (zstd) — 使用 BSD 许可证的压缩库"

#undef CLP_UI_THIRD_PARTY_LICENSE_NOTE
#define CLP_UI_THIRD_PARTY_LICENSE_NOTE "第三方组件的许可条款以各自项目为准。"

