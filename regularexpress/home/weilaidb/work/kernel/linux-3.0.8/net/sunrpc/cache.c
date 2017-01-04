#define	 RPCDBG_FACILITY RPCDBG_CACHE
static bool cache_defer_req(struct cache_req *req, struct cache_head *item);
static void cache_revisit_request(struct cache_head *item);
static void cache_init(struct cache_head *h)
static inline int cache_is_expired(struct cache_detail *detail, struct cache_head *h)
struct cache_head *sunrpc_cache_lookup(struct cache_detail *detail,
struct cache_head *key, int hash)
EXPORT_SYMBOL_GPL(sunrpc_cache_lookup);
static void cache_dequeue(struct cache_detail *detail, struct cache_head *ch);
static void cache_fresh_locked(struct cache_head *head, time_t expiry)
static void cache_fresh_unlocked(struct cache_head *head,
struct cache_detail *detail)
struct cache_head *sunrpc_cache_update(struct cache_detail *detail,
struct cache_head *new, struct cache_head *old, int hash)
EXPORT_SYMBOL_GPL(sunrpc_cache_update);
static int cache_make_upcall(struct cache_detail *cd, struct cache_head *h)
static inline int cache_is_valid(struct cache_detail *detail, struct cache_head *h)
static int try_to_negate_entry(struct cache_detail *detail, struct cache_head *h)
int cache_check(struct cache_detail *detail,
struct cache_head *h, struct cache_req *rqstp)
EXPORT_SYMBOL_GPL(cache_check);
static LIST_HEAD(cache_list);
static DEFINE_SPINLOCK(cache_list_lock);
static struct cache_detail *current_detail;
static int current_index;
static void do_cache_clean(struct work_struct *work);
static struct delayed_work cache_cleaner;
static void sunrpc_init_cache_detail(struct cache_detail *cd)
static void sunrpc_destroy_cache_detail(struct cache_detail *cd)
static int cache_clean(void)
static void do_cache_clean(struct work_struct *work)
void cache_flush(void)
EXPORT_SYMBOL_GPL(cache_flush);
void cache_purge(struct cache_detail *detail)
EXPORT_SYMBOL_GPL(cache_purge);
#define	DFR_HASHSIZE	(PAGE_SIZE/sizeof(struct list_head))
#define	DFR_HASH(item)	((((long)item)>>4 ^ (((long)item)>>13)) % DFR_HASHSIZE)
#define	DFR_MAX	300
static DEFINE_SPINLOCK(cache_defer_lock);
static LIST_HEAD(cache_defer_list);
static struct hlist_head cache_defer_hash[DFR_HASHSIZE];
static int cache_defer_cnt;
static void __unhash_deferred_req(struct cache_deferred_req *dreq)
static void __hash_deferred_req(struct cache_deferred_req *dreq, struct cache_head *item)
static void setup_deferral(struct cache_deferred_req *dreq,
struct cache_head *item,
int count_me)
struct thread_deferred_req ;
static void cache_restart_thread(struct cache_deferred_req *dreq, int too_many)
static void cache_wait_req(struct cache_req *req, struct cache_head *item)
static void cache_limit_defers(void)
static bool cache_defer_req(struct cache_req *req, struct cache_head *item)
static void cache_revisit_request(struct cache_head *item)
void cache_clean_deferred(void *owner)
static DEFINE_SPINLOCK(queue_lock);
static DEFINE_MUTEX(queue_io_mutex);
struct cache_queue ;
struct cache_request ;
struct cache_reader ;
static ssize_t cache_read(struct file *filp, char __user *buf, size_t count,
loff_t *ppos, struct cache_detail *cd)
static ssize_t cache_do_downcall(char *kaddr, const char __user *buf,
size_t count, struct cache_detail *cd)
static ssize_t cache_slow_downcall(const char __user *buf,
size_t count, struct cache_detail *cd)
static ssize_t cache_downcall(struct address_space *mapping,
const char __user *buf,
size_t count, struct cache_detail *cd)
static ssize_t cache_write(struct file *filp, const char __user *buf,
size_t count, loff_t *ppos,
struct cache_detail *cd)
static DECLARE_WAIT_QUEUE_HEAD(queue_wait);
static unsigned int cache_poll(struct file *filp, poll_table *wait,
struct cache_detail *cd)
static int cache_ioctl(struct inode *ino, struct file *filp,
unsigned int cmd, unsigned long arg,
struct cache_detail *cd)
static int cache_open(struct inode *inode, struct file *filp,
struct cache_detail *cd)
static int cache_release(struct inode *inode, struct file *filp,
struct cache_detail *cd)
static void cache_dequeue(struct cache_detail *detail, struct cache_head *ch)
void qword_add(char **bpp, int *lp, char *str)
EXPORT_SYMBOL_GPL(qword_add);
void qword_addhex(char **bpp, int *lp, char *buf, int blen)
EXPORT_SYMBOL_GPL(qword_addhex);
static void warn_no_listener(struct cache_detail *detail)
static bool cache_listeners_exist(struct cache_detail *detail)
int sunrpc_cache_pipe_upcall(struct cache_detail *detail, struct cache_head *h,
void (*cache_request)(struct cache_detail *,
struct cache_head *,
char **,
int *))
EXPORT_SYMBOL_GPL(sunrpc_cache_pipe_upcall);
#define isodigit(c) (isdigit(c) && c <= '7')
int qword_get(char **bpp, char *dest, int bufsize)
EXPORT_SYMBOL_GPL(qword_get);
struct handle ;
static void *c_start(struct seq_file *m, loff_t *pos)
__acquires(cd->hash_lock)
static void *c_next(struct seq_file *m, void *p, loff_t *pos)
static void c_stop(struct seq_file *m, void *p)
__releases(cd->hash_lock)
static int c_show(struct seq_file *m, void *p)
static const struct seq_operations cache_content_op = ;
static int content_open(struct inode *inode, struct file *file,
struct cache_detail *cd)
static int content_release(struct inode *inode, struct file *file,
struct cache_detail *cd)
static int open_flush(struct inode *inode, struct file *file,
struct cache_detail *cd)
static int release_flush(struct inode *inode, struct file *file,
struct cache_detail *cd)
static ssize_t read_flush(struct file *file, char __user *buf,
size_t count, loff_t *ppos,
struct cache_detail *cd)
static ssize_t write_flush(struct file *file, const char __user *buf,
size_t count, loff_t *ppos,
struct cache_detail *cd)
static ssize_t cache_read_procfs(struct file *filp, char __user *buf,
size_t count, loff_t *ppos)
static ssize_t cache_write_procfs(struct file *filp, const char __user *buf,
size_t count, loff_t *ppos)
static unsigned int cache_poll_procfs(struct file *filp, poll_table *wait)
static long cache_ioctl_procfs(struct file *filp,
unsigned int cmd, unsigned long arg)
static int cache_open_procfs(struct inode *inode, struct file *filp)
static int cache_release_procfs(struct inode *inode, struct file *filp)
static const struct file_operations cache_file_operations_procfs = ;
static int content_open_procfs(struct inode *inode, struct file *filp)
static int content_release_procfs(struct inode *inode, struct file *filp)
static const struct file_operations content_file_operations_procfs = ;
static int open_flush_procfs(struct inode *inode, struct file *filp)
static int release_flush_procfs(struct inode *inode, struct file *filp)
static ssize_t read_flush_procfs(struct file *filp, char __user *buf,
size_t count, loff_t *ppos)
static ssize_t write_flush_procfs(struct file *filp,
const char __user *buf,
size_t count, loff_t *ppos)
static const struct file_operations cache_flush_operations_procfs = ;
static void remove_cache_proc_entries(struct cache_detail *cd, struct net *net)
static int create_cache_proc_entries(struct cache_detail *cd, struct net *net)
static int create_cache_proc_entries(struct cache_detail *cd, struct net *net)
void __init cache_initialize(void)
int cache_register_net(struct cache_detail *cd, struct net *net)
int cache_register(struct cache_detail *cd)
EXPORT_SYMBOL_GPL(cache_register);
void cache_unregister_net(struct cache_detail *cd, struct net *net)
void cache_unregister(struct cache_detail *cd)
EXPORT_SYMBOL_GPL(cache_unregister);
static ssize_t cache_read_pipefs(struct file *filp, char __user *buf,
size_t count, loff_t *ppos)
static ssize_t cache_write_pipefs(struct file *filp, const char __user *buf,
size_t count, loff_t *ppos)
static unsigned int cache_poll_pipefs(struct file *filp, poll_table *wait)
static long cache_ioctl_pipefs(struct file *filp,
unsigned int cmd, unsigned long arg)
static int cache_open_pipefs(struct inode *inode, struct file *filp)
static int cache_release_pipefs(struct inode *inode, struct file *filp)
const struct file_operations cache_file_operations_pipefs = ;
static int content_open_pipefs(struct inode *inode, struct file *filp)
static int content_release_pipefs(struct inode *inode, struct file *filp)
const struct file_operations content_file_operations_pipefs = ;
static int open_flush_pipefs(struct inode *inode, struct file *filp)
static int release_flush_pipefs(struct inode *inode, struct file *filp)
static ssize_t read_flush_pipefs(struct file *filp, char __user *buf,
size_t count, loff_t *ppos)
static ssize_t write_flush_pipefs(struct file *filp,
const char __user *buf,
size_t count, loff_t *ppos)
const struct file_operations cache_flush_operations_pipefs = ;
int sunrpc_cache_register_pipefs(struct dentry *parent,
const char *name, mode_t umode,
struct cache_detail *cd)
EXPORT_SYMBOL_GPL(sunrpc_cache_register_pipefs);
void sunrpc_cache_unregister_pipefs(struct cache_detail *cd)
EXPORT_SYMBOL_GPL(sunrpc_cache_unregister_pipefs);
