#define _FLEX_ARRAY_H
#define FLEX_ARRAY_PART_SIZE PAGE_SIZE
#define FLEX_ARRAY_BASE_SIZE PAGE_SIZE
struct flex_array_part;
struct flex_array ;
#define FLEX_ARRAY_BASE_BYTES_LEFT					\
(FLEX_ARRAY_BASE_SIZE - offsetof(struct flex_array, parts))
#define FLEX_ARRAY_NR_BASE_PTRS						\
(FLEX_ARRAY_BASE_BYTES_LEFT / sizeof(struct flex_array_part *))
#define FLEX_ARRAY_ELEMENTS_PER_PART(size)				\
(FLEX_ARRAY_PART_SIZE / size)
#define DEFINE_FLEX_ARRAY(__arrayname, __element_size, __total)		\
struct flex_array __arrayname = ;								\
static inline void __arrayname##_invalid_parameter(void)	\
struct flex_array *flex_array_alloc(int element_size, unsigned int total,
gfp_t flags);
int flex_array_prealloc(struct flex_array *fa, unsigned int start,
unsigned int nr_elements, gfp_t flags);
void flex_array_free(struct flex_array *fa);
void flex_array_free_parts(struct flex_array *fa);
int flex_array_put(struct flex_array *fa, unsigned int element_nr, void *src,
gfp_t flags);
int flex_array_clear(struct flex_array *fa, unsigned int element_nr);
void *flex_array_get(struct flex_array *fa, unsigned int element_nr);
int flex_array_shrink(struct flex_array *fa);
#define flex_array_put_ptr(fa, nr, src, gfp) \
flex_array_put(fa, nr, (void *)&(src), gfp)
void *flex_array_get_ptr(struct flex_array *fa, unsigned int element_nr);
