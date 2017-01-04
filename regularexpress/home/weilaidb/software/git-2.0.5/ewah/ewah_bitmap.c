static inline size_t min_size(size_t a, size_t b)
static inline size_t max_size(size_t a, size_t b)
static inline void buffer_grow(struct ewah_bitmap *self, size_t new_size)
static inline void buffer_push(struct ewah_bitmap *self, eword_t value)
static void buffer_push_rlw(struct ewah_bitmap *self, eword_t value)
static size_t add_empty_words(struct ewah_bitmap *self, int v, size_t number)
size_t ewah_add_empty_words(struct ewah_bitmap *self, int v, size_t number)
static size_t add_literal(struct ewah_bitmap *self, eword_t new_data)
void ewah_add_dirty_words(
struct ewah_bitmap *self, const eword_t *buffer,
size_t number, int negate)
static size_t add_empty_word(struct ewah_bitmap *self, int v)
size_t ewah_add(struct ewah_bitmap *self, eword_t word)
void ewah_set(struct ewah_bitmap *self, size_t i)
void ewah_each_bit(struct ewah_bitmap *self, void (*callback)(size_t, void*), void *payload)
struct ewah_bitmap *ewah_new(void)
void ewah_clear(struct ewah_bitmap *self)
void ewah_free(struct ewah_bitmap *self)
static void read_new_rlw(struct ewah_iterator *it)
int ewah_iterator_next(eword_t *next, struct ewah_iterator *it)
void ewah_iterator_init(struct ewah_iterator *it, struct ewah_bitmap *parent)
void ewah_not(struct ewah_bitmap *self)
void ewah_xor(
struct ewah_bitmap *ewah_i,
struct ewah_bitmap *ewah_j,
struct ewah_bitmap *out)
void ewah_and(
struct ewah_bitmap *ewah_i,
struct ewah_bitmap *ewah_j,
struct ewah_bitmap *out)
void ewah_and_not(
struct ewah_bitmap *ewah_i,
struct ewah_bitmap *ewah_j,
struct ewah_bitmap *out)
void ewah_or(
struct ewah_bitmap *ewah_i,
struct ewah_bitmap *ewah_j,
struct ewah_bitmap *out)
#define BITMAP_POOL_MAX 16
static struct ewah_bitmap *bitmap_pool[BITMAP_POOL_MAX];
static size_t bitmap_pool_size;
struct ewah_bitmap *ewah_pool_new(void)
void ewah_pool_free(struct ewah_bitmap *self)
uint32_t ewah_checksum(struct ewah_bitmap *self)
