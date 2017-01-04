#define __LINUX_PAGE_CGROUP_H
enum ;
struct page_cgroup ;
void __meminit pgdat_page_cgroup_init(struct pglist_data *pgdat);
static inline void __init page_cgroup_init_flatmem(void)
extern void __init page_cgroup_init(void);
void __init page_cgroup_init_flatmem(void);
static inline void __init page_cgroup_init(void)
struct page_cgroup *lookup_page_cgroup(struct page *page);
struct page *lookup_cgroup_page(struct page_cgroup *pc);
#define TESTPCGFLAG(uname, lname)			\
static inline int PageCgroup##uname(struct page_cgroup *pc)	\
#define SETPCGFLAG(uname, lname)			\
static inline void SetPageCgroup##uname(struct page_cgroup *pc)\
#define CLEARPCGFLAG(uname, lname)			\
static inline void ClearPageCgroup##uname(struct page_cgroup *pc)	\
#define TESTCLEARPCGFLAG(uname, lname)			\
static inline int TestClearPageCgroup##uname(struct page_cgroup *pc)	\
TESTPCGFLAG(Cache, CACHE)
CLEARPCGFLAG(Cache, CACHE)
SETPCGFLAG(Cache, CACHE)
TESTPCGFLAG(Used, USED)
CLEARPCGFLAG(Used, USED)
SETPCGFLAG(Used, USED)
SETPCGFLAG(AcctLRU, ACCT_LRU)
CLEARPCGFLAG(AcctLRU, ACCT_LRU)
TESTPCGFLAG(AcctLRU, ACCT_LRU)
TESTCLEARPCGFLAG(AcctLRU, ACCT_LRU)
SETPCGFLAG(FileMapped, FILE_MAPPED)
CLEARPCGFLAG(FileMapped, FILE_MAPPED)
TESTPCGFLAG(FileMapped, FILE_MAPPED)
SETPCGFLAG(Migration, MIGRATION)
CLEARPCGFLAG(Migration, MIGRATION)
TESTPCGFLAG(Migration, MIGRATION)
static inline void lock_page_cgroup(struct page_cgroup *pc)
static inline void unlock_page_cgroup(struct page_cgroup *pc)
static inline void move_lock_page_cgroup(struct page_cgroup *pc,
unsigned long *flags)
static inline void move_unlock_page_cgroup(struct page_cgroup *pc,
unsigned long *flags)
#define PCG_ARRAYID_WIDTH	SECTIONS_SHIFT
#define PCG_ARRAYID_WIDTH	NODES_SHIFT
#if (PCG_ARRAYID_WIDTH > BITS_PER_LONG - NR_PCG_FLAGS)
#error Not enough space left in pc->flags to store page_cgroup array IDs
#define PCG_ARRAYID_MASK	((1UL << PCG_ARRAYID_WIDTH) - 1)
#define PCG_ARRAYID_OFFSET	(BITS_PER_LONG - PCG_ARRAYID_WIDTH)
#define PCG_ARRAYID_SHIFT	(PCG_ARRAYID_OFFSET * (PCG_ARRAYID_WIDTH != 0))
static inline void set_page_cgroup_array_id(struct page_cgroup *pc,
unsigned long id)
static inline unsigned long page_cgroup_array_id(struct page_cgroup *pc)
struct page_cgroup;
static inline void __meminit pgdat_page_cgroup_init(struct pglist_data *pgdat)
static inline struct page_cgroup *lookup_page_cgroup(struct page *page)
static inline void page_cgroup_init(void)
static inline void __init page_cgroup_init_flatmem(void)
extern unsigned short swap_cgroup_cmpxchg(swp_entry_t ent,
unsigned short old, unsigned short new);
extern unsigned short swap_cgroup_record(swp_entry_t ent, unsigned short id);
extern unsigned short lookup_swap_cgroup(swp_entry_t ent);
extern int swap_cgroup_swapon(int type, unsigned long max_pages);
extern void swap_cgroup_swapoff(int type);
static inline
unsigned short swap_cgroup_record(swp_entry_t ent, unsigned short id)
static inline
unsigned short lookup_swap_cgroup(swp_entry_t ent)
static inline int
swap_cgroup_swapon(int type, unsigned long max_pages)
static inline void swap_cgroup_swapoff(int type)
