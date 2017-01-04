static const int cfq_quantum = 8;
static const int cfq_fifo_expire[2] = ;
static const int cfq_back_max = 16 * 1024;
static const int cfq_back_penalty = 2;
static const int cfq_slice_sync = HZ / 10;
static int cfq_slice_async = HZ / 25;
static const int cfq_slice_async_rq = 2;
static int cfq_slice_idle = HZ / 125;
static int cfq_group_idle = HZ / 125;
static const int cfq_target_latency = HZ * 3/10;
static const int cfq_hist_divisor = 4;
#define CFQ_IDLE_DELAY		(HZ / 5)
#define CFQ_MIN_TT		(2)
#define CFQ_SLICE_SCALE		(5)
#define CFQ_HW_QUEUE_MIN	(5)
#define CFQ_SERVICE_SHIFT       12
#define CFQQ_SEEK_THR		(sector_t)(8 * 100)
#define CFQQ_CLOSE_THR		(sector_t)(8 * 1024)
#define CFQQ_SECT_THR_NONROT	(sector_t)(2 * 32)
#define CFQQ_SEEKY(cfqq)	(hweight32(cfqq->seek_history) > 32/8)
#define RQ_CIC(rq)		\
((struct cfq_io_context *) (rq)->elevator_private[0])
#define RQ_CFQQ(rq)		(struct cfq_queue *) ((rq)->elevator_private[1])
#define RQ_CFQG(rq)		(struct cfq_group *) ((rq)->elevator_private[2])
static struct kmem_cache *cfq_pool;
static struct kmem_cache *cfq_ioc_pool;
static DEFINE_PER_CPU(unsigned long, cfq_ioc_count);
static struct completion *ioc_gone;
static DEFINE_SPINLOCK(ioc_gone_lock);
static DEFINE_SPINLOCK(cic_index_lock);
static DEFINE_IDA(cic_index_ida);
#define CFQ_PRIO_LISTS		IOPRIO_BE_NR
#define cfq_class_idle(cfqq)	((cfqq)->ioprio_class == IOPRIO_CLASS_IDLE)
#define cfq_class_rt(cfqq)	((cfqq)->ioprio_class == IOPRIO_CLASS_RT)
#define sample_valid(samples)	((samples) > 80)
#define rb_entry_cfqg(node)	rb_entry((node), struct cfq_group, rb_node)
struct cfq_rb_root ;
#define CFQ_RB_ROOT	(struct cfq_rb_root)
struct cfq_queue ;
enum wl_prio_t ;
enum wl_type_t ;
struct cfq_group ;
struct cfq_data ;
static struct cfq_group *cfq_get_next_cfqg(struct cfq_data *cfqd);
static struct cfq_rb_root *service_tree_for(struct cfq_group *cfqg,
enum wl_prio_t prio,
enum wl_type_t type)
enum cfqq_state_flags ;
#define CFQ_CFQQ_FNS(name)						\
static inline void cfq_mark_cfqq_##name(struct cfq_queue *cfqq)		\
\
static inline void cfq_clear_cfqq_##name(struct cfq_queue *cfqq)	\
\
static inline int cfq_cfqq_##name(const struct cfq_queue *cfqq)		\
CFQ_CFQQ_FNS(on_rr);
CFQ_CFQQ_FNS(wait_request);
CFQ_CFQQ_FNS(must_dispatch);
CFQ_CFQQ_FNS(must_alloc_slice);
CFQ_CFQQ_FNS(fifo_expire);
CFQ_CFQQ_FNS(idle_window);
CFQ_CFQQ_FNS(prio_changed);
CFQ_CFQQ_FNS(slice_new);
CFQ_CFQQ_FNS(sync);
CFQ_CFQQ_FNS(coop);
CFQ_CFQQ_FNS(split_coop);
CFQ_CFQQ_FNS(deep);
CFQ_CFQQ_FNS(wait_busy);
#undef CFQ_CFQQ_FNS
#define cfq_log_cfqq(cfqd, cfqq, fmt, args...)	\
blk_add_trace_msg((cfqd)->queue, "cfq%d%c %s " fmt, (cfqq)->pid, \
cfq_cfqq_sync((cfqq)) ? 'S' : 'A', \
blkg_path(&(cfqq)->cfqg->blkg), ##args)
#define cfq_log_cfqg(cfqd, cfqg, fmt, args...)				\
blk_add_trace_msg((cfqd)->queue, "%s " fmt,			\
blkg_path(&(cfqg)->blkg), ##args)       \
#define cfq_log_cfqq(cfqd, cfqq, fmt, args...)	\
blk_add_trace_msg((cfqd)->queue, "cfq%d " fmt, (cfqq)->pid, ##args)
#define cfq_log_cfqg(cfqd, cfqg, fmt, args...)		do  while (0)
#define cfq_log(cfqd, fmt, args...)	\
blk_add_trace_msg((cfqd)->queue, "cfq " fmt, ##args)
#define for_each_cfqg_st(cfqg, i, j, st) \
for (i = 0; i <= IDLE_WORKLOAD; i++) \
for (j = 0, st = i < IDLE_WORKLOAD ? &cfqg->service_trees[i][j]\
: &cfqg->service_tree_idle; \
(i < IDLE_WORKLOAD && j <= SYNC_WORKLOAD) || \
(i == IDLE_WORKLOAD && j == 0); \
j++, st = i < IDLE_WORKLOAD ? \
&cfqg->service_trees[i][j]: NULL) \
static inline bool iops_mode(struct cfq_data *cfqd)
static inline enum wl_prio_t cfqq_prio(struct cfq_queue *cfqq)
static enum wl_type_t cfqq_type(struct cfq_queue *cfqq)
static inline int cfq_group_busy_queues_wl(enum wl_prio_t wl,
struct cfq_data *cfqd,
struct cfq_group *cfqg)
static inline int cfqg_busy_async_queues(struct cfq_data *cfqd,
struct cfq_group *cfqg)
static void cfq_dispatch_insert(struct request_queue *, struct request *);
static struct cfq_queue *cfq_get_queue(struct cfq_data *, bool,
struct io_context *, gfp_t);
static struct cfq_io_context *cfq_cic_lookup(struct cfq_data *,
struct io_context *);
static inline struct cfq_queue *cic_to_cfqq(struct cfq_io_context *cic,
bool is_sync)
static inline void cic_set_cfqq(struct cfq_io_context *cic,
struct cfq_queue *cfqq, bool is_sync)
#define CIC_DEAD_KEY	1ul
#define CIC_DEAD_INDEX_SHIFT	1
static inline void *cfqd_dead_key(struct cfq_data *cfqd)
static inline struct cfq_data *cic_to_cfqd(struct cfq_io_context *cic)
static inline bool cfq_bio_sync(struct bio *bio)
static inline void cfq_schedule_dispatch(struct cfq_data *cfqd)
static inline int cfq_prio_slice(struct cfq_data *cfqd, bool sync,
unsigned short prio)
static inline int
cfq_prio_to_slice(struct cfq_data *cfqd, struct cfq_queue *cfqq)
static inline u64 cfq_scale_slice(unsigned long delta, struct cfq_group *cfqg)
static inline u64 max_vdisktime(u64 min_vdisktime, u64 vdisktime)
static inline u64 min_vdisktime(u64 min_vdisktime, u64 vdisktime)
static void update_min_vdisktime(struct cfq_rb_root *st)
static inline unsigned cfq_group_get_avg_queues(struct cfq_data *cfqd,
struct cfq_group *cfqg, bool rt)
static inline unsigned
cfq_group_slice(struct cfq_data *cfqd, struct cfq_group *cfqg)
static inline unsigned
cfq_scaled_cfqq_slice(struct cfq_data *cfqd, struct cfq_queue *cfqq)
static inline void
cfq_set_prio_slice(struct cfq_data *cfqd, struct cfq_queue *cfqq)
static inline bool cfq_slice_used(struct cfq_queue *cfqq)
static struct request *
cfq_choose_req(struct cfq_data *cfqd, struct request *rq1, struct request *rq2, sector_t last)
static struct cfq_queue *cfq_rb_first(struct cfq_rb_root *root)
static struct cfq_group *cfq_rb_first_group(struct cfq_rb_root *root)
static void rb_erase_init(struct rb_node *n, struct rb_root *root)
static void cfq_rb_erase(struct rb_node *n, struct cfq_rb_root *root)
static struct request *
cfq_find_next_rq(struct cfq_data *cfqd, struct cfq_queue *cfqq,
struct request *last)
static unsigned long cfq_slice_offset(struct cfq_data *cfqd,
struct cfq_queue *cfqq)
static inline s64
cfqg_key(struct cfq_rb_root *st, struct cfq_group *cfqg)
static void
__cfq_group_service_tree_add(struct cfq_rb_root *st, struct cfq_group *cfqg)
static void
cfq_update_group_weight(struct cfq_group *cfqg)
static void
cfq_group_service_tree_add(struct cfq_rb_root *st, struct cfq_group *cfqg)
static void
cfq_group_notify_queue_add(struct cfq_data *cfqd, struct cfq_group *cfqg)
static void
cfq_group_service_tree_del(struct cfq_rb_root *st, struct cfq_group *cfqg)
static void
cfq_group_notify_queue_del(struct cfq_data *cfqd, struct cfq_group *cfqg)
static inline unsigned int cfq_cfqq_slice_usage(struct cfq_queue *cfqq,
unsigned int *unaccounted_time)
static void cfq_group_served(struct cfq_data *cfqd, struct cfq_group *cfqg,
struct cfq_queue *cfqq)
static inline struct cfq_group *cfqg_of_blkg(struct blkio_group *blkg)
void cfq_update_blkio_group_weight(void *key, struct blkio_group *blkg,
unsigned int weight)
static void cfq_init_add_cfqg_lists(struct cfq_data *cfqd,
struct cfq_group *cfqg, struct blkio_cgroup *blkcg)
static struct cfq_group * cfq_alloc_cfqg(struct cfq_data *cfqd)
static struct cfq_group *
cfq_find_cfqg(struct cfq_data *cfqd, struct blkio_cgroup *blkcg)
static struct cfq_group *cfq_get_cfqg(struct cfq_data *cfqd)
static inline struct cfq_group *cfq_ref_get_cfqg(struct cfq_group *cfqg)
static void cfq_link_cfqq_cfqg(struct cfq_queue *cfqq, struct cfq_group *cfqg)
static void cfq_put_cfqg(struct cfq_group *cfqg)
static void cfq_destroy_cfqg(struct cfq_data *cfqd, struct cfq_group *cfqg)
static void cfq_release_cfq_groups(struct cfq_data *cfqd)
void cfq_unlink_blkio_group(void *key, struct blkio_group *blkg)
static struct cfq_group *cfq_get_cfqg(struct cfq_data *cfqd)
static inline struct cfq_group *cfq_ref_get_cfqg(struct cfq_group *cfqg)
static inline void
cfq_link_cfqq_cfqg(struct cfq_queue *cfqq, struct cfq_group *cfqg)
static void cfq_release_cfq_groups(struct cfq_data *cfqd)
static inline void cfq_put_cfqg(struct cfq_group *cfqg)
static void cfq_service_tree_add(struct cfq_data *cfqd, struct cfq_queue *cfqq,
bool add_front)
static struct cfq_queue *
cfq_prio_tree_lookup(struct cfq_data *cfqd, struct rb_root *root,
sector_t sector, struct rb_node **ret_parent,
struct rb_node ***rb_link)
static void cfq_prio_tree_add(struct cfq_data *cfqd, struct cfq_queue *cfqq)
static void cfq_resort_rr_list(struct cfq_data *cfqd, struct cfq_queue *cfqq)
static void cfq_add_cfqq_rr(struct cfq_data *cfqd, struct cfq_queue *cfqq)
static void cfq_del_cfqq_rr(struct cfq_data *cfqd, struct cfq_queue *cfqq)
static void cfq_del_rq_rb(struct request *rq)
static void cfq_add_rq_rb(struct request *rq)
static void cfq_reposition_rq_rb(struct cfq_queue *cfqq, struct request *rq)
static struct request *
cfq_find_rq_fmerge(struct cfq_data *cfqd, struct bio *bio)
static void cfq_activate_request(struct request_queue *q, struct request *rq)
static void cfq_deactivate_request(struct request_queue *q, struct request *rq)
static void cfq_remove_request(struct request *rq)
static int cfq_merge(struct request_queue *q, struct request **req,
struct bio *bio)
static void cfq_merged_request(struct request_queue *q, struct request *req,
int type)
static void cfq_bio_merged(struct request_queue *q, struct request *req,
struct bio *bio)
static void
cfq_merged_requests(struct request_queue *q, struct request *rq,
struct request *next)
static int cfq_allow_merge(struct request_queue *q, struct request *rq,
struct bio *bio)
static inline void cfq_del_timer(struct cfq_data *cfqd, struct cfq_queue *cfqq)
static void __cfq_set_active_queue(struct cfq_data *cfqd,
struct cfq_queue *cfqq)
static void
__cfq_slice_expired(struct cfq_data *cfqd, struct cfq_queue *cfqq,
bool timed_out)
static inline void cfq_slice_expired(struct cfq_data *cfqd, bool timed_out)
static struct cfq_queue *cfq_get_next_queue(struct cfq_data *cfqd)
static struct cfq_queue *cfq_get_next_queue_forced(struct cfq_data *cfqd)
static struct cfq_queue *cfq_set_active_queue(struct cfq_data *cfqd,
struct cfq_queue *cfqq)
static inline sector_t cfq_dist_from_last(struct cfq_data *cfqd,
struct request *rq)
static inline int cfq_rq_close(struct cfq_data *cfqd, struct cfq_queue *cfqq,
struct request *rq)
static struct cfq_queue *cfqq_close(struct cfq_data *cfqd,
struct cfq_queue *cur_cfqq)
static struct cfq_queue *cfq_close_cooperator(struct cfq_data *cfqd,
struct cfq_queue *cur_cfqq)
static bool cfq_should_idle(struct cfq_data *cfqd, struct cfq_queue *cfqq)
static void cfq_arm_slice_timer(struct cfq_data *cfqd)
static void cfq_dispatch_insert(struct request_queue *q, struct request *rq)
static struct request *cfq_check_fifo(struct cfq_queue *cfqq)
static inline int
cfq_prio_to_maxrq(struct cfq_data *cfqd, struct cfq_queue *cfqq)
static int cfqq_process_refs(struct cfq_queue *cfqq)
static void cfq_setup_merge(struct cfq_queue *cfqq, struct cfq_queue *new_cfqq)
static enum wl_type_t cfq_choose_wl(struct cfq_data *cfqd,
struct cfq_group *cfqg, enum wl_prio_t prio)
static void choose_service_tree(struct cfq_data *cfqd, struct cfq_group *cfqg)
static struct cfq_group *cfq_get_next_cfqg(struct cfq_data *cfqd)
static void cfq_choose_cfqg(struct cfq_data *cfqd)
static struct cfq_queue *cfq_select_queue(struct cfq_data *cfqd)
static int __cfq_forced_dispatch_cfqq(struct cfq_queue *cfqq)
static int cfq_forced_dispatch(struct cfq_data *cfqd)
static inline bool cfq_slice_used_soon(struct cfq_data *cfqd,
struct cfq_queue *cfqq)
static bool cfq_may_dispatch(struct cfq_data *cfqd, struct cfq_queue *cfqq)
static bool cfq_dispatch_request(struct cfq_data *cfqd, struct cfq_queue *cfqq)
static int cfq_dispatch_requests(struct request_queue *q, int force)
static void cfq_put_queue(struct cfq_queue *cfqq)
static void
call_for_each_cic(struct io_context *ioc,
void (*func)(struct io_context *, struct cfq_io_context *))
static void cfq_cic_free_rcu(struct rcu_head *head)
static void cfq_cic_free(struct cfq_io_context *cic)
static void cic_free_func(struct io_context *ioc, struct cfq_io_context *cic)
static void cfq_free_io_context(struct io_context *ioc)
static void cfq_put_cooperator(struct cfq_queue *cfqq)
static void cfq_exit_cfqq(struct cfq_data *cfqd, struct cfq_queue *cfqq)
static void __cfq_exit_single_io_context(struct cfq_data *cfqd,
struct cfq_io_context *cic)
static void cfq_exit_single_io_context(struct io_context *ioc,
struct cfq_io_context *cic)
static void cfq_exit_io_context(struct io_context *ioc)
static struct cfq_io_context *
cfq_alloc_io_context(struct cfq_data *cfqd, gfp_t gfp_mask)
static void cfq_init_prio_data(struct cfq_queue *cfqq, struct io_context *ioc)
static void changed_ioprio(struct io_context *ioc, struct cfq_io_context *cic)
static void cfq_ioc_set_ioprio(struct io_context *ioc)
static void cfq_init_cfqq(struct cfq_data *cfqd, struct cfq_queue *cfqq,
pid_t pid, bool is_sync)
static void changed_cgroup(struct io_context *ioc, struct cfq_io_context *cic)
static void cfq_ioc_set_cgroup(struct io_context *ioc)
static struct cfq_queue *
cfq_find_alloc_queue(struct cfq_data *cfqd, bool is_sync,
struct io_context *ioc, gfp_t gfp_mask)
static struct cfq_queue **
cfq_async_queue_prio(struct cfq_data *cfqd, int ioprio_class, int ioprio)
static struct cfq_queue *
cfq_get_queue(struct cfq_data *cfqd, bool is_sync, struct io_context *ioc,
gfp_t gfp_mask)
static void
cfq_drop_dead_cic(struct cfq_data *cfqd, struct io_context *ioc,
struct cfq_io_context *cic)
static struct cfq_io_context *
cfq_cic_lookup(struct cfq_data *cfqd, struct io_context *ioc)
static int cfq_cic_link(struct cfq_data *cfqd, struct io_context *ioc,
struct cfq_io_context *cic, gfp_t gfp_mask)
static struct cfq_io_context *
cfq_get_io_context(struct cfq_data *cfqd, gfp_t gfp_mask)
static void
cfq_update_io_thinktime(struct cfq_data *cfqd, struct cfq_io_context *cic)
static void
cfq_update_io_seektime(struct cfq_data *cfqd, struct cfq_queue *cfqq,
struct request *rq)
static void
cfq_update_idle_window(struct cfq_data *cfqd, struct cfq_queue *cfqq,
struct cfq_io_context *cic)
static bool
cfq_should_preempt(struct cfq_data *cfqd, struct cfq_queue *new_cfqq,
struct request *rq)
static void cfq_preempt_queue(struct cfq_data *cfqd, struct cfq_queue *cfqq)
static void
cfq_rq_enqueued(struct cfq_data *cfqd, struct cfq_queue *cfqq,
struct request *rq)
static void cfq_insert_request(struct request_queue *q, struct request *rq)
static void cfq_update_hw_tag(struct cfq_data *cfqd)
static bool cfq_should_wait_busy(struct cfq_data *cfqd, struct cfq_queue *cfqq)
static void cfq_completed_request(struct request_queue *q, struct request *rq)
static void cfq_prio_boost(struct cfq_queue *cfqq)
static inline int __cfq_may_queue(struct cfq_queue *cfqq)
static int cfq_may_queue(struct request_queue *q, int rw)
static void cfq_put_request(struct request *rq)
static struct cfq_queue *
cfq_merge_cfqqs(struct cfq_data *cfqd, struct cfq_io_context *cic,
struct cfq_queue *cfqq)
static struct cfq_queue *
split_cfqq(struct cfq_io_context *cic, struct cfq_queue *cfqq)
static int
cfq_set_request(struct request_queue *q, struct request *rq, gfp_t gfp_mask)
static void cfq_kick_queue(struct work_struct *work)
static void cfq_idle_slice_timer(unsigned long data)
static void cfq_shutdown_timer_wq(struct cfq_data *cfqd)
static void cfq_put_async_queues(struct cfq_data *cfqd)
static void cfq_exit_queue(struct elevator_queue *e)
static int cfq_alloc_cic_index(void)
static void *cfq_init_queue(struct request_queue *q)
static void cfq_slab_kill(void)
static int __init cfq_slab_setup(void)
static ssize_t
cfq_var_show(unsigned int var, char *page)
static ssize_t
cfq_var_store(unsigned int *var, const char *page, size_t count)
#define SHOW_FUNCTION(__FUNC, __VAR, __CONV)				\
static ssize_t __FUNC(struct elevator_queue *e, char *page)		\
SHOW_FUNCTION(cfq_quantum_show, cfqd->cfq_quantum, 0);
SHOW_FUNCTION(cfq_fifo_expire_sync_show, cfqd->cfq_fifo_expire[1], 1);
SHOW_FUNCTION(cfq_fifo_expire_async_show, cfqd->cfq_fifo_expire[0], 1);
SHOW_FUNCTION(cfq_back_seek_max_show, cfqd->cfq_back_max, 0);
SHOW_FUNCTION(cfq_back_seek_penalty_show, cfqd->cfq_back_penalty, 0);
SHOW_FUNCTION(cfq_slice_idle_show, cfqd->cfq_slice_idle, 1);
SHOW_FUNCTION(cfq_group_idle_show, cfqd->cfq_group_idle, 1);
SHOW_FUNCTION(cfq_slice_sync_show, cfqd->cfq_slice[1], 1);
SHOW_FUNCTION(cfq_slice_async_show, cfqd->cfq_slice[0], 1);
SHOW_FUNCTION(cfq_slice_async_rq_show, cfqd->cfq_slice_async_rq, 0);
SHOW_FUNCTION(cfq_low_latency_show, cfqd->cfq_latency, 0);
#undef SHOW_FUNCTION
#define STORE_FUNCTION(__FUNC, __PTR, MIN, MAX, __CONV)			\
static ssize_t __FUNC(struct elevator_queue *e, const char *page, size_t count)	\
STORE_FUNCTION(cfq_quantum_store, &cfqd->cfq_quantum, 1, UINT_MAX, 0);
STORE_FUNCTION(cfq_fifo_expire_sync_store, &cfqd->cfq_fifo_expire[1], 1,
UINT_MAX, 1);
STORE_FUNCTION(cfq_fifo_expire_async_store, &cfqd->cfq_fifo_expire[0], 1,
UINT_MAX, 1);
STORE_FUNCTION(cfq_back_seek_max_store, &cfqd->cfq_back_max, 0, UINT_MAX, 0);
STORE_FUNCTION(cfq_back_seek_penalty_store, &cfqd->cfq_back_penalty, 1,
UINT_MAX, 0);
STORE_FUNCTION(cfq_slice_idle_store, &cfqd->cfq_slice_idle, 0, UINT_MAX, 1);
STORE_FUNCTION(cfq_group_idle_store, &cfqd->cfq_group_idle, 0, UINT_MAX, 1);
STORE_FUNCTION(cfq_slice_sync_store, &cfqd->cfq_slice[1], 1, UINT_MAX, 1);
STORE_FUNCTION(cfq_slice_async_store, &cfqd->cfq_slice[0], 1, UINT_MAX, 1);
STORE_FUNCTION(cfq_slice_async_rq_store, &cfqd->cfq_slice_async_rq, 1,
UINT_MAX, 0);
STORE_FUNCTION(cfq_low_latency_store, &cfqd->cfq_latency, 0, 1, 0);
#undef STORE_FUNCTION
#define CFQ_ATTR(name) \
__ATTR(name, S_IRUGO|S_IWUSR, cfq_##name##_show, cfq_##name##_store)
static struct elv_fs_entry cfq_attrs[] = ;
static struct elevator_type iosched_cfq = ;
static struct blkio_policy_type blkio_policy_cfq = ;
static struct blkio_policy_type blkio_policy_cfq;
static int __init cfq_init(void)
static void __exit cfq_exit(void)
module_init(cfq_init);
module_exit(cfq_exit);
MODULE_AUTHOR("Jens Axboe");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Completely Fair Queueing IO scheduler");
