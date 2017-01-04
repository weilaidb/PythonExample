#define TIMECOMPARE_SKEW_RESOLUTION (((s64)1)<<30)
ktime_t timecompare_transform(struct timecompare *sync,
u64 source_tstamp)
EXPORT_SYMBOL_GPL(timecompare_transform);
int timecompare_offset(struct timecompare *sync,
s64 *offset,
u64 *source_tstamp)
EXPORT_SYMBOL_GPL(timecompare_offset);
void __timecompare_update(struct timecompare *sync,
u64 source_tstamp)
EXPORT_SYMBOL_GPL(__timecompare_update);
