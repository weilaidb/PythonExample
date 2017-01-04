#define HASHMAP_H
extern unsigned int strhash(const char *buf);
extern unsigned int strihash(const char *buf);
extern unsigned int memhash(const void *buf, size_t len);
extern unsigned int memihash(const void *buf, size_t len);
struct hashmap_entry ;
typedef int (*hashmap_cmp_fn)(const void *entry, const void *entry_or_key,
const void *keydata);
struct hashmap ;
struct hashmap_iter ;
extern void hashmap_init(struct hashmap *map, hashmap_cmp_fn equals_function,
size_t initial_size);
extern void hashmap_free(struct hashmap *map, int free_entries);
static inline void hashmap_entry_init(void *entry, unsigned int hash)
extern void *hashmap_get(const struct hashmap *map, const void *key,
const void *keydata);
extern void *hashmap_get_next(const struct hashmap *map, const void *entry);
extern void hashmap_add(struct hashmap *map, void *entry);
extern void *hashmap_put(struct hashmap *map, void *entry);
extern void *hashmap_remove(struct hashmap *map, const void *key,
const void *keydata);
extern void hashmap_iter_init(struct hashmap *map, struct hashmap_iter *iter);
extern void *hashmap_iter_next(struct hashmap_iter *iter);
static inline void *hashmap_iter_first(struct hashmap *map,
struct hashmap_iter *iter)
