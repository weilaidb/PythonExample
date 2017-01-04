#define FNV32_BASE ((unsigned int) 0x811c9dc5)
#define FNV32_PRIME ((unsigned int) 0x01000193)
unsigned int strhash(const char *str)
unsigned int strihash(const char *str)
unsigned int memhash(const void *buf, size_t len)
unsigned int memihash(const void *buf, size_t len)
#define HASHMAP_INITIAL_SIZE 64
#define HASHMAP_RESIZE_BITS 2
#define HASHMAP_LOAD_FACTOR 80
static void alloc_table(struct hashmap *map, unsigned int size)
static inline int entry_equals(const struct hashmap *map,
const struct hashmap_entry *e1, const struct hashmap_entry *e2,
const void *keydata)
static inline unsigned int bucket(const struct hashmap *map,
const struct hashmap_entry *key)
static void rehash(struct hashmap *map, unsigned int newsize)
static inline struct hashmap_entry **find_entry_ptr(const struct hashmap *map,
const struct hashmap_entry *key, const void *keydata)
static int always_equal(const void *unused1, const void *unused2, const void *unused3)
void hashmap_init(struct hashmap *map, hashmap_cmp_fn equals_function,
size_t initial_size)
void hashmap_free(struct hashmap *map, int free_entries)
void *hashmap_get(const struct hashmap *map, const void *key, const void *keydata)
void *hashmap_get_next(const struct hashmap *map, const void *entry)
void hashmap_add(struct hashmap *map, void *entry)
void *hashmap_remove(struct hashmap *map, const void *key, const void *keydata)
void *hashmap_put(struct hashmap *map, void *entry)
void hashmap_iter_init(struct hashmap *map, struct hashmap_iter *iter)
void *hashmap_iter_next(struct hashmap_iter *iter)
