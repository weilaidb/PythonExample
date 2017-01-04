#define _LINUX_HIGHMEM_H
static inline void flush_anon_page(struct vm_area_struct *vma, struct page *page, unsigned long vmaddr)
static inline void flush_kernel_dcache_page(struct page *page)
static inline void flush_kernel_vmap_range(void *vaddr, int size)
static inline void invalidate_kernel_vmap_range(void *vaddr, int size)
unsigned int nr_free_highpages(void);
extern unsigned long totalhigh_pages;
void kmap_flush_unused(void);
static inline unsigned int nr_free_highpages(void)
#define totalhigh_pages 0UL
static inline void *kmap(struct page *page)
static inline void kunmap(struct page *page)
static inline void *__kmap_atomic(struct page *page)
#define kmap_atomic_prot(page, prot)	__kmap_atomic(page)
static inline void __kunmap_atomic(void *addr)
#define kmap_atomic_pfn(pfn)	kmap_atomic(pfn_to_page(pfn))
#define kmap_atomic_to_page(ptr)	virt_to_page(ptr)
#define kmap_flush_unused()	do  while(0)
#if defined(CONFIG_HIGHMEM) || defined(CONFIG_X86_32)
DECLARE_PER_CPU(int, __kmap_atomic_idx);
static inline int kmap_atomic_idx_push(void)
static inline int kmap_atomic_idx(void)
static inline void kmap_atomic_idx_pop(void)
#define kmap_atomic(page, args...) __kmap_atomic(page)
#define kunmap_atomic(addr, args...)				\
do  while (0)
static inline void clear_user_highpage(struct page *page, unsigned long vaddr)
static inline struct page *
__alloc_zeroed_user_highpage(gfp_t movableflags,
struct vm_area_struct *vma,
unsigned long vaddr)
static inline struct page *
alloc_zeroed_user_highpage_movable(struct vm_area_struct *vma,
unsigned long vaddr)
static inline void clear_highpage(struct page *page)
static inline void zero_user_segments(struct page *page,
unsigned start1, unsigned end1,
unsigned start2, unsigned end2)
static inline void zero_user_segment(struct page *page,
unsigned start, unsigned end)
static inline void zero_user(struct page *page,
unsigned start, unsigned size)
static inline void __deprecated memclear_highpage_flush(struct page *page,
unsigned int offset, unsigned int size)
static inline void copy_user_highpage(struct page *to, struct page *from,
unsigned long vaddr, struct vm_area_struct *vma)
static inline void copy_highpage(struct page *to, struct page *from)
