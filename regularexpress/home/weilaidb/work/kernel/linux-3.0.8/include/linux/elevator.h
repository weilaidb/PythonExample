#define _LINUX_ELEVATOR_H
typedef int (elevator_merge_fn) (struct request_queue *, struct request **,
struct bio *);
typedef void (elevator_merge_req_fn) (struct request_queue *, struct request *, struct request *);
typedef void (elevator_merged_fn) (struct request_queue *, struct request *, int);
typedef int (elevator_allow_merge_fn) (struct request_queue *, struct request *, struct bio *);
typedef void (elevator_bio_merged_fn) (struct request_queue *,
struct request *, struct bio *);
typedef int (elevator_dispatch_fn) (struct request_queue *, int);
typedef void (elevator_add_req_fn) (struct request_queue *, struct request *);
typedef struct request *(elevator_request_list_fn) (struct request_queue *, struct request *);
typedef void (elevator_completed_req_fn) (struct request_queue *, struct request *);
typedef int (elevator_may_queue_fn) (struct request_queue *, int);
typedef int (elevator_set_req_fn) (struct request_queue *, struct request *, gfp_t);
typedef void (elevator_put_req_fn) (struct request *);
typedef void (elevator_activate_req_fn) (struct request_queue *, struct request *);
typedef void (elevator_deactivate_req_fn) (struct request_queue *, struct request *);
typedef void *(elevator_init_fn) (struct request_queue *);
typedef void (elevator_exit_fn) (struct elevator_queue *);
struct elevator_ops
;
#define ELV_NAME_MAX	(16)
struct elv_fs_entry ;
struct elevator_type
;
struct elevator_queue
;
extern void elv_dispatch_sort(struct request_queue *, struct request *);
extern void elv_dispatch_add_tail(struct request_queue *, struct request *);
extern void elv_add_request(struct request_queue *, struct request *, int);
extern void __elv_add_request(struct request_queue *, struct request *, int);
extern int elv_merge(struct request_queue *, struct request **, struct bio *);
extern int elv_try_merge(struct request *, struct bio *);
extern void elv_merge_requests(struct request_queue *, struct request *,
struct request *);
extern void elv_merged_request(struct request_queue *, struct request *, int);
extern void elv_bio_merged(struct request_queue *q, struct request *,
struct bio *);
extern void elv_requeue_request(struct request_queue *, struct request *);
extern struct request *elv_former_request(struct request_queue *, struct request *);
extern struct request *elv_latter_request(struct request_queue *, struct request *);
extern int elv_register_queue(struct request_queue *q);
extern void elv_unregister_queue(struct request_queue *q);
extern int elv_may_queue(struct request_queue *, int);
extern void elv_abort_queue(struct request_queue *);
extern void elv_completed_request(struct request_queue *, struct request *);
extern int elv_set_request(struct request_queue *, struct request *, gfp_t);
extern void elv_put_request(struct request_queue *, struct request *);
extern void elv_drain_elevator(struct request_queue *);
extern void elv_register(struct elevator_type *);
extern void elv_unregister(struct elevator_type *);
extern ssize_t elv_iosched_show(struct request_queue *, char *);
extern ssize_t elv_iosched_store(struct request_queue *, const char *, size_t);
extern int elevator_init(struct request_queue *, char *);
extern void elevator_exit(struct elevator_queue *);
extern int elevator_change(struct request_queue *, const char *);
extern int elv_rq_merge_ok(struct request *, struct bio *);
extern struct request *elv_rb_former_request(struct request_queue *, struct request *);
extern struct request *elv_rb_latter_request(struct request_queue *, struct request *);
extern struct request *elv_rb_add(struct rb_root *, struct request *);
extern void elv_rb_del(struct rb_root *, struct request *);
extern struct request *elv_rb_find(struct rb_root *, sector_t);
#define ELEVATOR_NO_MERGE	0
#define ELEVATOR_FRONT_MERGE	1
#define ELEVATOR_BACK_MERGE	2
#define ELEVATOR_INSERT_FRONT	1
#define ELEVATOR_INSERT_BACK	2
#define ELEVATOR_INSERT_SORT	3
#define ELEVATOR_INSERT_REQUEUE	4
#define ELEVATOR_INSERT_FLUSH	5
#define ELEVATOR_INSERT_SORT_MERGE	6
enum ;
#define rq_end_sector(rq)	(blk_rq_pos(rq) + blk_rq_sectors(rq))
#define rb_entry_rq(node)	rb_entry((node), struct request, rb_node)
#define rq_fifo_time(rq)	((unsigned long) (rq)->csd.list.next)
#define rq_set_fifo_time(rq,exp)	((rq)->csd.list.next = (void *) (exp))
#define rq_entry_fifo(ptr)	list_entry((ptr), struct request, queuelist)
#define rq_fifo_clear(rq)	do  while (0)
#define elv_ioc_count_mod(name, __val) this_cpu_add(name, __val)
#define elv_ioc_count_inc(name)	this_cpu_inc(name)
#define elv_ioc_count_dec(name)	this_cpu_dec(name)
#define elv_ioc_count_read(name)				\
()
