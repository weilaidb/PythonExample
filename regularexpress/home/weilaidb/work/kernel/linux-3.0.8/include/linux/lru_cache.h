#define LRU_CACHE_H
struct lc_element ;
struct lru_cache ;
enum ;
#define LC_PARANOIA (1<<__LC_PARANOIA)
#define LC_DIRTY    (1<<__LC_DIRTY)
#define LC_STARVING (1<<__LC_STARVING)
extern struct lru_cache *lc_create(const char *name, struct kmem_cache *cache,
unsigned e_count, size_t e_size, size_t e_off);
extern void lc_reset(struct lru_cache *lc);
extern void lc_destroy(struct lru_cache *lc);
extern void lc_set(struct lru_cache *lc, unsigned int enr, int index);
extern void lc_del(struct lru_cache *lc, struct lc_element *element);
extern struct lc_element *lc_try_get(struct lru_cache *lc, unsigned int enr);
extern struct lc_element *lc_find(struct lru_cache *lc, unsigned int enr);
extern struct lc_element *lc_get(struct lru_cache *lc, unsigned int enr);
extern unsigned int lc_put(struct lru_cache *lc, struct lc_element *e);
extern void lc_changed(struct lru_cache *lc, struct lc_element *e);
struct seq_file;
extern size_t lc_seq_printf_stats(struct seq_file *seq, struct lru_cache *lc);
extern void lc_seq_dump_details(struct seq_file *seq, struct lru_cache *lc, char *utext,
void (*detail) (struct seq_file *, struct lc_element *));
static inline int lc_try_lock(struct lru_cache *lc)
static inline void lc_unlock(struct lru_cache *lc)
static inline int lc_is_used(struct lru_cache *lc, unsigned int enr)
#define lc_entry(ptr, type, member) \
container_of(ptr, type, member)
extern struct lc_element *lc_element_by_index(struct lru_cache *lc, unsigned i);
extern unsigned int lc_index_of(struct lru_cache *lc, struct lc_element *e);
