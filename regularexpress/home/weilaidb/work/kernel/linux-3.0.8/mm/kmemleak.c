#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define MAX_TRACE		16
#define MSECS_MIN_AGE		5000
#define SECS_FIRST_SCAN		60
#define SECS_SCAN_WAIT		600
#define MAX_SCAN_SIZE		4096
#define BYTES_PER_POINTER	sizeof(void *)
#define gfp_kmemleak_mask(gfp)	(((gfp) & (GFP_KERNEL | GFP_ATOMIC)) | \
__GFP_NORETRY | __GFP_NOMEMALLOC | \
__GFP_NOWARN)
struct kmemleak_scan_area ;
#define KMEMLEAK_GREY	0
#define KMEMLEAK_BLACK	-1
struct kmemleak_object ;
#define OBJECT_ALLOCATED	(1 << 0)
#define OBJECT_REPORTED		(1 << 1)
#define OBJECT_NO_SCAN		(1 << 2)
#define HEX_ROW_SIZE		16
#define HEX_GROUP_SIZE		1
#define HEX_ASCII		1
#define HEX_MAX_LINES		2
static LIST_HEAD(object_list);
static LIST_HEAD(gray_list);
static struct prio_tree_root object_tree_root;
static DEFINE_RWLOCK(kmemleak_lock);
static struct kmem_cache *object_cache;
static struct kmem_cache *scan_area_cache;
static atomic_t kmemleak_enabled = ATOMIC_INIT(0);
static atomic_t kmemleak_initialized = ATOMIC_INIT(0);
static atomic_t kmemleak_early_log = ATOMIC_INIT(1);
static atomic_t kmemleak_error = ATOMIC_INIT(0);
static unsigned long min_addr = ULONG_MAX;
static unsigned long max_addr;
static struct task_struct *scan_thread;
static unsigned long jiffies_min_age;
static unsigned long jiffies_last_scan;
static signed long jiffies_scan_wait;
static int kmemleak_stack_scan = 1;
static DEFINE_MUTEX(scan_mutex);
static int kmemleak_skip_disable;
enum ;
struct early_log ;
static struct early_log
early_log[CONFIG_DEBUG_KMEMLEAK_EARLY_LOG_SIZE] __initdata;
static int crt_early_log __initdata;
static void kmemleak_disable(void);
#define kmemleak_warn(x...)	do  while (0)
#define kmemleak_stop(x...)	do  while (0)
static void hex_dump_object(struct seq_file *seq,
struct kmemleak_object *object)
static bool color_white(const struct kmemleak_object *object)
static bool color_gray(const struct kmemleak_object *object)
static bool unreferenced_object(struct kmemleak_object *object)
static void print_unreferenced(struct seq_file *seq,
struct kmemleak_object *object)
static void dump_object_info(struct kmemleak_object *object)
static struct kmemleak_object *lookup_object(unsigned long ptr, int alias)
static int get_object(struct kmemleak_object *object)
static void free_object_rcu(struct rcu_head *rcu)
static void put_object(struct kmemleak_object *object)
static struct kmemleak_object *find_and_get_object(unsigned long ptr, int alias)
static int __save_stack_trace(unsigned long *trace)
static struct kmemleak_object *create_object(unsigned long ptr, size_t size,
int min_count, gfp_t gfp)
static void __delete_object(struct kmemleak_object *object)
static void delete_object_full(unsigned long ptr)
static void delete_object_part(unsigned long ptr, size_t size)
static void __paint_it(struct kmemleak_object *object, int color)
static void paint_it(struct kmemleak_object *object, int color)
static void paint_ptr(unsigned long ptr, int color)
static void make_gray_object(unsigned long ptr)
static void make_black_object(unsigned long ptr)
static void add_scan_area(unsigned long ptr, size_t size, gfp_t gfp)
static void object_no_scan(unsigned long ptr)
static void __init log_early(int op_type, const void *ptr, size_t size,
int min_count)
static void early_alloc(struct early_log *log)
void __ref kmemleak_alloc(const void *ptr, size_t size, int min_count,
gfp_t gfp)
EXPORT_SYMBOL_GPL(kmemleak_alloc);
void __ref kmemleak_free(const void *ptr)
EXPORT_SYMBOL_GPL(kmemleak_free);
void __ref kmemleak_free_part(const void *ptr, size_t size)
EXPORT_SYMBOL_GPL(kmemleak_free_part);
void __ref kmemleak_not_leak(const void *ptr)
EXPORT_SYMBOL(kmemleak_not_leak);
void __ref kmemleak_ignore(const void *ptr)
EXPORT_SYMBOL(kmemleak_ignore);
void __ref kmemleak_scan_area(const void *ptr, size_t size, gfp_t gfp)
EXPORT_SYMBOL(kmemleak_scan_area);
void __ref kmemleak_no_scan(const void *ptr)
EXPORT_SYMBOL(kmemleak_no_scan);
static bool update_checksum(struct kmemleak_object *object)
static int scan_should_stop(void)
static void scan_block(void *_start, void *_end,
struct kmemleak_object *scanned, int allow_resched)
static void scan_object(struct kmemleak_object *object)
static void scan_gray_list(void)
static void kmemleak_scan(void)
static int kmemleak_scan_thread(void *arg)
static void start_scan_thread(void)
static void stop_scan_thread(void)
static void *kmemleak_seq_start(struct seq_file *seq, loff_t *pos)
static void *kmemleak_seq_next(struct seq_file *seq, void *v, loff_t *pos)
static void kmemleak_seq_stop(struct seq_file *seq, void *v)
static int kmemleak_seq_show(struct seq_file *seq, void *v)
static const struct seq_operations kmemleak_seq_ops = ;
static int kmemleak_open(struct inode *inode, struct file *file)
static int kmemleak_release(struct inode *inode, struct file *file)
static int dump_str_object_info(const char *str)
static void kmemleak_clear(void)
static ssize_t kmemleak_write(struct file *file, const char __user *user_buf,
size_t size, loff_t *ppos)
static const struct file_operations kmemleak_fops = ;
static void kmemleak_do_cleanup(struct work_struct *work)
static DECLARE_WORK(cleanup_work, kmemleak_do_cleanup);
static void kmemleak_disable(void)
static int kmemleak_boot_config(char *str)
early_param("kmemleak", kmemleak_boot_config);
void __init kmemleak_init(void)
static int __init kmemleak_late_init(void)
late_initcall(kmemleak_late_init);
