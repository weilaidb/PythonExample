#define SIDTAB_HASH(sid) \
(sid & SIDTAB_HASH_MASK)
int sidtab_init(struct sidtab *s)
int sidtab_insert(struct sidtab *s, u32 sid, struct context *context)
static struct context *sidtab_search_core(struct sidtab *s, u32 sid, int force)
struct context *sidtab_search(struct sidtab *s, u32 sid)
struct context *sidtab_search_force(struct sidtab *s, u32 sid)
int sidtab_map(struct sidtab *s,
int (*apply) (u32 sid,
struct context *context,
void *args),
void *args)
static void sidtab_update_cache(struct sidtab *s, struct sidtab_node *n, int loc)
static inline u32 sidtab_search_context(struct sidtab *s,
struct context *context)
static inline u32 sidtab_search_cache(struct sidtab *s, struct context *context)
int sidtab_context_to_sid(struct sidtab *s,
struct context *context,
u32 *out_sid)
void sidtab_hash_eval(struct sidtab *h, char *tag)
void sidtab_destroy(struct sidtab *s)
void sidtab_set(struct sidtab *dst, struct sidtab *src)
void sidtab_shutdown(struct sidtab *s)
