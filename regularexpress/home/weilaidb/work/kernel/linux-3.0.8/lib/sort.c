static void u32_swap(void *a, void *b, int size)
static void generic_swap(void *a, void *b, int size)
void sort(void *base, size_t num, size_t size,
int (*cmp_func)(const void *, const void *),
void (*swap_func)(void *, void *, int size))
EXPORT_SYMBOL(sort);
