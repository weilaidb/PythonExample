#define HADOOP_CORE_COMMON_HASH_TABLE
#define HTABLE_MIN_SIZE 4
struct htable;
typedef uint32_t (*htable_hash_fn_t)(const void *key, uint32_t capacity);
typedef int (*htable_eq_fn_t)(const void *a, const void *b);
struct htable *htable_alloc(uint32_t capacity, htable_hash_fn_t hash_fun,
htable_eq_fn_t eq_fun);
typedef void (*visitor_fn_t)(void *ctx, void *key, void *val);
void htable_visit(struct htable *htable, visitor_fn_t fun, void *ctx);
void htable_free(struct htable *htable);
int htable_put(struct htable *htable, void *key, void *val);
void *htable_get(const struct htable *htable, const void *key);
void htable_pop(struct htable *htable, const void *key,
void **found_key, void **found_val);
uint32_t htable_used(const struct htable *htable);
uint32_t htable_capacity(const struct htable *htable);
uint32_t ht_hash_string(const void *str, uint32_t max);
int ht_compare_string(const void *a, const void *b);
