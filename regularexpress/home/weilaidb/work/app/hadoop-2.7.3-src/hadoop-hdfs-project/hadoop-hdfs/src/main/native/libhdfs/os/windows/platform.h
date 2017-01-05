#define LIBHDFS_PLATFORM_H
#define O_ACCMODE 0x0003
#define PATH_MAX MAX_PATH
#define EDQUOT WSAEDQUOT
#define ESTALE WSAESTALE
#define TYPE_CHECKED_PRINTF_FORMAT(formatArg, varArgs)
#define snprintf(str, size, format, ...) \
_snprintf_s((str), (size), _TRUNCATE, (format), __VA_ARGS__)
#define strncpy(dest, src, n) \
strncpy_s((dest), (n), (src), _TRUNCATE)
#define strtok_r(str, delim, saveptr) \
strtok_s((str), (delim), (saveptr))
#define vsnprintf(str, size, format, ...) \
vsnprintf_s((str), (size), _TRUNCATE, (format), __VA_ARGS__)
typedef CRITICAL_SECTION mutex;
typedef HANDLE threadId;
