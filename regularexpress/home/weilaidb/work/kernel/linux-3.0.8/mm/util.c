#define CREATE_TRACE_POINTS
char *kstrdup(const char *s, gfp_t gfp)
EXPORT_SYMBOL(kstrdup);
char *kstrndup(const char *s, size_t max, gfp_t gfp)
EXPORT_SYMBOL(kstrndup);
void *kmemdup(const void *src, size_t len, gfp_t gfp)
EXPORT_SYMBOL(kmemdup);
void *memdup_user(const void __user *src, size_t len)
EXPORT_SYMBOL(memdup_user);
void *__krealloc(const void *p, size_t new_size, gfp_t flags)
EXPORT_SYMBOL(__krealloc);
void *krealloc(const void *p, size_t new_size, gfp_t flags)
EXPORT_SYMBOL(krealloc);
void kzfree(const void *p)
EXPORT_SYMBOL(kzfree);
char *strndup_user(const char __user *s, long n)
EXPORT_SYMBOL(strndup_user);
void __vma_link_list(struct mm_struct *mm, struct vm_area_struct *vma,
struct vm_area_struct *prev, struct rb_node *rb_parent)
#if defined(CONFIG_MMU) && !defined(HAVE_ARCH_PICK_MMAP_LAYOUT)
void arch_pick_mmap_layout(struct mm_struct *mm)
int __attribute__((weak)) __get_user_pages_fast(unsigned long start,
int nr_pages, int write, struct page **pages)
EXPORT_SYMBOL_GPL(__get_user_pages_fast);
int __attribute__((weak)) get_user_pages_fast(unsigned long start,
int nr_pages, int write, struct page **pages)
EXPORT_SYMBOL_GPL(get_user_pages_fast);
EXPORT_TRACEPOINT_SYMBOL(kmalloc);
EXPORT_TRACEPOINT_SYMBOL(kmem_cache_alloc);
EXPORT_TRACEPOINT_SYMBOL(kmalloc_node);
EXPORT_TRACEPOINT_SYMBOL(kmem_cache_alloc_node);
EXPORT_TRACEPOINT_SYMBOL(kfree);
EXPORT_TRACEPOINT_SYMBOL(kmem_cache_free);
