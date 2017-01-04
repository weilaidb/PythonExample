struct ts_fsm
;
#define _A		0x100
#define _W		0x200
static const u16 token_map[TS_FSM_TYPE_MAX+1] = ;
static const u16 token_lookup_tbl[256] = ;
static inline int match_token(struct ts_fsm_token *t, u8 d)
static unsigned int fsm_find(struct ts_config *conf, struct ts_state *state)
static struct ts_config *fsm_init(const void *pattern, unsigned int len,
gfp_t gfp_mask, int flags)
static void *fsm_get_pattern(struct ts_config *conf)
static unsigned int fsm_get_pattern_len(struct ts_config *conf)
static struct ts_ops fsm_ops = ;
static int __init init_fsm(void)
static void __exit exit_fsm(void)
MODULE_LICENSE("GPL");
module_init(init_fsm);
module_exit(exit_fsm);
