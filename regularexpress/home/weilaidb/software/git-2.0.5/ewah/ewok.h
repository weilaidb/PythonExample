#define __EWOK_BITMAP_H__
#	define ewah_malloc xmalloc
#	define ewah_realloc xrealloc
#	define ewah_calloc xcalloc
typedef uint64_t eword_t;
#define BITS_IN_WORD (sizeof(eword_t) * 8)
static inline uint32_t ewah_bit_popcount64(uint64_t x)
#define ewah_bit_ctz64(x) __builtin_ctzll(x)
static inline int ewah_bit_ctz64(uint64_t x)
struct ewah_bitmap ;
typedef void (*ewah_callback)(size_t pos, void *);
struct ewah_bitmap *ewah_pool_new(void);
void ewah_pool_free(struct ewah_bitmap *self);
struct ewah_bitmap *ewah_new(void);
void ewah_clear(struct ewah_bitmap *self);
void ewah_free(struct ewah_bitmap *self);
int ewah_serialize_to(struct ewah_bitmap *self,
int (*write_fun)(void *out, const void *buf, size_t len),
void *out);
int ewah_serialize(struct ewah_bitmap *self, int fd);
int ewah_serialize_native(struct ewah_bitmap *self, int fd);
int ewah_deserialize(struct ewah_bitmap *self, int fd);
int ewah_read_mmap(struct ewah_bitmap *self, void *map, size_t len);
int ewah_read_mmap_native(struct ewah_bitmap *self, void *map, size_t len);
uint32_t ewah_checksum(struct ewah_bitmap *self);
void ewah_not(struct ewah_bitmap *self);
void ewah_each_bit(struct ewah_bitmap *self, ewah_callback callback, void *payload);
void ewah_set(struct ewah_bitmap *self, size_t i);
struct ewah_iterator ;
void ewah_iterator_init(struct ewah_iterator *it, struct ewah_bitmap *parent);
int ewah_iterator_next(eword_t *next, struct ewah_iterator *it);
void ewah_or(
struct ewah_bitmap *ewah_i,
struct ewah_bitmap *ewah_j,
struct ewah_bitmap *out);
void ewah_and_not(
struct ewah_bitmap *ewah_i,
struct ewah_bitmap *ewah_j,
struct ewah_bitmap *out);
void ewah_xor(
struct ewah_bitmap *ewah_i,
struct ewah_bitmap *ewah_j,
struct ewah_bitmap *out);
void ewah_and(
struct ewah_bitmap *ewah_i,
struct ewah_bitmap *ewah_j,
struct ewah_bitmap *out);
size_t ewah_add_empty_words(struct ewah_bitmap *self, int v, size_t number);
void ewah_add_dirty_words(
struct ewah_bitmap *self, const eword_t *buffer, size_t number, int negate);
size_t ewah_add(struct ewah_bitmap *self, eword_t word);
struct bitmap ;
struct bitmap *bitmap_new(void);
void bitmap_set(struct bitmap *self, size_t pos);
void bitmap_clear(struct bitmap *self, size_t pos);
int bitmap_get(struct bitmap *self, size_t pos);
void bitmap_reset(struct bitmap *self);
void bitmap_free(struct bitmap *self);
int bitmap_equals(struct bitmap *self, struct bitmap *other);
int bitmap_is_subset(struct bitmap *self, struct bitmap *super);
struct ewah_bitmap * bitmap_to_ewah(struct bitmap *bitmap);
struct bitmap *ewah_to_bitmap(struct ewah_bitmap *ewah);
void bitmap_and_not(struct bitmap *self, struct bitmap *other);
void bitmap_or_ewah(struct bitmap *self, struct ewah_bitmap *other);
void bitmap_or(struct bitmap *self, const struct bitmap *other);
void bitmap_each_bit(struct bitmap *self, ewah_callback callback, void *data);
size_t bitmap_popcount(struct bitmap *self);
