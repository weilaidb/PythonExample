#define AVUTIL_WCHAR_FILENAME_H
#if defined(_WIN32) && !defined(__MINGW32CE__)
av_warn_unused_result
static inline int utf8towchar(const char *filename_utf8, wchar_t **filename_w)
