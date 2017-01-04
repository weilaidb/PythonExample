#define _LINUX_SWAP_H
struct notifier_block;
struct bio;
#define SWAP_FLAG_PREFER	0x8000
#define SWAP_FLAG_PRIO_MASK	0x7fff
#define SWAP_FLAG_PRIO_SHIFT	0
#define SWAP_FLAG_DISCARD	0x10000
static inline int current_is_kswapd(void)
#define MAX_SWAPFILES_SHIFT	5
#define SWP_MIGRATION_NUM 2
#define SWP_MIGRATION_READ	(MAX_SWAPFILES + SWP_HWPOISON_NUM)
#define SWP_MIGRATION_WRITE	(MAX_SWAPFILES + SWP_HWPOISON_NUM + 1)
#define SWP_MIGRATION_NUM 0
#define SWP_HWPOISON_NUM 1
#define SWP_HWPOISON		MAX_SWAPFILES
#define SWP_HWPOISON_NUM 0
#define MAX_SWAPFILES \
((1 << MAX_SWAPFILES_SHIFT) - SWP_MIGRATION_NUM - SWP_HWPOISON_NUM)
union swap_header ;
typedef struct  swp_entry_t;
struct reclaim_state ;
struct address_space;
struct sysinfo;
struct writeback_control;
struct zone;
struct swap_extent ;
#define __swapoffset(x) ((unsigned long)&((union swap_header *)0)->x)
#define MAX_SWAP_BADPAGES \
((__swapoffset(magic.magic) - __swapoffset(info.badpages)) / sizeof(int))
enum ;
#define SWAP_CLUSTER_MAX 32
#define COMPACT_CLUSTER_MAX SWAP_CLUSTER_MAX
#define KSWAPD_ZONE_BALANCE_GAP_RATIO 100
#define SWAP_MAP_MAX	0x3e
#define SWAP_MAP_BAD	0x3f
#define SWAP_HAS_CACHE	0x40
#define SWAP_CONT_MAX	0x7f
#define COUNT_CONTINUED	0x80
#define SWAP_MAP_SHMEM	0xbf
struct swap_info_struct ;
struct swap_list_t ;
#define vm_swap_full() (nr_swap_pages*2 < total_swap_pages)
extern unsigned long totalram_pages;
extern unsigned long totalreserve_pages;
extern unsigned int nr_free_buffer_pages(void);
extern unsigned int nr_free_pagecache_pages(void);
#define nr_free_pages() global_page_state(NR_FREE_PAGES)
extern void __lru_cache_add(struct page *, enum lru_list lru);
extern void lru_cache_add_lru(struct page *, enum lru_list lru);
extern void lru_add_page_tail(struct zone* zone,
struct page *page, struct page *page_tail);
extern void activate_page(struct page *);
extern void mark_page_accessed(struct page *);
extern void lru_add_drain(void);
extern int lru_add_drain_all(void);
extern void rotate_reclaimable_page(struct page *page);
extern void deactivate_page(struct page *page);
extern void swap_setup(void);
extern void add_page_to_unevictable_list(struct page *page);
static inline void lru_cache_add_anon(struct page *page)
static inline void lru_cache_add_file(struct page *page)
#define ISOLATE_INACTIVE 0
#define ISOLATE_ACTIVE 1
#define ISOLATE_BOTH 2
extern unsigned long try_to_free_pages(struct zonelist *zonelist, int order,
gfp_t gfp_mask, nodemask_t *mask);
extern unsigned long try_to_free_mem_cgroup_pages(struct mem_cgroup *mem,
gfp_t gfp_mask, bool noswap,
unsigned int swappiness);
extern unsigned long mem_cgroup_shrink_node_zone(struct mem_cgroup *mem,
gfp_t gfp_mask, bool noswap,
unsigned int swappiness,
struct zone *zone,
unsigned long *nr_scanned);
extern int __isolate_lru_page(struct page *page, int mode, int file);
extern unsigned long shrink_all_memory(unsigned long nr_pages);
extern int vm_swappiness;
extern int remove_mapping(struct address_space *mapping, struct page *page);
extern long vm_total_pages;
extern int zone_reclaim_mode;
extern int sysctl_min_unmapped_ratio;
extern int sysctl_min_slab_ratio;
extern int zone_reclaim(struct zone *, gfp_t, unsigned int);
#define zone_reclaim_mode 0
static inline int zone_reclaim(struct zone *z, gfp_t mask, unsigned int order)
extern int page_evictable(struct page *page, struct vm_area_struct *vma);
extern void scan_mapping_unevictable_pages(struct address_space *);
extern unsigned long scan_unevictable_pages;
extern int scan_unevictable_handler(struct ctl_table *, int,
void __user *, size_t *, loff_t *);
extern int scan_unevictable_register_node(struct node *node);
extern void scan_unevictable_unregister_node(struct node *node);
static inline int scan_unevictable_register_node(struct node *node)
static inline void scan_unevictable_unregister_node(struct node *node)
extern int kswapd_run(int nid);
extern void kswapd_stop(int nid);
extern int swap_readpage(struct page *);
extern int swap_writepage(struct page *page, struct writeback_control *wbc);
extern void end_swap_bio_read(struct bio *bio, int err);
extern struct address_space swapper_space;
#define total_swapcache_pages  swapper_space.nrpages
extern void show_swap_cache_info(void);
extern int add_to_swap(struct page *);
extern int add_to_swap_cache(struct page *, swp_entry_t, gfp_t);
extern void __delete_from_swap_cache(struct page *);
extern void delete_from_swap_cache(struct page *);
extern void free_page_and_swap_cache(struct page *);
extern void free_pages_and_swap_cache(struct page **, int);
extern struct page *lookup_swap_cache(swp_entry_t);
extern struct page *read_swap_cache_async(swp_entry_t, gfp_t,
struct vm_area_struct *vma, unsigned long addr);
extern struct page *swapin_readahead(swp_entry_t, gfp_t,
struct vm_area_struct *vma, unsigned long addr);
extern long nr_swap_pages;
extern long total_swap_pages;
extern void si_swapinfo(struct sysinfo *);
extern swp_entry_t get_swap_page(void);
extern swp_entry_t get_swap_page_of_type(int);
extern int valid_swaphandles(swp_entry_t, unsigned long *);
extern int add_swap_count_continuation(swp_entry_t, gfp_t);
extern void swap_shmem_alloc(swp_entry_t);
extern int swap_duplicate(swp_entry_t);
extern int swapcache_prepare(swp_entry_t);
extern void swap_free(swp_entry_t);
extern void swapcache_free(swp_entry_t, struct page *page);
extern int free_swap_and_cache(swp_entry_t);
extern int swap_type_of(dev_t, sector_t, struct block_device **);
extern unsigned int count_swap_pages(int, int);
extern sector_t map_swap_page(struct page *, struct block_device **);
extern sector_t swapdev_block(int, pgoff_t);
extern int reuse_swap_page(struct page *);
extern int try_to_free_swap(struct page *);
struct backing_dev_info;
extern struct mm_struct *swap_token_mm;
extern void grab_swap_token(struct mm_struct *);
extern void __put_swap_token(struct mm_struct *);
extern void disable_swap_token(struct mem_cgroup *memcg);
static inline int has_swap_token(struct mm_struct *mm)
static inline void put_swap_token(struct mm_struct *mm)
extern void
mem_cgroup_uncharge_swapcache(struct page *page, swp_entry_t ent, bool swapout);
extern int mem_cgroup_count_swap_user(swp_entry_t ent, struct page **pagep);
static inline void
mem_cgroup_uncharge_swapcache(struct page *page, swp_entry_t ent, bool swapout)
extern void mem_cgroup_uncharge_swap(swp_entry_t ent);
static inline void mem_cgroup_uncharge_swap(swp_entry_t ent)
#define nr_swap_pages				0L
#define total_swap_pages			0L
#define total_swapcache_pages			0UL
#define si_swapinfo(val) \
do  while (0)
#define free_page_and_swap_cache(page) \
page_cache_release(page)
#define free_pages_and_swap_cache(pages, nr) \
release_pages((pages), (nr), 0);
static inline void show_swap_cache_info(void)
#define free_swap_and_cache(swp)	is_migration_entry(swp)
#define swapcache_prepare(swp)		is_migration_entry(swp)
static inline int add_swap_count_continuation(swp_entry_t swp, gfp_t gfp_mask)
static inline void swap_shmem_alloc(swp_entry_t swp)
static inline int swap_duplicate(swp_entry_t swp)
static inline void swap_free(swp_entry_t swp)
static inline void swapcache_free(swp_entry_t swp, struct page *page)
static inline struct page *swapin_readahead(swp_entry_t swp, gfp_t gfp_mask,
struct vm_area_struct *vma, unsigned long addr)
static inline int swap_writepage(struct page *p, struct writeback_control *wbc)
static inline struct page *lookup_swap_cache(swp_entry_t swp)
static inline int add_to_swap(struct page *page)
static inline int add_to_swap_cache(struct page *page, swp_entry_t entry,
gfp_t gfp_mask)
static inline void __delete_from_swap_cache(struct page *page)
static inline void delete_from_swap_cache(struct page *page)
#define reuse_swap_page(page)	(page_mapcount(page) == 1)
static inline int try_to_free_swap(struct page *page)
static inline swp_entry_t get_swap_page(void)
static inline void put_swap_token(struct mm_struct *mm)
static inline void grab_swap_token(struct mm_struct *mm)
static inline int has_swap_token(struct mm_struct *mm)
static inline void disable_swap_token(struct mem_cgroup *memcg)
static inline void
mem_cgroup_uncharge_swapcache(struct page *page, swp_entry_t ent)
static inline int
mem_cgroup_count_swap_user(swp_entry_t ent, struct page **pagep)
