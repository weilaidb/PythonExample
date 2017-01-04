MODULE_AUTHOR("Philipp Reisner <phil@linbit.com>, "
"Lars Ellenberg <lars@linbit.com>");
MODULE_DESCRIPTION("lru_cache - Track sets of hot objects");
MODULE_LICENSE("GPL");
#define PARANOIA_ENTRY() do  while (0)
#define RETURN(x...)     do  while (0)
#define PARANOIA_LC_ELEMENT(lc, e) do  while (0)
struct lru_cache *lc_create(const char *name, struct kmem_cache *cache,
unsigned e_count, size_t e_size, size_t e_off)
void lc_free_by_index(struct lru_cache *lc, unsigned i)
void lc_destroy(struct lru_cache *lc)
void lc_reset(struct lru_cache *lc)
size_t lc_seq_printf_stats(struct seq_file *seq, struct lru_cache *lc)
static struct hlist_head *lc_hash_slot(struct lru_cache *lc, unsigned int enr)
struct lc_element *lc_find(struct lru_cache *lc, unsigned int enr)
static struct lc_element *lc_evict(struct lru_cache *lc)
void lc_del(struct lru_cache *lc, struct lc_element *e)
static struct lc_element *lc_get_unused_element(struct lru_cache *lc)
static int lc_unused_element_available(struct lru_cache *lc)
struct lc_element *lc_get(struct lru_cache *lc, unsigned int enr)
struct lc_element *lc_try_get(struct lru_cache *lc, unsigned int enr)
void lc_changed(struct lru_cache *lc, struct lc_element *e)
unsigned int lc_put(struct lru_cache *lc, struct lc_element *e)
struct lc_element *lc_element_by_index(struct lru_cache *lc, unsigned i)
unsigned int lc_index_of(struct lru_cache *lc, struct lc_element *e)
void lc_set(struct lru_cache *lc, unsigned int enr, int index)
void lc_seq_dump_details(struct seq_file *seq, struct lru_cache *lc, char *utext,
void (*detail) (struct seq_file *, struct lc_element *))
EXPORT_SYMBOL(lc_create);
EXPORT_SYMBOL(lc_reset);
EXPORT_SYMBOL(lc_destroy);
EXPORT_SYMBOL(lc_set);
EXPORT_SYMBOL(lc_del);
EXPORT_SYMBOL(lc_try_get);
EXPORT_SYMBOL(lc_find);
EXPORT_SYMBOL(lc_get);
EXPORT_SYMBOL(lc_put);
EXPORT_SYMBOL(lc_changed);
EXPORT_SYMBOL(lc_element_by_index);
EXPORT_SYMBOL(lc_index_of);
EXPORT_SYMBOL(lc_seq_printf_stats);
EXPORT_SYMBOL(lc_seq_dump_details);
