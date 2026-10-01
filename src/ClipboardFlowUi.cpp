#include "ClipboardFlowUi.h"

#include <atomic>

namespace clipp {

namespace {
std::atomic<ClipboardFlowHandler> g_clipboardFlowHandler{ nullptr };
}  // namespace

void SetClipboardFlowHandler(ClipboardFlowHandler handler) {
    g_clipboardFlowHandler.store(handler, std::memory_order_release);
}

void NotifyClipboardFlow(ClipboardFlowDirection direction, const std::string& peerNameUtf8) {
    if (ClipboardFlowHandler handler = g_clipboardFlowHandler.load(std::memory_order_acquire)) {
        handler(direction, peerNameUtf8);
    }
}

std::string FormatRelativeAgeUtf8(uint64_t ageSeconds) {
#ifdef _WIN32
    if (ageSeconds < 5)      return "刚刚";
    if (ageSeconds < 60)     return std::to_string(ageSeconds) + " 秒前";
    if (ageSeconds < 3600)   return std::to_string(ageSeconds / 60) + " 分钟前";
    if (ageSeconds < 86400)  return std::to_string(ageSeconds / 3600) + " 小时前";
    return std::to_string(ageSeconds / 86400) + " 天前";
#else
    if (ageSeconds < 5)      return "just now";
    if (ageSeconds < 60)     return std::to_string(ageSeconds) + "s ago";
    if (ageSeconds < 3600)   return std::to_string(ageSeconds / 60) + "m ago";
    if (ageSeconds < 86400)  return std::to_string(ageSeconds / 3600) + "h ago";
    return std::to_string(ageSeconds / 86400) + "d ago";
#endif
}

}  // namespace clipp
