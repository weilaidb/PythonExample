#define _LINUX_PAGEMAP_H
enum mapping_flags ;
static inline void mapping_set_error(struct address_space *mapping, int error)
static inline void mapping_set_unevictable(struct address_space *mapping)
static inline void mapping_clear_unevictable(struct address_space *mapping)
static inline int mapping_unevictable(struct address_space *mapping)
static inline gfp_t mapping_gfp_mask(struct address_space * mapping)
static inline void mapping_set_gfp_mask(struct address_space *m, gfp_t mask)
#define PAGE_CACHE_SHIFT	PAGE_SHIFT
#define PAGE_CACHE_SIZE		PAGE_SIZE
#define PAGE_CACHE_MASK		PAGE_MASK
#define PAGE_CACHE_ALIGN(addr)	(((addr)+PAGE_CACHE_SIZE-1)&PAGE_CACHE_MASK)
#define page_cache_get(page)		get_page(page)
#define page_cache_release(page)	put_page(page)
void release_pages(struct page **pages, int nr, int cold);
static inline int page_cache_get_speculative(struct page *page)
static inline int page_cache_add_speculative(struct page *page, int count)
static inline int page_freeze_refs(struct page *page, int count)
static inline void page_unfreeze_refs(struct page *page, int count)
extern struct page *__page_cache_alloc(gfp_t gfp);
static inline struct page *__page_cache_alloc(gfp_t gfp)
static inline struct page *page_cache_alloc(struct address_space *x)
static inline struct page *page_cache_alloc_cold(struct address_space *x)
static inline struct page *page_cache_alloc_readahead(struct address_space *x)
typedef int filler_t(void *, struct page *);
extern struct page * find_get_page(struct address_space *mapping,
pgoff_t index);
extern struct page * find_lock_page(struct address_space *mapping,
pgoff_t index);
extern struct page * find_or_create_page(struct address_space *mapping,
pgoff_t index, gfp_t gfp_mask);
unsigned find_get_pages(struct address_space *mapping, pgoff_t start,
unsigned int nr_pages, struct page **pages);
unsigned find_get_pages_contig(struct address_space *mapping, pgoff_t start,
unsigned int nr_pages, struct page **pages);
unsigned find_get_pages_tag(struct address_space *mapping, pgoff_t *index,
int tag, unsigned int nr_pages, struct page **pages);
struct page *grab_cache_page_write_begin(struct address_space *mapping,
pgoff_t index, unsigned flags);
static inline struct page *grab_cache_page(struct address_space *mapping,
pgoff_t index)
extern struct page * grab_cache_page_nowait(struct address_space *mapping,
pgoff_t index);
extern struct page * read_cache_page_async(struct address_space *mapping,
pgoff_t index, filler_t *filler,
void *data);
extern struct page * read_cache_page(struct address_space *mapping,
pgoff_t index, filler_t *filler,
void *data);
extern struct page * read_cache_page_gfp(struct address_space *mapping,
pgoff_t index, gfp_t gfp_mask);
extern int read_cache_pages(struct address_space *mapping,
struct list_head *pages, filler_t *filler, void *data);
static inline struct page *read_mapping_page_async(
struct address_space *mapping,
pgoff_t index, void *data)
static inline struct page *read_mapping_page(struct address_space *mapping,
pgoff_t index, void *data)
static inline loff_t page_offset(struct page *page)
extern pgoff_t linear_hugepage_index(struct vm_area_struct *vma,
unsigned long address);
static inline pgoff_t linear_page_index(struct vm_area_struct *vma,
unsigned long address)
extern void __lock_page(struct page *page);
extern int __lock_page_killable(struct page *page);
extern int __lock_page_or_retry(struct page *page, struct mm_struct *mm,
unsigned int flags);
extern void unlock_page(struct page *page);
static inline void __set_page_locked(struct page *page)
static inline void __clear_page_locked(struct page *page)
static inline int trylock_page(struct page *page)
static inline void lock_page(struct page *page)
static inline int lock_page_killable(struct page *page)
static inline int lock_page_or_retry(struct page *page, struct mm_struct *mm,
unsigned int flags)
extern void wait_on_page_bit(struct page *page, int bit_nr);
extern int wait_on_page_bit_killable(struct page *page, int bit_nr);
static inline int wait_on_page_locked_killable(struct page *page)
static inline void wait_on_page_locked(struct page *page)
static inline void wait_on_page_writeback(struct page *page)
extern void end_page_writeback(struct page *page);
extern void add_page_wait_queue(struct page *page, wait_queue_t *waiter);
static inline int fault_in_pages_writeable(char __user *uaddr, int size)
static inline int fault_in_pages_readable(const char __user *uaddr, int size)
int add_to_page_cache_locked(struct page *page, struct address_space *mapping,
pgoff_t index, gfp_t gfp_mask);
int add_to_page_cache_lru(struct page *page, struct address_space *mapping,
pgoff_t index, gfp_t gfp_mask);
extern void delete_from_page_cache(struct page *page);
extern void __delete_from_page_cache(struct page *page);
int replace_page_cache_page(struct page *old, struct page *new, gfp_t gfp_mask);
static inline int add_to_page_cache(struct page *page,
struct address_space *mapping, pgoff_t offset, gfp_t gfp_mask)
