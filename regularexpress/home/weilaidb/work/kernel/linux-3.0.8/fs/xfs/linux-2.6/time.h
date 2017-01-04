#define __XFS_SUPPORT_TIME_H__
typedef struct timespec timespec_t;
static inline void delay(long ticks)
static inline void nanotime(struct timespec *tvp)
