void *kmemcheck_shadow_lookup(unsigned long address)
static void mark_shadow(void *address, unsigned int n,
enum kmemcheck_shadow status)
void kmemcheck_mark_unallocated(void *address, unsigned int n)
void kmemcheck_mark_uninitialized(void *address, unsigned int n)
void kmemcheck_mark_initialized(void *address, unsigned int n)
EXPORT_SYMBOL_GPL(kmemcheck_mark_initialized);
void kmemcheck_mark_freed(void *address, unsigned int n)
void kmemcheck_mark_unallocated_pages(struct page *p, unsigned int n)
void kmemcheck_mark_uninitialized_pages(struct page *p, unsigned int n)
void kmemcheck_mark_initialized_pages(struct page *p, unsigned int n)
enum kmemcheck_shadow kmemcheck_shadow_test(void *shadow, unsigned int size)
enum kmemcheck_shadow kmemcheck_shadow_test_all(void *shadow, unsigned int size)
void kmemcheck_shadow_set(void *shadow, unsigned int size)
