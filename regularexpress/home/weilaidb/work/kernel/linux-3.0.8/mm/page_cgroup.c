static void __meminit init_page_cgroup(struct page_cgroup *pc, unsigned long id)
static unsigned long total_usage;
#if !defined(CONFIG_SPARSEMEM)
void __meminit pgdat_page_cgroup_init(struct pglist_data *pgdat)
struct page_cgroup *lookup_page_cgroup(struct page *page)
struct page *lookup_cgroup_page(struct page_cgroup *pc)
static int __init alloc_node_page_cgroup(int nid)
void __init page_cgroup_init_flatmem(void)
struct page_cgroup *lookup_page_cgroup(struct page *page)
struct page *lookup_cgroup_page(struct page_cgroup *pc)
static void *__meminit alloc_page_cgroup(size_t size, int nid)
static void free_page_cgroup(void *addr)
static int __meminit init_section_page_cgroup(unsigned long pfn, int nid)
void __free_page_cgroup(unsigned long pfn)
int __meminit online_page_cgroup(unsigned long start_pfn,
unsigned long nr_pages,
int nid)
int __meminit offline_page_cgroup(unsigned long start_pfn,
unsigned long nr_pages, int nid)
static int __meminit page_cgroup_callback(struct notifier_block *self,
unsigned long action, void *arg)
void __init page_cgroup_init(void)
void __meminit pgdat_page_cgroup_init(struct pglist_data *pgdat)
static DEFINE_MUTEX(swap_cgroup_mutex);
struct swap_cgroup_ctrl ;
struct swap_cgroup_ctrl swap_cgroup_ctrl[MAX_SWAPFILES];
struct swap_cgroup ;
#define SC_PER_PAGE	(PAGE_SIZE/sizeof(struct swap_cgroup))
#define SC_POS_MASK	(SC_PER_PAGE - 1)
static int swap_cgroup_prepare(int type)
unsigned short swap_cgroup_cmpxchg(swp_entry_t ent,
unsigned short old, unsigned short new)
unsigned short swap_cgroup_record(swp_entry_t ent, unsigned short id)
unsigned short lookup_swap_cgroup(swp_entry_t ent)
int swap_cgroup_swapon(int type, unsigned long max_pages)
void swap_cgroup_swapoff(int type)
