#define ASIZE 256
struct ts_bm
;
static unsigned int bm_find(struct ts_config *conf, struct ts_state *state)
static int subpattern(u8 *pattern, int i, int j, int g)
static void compute_prefix_tbl(struct ts_bm *bm, int flags)
static struct ts_config *bm_init(const void *pattern, unsigned int len,
gfp_t gfp_mask, int flags)
static void *bm_get_pattern(struct ts_config *conf)
static unsigned int bm_get_pattern_len(struct ts_config *conf)
static struct ts_ops bm_ops = ;
static int __init init_bm(void)
static void __exit exit_bm(void)
MODULE_LICENSE("GPL");
module_init(init_bm);
module_exit(exit_bm);
