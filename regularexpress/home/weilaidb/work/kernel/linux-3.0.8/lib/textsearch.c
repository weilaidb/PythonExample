static LIST_HEAD(ts_ops);
static DEFINE_SPINLOCK(ts_mod_lock);
static inline struct ts_ops *lookup_ts_algo(const char *name)
int textsearch_register(struct ts_ops *ops)
int textsearch_unregister(struct ts_ops *ops)
struct ts_linear_state
;
static unsigned int get_linear_data(unsigned int consumed, const u8 **dst,
struct ts_config *conf,
struct ts_state *state)
unsigned int textsearch_find_continuous(struct ts_config *conf,
struct ts_state *state,
const void *data, unsigned int len)
struct ts_config *textsearch_prepare(const char *algo, const void *pattern,
unsigned int len, gfp_t gfp_mask, int flags)
void textsearch_destroy(struct ts_config *conf)
EXPORT_SYMBOL(textsearch_register);
EXPORT_SYMBOL(textsearch_unregister);
EXPORT_SYMBOL(textsearch_prepare);
EXPORT_SYMBOL(textsearch_find_continuous);
EXPORT_SYMBOL(textsearch_destroy);
