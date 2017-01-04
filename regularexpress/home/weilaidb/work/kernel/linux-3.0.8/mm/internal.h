#define __MM_INTERNAL_H
void free_pgtables(struct mmu_gather *tlb, struct vm_area_struct *start_vma,
unsigned long floor, unsigned long ceiling);
static inline void set_page_count(struct page *page, int v)
static inline void set_page_refcounted(struct page *page)
static inline void __put_page(struct page *page)
extern unsigned long highest_memmap_pfn;
extern int isolate_lru_page(struct page *page);
extern void putback_lru_page(struct page *page);
extern void __free_pages_bootmem(struct page *page, unsigned int order);
extern void prep_compound_page(struct page *page, unsigned long order);
extern bool is_free_buddy_page(struct page *page);
static inline unsigned long page_order(struct page *page)
void __vma_link_list(struct mm_struct *mm, struct vm_area_struct *vma,
struct vm_area_struct *prev, struct rb_node *rb_parent);
extern long mlock_vma_pages_range(struct vm_area_struct *vma,
unsigned long start, unsigned long end);
extern void munlock_vma_pages_range(struct vm_area_struct *vma,
unsigned long start, unsigned long end);
static inline void munlock_vma_pages_all(struct vm_area_struct *vma)
static inline int is_mlocked_vma(struct vm_area_struct *vma, struct page *page)
extern void mlock_vma_page(struct page *page);
extern void munlock_vma_page(struct page *page);
extern void __clear_page_mlock(struct page *page);
static inline void clear_page_mlock(struct page *page)
static inline void mlock_migrate_page(struct page *newpage, struct page *page)
extern unsigned long vma_address(struct page *page,
struct vm_area_struct *vma);
static inline int is_mlocked_vma(struct vm_area_struct *v, struct page *p)
static inline void clear_page_mlock(struct page *page)
static inline void mlock_vma_page(struct page *page)
static inline void mlock_migrate_page(struct page *new, struct page *old)
static inline struct page *mem_map_offset(struct page *base, int offset)
static inline struct page *mem_map_next(struct page *iter,
struct page *base, int offset)
#define __paginginit __meminit
#define __paginginit __init
enum mminit_level ;
extern int mminit_loglevel;
#define mminit_dprintk(level, prefix, fmt, arg...) \
do  while (0)
extern void mminit_verify_pageflags_layout(void);
extern void mminit_verify_page_links(struct page *page,
enum zone_type zone, unsigned long nid, unsigned long pfn);
extern void mminit_verify_zonelist(void);
static inline void mminit_dprintk(enum mminit_level level,
const char *prefix, const char *fmt, ...)
static inline void mminit_verify_pageflags_layout(void)
static inline void mminit_verify_page_links(struct page *page,
enum zone_type zone, unsigned long nid, unsigned long pfn)
static inline void mminit_verify_zonelist(void)
#if defined(CONFIG_SPARSEMEM)
extern void mminit_validate_memmodel_limits(unsigned long *start_pfn,
unsigned long *end_pfn);
static inline void mminit_validate_memmodel_limits(unsigned long *start_pfn,
unsigned long *end_pfn)
#define ZONE_RECLAIM_NOSCAN	-2
#define ZONE_RECLAIM_FULL	-1
#define ZONE_RECLAIM_SOME	0
#define ZONE_RECLAIM_SUCCESS	1
extern int hwpoison_filter(struct page *p);
extern u32 hwpoison_filter_dev_major;
extern u32 hwpoison_filter_dev_minor;
extern u64 hwpoison_filter_flags_mask;
extern u64 hwpoison_filter_flags_value;
extern u64 hwpoison_filter_memcg;
extern u32 hwpoison_filter_enable;
