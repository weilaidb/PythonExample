struct flex_array_part ;
static inline int elements_fit_in_base(struct flex_array *fa)
struct flex_array *flex_array_alloc(int element_size, unsigned int total,
gfp_t flags)
EXPORT_SYMBOL(flex_array_alloc);
static int fa_element_to_part_nr(struct flex_array *fa,
unsigned int element_nr)
void flex_array_free_parts(struct flex_array *fa)
EXPORT_SYMBOL(flex_array_free_parts);
void flex_array_free(struct flex_array *fa)
EXPORT_SYMBOL(flex_array_free);
static unsigned int index_inside_part(struct flex_array *fa,
unsigned int element_nr,
unsigned int part_nr)
static struct flex_array_part *
__fa_get_part(struct flex_array *fa, int part_nr, gfp_t flags)
int flex_array_put(struct flex_array *fa, unsigned int element_nr, void *src,
gfp_t flags)
EXPORT_SYMBOL(flex_array_put);
int flex_array_clear(struct flex_array *fa, unsigned int element_nr)
EXPORT_SYMBOL(flex_array_clear);
int flex_array_prealloc(struct flex_array *fa, unsigned int start,
unsigned int nr_elements, gfp_t flags)
EXPORT_SYMBOL(flex_array_prealloc);
void *flex_array_get(struct flex_array *fa, unsigned int element_nr)
EXPORT_SYMBOL(flex_array_get);
void *flex_array_get_ptr(struct flex_array *fa, unsigned int element_nr)
EXPORT_SYMBOL(flex_array_get_ptr);
static int part_is_free(struct flex_array_part *part)
int flex_array_shrink(struct flex_array *fa)
EXPORT_SYMBOL(flex_array_shrink);
