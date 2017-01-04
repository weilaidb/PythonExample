#define _LARGEFILE64_SOURCE
# define MAX_PATH 256
# define _STR(x) #x
# define STR(x) _STR(x)
#define PM_ENTRY_BYTES      sizeof(uint64_t)
#define PM_STATUS_BITS      3
#define PM_STATUS_OFFSET    (64 - PM_STATUS_BITS)
#define PM_STATUS_MASK      (((1LL << PM_STATUS_BITS) - 1) << PM_STATUS_OFFSET)
#define PM_STATUS(nr)       (((nr) << PM_STATUS_OFFSET) & PM_STATUS_MASK)
#define PM_PSHIFT_BITS      6
#define PM_PSHIFT_OFFSET    (PM_STATUS_OFFSET - PM_PSHIFT_BITS)
#define PM_PSHIFT_MASK      (((1LL << PM_PSHIFT_BITS) - 1) << PM_PSHIFT_OFFSET)
#define PM_PSHIFT(x)        (((u64) (x) << PM_PSHIFT_OFFSET) & PM_PSHIFT_MASK)
#define PM_PFRAME_MASK      ((1LL << PM_PSHIFT_OFFSET) - 1)
#define PM_PFRAME(x)        ((x) & PM_PFRAME_MASK)
#define PM_PRESENT          PM_STATUS(4LL)
#define PM_SWAP             PM_STATUS(2LL)
#define KPF_BYTES		8
#define PROC_KPAGEFLAGS		"/proc/kpageflags"
#define KPF_LOCKED		0
#define KPF_ERROR		1
#define KPF_REFERENCED		2
#define KPF_UPTODATE		3
#define KPF_DIRTY		4
#define KPF_LRU			5
#define KPF_ACTIVE		6
#define KPF_SLAB		7
#define KPF_WRITEBACK		8
#define KPF_RECLAIM		9
#define KPF_BUDDY		10
#define KPF_MMAP		11
#define KPF_ANON		12
#define KPF_SWAPCACHE		13
#define KPF_SWAPBACKED		14
#define KPF_COMPOUND_HEAD	15
#define KPF_COMPOUND_TAIL	16
#define KPF_HUGE		17
#define KPF_UNEVICTABLE		18
#define KPF_HWPOISON		19
#define KPF_NOPAGE		20
#define KPF_KSM			21
#define KPF_RESERVED		32
#define KPF_MLOCKED		33
#define KPF_MAPPEDTODISK	34
#define KPF_PRIVATE		35
#define KPF_PRIVATE_2		36
#define KPF_OWNER_PRIVATE	37
#define KPF_ARCH		38
#define KPF_UNCACHED		39
#define KPF_READAHEAD		48
#define KPF_SLOB_FREE		49
#define KPF_SLUB_FROZEN		50
#define KPF_SLUB_DEBUG		51
#define KPF_ALL_BITS		((uint64_t)~0ULL)
#define KPF_HACKERS_BITS	(0xffffULL << 32)
#define KPF_OVERLOADED_BITS	(0xffffULL << 48)
#define BIT(name)		(1ULL << KPF_##name)
#define BITS_COMPOUND		(BIT(COMPOUND_HEAD) | BIT(COMPOUND_TAIL))
static const char *page_flag_names[] = ;
static const char *debugfs_known_mountpoints[] = ;
static int		opt_raw;
static int		opt_list;
static int		opt_no_summary;
static pid_t		opt_pid;
#define MAX_ADDR_RANGES	1024
static int		nr_addr_ranges;
static unsigned long	opt_offset[MAX_ADDR_RANGES];
static unsigned long	opt_size[MAX_ADDR_RANGES];
#define MAX_VMAS	10240
static int		nr_vmas;
static unsigned long	pg_start[MAX_VMAS];
static unsigned long	pg_end[MAX_VMAS];
#define MAX_BIT_FILTERS	64
static int		nr_bit_filters;
static uint64_t		opt_mask[MAX_BIT_FILTERS];
static uint64_t		opt_bits[MAX_BIT_FILTERS];
static int		page_size;
static int		pagemap_fd;
static int		kpageflags_fd;
static int		opt_hwpoison;
static int		opt_unpoison;
static char		hwpoison_debug_fs[MAX_PATH+1];
static int		hwpoison_inject_fd;
static int		hwpoison_forget_fd;
#define HASH_SHIFT	13
#define HASH_SIZE	(1 << HASH_SHIFT)
#define HASH_MASK	(HASH_SIZE - 1)
#define HASH_KEY(flags)	(flags & HASH_MASK)
static unsigned long	total_pages;
static unsigned long	nr_pages[HASH_SIZE];
static uint64_t 	page_flags[HASH_SIZE];
#define ARRAY_SIZE(x) (sizeof(x) / sizeof((x)[0]))
#define min_t(type, x, y) ()
#define max_t(type, x, y) ()
static unsigned long pages2mb(unsigned long pages)
static void fatal(const char *x, ...)
static int checked_open(const char *pathname, int flags)
static unsigned long do_u64_read(int fd, char *name,
uint64_t *buf,
unsigned long index,
unsigned long count)
static unsigned long kpageflags_read(uint64_t *buf,
unsigned long index,
unsigned long pages)
static unsigned long pagemap_read(uint64_t *buf,
unsigned long index,
unsigned long pages)
static unsigned long pagemap_pfn(uint64_t val)
static char *page_flag_name(uint64_t flags)
static char *page_flag_longname(uint64_t flags)
static void show_page_range(unsigned long voffset,
unsigned long offset, uint64_t flags)
static void show_page(unsigned long voffset,
unsigned long offset, uint64_t flags)
static void show_summary(void)
static int bit_mask_ok(uint64_t flags)
static uint64_t expand_overloaded_flags(uint64_t flags)
static uint64_t well_known_flags(uint64_t flags)
static uint64_t kpageflags_flags(uint64_t flags)
static int debugfs_valid_mountpoint(const char *debugfs)
static const char *debugfs_find_mountpoint(void)
static void debugfs_mount(void)
static void prepare_hwpoison_fd(void)
static int hwpoison_page(unsigned long offset)
static int unpoison_page(unsigned long offset)
static int hash_slot(uint64_t flags)
static void add_page(unsigned long voffset,
unsigned long offset, uint64_t flags)
#define KPAGEFLAGS_BATCH	(64 << 10)
static void walk_pfn(unsigned long voffset,
unsigned long index,
unsigned long count)
#define PAGEMAP_BATCH	(64 << 10)
static void walk_vma(unsigned long index, unsigned long count)
static void walk_task(unsigned long index, unsigned long count)
static void add_addr_range(unsigned long offset, unsigned long size)
static void walk_addr_ranges(void)
static const char *page_flag_type(uint64_t flag)
static void usage(void)
static unsigned long long parse_number(const char *str)
static void parse_pid(const char *str)
static void parse_file(const char *name)
static void parse_addr_range(const char *optarg)
static void add_bits_filter(uint64_t mask, uint64_t bits)
static uint64_t parse_flag_name(const char *str, int len)
static uint64_t parse_flag_names(const char *str, int all)
static void parse_bits_mask(const char *optarg)
static void describe_flags(const char *optarg)
static const struct option opts[] = ;
int main(int argc, char *argv[])
