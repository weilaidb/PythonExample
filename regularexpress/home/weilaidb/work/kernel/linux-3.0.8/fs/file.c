struct fdtable_defer ;
int sysctl_nr_open __read_mostly = 1024*1024;
int sysctl_nr_open_min = BITS_PER_LONG;
int sysctl_nr_open_max = 1024 * 1024;
static DEFINE_PER_CPU(struct fdtable_defer, fdtable_defer_list);
static void *alloc_fdmem(unsigned int size)
static void free_fdmem(void *ptr)
static void __free_fdtable(struct fdtable *fdt)
static void free_fdtable_work(struct work_struct *work)
void free_fdtable_rcu(struct rcu_head *rcu)
static void copy_fdtable(struct fdtable *nfdt, struct fdtable *ofdt)
static struct fdtable * alloc_fdtable(unsigned int nr)
static int expand_fdtable(struct files_struct *files, int nr)
__releases(files->file_lock)
__acquires(files->file_lock)
int expand_files(struct files_struct *files, int nr)
static int count_open_files(struct fdtable *fdt)
struct files_struct *dup_fd(struct files_struct *oldf, int *errorp)
static void __devinit fdtable_defer_list_init(int cpu)
void __init files_defer_init(void)
struct files_struct init_files = ;
int alloc_fd(unsigned start, unsigned flags)
int get_unused_fd(void)
EXPORT_SYMBOL(get_unused_fd);
