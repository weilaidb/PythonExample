DEFINE_PER_CPU_SHARED_ALIGNED(struct rds_ib_statistics, rds_ib_stats);
static const char *const rds_ib_stat_names[] = ;
unsigned int rds_ib_stats_info_copy(struct rds_info_iterator *iter,
unsigned int avail)
