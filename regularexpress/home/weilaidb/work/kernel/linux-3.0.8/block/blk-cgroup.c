#define MAX_KEY_LEN 100
static DEFINE_SPINLOCK(blkio_list_lock);
static LIST_HEAD(blkio_list);
struct blkio_cgroup blkio_root_cgroup = ;
EXPORT_SYMBOL_GPL(blkio_root_cgroup);
static struct cgroup_subsys_state *blkiocg_create(struct cgroup_subsys *,
struct cgroup *);
static int blkiocg_can_attach_task(struct cgroup *, struct task_struct *);
static void blkiocg_attach_task(struct cgroup *, struct task_struct *);
static void blkiocg_destroy(struct cgroup_subsys *, struct cgroup *);
static int blkiocg_populate(struct cgroup_subsys *, struct cgroup *);
#define BLKIOFILE_PRIVATE(x, val)	(((x) << 16) | (val))
#define BLKIOFILE_POLICY(val)		(((val) >> 16) & 0xffff)
#define BLKIOFILE_ATTR(val)		((val) & 0xffff)
struct cgroup_subsys blkio_subsys = ;
EXPORT_SYMBOL_GPL(blkio_subsys);
static inline void blkio_policy_insert_node(struct blkio_cgroup *blkcg,
struct blkio_policy_node *pn)
static inline bool cftype_blkg_same_policy(struct cftype *cft,
struct blkio_group *blkg)
static inline bool pn_matches_cftype(struct cftype *cft,
struct blkio_policy_node *pn)
static inline void blkio_policy_delete_node(struct blkio_policy_node *pn)
static struct blkio_policy_node *
blkio_policy_search_node(const struct blkio_cgroup *blkcg, dev_t dev,
enum blkio_policy_id plid, int fileid)
struct blkio_cgroup *cgroup_to_blkio_cgroup(struct cgroup *cgroup)
EXPORT_SYMBOL_GPL(cgroup_to_blkio_cgroup);
struct blkio_cgroup *task_blkio_cgroup(struct task_struct *tsk)
EXPORT_SYMBOL_GPL(task_blkio_cgroup);
static inline void
blkio_update_group_weight(struct blkio_group *blkg, unsigned int weight)
static inline void blkio_update_group_bps(struct blkio_group *blkg, u64 bps,
int fileid)
static inline void blkio_update_group_iops(struct blkio_group *blkg,
unsigned int iops, int fileid)
static void blkio_add_stat(uint64_t *stat, uint64_t add, bool direction,
bool sync)
static void blkio_check_and_dec_stat(uint64_t *stat, bool direction, bool sync)
static void blkio_set_start_group_wait_time(struct blkio_group *blkg,
struct blkio_group *curr_blkg)
static void blkio_update_group_wait_time(struct blkio_group_stats *stats)
static void blkio_end_empty_time(struct blkio_group_stats *stats)
void blkiocg_update_set_idle_time_stats(struct blkio_group *blkg)
EXPORT_SYMBOL_GPL(blkiocg_update_set_idle_time_stats);
void blkiocg_update_idle_time_stats(struct blkio_group *blkg)
EXPORT_SYMBOL_GPL(blkiocg_update_idle_time_stats);
void blkiocg_update_avg_queue_size_stats(struct blkio_group *blkg)
EXPORT_SYMBOL_GPL(blkiocg_update_avg_queue_size_stats);
void blkiocg_set_start_empty_time(struct blkio_group *blkg)
EXPORT_SYMBOL_GPL(blkiocg_set_start_empty_time);
void blkiocg_update_dequeue_stats(struct blkio_group *blkg,
unsigned long dequeue)
EXPORT_SYMBOL_GPL(blkiocg_update_dequeue_stats);
static inline void blkio_set_start_group_wait_time(struct blkio_group *blkg,
struct blkio_group *curr_blkg)
static inline void blkio_end_empty_time(struct blkio_group_stats *stats)
void blkiocg_update_io_add_stats(struct blkio_group *blkg,
struct blkio_group *curr_blkg, bool direction,
bool sync)
EXPORT_SYMBOL_GPL(blkiocg_update_io_add_stats);
void blkiocg_update_io_remove_stats(struct blkio_group *blkg,
bool direction, bool sync)
EXPORT_SYMBOL_GPL(blkiocg_update_io_remove_stats);
void blkiocg_update_timeslice_used(struct blkio_group *blkg, unsigned long time,
unsigned long unaccounted_time)
EXPORT_SYMBOL_GPL(blkiocg_update_timeslice_used);
void blkiocg_update_dispatch_stats(struct blkio_group *blkg,
uint64_t bytes, bool direction, bool sync)
EXPORT_SYMBOL_GPL(blkiocg_update_dispatch_stats);
void blkiocg_update_completion_stats(struct blkio_group *blkg,
uint64_t start_time, uint64_t io_start_time, bool direction, bool sync)
EXPORT_SYMBOL_GPL(blkiocg_update_completion_stats);
void blkiocg_update_io_merged_stats(struct blkio_group *blkg, bool direction,
bool sync)
EXPORT_SYMBOL_GPL(blkiocg_update_io_merged_stats);
int blkio_alloc_blkg_stats(struct blkio_group *blkg)
EXPORT_SYMBOL_GPL(blkio_alloc_blkg_stats);
void blkiocg_add_blkio_group(struct blkio_cgroup *blkcg,
struct blkio_group *blkg, void *key, dev_t dev,
enum blkio_policy_id plid)
EXPORT_SYMBOL_GPL(blkiocg_add_blkio_group);
static void __blkiocg_del_blkio_group(struct blkio_group *blkg)
int blkiocg_del_blkio_group(struct blkio_group *blkg)
EXPORT_SYMBOL_GPL(blkiocg_del_blkio_group);
struct blkio_group *blkiocg_lookup_group(struct blkio_cgroup *blkcg, void *key)
EXPORT_SYMBOL_GPL(blkiocg_lookup_group);
static void blkio_reset_stats_cpu(struct blkio_group *blkg)
static int
blkiocg_reset_stats(struct cgroup *cgroup, struct cftype *cftype, u64 val)
static void blkio_get_key_name(enum stat_sub_type type, dev_t dev, char *str,
int chars_left, bool diskname_only)
static uint64_t blkio_fill_stat(char *str, int chars_left, uint64_t val,
struct cgroup_map_cb *cb, dev_t dev)
static uint64_t blkio_read_stat_cpu(struct blkio_group *blkg,
enum stat_type_cpu type, enum stat_sub_type sub_type)
static uint64_t blkio_get_stat_cpu(struct blkio_group *blkg,
struct cgroup_map_cb *cb, dev_t dev, enum stat_type_cpu type)
static uint64_t blkio_get_stat(struct blkio_group *blkg,
struct cgroup_map_cb *cb, dev_t dev, enum stat_type type)
static int blkio_check_dev_num(dev_t dev)
static int blkio_policy_parse_and_set(char *buf,
struct blkio_policy_node *newpn, enum blkio_policy_id plid, int fileid)
unsigned int blkcg_get_weight(struct blkio_cgroup *blkcg,
dev_t dev)
EXPORT_SYMBOL_GPL(blkcg_get_weight);
uint64_t blkcg_get_read_bps(struct blkio_cgroup *blkcg, dev_t dev)
uint64_t blkcg_get_write_bps(struct blkio_cgroup *blkcg, dev_t dev)
unsigned int blkcg_get_read_iops(struct blkio_cgroup *blkcg, dev_t dev)
unsigned int blkcg_get_write_iops(struct blkio_cgroup *blkcg, dev_t dev)
static bool blkio_delete_rule_command(struct blkio_policy_node *pn)
static void blkio_update_policy_rule(struct blkio_policy_node *oldpn,
struct blkio_policy_node *newpn)
static void blkio_update_blkg_policy(struct blkio_cgroup *blkcg,
struct blkio_group *blkg, struct blkio_policy_node *pn)
static void blkio_update_policy_node_blkg(struct blkio_cgroup *blkcg,
struct blkio_policy_node *pn)
static int blkiocg_file_write(struct cgroup *cgrp, struct cftype *cft,
const char *buffer)
static void
blkio_print_policy_node(struct seq_file *m, struct blkio_policy_node *pn)
static void blkio_read_policy_node_files(struct cftype *cft,
struct blkio_cgroup *blkcg, struct seq_file *m)
static int blkiocg_file_read(struct cgroup *cgrp, struct cftype *cft,
struct seq_file *m)
static int blkio_read_blkg_stats(struct blkio_cgroup *blkcg,
struct cftype *cft, struct cgroup_map_cb *cb,
enum stat_type type, bool show_total, bool pcpu)
static int blkiocg_file_read_map(struct cgroup *cgrp, struct cftype *cft,
struct cgroup_map_cb *cb)
static int blkio_weight_write(struct blkio_cgroup *blkcg, u64 val)
static u64 blkiocg_file_read_u64 (struct cgroup *cgrp, struct cftype *cft)
static int
blkiocg_file_write_u64(struct cgroup *cgrp, struct cftype *cft, u64 val)
struct cftype blkio_files[] = ;
static int blkiocg_populate(struct cgroup_subsys *subsys, struct cgroup *cgroup)
static void blkiocg_destroy(struct cgroup_subsys *subsys, struct cgroup *cgroup)
static struct cgroup_subsys_state *
blkiocg_create(struct cgroup_subsys *subsys, struct cgroup *cgroup)
static int blkiocg_can_attach_task(struct cgroup *cgrp, struct task_struct *tsk)
static void blkiocg_attach_task(struct cgroup *cgrp, struct task_struct *tsk)
void blkio_policy_register(struct blkio_policy_type *blkiop)
EXPORT_SYMBOL_GPL(blkio_policy_register);
void blkio_policy_unregister(struct blkio_policy_type *blkiop)
EXPORT_SYMBOL_GPL(blkio_policy_unregister);
static int __init init_cgroup_blkio(void)
static void __exit exit_cgroup_blkio(void)
module_init(init_cgroup_blkio);
module_exit(exit_cgroup_blkio);
MODULE_LICENSE("GPL");
