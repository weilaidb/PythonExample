struct noop_data ;
static void noop_merged_requests(struct request_queue *q, struct request *rq,
struct request *next)
static int noop_dispatch(struct request_queue *q, int force)
static void noop_add_request(struct request_queue *q, struct request *rq)
static struct request *
noop_former_request(struct request_queue *q, struct request *rq)
static struct request *
noop_latter_request(struct request_queue *q, struct request *rq)
static void *noop_init_queue(struct request_queue *q)
static void noop_exit_queue(struct elevator_queue *e)
static struct elevator_type elevator_noop = ;
static int __init noop_init(void)
static void __exit noop_exit(void)
module_init(noop_init);
module_exit(noop_exit);
MODULE_AUTHOR("Jens Axboe");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("No-op IO scheduler");
