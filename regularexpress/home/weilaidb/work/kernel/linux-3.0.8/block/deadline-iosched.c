static const int read_expire = HZ / 2;
static const int write_expire = 5 * HZ;
static const int writes_starved = 2;
static const int fifo_batch = 16;
struct deadline_data ;
static void deadline_move_request(struct deadline_data *, struct request *);
static inline struct rb_root *
deadline_rb_root(struct deadline_data *dd, struct request *rq)
static inline struct request *
deadline_latter_request(struct request *rq)
static void
deadline_add_rq_rb(struct deadline_data *dd, struct request *rq)
static inline void
deadline_del_rq_rb(struct deadline_data *dd, struct request *rq)
static void
deadline_add_request(struct request_queue *q, struct request *rq)
static void deadline_remove_request(struct request_queue *q, struct request *rq)
static int
deadline_merge(struct request_queue *q, struct request **req, struct bio *bio)
static void deadline_merged_request(struct request_queue *q,
struct request *req, int type)
static void
deadline_merged_requests(struct request_queue *q, struct request *req,
struct request *next)
static inline void
deadline_move_to_dispatch(struct deadline_data *dd, struct request *rq)
static void
deadline_move_request(struct deadline_data *dd, struct request *rq)
static inline int deadline_check_fifo(struct deadline_data *dd, int ddir)
static int deadline_dispatch_requests(struct request_queue *q, int force)
static void deadline_exit_queue(struct elevator_queue *e)
static void *deadline_init_queue(struct request_queue *q)
static ssize_t
deadline_var_show(int var, char *page)
static ssize_t
deadline_var_store(int *var, const char *page, size_t count)
#define SHOW_FUNCTION(__FUNC, __VAR, __CONV)				\
static ssize_t __FUNC(struct elevator_queue *e, char *page)		\
SHOW_FUNCTION(deadline_read_expire_show, dd->fifo_expire[READ], 1);
SHOW_FUNCTION(deadline_write_expire_show, dd->fifo_expire[WRITE], 1);
SHOW_FUNCTION(deadline_writes_starved_show, dd->writes_starved, 0);
SHOW_FUNCTION(deadline_front_merges_show, dd->front_merges, 0);
SHOW_FUNCTION(deadline_fifo_batch_show, dd->fifo_batch, 0);
#undef SHOW_FUNCTION
#define STORE_FUNCTION(__FUNC, __PTR, MIN, MAX, __CONV)			\
static ssize_t __FUNC(struct elevator_queue *e, const char *page, size_t count)	\
STORE_FUNCTION(deadline_read_expire_store, &dd->fifo_expire[READ], 0, INT_MAX, 1);
STORE_FUNCTION(deadline_write_expire_store, &dd->fifo_expire[WRITE], 0, INT_MAX, 1);
STORE_FUNCTION(deadline_writes_starved_store, &dd->writes_starved, INT_MIN, INT_MAX, 0);
STORE_FUNCTION(deadline_front_merges_store, &dd->front_merges, 0, 1, 0);
STORE_FUNCTION(deadline_fifo_batch_store, &dd->fifo_batch, 0, INT_MAX, 0);
#undef STORE_FUNCTION
#define DD_ATTR(name) \
__ATTR(name, S_IRUGO|S_IWUSR, deadline_##name##_show, \
deadline_##name##_store)
static struct elv_fs_entry deadline_attrs[] = ;
static struct elevator_type iosched_deadline = ;
static int __init deadline_init(void)
static void __exit deadline_exit(void)
module_init(deadline_init);
module_exit(deadline_exit);
MODULE_AUTHOR("Jens Axboe");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("deadline IO scheduler");
