#define LIBHDFS_PLATFORM_H
#define TYPE_CHECKED_PRINTF_FORMAT(formatArg, varArgs) \
__attribute__((format(printf, formatArg, varArgs)))
typedef pthread_mutex_t mutex;
typedef pthread_t threadId;
