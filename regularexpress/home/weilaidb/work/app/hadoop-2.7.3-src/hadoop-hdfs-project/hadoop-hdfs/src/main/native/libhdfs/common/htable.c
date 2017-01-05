struct htable_pair ;
struct htable ;
static void htable_insert_internal(struct htable_pair *nelem,
uint32_t capacity, htable_hash_fn_t hash_fun, void *key,
void *val)
static int htable_realloc(struct htable *htable, uint32_t new_capacity)
static uint32_t round_up_to_power_of_2(uint32_t i)
struct htable *htable_alloc(uint32_t size,
htable_hash_fn_t hash_fun, htable_eq_fn_t eq_fun)
void htable_visit(struct htable *htable, visitor_fn_t fun, void *ctx)
void htable_free(struct htable *htable)
int htable_put(struct htable *htable, void *key, void *val)
static int htable_get_internal(const struct htable *htable,
const void *key, uint32_t *out)
void *htable_get(const struct htable *htable, const void *key)
void htable_pop(struct htable *htable, const void *key,
void **found_key, void **found_val)
uint32_t htable_used(const struct htable *htable)
uint32_t htable_capacity(const struct htable *htable)
uint32_t ht_hash_string(const void *str, uint32_t max)
int ht_compare_string(const void *a, const void *b)
