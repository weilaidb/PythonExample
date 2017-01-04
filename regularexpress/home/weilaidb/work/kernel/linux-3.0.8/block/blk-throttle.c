static int throtl_grp_quantum = 8;
static int throtl_quantum = 32;
static unsigned long throtl_slice = HZ/10;
static struct workqueue_struct *kthrotld_workqueue;
static void throtl_schedule_delayed_work(struct throtl_data *td,
unsigned long delay);
struct throtl_rb_root ;
#define THROTL_RB_ROOT	(struct throtl_rb_root)
#define rb_entry_tg(node)	rb_entry((node), struct throtl_grp, rb_node)
struct throtl_grp ;
struct throtl_data
;
enum tg_state_flags ;
#define THROTL_TG_FNS(name)						\
static inline void throtl_mark_tg_##name(struct throtl_grp *tg)		\
\
static inline void throtl_clear_tg_##name(struct throtl_grp *tg)	\
\
static inline int throtl_tg_##name(const struct throtl_grp *tg)		\
THROTL_TG_FNS(on_rr);
#define throtl_log_tg(td, tg, fmt, args...)				\
blk_add_trace_msg((td)->queue, "throtl %s " fmt,		\
blkg_path(&(tg)->blkg), ##args);      	\
#define throtl_log(td, fmt, args...)	\
blk_add_trace_msg((td)->queue, "throtl " fmt, ##args)
static inline struct throtl_grp *tg_of_blkg(struct blkio_group *blkg)
static inline int total_nr_queued(struct throtl_data *td)
static inline struct throtl_grp *throtl_ref_get_tg(struct throtl_grp *tg)
static void throtl_free_tg(struct rcu_head *head)
static void throtl_put_tg(struct throtl_grp *tg)
static void throtl_init_group(struct throtl_grp *tg)
static void
throtl_add_group_to_td_list(struct throtl_data *td, struct throtl_grp *tg)
static void
__throtl_tg_fill_dev_details(struct throtl_data *td, struct throtl_grp *tg)
static void
throtl_tg_fill_dev_details(struct throtl_data *td, struct throtl_grp *tg)
static void throtl_init_add_tg_lists(struct throtl_data *td,
struct throtl_grp *tg, struct blkio_cgroup *blkcg)
static struct throtl_grp *throtl_alloc_tg(struct throtl_data *td)
static struct
throtl_grp *throtl_find_tg(struct throtl_data *td, struct blkio_cgroup *blkcg)
static struct throtl_grp * throtl_get_tg(struct throtl_data *td)
static struct throtl_grp *throtl_rb_first(struct throtl_rb_root *root)
static void rb_erase_init(struct rb_node *n, struct rb_root *root)
static void throtl_rb_erase(struct rb_node *n, struct throtl_rb_root *root)
static void update_min_dispatch_time(struct throtl_rb_root *st)
static void
tg_service_tree_add(struct throtl_rb_root *st, struct throtl_grp *tg)
static void __throtl_enqueue_tg(struct throtl_data *td, struct throtl_grp *tg)
static void throtl_enqueue_tg(struct throtl_data *td, struct throtl_grp *tg)
static void __throtl_dequeue_tg(struct throtl_data *td, struct throtl_grp *tg)
static void throtl_dequeue_tg(struct throtl_data *td, struct throtl_grp *tg)
static void throtl_schedule_next_dispatch(struct throtl_data *td)
static inline void
throtl_start_new_slice(struct throtl_data *td, struct throtl_grp *tg, bool rw)
static inline void throtl_set_slice_end(struct throtl_data *td,
struct throtl_grp *tg, bool rw, unsigned long jiffy_end)
static inline void throtl_extend_slice(struct throtl_data *td,
struct throtl_grp *tg, bool rw, unsigned long jiffy_end)
static bool
throtl_slice_used(struct throtl_data *td, struct throtl_grp *tg, bool rw)
static inline void
throtl_trim_slice(struct throtl_data *td, struct throtl_grp *tg, bool rw)
static bool tg_with_in_iops_limit(struct throtl_data *td, struct throtl_grp *tg,
struct bio *bio, unsigned long *wait)
static bool tg_with_in_bps_limit(struct throtl_data *td, struct throtl_grp *tg,
struct bio *bio, unsigned long *wait)
static bool tg_no_rule_group(struct throtl_grp *tg, bool rw)
static bool tg_may_dispatch(struct throtl_data *td, struct throtl_grp *tg,
struct bio *bio, unsigned long *wait)
static void throtl_charge_bio(struct throtl_grp *tg, struct bio *bio)
static void throtl_add_bio_tg(struct throtl_data *td, struct throtl_grp *tg,
struct bio *bio)
static void tg_update_disptime(struct throtl_data *td, struct throtl_grp *tg)
static void tg_dispatch_one_bio(struct throtl_data *td, struct throtl_grp *tg,
bool rw, struct bio_list *bl)
static int throtl_dispatch_tg(struct throtl_data *td, struct throtl_grp *tg,
struct bio_list *bl)
static int throtl_select_dispatch(struct throtl_data *td, struct bio_list *bl)
static void throtl_process_limit_change(struct throtl_data *td)
static int throtl_dispatch(struct request_queue *q)
void blk_throtl_work(struct work_struct *work)
static void
throtl_schedule_delayed_work(struct throtl_data *td, unsigned long delay)
static void
throtl_destroy_tg(struct throtl_data *td, struct throtl_grp *tg)
static void throtl_release_tgs(struct throtl_data *td)
static void throtl_td_free(struct throtl_data *td)
void throtl_unlink_blkio_group(void *key, struct blkio_group *blkg)
static void throtl_update_blkio_group_common(struct throtl_data *td,
struct throtl_grp *tg)
static void throtl_update_blkio_group_read_bps(void *key,
struct blkio_group *blkg, u64 read_bps)
static void throtl_update_blkio_group_write_bps(void *key,
struct blkio_group *blkg, u64 write_bps)
static void throtl_update_blkio_group_read_iops(void *key,
struct blkio_group *blkg, unsigned int read_iops)
static void throtl_update_blkio_group_write_iops(void *key,
struct blkio_group *blkg, unsigned int write_iops)
static void throtl_shutdown_wq(struct request_queue *q)
static struct blkio_policy_type blkio_policy_throtl = ;
int blk_throtl_bio(struct request_queue *q, struct bio **biop)
int blk_throtl_init(struct request_queue *q)
void blk_throtl_exit(struct request_queue *q)
static int __init throtl_init(void)
module_init(throtl_init);
