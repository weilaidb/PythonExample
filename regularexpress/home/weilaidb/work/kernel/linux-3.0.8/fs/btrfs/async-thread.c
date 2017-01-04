#define WORK_QUEUED_BIT 0
#define WORK_DONE_BIT 1
#define WORK_ORDER_DONE_BIT 2
#define WORK_HIGH_PRIO_BIT 3
struct btrfs_worker_thread ;
struct worker_start ;
static void start_new_worker_func(struct btrfs_work *work)
static int start_new_worker(struct btrfs_workers *queue)
static void check_idle_worker(struct btrfs_worker_thread *worker)
static void check_busy_worker(struct btrfs_worker_thread *worker)
static void check_pending_worker_creates(struct btrfs_worker_thread *worker)
static noinline int run_ordered_completions(struct btrfs_workers *workers,
struct btrfs_work *work)
static void put_worker(struct btrfs_worker_thread *worker)
static int try_worker_shutdown(struct btrfs_worker_thread *worker)
static struct btrfs_work *get_next_work(struct btrfs_worker_thread *worker,
struct list_head *prio_head,
struct list_head *head)
static int worker_loop(void *arg)
int btrfs_stop_workers(struct btrfs_workers *workers)
void btrfs_init_workers(struct btrfs_workers *workers, char *name, int max,
struct btrfs_workers *async_helper)
static int __btrfs_start_workers(struct btrfs_workers *workers,
int num_workers)
int btrfs_start_workers(struct btrfs_workers *workers, int num_workers)
static struct btrfs_worker_thread *next_worker(struct btrfs_workers *workers)
static struct btrfs_worker_thread *find_worker(struct btrfs_workers *workers)
int btrfs_requeue_work(struct btrfs_work *work)
void btrfs_set_work_high_prio(struct btrfs_work *work)
int btrfs_queue_worker(struct btrfs_workers *workers, struct btrfs_work *work)
