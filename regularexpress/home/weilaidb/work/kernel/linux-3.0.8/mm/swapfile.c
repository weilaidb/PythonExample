static bool swap_count_continued(struct swap_info_struct *, pgoff_t,
unsigned char);
static void free_swap_count_continuations(struct swap_info_struct *);
static sector_t map_swap_entry(swp_entry_t, struct block_device**);
static DEFINE_SPINLOCK(swap_lock);
static unsigned int nr_swapfiles;
long nr_swap_pages;
long total_swap_pages;
static int least_priority;
static const char Bad_file[] = "Bad swap file entry ";
static const char Unused_file[] = "Unused swap file entry ";
static const char Bad_offset[] = "Bad swap offset entry ";
static const char Unused_offset[] = "Unused swap offset entry ";
static struct swap_list_t swap_list = ;
static struct swap_info_struct *swap_info[MAX_SWAPFILES];
static DEFINE_MUTEX(swapon_mutex);
static DECLARE_WAIT_QUEUE_HEAD(proc_poll_wait);
static atomic_t proc_poll_event = ATOMIC_INIT(0);
static inline unsigned char swap_count(unsigned char ent)
static int
__try_to_reclaim_swap(struct swap_info_struct *si, unsigned long offset)
static int discard_swap(struct swap_info_struct *si)
static void discard_swap_cluster(struct swap_info_struct *si,
pgoff_t start_page, pgoff_t nr_pages)
static int wait_for_discard(void *word)
#define SWAPFILE_CLUSTER	256
#define LATENCY_LIMIT		256
static unsigned long scan_swap_map(struct swap_info_struct *si,
unsigned char usage)
swp_entry_t get_swap_page(void)
swp_entry_t get_swap_page_of_type(int type)
static struct swap_info_struct *swap_info_get(swp_entry_t entry)
static unsigned char swap_entry_free(struct swap_info_struct *p,
swp_entry_t entry, unsigned char usage)
void swap_free(swp_entry_t entry)
void swapcache_free(swp_entry_t entry, struct page *page)
static inline int page_swapcount(struct page *page)
int reuse_swap_page(struct page *page)
int try_to_free_swap(struct page *page)
int free_swap_and_cache(swp_entry_t entry)
int mem_cgroup_count_swap_user(swp_entry_t ent, struct page **pagep)
int swap_type_of(dev_t device, sector_t offset, struct block_device **bdev_p)
sector_t swapdev_block(int type, pgoff_t offset)
unsigned int count_swap_pages(int type, int free)
static int unuse_pte(struct vm_area_struct *vma, pmd_t *pmd,
unsigned long addr, swp_entry_t entry, struct page *page)
static int unuse_pte_range(struct vm_area_struct *vma, pmd_t *pmd,
unsigned long addr, unsigned long end,
swp_entry_t entry, struct page *page)
static inline int unuse_pmd_range(struct vm_area_struct *vma, pud_t *pud,
unsigned long addr, unsigned long end,
swp_entry_t entry, struct page *page)
static inline int unuse_pud_range(struct vm_area_struct *vma, pgd_t *pgd,
unsigned long addr, unsigned long end,
swp_entry_t entry, struct page *page)
static int unuse_vma(struct vm_area_struct *vma,
swp_entry_t entry, struct page *page)
static int unuse_mm(struct mm_struct *mm,
swp_entry_t entry, struct page *page)
static unsigned int find_next_to_unuse(struct swap_info_struct *si,
unsigned int prev)
static int try_to_unuse(unsigned int type)
static void drain_mmlist(void)
static sector_t map_swap_entry(swp_entry_t entry, struct block_device **bdev)
sector_t map_swap_page(struct page *page, struct block_device **bdev)
static void destroy_swap_extents(struct swap_info_struct *sis)
static int
add_swap_extent(struct swap_info_struct *sis, unsigned long start_page,
unsigned long nr_pages, sector_t start_block)
static int setup_swap_extents(struct swap_info_struct *sis, sector_t *span)
static void enable_swap_info(struct swap_info_struct *p, int prio,
unsigned char *swap_map)
SYSCALL_DEFINE1(swapoff, const char __user *, specialfile)
struct proc_swaps ;
static unsigned swaps_poll(struct file *file, poll_table *wait)
static void *swap_start(struct seq_file *swap, loff_t *pos)
static void *swap_next(struct seq_file *swap, void *v, loff_t *pos)
static void swap_stop(struct seq_file *swap, void *v)
static int swap_show(struct seq_file *swap, void *v)
static const struct seq_operations swaps_op = ;
static int swaps_open(struct inode *inode, struct file *file)
static const struct file_operations proc_swaps_operations = ;
static int __init procswaps_init(void)
__initcall(procswaps_init);
static int __init max_swapfiles_check(void)
late_initcall(max_swapfiles_check);
static struct swap_info_struct *alloc_swap_info(void)
static int claim_swapfile(struct swap_info_struct *p, struct inode *inode)
static unsigned long read_swap_header(struct swap_info_struct *p,
union swap_header *swap_header,
struct inode *inode)
static int setup_swap_map_and_extents(struct swap_info_struct *p,
union swap_header *swap_header,
unsigned char *swap_map,
unsigned long maxpages,
sector_t *span)
SYSCALL_DEFINE2(swapon, const char __user *, specialfile, int, swap_flags)
void si_swapinfo(struct sysinfo *val)
static int __swap_duplicate(swp_entry_t entry, unsigned char usage)
void swap_shmem_alloc(swp_entry_t entry)
int swap_duplicate(swp_entry_t entry)
int swapcache_prepare(swp_entry_t entry)
int valid_swaphandles(swp_entry_t entry, unsigned long *offset)
int add_swap_count_continuation(swp_entry_t entry, gfp_t gfp_mask)
static bool swap_count_continued(struct swap_info_struct *si,
pgoff_t offset, unsigned char count)
static void free_swap_count_continuations(struct swap_info_struct *si)
