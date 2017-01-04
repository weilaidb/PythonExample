enum freezer_state ;
struct freezer ;
static inline struct freezer *cgroup_freezer(
struct cgroup *cgroup)
static inline struct freezer *task_freezer(struct task_struct *task)
static inline int __cgroup_freezing_or_frozen(struct task_struct *task)
int cgroup_freezing_or_frozen(struct task_struct *task)
static const char *freezer_state_strs[] = ;
struct cgroup_subsys freezer_subsys;
static struct cgroup_subsys_state *freezer_create(struct cgroup_subsys *ss,
struct cgroup *cgroup)
static void freezer_destroy(struct cgroup_subsys *ss,
struct cgroup *cgroup)
static int freezer_can_attach(struct cgroup_subsys *ss,
struct cgroup *new_cgroup,
struct task_struct *task)
static int freezer_can_attach_task(struct cgroup *cgrp, struct task_struct *tsk)
static void freezer_fork(struct cgroup_subsys *ss, struct task_struct *task)
static void update_if_frozen(struct cgroup *cgroup,
struct freezer *freezer)
static int freezer_read(struct cgroup *cgroup, struct cftype *cft,
struct seq_file *m)
static int try_to_freeze_cgroup(struct cgroup *cgroup, struct freezer *freezer)
static void unfreeze_cgroup(struct cgroup *cgroup, struct freezer *freezer)
static int freezer_change_state(struct cgroup *cgroup,
enum freezer_state goal_state)
static int freezer_write(struct cgroup *cgroup,
struct cftype *cft,
const char *buffer)
static struct cftype files[] = ;
static int freezer_populate(struct cgroup_subsys *ss, struct cgroup *cgroup)
struct cgroup_subsys freezer_subsys = ;
