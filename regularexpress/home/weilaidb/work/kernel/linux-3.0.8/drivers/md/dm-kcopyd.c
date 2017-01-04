#define SUB_JOB_SIZE	128
#define SPLIT_COUNT	8
#define MIN_JOBS	8
#define RESERVE_PAGES	(DIV_ROUND_UP(SUB_JOB_SIZE << SECTOR_SHIFT, PAGE_SIZE))
struct dm_kcopyd_client ;
static void wake(struct dm_kcopyd_client *kc)
static struct page_list *alloc_pl(gfp_t gfp)
static void free_pl(struct page_list *pl)
static void kcopyd_put_pages(struct dm_kcopyd_client *kc, struct page_list *pl)
static int kcopyd_get_pages(struct dm_kcopyd_client *kc,
unsigned int nr, struct page_list **pages)
static void drop_pages(struct page_list *pl)
static int client_reserve_pages(struct dm_kcopyd_client *kc, unsigned nr_pages)
static void client_free_pages(struct dm_kcopyd_client *kc)
struct kcopyd_job ;
static struct kmem_cache *_job_cache;
int __init dm_kcopyd_init(void)
void dm_kcopyd_exit(void)
static struct kcopyd_job *pop(struct list_head *jobs,
struct dm_kcopyd_client *kc)
static void push(struct list_head *jobs, struct kcopyd_job *job)
static void push_head(struct list_head *jobs, struct kcopyd_job *job)
static int run_complete_job(struct kcopyd_job *job)
static void complete_io(unsigned long error, void *context)
static int run_io_job(struct kcopyd_job *job)
static int run_pages_job(struct kcopyd_job *job)
static int process_jobs(struct list_head *jobs, struct dm_kcopyd_client *kc,
int (*fn) (struct kcopyd_job *))
static void do_work(struct work_struct *work)
static void dispatch_job(struct kcopyd_job *job)
static void segment_complete(int read_err, unsigned long write_err,
void *context)
static void split_job(struct kcopyd_job *master_job)
int dm_kcopyd_copy(struct dm_kcopyd_client *kc, struct dm_io_region *from,
unsigned int num_dests, struct dm_io_region *dests,
unsigned int flags, dm_kcopyd_notify_fn fn, void *context)
EXPORT_SYMBOL(dm_kcopyd_copy);
struct dm_kcopyd_client *dm_kcopyd_client_create(void)
EXPORT_SYMBOL(dm_kcopyd_client_create);
void dm_kcopyd_client_destroy(struct dm_kcopyd_client *kc)
EXPORT_SYMBOL(dm_kcopyd_client_destroy);
