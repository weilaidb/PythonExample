#define _BLK_CGROUP_H
enum blkio_policy_id ;
#define THROTL_IOPS_MAX		UINT_MAX
#if defined(CONFIG_BLK_CGROUP) || defined(CONFIG_BLK_CGROUP_MODULE)
extern struct cgroup_subsys blkio_subsys;
#define blkio_subsys_id blkio_subsys.subsys_id
enum stat_type ;
enum stat_type_cpu ;
enum stat_sub_type ;
enum blkg_state_flags ;
enum blkcg_file_name_prop ;
enum blkcg_file_name_throtl ;
struct blkio_cgroup ;
struct blkio_group_stats ;
struct blkio_group_stats_cpu ;
struct blkio_group ;
struct blkio_policy_node ;
extern unsigned int blkcg_get_weight(struct blkio_cgroup *blkcg,
dev_t dev);
extern uint64_t blkcg_get_read_bps(struct blkio_cgroup *blkcg,
dev_t dev);
extern uint64_t blkcg_get_write_bps(struct blkio_cgroup *blkcg,
dev_t dev);
extern unsigned int blkcg_get_read_iops(struct blkio_cgroup *blkcg,
dev_t dev);
extern unsigned int blkcg_get_write_iops(struct blkio_cgroup *blkcg,
dev_t dev);
typedef void (blkio_unlink_group_fn) (void *key, struct blkio_group *blkg);
typedef void (blkio_update_group_weight_fn) (void *key,
struct blkio_group *blkg, unsigned int weight);
typedef void (blkio_update_group_read_bps_fn) (void * key,
struct blkio_group *blkg, u64 read_bps);
typedef void (blkio_update_group_write_bps_fn) (void *key,
struct blkio_group *blkg, u64 write_bps);
typedef void (blkio_update_group_read_iops_fn) (void *key,
struct blkio_group *blkg, unsigned int read_iops);
typedef void (blkio_update_group_write_iops_fn) (void *key,
struct blkio_group *blkg, unsigned int write_iops);
struct blkio_policy_ops ;
struct blkio_policy_type ;
extern void blkio_policy_register(struct blkio_policy_type *);
extern void blkio_policy_unregister(struct blkio_policy_type *);
static inline char *blkg_path(struct blkio_group *blkg)
struct blkio_group ;
struct blkio_policy_type ;
static inline void blkio_policy_register(struct blkio_policy_type *blkiop)
static inline void blkio_policy_unregister(struct blkio_policy_type *blkiop)
static inline char *blkg_path(struct blkio_group *blkg)
#define BLKIO_WEIGHT_MIN	10
#define BLKIO_WEIGHT_MAX	1000
#define BLKIO_WEIGHT_DEFAULT	500
void blkiocg_update_avg_queue_size_stats(struct blkio_group *blkg);
void blkiocg_update_dequeue_stats(struct blkio_group *blkg,
unsigned long dequeue);
void blkiocg_update_set_idle_time_stats(struct blkio_group *blkg);
void blkiocg_update_idle_time_stats(struct blkio_group *blkg);
void blkiocg_set_start_empty_time(struct blkio_group *blkg);
#define BLKG_FLAG_FNS(name)						\
static inline void blkio_mark_blkg_##name(				\
struct blkio_group_stats *stats)			\
\
static inline void blkio_clear_blkg_##name(				\
struct blkio_group_stats *stats)			\
\
static inline int blkio_blkg_##name(struct blkio_group_stats *stats)	\
\
BLKG_FLAG_FNS(waiting)
BLKG_FLAG_FNS(idling)
BLKG_FLAG_FNS(empty)
#undef BLKG_FLAG_FNS
static inline void blkiocg_update_avg_queue_size_stats(
struct blkio_group *blkg)
static inline void blkiocg_update_dequeue_stats(struct blkio_group *blkg,
unsigned long dequeue)
static inline void blkiocg_update_set_idle_time_stats(struct blkio_group *blkg)
static inline void blkiocg_update_idle_time_stats(struct blkio_group *blkg)
static inline void blkiocg_set_start_empty_time(struct blkio_group *blkg)
#if defined(CONFIG_BLK_CGROUP) || defined(CONFIG_BLK_CGROUP_MODULE)
extern struct blkio_cgroup blkio_root_cgroup;
extern struct blkio_cgroup *cgroup_to_blkio_cgroup(struct cgroup *cgroup);
extern struct blkio_cgroup *task_blkio_cgroup(struct task_struct *tsk);
extern void blkiocg_add_blkio_group(struct blkio_cgroup *blkcg,
struct blkio_group *blkg, void *key, dev_t dev,
enum blkio_policy_id plid);
extern int blkio_alloc_blkg_stats(struct blkio_group *blkg);
extern int blkiocg_del_blkio_group(struct blkio_group *blkg);
extern struct blkio_group *blkiocg_lookup_group(struct blkio_cgroup *blkcg,
void *key);
void blkiocg_update_timeslice_used(struct blkio_group *blkg,
unsigned long time,
unsigned long unaccounted_time);
void blkiocg_update_dispatch_stats(struct blkio_group *blkg, uint64_t bytes,
bool direction, bool sync);
void blkiocg_update_completion_stats(struct blkio_group *blkg,
uint64_t start_time, uint64_t io_start_time, bool direction, bool sync);
void blkiocg_update_io_merged_stats(struct blkio_group *blkg, bool direction,
bool sync);
void blkiocg_update_io_add_stats(struct blkio_group *blkg,
struct blkio_group *curr_blkg, bool direction, bool sync);
void blkiocg_update_io_remove_stats(struct blkio_group *blkg,
bool direction, bool sync);
struct cgroup;
static inline struct blkio_cgroup *
cgroup_to_blkio_cgroup(struct cgroup *cgroup)
static inline struct blkio_cgroup *
task_blkio_cgroup(struct task_struct *tsk)
static inline void blkiocg_add_blkio_group(struct blkio_cgroup *blkcg,
struct blkio_group *blkg, void *key, dev_t dev,
enum blkio_policy_id plid)
static inline int blkio_alloc_blkg_stats(struct blkio_group *blkg)
static inline int
blkiocg_del_blkio_group(struct blkio_group *blkg)
static inline struct blkio_group *
blkiocg_lookup_group(struct blkio_cgroup *blkcg, void *key)
static inline void blkiocg_update_timeslice_used(struct blkio_group *blkg,
unsigned long time,
unsigned long unaccounted_time)
static inline void blkiocg_update_dispatch_stats(struct blkio_group *blkg,
uint64_t bytes, bool direction, bool sync)
static inline void blkiocg_update_completion_stats(struct blkio_group *blkg,
uint64_t start_time, uint64_t io_start_time, bool direction,
bool sync)
static inline void blkiocg_update_io_merged_stats(struct blkio_group *blkg,
bool direction, bool sync)
static inline void blkiocg_update_io_add_stats(struct blkio_group *blkg,
struct blkio_group *curr_blkg, bool direction, bool sync)
static inline void blkiocg_update_io_remove_stats(struct blkio_group *blkg,
bool direction, bool sync)
