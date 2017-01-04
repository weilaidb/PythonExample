#define __LINUX_TEXTSEARCH_H
struct ts_config;
#define TS_AUTOLOAD	1
#define TS_IGNORECASE	2
struct ts_state
;
struct ts_ops
;
struct ts_config
;
static inline unsigned int textsearch_next(struct ts_config *conf,
struct ts_state *state)
static inline unsigned int textsearch_find(struct ts_config *conf,
struct ts_state *state)
static inline void *textsearch_get_pattern(struct ts_config *conf)
static inline unsigned int textsearch_get_pattern_len(struct ts_config *conf)
extern int textsearch_register(struct ts_ops *);
extern int textsearch_unregister(struct ts_ops *);
extern struct ts_config *textsearch_prepare(const char *, const void *,
unsigned int, gfp_t, int);
extern void textsearch_destroy(struct ts_config *conf);
extern unsigned int textsearch_find_continuous(struct ts_config *,
struct ts_state *,
const void *, unsigned int);
#define TS_PRIV_ALIGNTO	8
#define TS_PRIV_ALIGN(len) (((len) + TS_PRIV_ALIGNTO-1) & ~(TS_PRIV_ALIGNTO-1))
static inline struct ts_config *alloc_ts_config(size_t payload,
gfp_t gfp_mask)
static inline void *ts_config_priv(struct ts_config *conf)
