#define _LINUX_TIMECOMPARE_H
struct timecompare ;
extern ktime_t timecompare_transform(struct timecompare *sync,
u64 source_tstamp);
extern int timecompare_offset(struct timecompare *sync,
s64 *offset,
u64 *source_tstamp);
extern void __timecompare_update(struct timecompare *sync,
u64 source_tstamp);
static inline void timecompare_update(struct timecompare *sync,
u64 source_tstamp)
