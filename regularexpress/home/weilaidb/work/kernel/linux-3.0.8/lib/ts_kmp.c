struct ts_kmp
;
static unsigned int kmp_find(struct ts_config *conf, struct ts_state *state)
static inline void compute_prefix_tbl(const u8 *pattern, unsigned int len,
unsigned int *prefix_tbl, int flags)
static struct ts_config *kmp_init(const void *pattern, unsigned int len,
gfp_t gfp_mask, int flags)
static void *kmp_get_pattern(struct ts_config *conf)
static unsigned int kmp_get_pattern_len(struct ts_config *conf)
static struct ts_ops kmp_ops = ;
static int __init init_kmp(void)
static void __exit exit_kmp(void)
MODULE_LICENSE("GPL");
module_init(init_kmp);
module_exit(exit_kmp);
