#define _LINUX_CGROUP_H
struct cgroupfs_root;
struct cgroup_subsys;
struct inode;
struct cgroup;
struct css_id;
extern int cgroup_init_early(void);
extern int cgroup_init(void);
extern void cgroup_lock(void);
extern int cgroup_lock_is_held(void);
extern bool cgroup_lock_live_group(struct cgroup *cgrp);
extern void cgroup_unlock(void);
extern void cgroup_fork(struct task_struct *p);
extern void cgroup_fork_callbacks(struct task_struct *p);
extern void cgroup_post_fork(struct task_struct *p);
extern void cgroup_exit(struct task_struct *p, int run_callbacks);
extern int cgroupstats_build(struct cgroupstats *stats,
struct dentry *dentry);
extern int cgroup_load_subsys(struct cgroup_subsys *ss);
extern void cgroup_unload_subsys(struct cgroup_subsys *ss);
extern const struct file_operations proc_cgroup_operations;
#define SUBSYS(_x) _x ## _subsys_id,
enum cgroup_subsys_id ;
#undef SUBSYS
#define CGROUP_SUBSYS_COUNT (BITS_PER_BYTE*sizeof(unsigned long))
struct cgroup_subsys_state ;
enum ;
static inline void __css_get(struct cgroup_subsys_state *css, int count)
static inline void css_get(struct cgroup_subsys_state *css)
static inline bool css_is_removed(struct cgroup_subsys_state *css)
static inline bool css_tryget(struct cgroup_subsys_state *css)
extern void __css_put(struct cgroup_subsys_state *css, int count);
static inline void css_put(struct cgroup_subsys_state *css)
enum ;
enum cgroup_filetype ;
struct cgroup_pidlist ;
struct cgroup ;
struct css_set ;
struct cgroup_map_cb ;
#define MAX_CFTYPE_NAME 64
struct cftype ;
struct cgroup_scanner ;
int cgroup_add_file(struct cgroup *cgrp, struct cgroup_subsys *subsys,
const struct cftype *cft);
int cgroup_add_files(struct cgroup *cgrp,
struct cgroup_subsys *subsys,
const struct cftype cft[],
int count);
int cgroup_is_removed(const struct cgroup *cgrp);
int cgroup_path(const struct cgroup *cgrp, char *buf, int buflen);
int cgroup_task_count(const struct cgroup *cgrp);
int cgroup_is_descendant(const struct cgroup *cgrp, struct task_struct *task);
void cgroup_exclude_rmdir(struct cgroup_subsys_state *css);
void cgroup_release_and_wakeup_rmdir(struct cgroup_subsys_state *css);
struct cgroup_subsys ;
#define SUBSYS(_x) extern struct cgroup_subsys _x ## _subsys;
#undef SUBSYS
static inline struct cgroup_subsys_state *cgroup_subsys_state(
struct cgroup *cgrp, int subsys_id)
#define task_subsys_state_check(task, subsys_id, __c)			\
rcu_dereference_check(task->cgroups->subsys[subsys_id],		\
rcu_read_lock_held() ||			\
lockdep_is_held(&task->alloc_lock) ||	\
cgroup_lock_is_held() || (__c))
static inline struct cgroup_subsys_state *
task_subsys_state(struct task_struct *task, int subsys_id)
static inline struct cgroup* task_cgroup(struct task_struct *task,
int subsys_id)
struct cgroup_iter ;
void cgroup_iter_start(struct cgroup *cgrp, struct cgroup_iter *it);
struct task_struct *cgroup_iter_next(struct cgroup *cgrp,
struct cgroup_iter *it);
void cgroup_iter_end(struct cgroup *cgrp, struct cgroup_iter *it);
int cgroup_scan_tasks(struct cgroup_scanner *scan);
int cgroup_attach_task(struct cgroup *, struct task_struct *);
int cgroup_attach_task_all(struct task_struct *from, struct task_struct *);
static inline int cgroup_attach_task_current_cg(struct task_struct *tsk)
void free_css_id(struct cgroup_subsys *ss, struct cgroup_subsys_state *css);
struct cgroup_subsys_state *css_lookup(struct cgroup_subsys *ss, int id);
struct cgroup_subsys_state *css_get_next(struct cgroup_subsys *ss, int id,
struct cgroup_subsys_state *root, int *foundid);
bool css_is_ancestor(struct cgroup_subsys_state *cg,
const struct cgroup_subsys_state *root);
unsigned short css_id(struct cgroup_subsys_state *css);
unsigned short css_depth(struct cgroup_subsys_state *css);
struct cgroup_subsys_state *cgroup_css_from_dir(struct file *f, int id);
static inline int cgroup_init_early(void)
static inline int cgroup_init(void)
static inline void cgroup_fork(struct task_struct *p)
static inline void cgroup_fork_callbacks(struct task_struct *p)
static inline void cgroup_post_fork(struct task_struct *p)
static inline void cgroup_exit(struct task_struct *p, int callbacks)
static inline void cgroup_lock(void)
static inline void cgroup_unlock(void)
static inline int cgroupstats_build(struct cgroupstats *stats,
struct dentry *dentry)
static inline int cgroup_attach_task_all(struct task_struct *from,
struct task_struct *t)
static inline int cgroup_attach_task_current_cg(struct task_struct *t)
