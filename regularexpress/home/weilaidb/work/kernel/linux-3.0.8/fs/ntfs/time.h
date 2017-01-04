#define _LINUX_NTFS_TIME_H
#define NTFS_TIME_OFFSET ((s64)(369 * 365 + 89) * 24 * 3600 * 10000000)
static inline sle64 utc2ntfs(const struct timespec ts)
static inline sle64 get_current_ntfs_time(void)
static inline struct timespec ntfs2utc(const sle64 time)
