void *_mmx_memcpy(void *to, const void *from, size_t len)
EXPORT_SYMBOL(_mmx_memcpy);
static void fast_clear_page(void *page)
static void fast_copy_page(void *to, void *from)
static void fast_clear_page(void *page)
static void fast_copy_page(void *to, void *from)
static void slow_zero_page(void *page)
void mmx_clear_page(void *page)
EXPORT_SYMBOL(mmx_clear_page);
static void slow_copy_page(void *to, void *from)
void mmx_copy_page(void *to, void *from)
EXPORT_SYMBOL(mmx_copy_page);
