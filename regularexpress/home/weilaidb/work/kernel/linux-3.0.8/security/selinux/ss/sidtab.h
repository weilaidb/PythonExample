#define _SS_SIDTAB_H_
struct sidtab_node ;
#define SIDTAB_HASH_BITS 7
#define SIDTAB_HASH_BUCKETS (1 << SIDTAB_HASH_BITS)
#define SIDTAB_HASH_MASK (SIDTAB_HASH_BUCKETS-1)
#define SIDTAB_SIZE SIDTAB_HASH_BUCKETS
struct sidtab ;
int sidtab_init(struct sidtab *s);
int sidtab_insert(struct sidtab *s, u32 sid, struct context *context);
struct context *sidtab_search(struct sidtab *s, u32 sid);
struct context *sidtab_search_force(struct sidtab *s, u32 sid);
int sidtab_map(struct sidtab *s,
int (*apply) (u32 sid,
struct context *context,
void *args),
void *args);
int sidtab_context_to_sid(struct sidtab *s,
struct context *context,
u32 *sid);
void sidtab_hash_eval(struct sidtab *h, char *tag);
void sidtab_destroy(struct sidtab *s);
void sidtab_set(struct sidtab *dst, struct sidtab *src);
void sidtab_shutdown(struct sidtab *s);
