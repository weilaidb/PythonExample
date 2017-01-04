LIST_HEAD(ubifs_infos);
static unsigned int shrinker_run_no;
DEFINE_SPINLOCK(ubifs_infos_lock);
atomic_long_t ubifs_clean_zn_cnt;
static int shrink_tnc(struct ubifs_info *c, int nr, int age, int *contention)
static int shrink_tnc_trees(int nr, int age, int *contention)
static int kick_a_thread(void)
int ubifs_shrinker(struct shrinker *shrink, struct shrink_control *sc)
