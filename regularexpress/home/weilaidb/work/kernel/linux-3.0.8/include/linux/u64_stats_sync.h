#define _LINUX_U64_STATS_SYNC_H
struct u64_stats_sync ;
static inline void u64_stats_update_begin(struct u64_stats_sync *syncp)
static inline void u64_stats_update_end(struct u64_stats_sync *syncp)
static inline unsigned int u64_stats_fetch_begin(const struct u64_stats_sync *syncp)
static inline bool u64_stats_fetch_retry(const struct u64_stats_sync *syncp,
unsigned int start)
static inline unsigned int u64_stats_fetch_begin_bh(const struct u64_stats_sync *syncp)
static inline bool u64_stats_fetch_retry_bh(const struct u64_stats_sync *syncp,
unsigned int start)
