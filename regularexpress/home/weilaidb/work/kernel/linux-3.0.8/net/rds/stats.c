DEFINE_PER_CPU_SHARED_ALIGNED(struct rds_statistics, rds_stats);
EXPORT_PER_CPU_SYMBOL_GPL(rds_stats);
static const char *const rds_stat_names[] = ;
void rds_stats_info_copy(struct rds_info_iterator *iter,
uint64_t *values, const char *const *names, size_t nr)
EXPORT_SYMBOL_GPL(rds_stats_info_copy);
static void rds_stats_info(struct socket *sock, unsigned int len,
struct rds_info_iterator *iter,
struct rds_info_lengths *lens)
void rds_stats_exit(void)
int rds_stats_init(void)
