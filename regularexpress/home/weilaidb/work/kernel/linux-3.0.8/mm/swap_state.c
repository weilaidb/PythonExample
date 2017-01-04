static const struct address_space_operations swap_aops = ;
static struct backing_dev_info swap_backing_dev_info = ;
struct address_space swapper_space = ;
#define INC_CACHE_INFO(x)	do  while (0)
static struct  swap_cache_info;
void show_swap_cache_info(void)
static int __add_to_swap_cache(struct page *page, swp_entry_t entry)
int add_to_swap_cache(struct page *page, swp_entry_t entry, gfp_t gfp_mask)
void __delete_from_swap_cache(struct page *page)
int add_to_swap(struct page *page)
void delete_from_swap_cache(struct page *page)
static inline void free_swap_cache(struct page *page)
void free_page_and_swap_cache(struct page *page)
void free_pages_and_swap_cache(struct page **pages, int nr)
struct page * lookup_swap_cache(swp_entry_t entry)
struct page *read_swap_cache_async(swp_entry_t entry, gfp_t gfp_mask,
struct vm_area_struct *vma, unsigned long addr)
struct page *swapin_readahead(swp_entry_t entry, gfp_t gfp_mask,
struct vm_area_struct *vma, unsigned long addr)
