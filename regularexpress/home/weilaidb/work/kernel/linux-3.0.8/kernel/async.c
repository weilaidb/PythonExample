static async_cookie_t next_cookie = 1;
#define MAX_WORK	32768
static LIST_HEAD(async_pending);
static LIST_HEAD(async_running);
static DEFINE_SPINLOCK(async_lock);
struct async_entry ;
static DECLARE_WAIT_QUEUE_HEAD(async_done);
static atomic_t entry_count;
extern int initcall_debug;
static async_cookie_t  __lowest_in_progress(struct list_head *running)
static async_cookie_t  lowest_in_progress(struct list_head *running)
static void async_run_entry_fn(struct work_struct *work)
static async_cookie_t __async_schedule(async_func_ptr *ptr, void *data, struct list_head *running)
async_cookie_t async_schedule(async_func_ptr *ptr, void *data)
EXPORT_SYMBOL_GPL(async_schedule);
async_cookie_t async_schedule_domain(async_func_ptr *ptr, void *data,
struct list_head *running)
EXPORT_SYMBOL_GPL(async_schedule_domain);
void async_synchronize_full(void)
EXPORT_SYMBOL_GPL(async_synchronize_full);
void async_synchronize_full_domain(struct list_head *list)
EXPORT_SYMBOL_GPL(async_synchronize_full_domain);
void async_synchronize_cookie_domain(async_cookie_t cookie,
struct list_head *running)
EXPORT_SYMBOL_GPL(async_synchronize_cookie_domain);
void async_synchronize_cookie(async_cookie_t cookie)
EXPORT_SYMBOL_GPL(async_synchronize_cookie);
