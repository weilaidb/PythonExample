static DEFINE_MUTEX(cgroup_mutex);
#define SUBSYS(_x) &_x ## _subsys,
static struct cgroup_subsys *subsys[CGROUP_SUBSYS_COUNT] = ;
#define MAX_CGROUP_ROOT_NAMELEN 64
struct cgroupfs_root ;
static struct cgroupfs_root rootnode;
#define CSS_ID_MAX	(65535)
struct css_id ;
struct cgroup_event ;
static LIST_HEAD(roots);
static int root_count;
static DEFINE_IDA(hierarchy_ida);
static int next_hierarchy_id;
static DEFINE_SPINLOCK(hierarchy_id_lock);
#define dummytop (&rootnode.top_cgroup)
static int need_forkexit_callback __read_mostly;
int cgroup_lock_is_held(void)
int cgroup_lock_is_held(void)
EXPORT_SYMBOL_GPL(cgroup_lock_is_held);
inline int cgroup_is_removed(const struct cgroup *cgrp)
enum ;
static int cgroup_is_releasable(const struct cgroup *cgrp)
static int notify_on_release(const struct cgroup *cgrp)
static int clone_children(const struct cgroup *cgrp)
#define for_each_subsys(_root, _ss) \
list_for_each_entry(_ss, &_root->subsys_list, sibling)
#define for_each_active_root(_root) \
list_for_each_entry(_root, &roots, root_list)
static LIST_HEAD(release_list);
static DEFINE_SPINLOCK(release_list_lock);
static void cgroup_release_agent(struct work_struct *work);
static DECLARE_WORK(release_agent_work, cgroup_release_agent);
static void check_for_release(struct cgroup *cgrp);
struct cg_cgroup_link ;
static struct css_set init_css_set;
static struct cg_cgroup_link init_css_set_link;
static int cgroup_init_idr(struct cgroup_subsys *ss,
struct cgroup_subsys_state *css);
static DEFINE_RWLOCK(css_set_lock);
static int css_set_count;
#define CSS_SET_HASH_BITS	7
#define CSS_SET_TABLE_SIZE	(1 << CSS_SET_HASH_BITS)
static struct hlist_head css_set_table[CSS_SET_TABLE_SIZE];
static struct hlist_head *css_set_hash(struct cgroup_subsys_state *css[])
static int use_task_css_set_links __read_mostly;
static void __put_css_set(struct css_set *cg, int taskexit)
static inline void get_css_set(struct css_set *cg)
static inline void put_css_set(struct css_set *cg)
static inline void put_css_set_taskexit(struct css_set *cg)
static bool compare_css_sets(struct css_set *cg,
struct css_set *old_cg,
struct cgroup *new_cgrp,
struct cgroup_subsys_state *template[])
static struct css_set *find_existing_css_set(
struct css_set *oldcg,
struct cgroup *cgrp,
struct cgroup_subsys_state *template[])
static void free_cg_links(struct list_head *tmp)
static int allocate_cg_links(int count, struct list_head *tmp)
static void link_css_set(struct list_head *tmp_cg_links,
struct css_set *cg, struct cgroup *cgrp)
static struct css_set *find_css_set(
struct css_set *oldcg, struct cgroup *cgrp)
static struct cgroup *task_cgroup_from_root(struct task_struct *task,
struct cgroupfs_root *root)
void cgroup_lock(void)
EXPORT_SYMBOL_GPL(cgroup_lock);
void cgroup_unlock(void)
EXPORT_SYMBOL_GPL(cgroup_unlock);
static int cgroup_mkdir(struct inode *dir, struct dentry *dentry, int mode);
static struct dentry *cgroup_lookup(struct inode *, struct dentry *, struct nameidata *);
static int cgroup_rmdir(struct inode *unused_dir, struct dentry *dentry);
static int cgroup_populate_dir(struct cgroup *cgrp);
static const struct inode_operations cgroup_dir_inode_operations;
static const struct file_operations proc_cgroupstats_operations;
static struct backing_dev_info cgroup_backing_dev_info = ;
static int alloc_css_id(struct cgroup_subsys *ss,
struct cgroup *parent, struct cgroup *child);
static struct inode *cgroup_new_inode(mode_t mode, struct super_block *sb)
static int cgroup_call_pre_destroy(struct cgroup *cgrp)
static void cgroup_diput(struct dentry *dentry, struct inode *inode)
static int cgroup_delete(const struct dentry *d)
static void remove_dir(struct dentry *d)
static void cgroup_clear_directory(struct dentry *dentry)
static void cgroup_d_remove_dir(struct dentry *dentry)
DECLARE_WAIT_QUEUE_HEAD(cgroup_rmdir_waitq);
static void cgroup_wakeup_rmdir_waiter(struct cgroup *cgrp)
void cgroup_exclude_rmdir(struct cgroup_subsys_state *css)
void cgroup_release_and_wakeup_rmdir(struct cgroup_subsys_state *css)
static int rebind_subsystems(struct cgroupfs_root *root,
unsigned long final_bits)
static int cgroup_show_options(struct seq_file *seq, struct vfsmount *vfs)
struct cgroup_sb_opts ;
static int parse_cgroupfs_options(char *data, struct cgroup_sb_opts *opts)
static void drop_parsed_module_refcounts(unsigned long subsys_bits)
static int cgroup_remount(struct super_block *sb, int *flags, char *data)
static const struct super_operations cgroup_ops = ;
static void init_cgroup_housekeeping(struct cgroup *cgrp)
static void init_cgroup_root(struct cgroupfs_root *root)
static bool init_root_id(struct cgroupfs_root *root)
static int cgroup_test_super(struct super_block *sb, void *data)
static struct cgroupfs_root *cgroup_root_from_opts(struct cgroup_sb_opts *opts)
static void cgroup_drop_root(struct cgroupfs_root *root)
static int cgroup_set_super(struct super_block *sb, void *data)
static int cgroup_get_rootdir(struct super_block *sb)
static struct dentry *cgroup_mount(struct file_system_type *fs_type,
int flags, const char *unused_dev_name,
void *data)
static void cgroup_kill_sb(struct super_block *sb)
static struct file_system_type cgroup_fs_type = ;
static struct kobject *cgroup_kobj;
static inline struct cgroup *__d_cgrp(struct dentry *dentry)
static inline struct cftype *__d_cft(struct dentry *dentry)
int cgroup_path(const struct cgroup *cgrp, char *buf, int buflen)
EXPORT_SYMBOL_GPL(cgroup_path);
static int cgroup_task_migrate(struct cgroup *cgrp, struct cgroup *oldcgrp,
struct task_struct *tsk, bool guarantee)
int cgroup_attach_task(struct cgroup *cgrp, struct task_struct *tsk)
int cgroup_attach_task_all(struct task_struct *from, struct task_struct *tsk)
EXPORT_SYMBOL_GPL(cgroup_attach_task_all);
struct cg_list_entry ;
static bool css_set_check_fetched(struct cgroup *cgrp,
struct task_struct *tsk, struct css_set *cg,
struct list_head *newcg_list)
static int css_set_prefetch(struct cgroup *cgrp, struct css_set *cg,
struct list_head *newcg_list)
int cgroup_attach_proc(struct cgroup *cgrp, struct task_struct *leader)
static int attach_task_by_pid(struct cgroup *cgrp, u64 pid, bool threadgroup)
static int cgroup_tasks_write(struct cgroup *cgrp, struct cftype *cft, u64 pid)
static int cgroup_procs_write(struct cgroup *cgrp, struct cftype *cft, u64 tgid)
bool cgroup_lock_live_group(struct cgroup *cgrp)
EXPORT_SYMBOL_GPL(cgroup_lock_live_group);
static int cgroup_release_agent_write(struct cgroup *cgrp, struct cftype *cft,
const char *buffer)
static int cgroup_release_agent_show(struct cgroup *cgrp, struct cftype *cft,
struct seq_file *seq)
#define CGROUP_LOCAL_BUFFER_SIZE 64
static ssize_t cgroup_write_X64(struct cgroup *cgrp, struct cftype *cft,
struct file *file,
const char __user *userbuf,
size_t nbytes, loff_t *unused_ppos)
static ssize_t cgroup_write_string(struct cgroup *cgrp, struct cftype *cft,
struct file *file,
const char __user *userbuf,
size_t nbytes, loff_t *unused_ppos)
static ssize_t cgroup_file_write(struct file *file, const char __user *buf,
size_t nbytes, loff_t *ppos)
static ssize_t cgroup_read_u64(struct cgroup *cgrp, struct cftype *cft,
struct file *file,
char __user *buf, size_t nbytes,
loff_t *ppos)
static ssize_t cgroup_read_s64(struct cgroup *cgrp, struct cftype *cft,
struct file *file,
char __user *buf, size_t nbytes,
loff_t *ppos)
static ssize_t cgroup_file_read(struct file *file, char __user *buf,
size_t nbytes, loff_t *ppos)
struct cgroup_seqfile_state ;
static int cgroup_map_add(struct cgroup_map_cb *cb, const char *key, u64 value)
static int cgroup_seqfile_show(struct seq_file *m, void *arg)
static int cgroup_seqfile_release(struct inode *inode, struct file *file)
static const struct file_operations cgroup_seqfile_operations = ;
static int cgroup_file_open(struct inode *inode, struct file *file)
static int cgroup_file_release(struct inode *inode, struct file *file)
static int cgroup_rename(struct inode *old_dir, struct dentry *old_dentry,
struct inode *new_dir, struct dentry *new_dentry)
static const struct file_operations cgroup_file_operations = ;
static const struct inode_operations cgroup_dir_inode_operations = ;
static struct dentry *cgroup_lookup(struct inode *dir, struct dentry *dentry, struct nameidata *nd)
static inline struct cftype *__file_cft(struct file *file)
static int cgroup_create_file(struct dentry *dentry, mode_t mode,
struct super_block *sb)
static int cgroup_create_dir(struct cgroup *cgrp, struct dentry *dentry,
mode_t mode)
static mode_t cgroup_file_mode(const struct cftype *cft)
int cgroup_add_file(struct cgroup *cgrp,
struct cgroup_subsys *subsys,
const struct cftype *cft)
EXPORT_SYMBOL_GPL(cgroup_add_file);
int cgroup_add_files(struct cgroup *cgrp,
struct cgroup_subsys *subsys,
const struct cftype cft[],
int count)
EXPORT_SYMBOL_GPL(cgroup_add_files);
int cgroup_task_count(const struct cgroup *cgrp)
static void cgroup_advance_iter(struct cgroup *cgrp,
struct cgroup_iter *it)
static void cgroup_enable_task_cg_lists(void)
void cgroup_iter_start(struct cgroup *cgrp, struct cgroup_iter *it)
struct task_struct *cgroup_iter_next(struct cgroup *cgrp,
struct cgroup_iter *it)
void cgroup_iter_end(struct cgroup *cgrp, struct cgroup_iter *it)
static inline int started_after_time(struct task_struct *t1,
struct timespec *time,
struct task_struct *t2)
static inline int started_after(void *p1, void *p2)
int cgroup_scan_tasks(struct cgroup_scanner *scan)
#define PIDLIST_TOO_LARGE(c) ((c) * sizeof(pid_t) > (PAGE_SIZE * 2))
static void *pidlist_allocate(int count)
static void pidlist_free(void *p)
static void *pidlist_resize(void *p, int newcount)
#define PIDLIST_REALLOC_DIFFERENCE(old, new) ((old) - PAGE_SIZE >= (new))
static int pidlist_uniq(pid_t **p, int length)
static int cmppid(const void *a, const void *b)
static struct cgroup_pidlist *cgroup_pidlist_find(struct cgroup *cgrp,
enum cgroup_filetype type)
static int pidlist_array_load(struct cgroup *cgrp, enum cgroup_filetype type,
struct cgroup_pidlist **lp)
int cgroupstats_build(struct cgroupstats *stats, struct dentry *dentry)
static void *cgroup_pidlist_start(struct seq_file *s, loff_t *pos)
static void cgroup_pidlist_stop(struct seq_file *s, void *v)
static void *cgroup_pidlist_next(struct seq_file *s, void *v, loff_t *pos)
static int cgroup_pidlist_show(struct seq_file *s, void *v)
static const struct seq_operations cgroup_pidlist_seq_operations = ;
static void cgroup_release_pid_array(struct cgroup_pidlist *l)
static int cgroup_pidlist_release(struct inode *inode, struct file *file)
static const struct file_operations cgroup_pidlist_operations = ;
static int cgroup_pidlist_open(struct file *file, enum cgroup_filetype type)
static int cgroup_tasks_open(struct inode *unused, struct file *file)
static int cgroup_procs_open(struct inode *unused, struct file *file)
static u64 cgroup_read_notify_on_release(struct cgroup *cgrp,
struct cftype *cft)
static int cgroup_write_notify_on_release(struct cgroup *cgrp,
struct cftype *cft,
u64 val)
static void cgroup_event_remove(struct work_struct *work)
static int cgroup_event_wake(wait_queue_t *wait, unsigned mode,
int sync, void *key)
static void cgroup_event_ptable_queue_proc(struct file *file,
wait_queue_head_t *wqh, poll_table *pt)
static int cgroup_write_event_control(struct cgroup *cgrp, struct cftype *cft,
const char *buffer)
static u64 cgroup_clone_children_read(struct cgroup *cgrp,
struct cftype *cft)
static int cgroup_clone_children_write(struct cgroup *cgrp,
struct cftype *cft,
u64 val)
#define CGROUP_FILE_GENERIC_PREFIX "cgroup."
static struct cftype files[] = ;
static struct cftype cft_release_agent = ;
static int cgroup_populate_dir(struct cgroup *cgrp)
static void init_cgroup_css(struct cgroup_subsys_state *css,
struct cgroup_subsys *ss,
struct cgroup *cgrp)
static void cgroup_lock_hierarchy(struct cgroupfs_root *root)
static void cgroup_unlock_hierarchy(struct cgroupfs_root *root)
static long cgroup_create(struct cgroup *parent, struct dentry *dentry,
mode_t mode)
static int cgroup_mkdir(struct inode *dir, struct dentry *dentry, int mode)
static int cgroup_has_css_refs(struct cgroup *cgrp)
static int cgroup_clear_css_refs(struct cgroup *cgrp)
static int cgroup_rmdir(struct inode *unused_dir, struct dentry *dentry)
static void __init cgroup_init_subsys(struct cgroup_subsys *ss)
int __init_or_module cgroup_load_subsys(struct cgroup_subsys *ss)
EXPORT_SYMBOL_GPL(cgroup_load_subsys);
void cgroup_unload_subsys(struct cgroup_subsys *ss)
EXPORT_SYMBOL_GPL(cgroup_unload_subsys);
int __init cgroup_init_early(void)
int __init cgroup_init(void)
static int proc_cgroup_show(struct seq_file *m, void *v)
static int cgroup_open(struct inode *inode, struct file *file)
const struct file_operations proc_cgroup_operations = ;
static int proc_cgroupstats_show(struct seq_file *m, void *v)
static int cgroupstats_open(struct inode *inode, struct file *file)
static const struct file_operations proc_cgroupstats_operations = ;
void cgroup_fork(struct task_struct *child)
void cgroup_fork_callbacks(struct task_struct *child)
void cgroup_post_fork(struct task_struct *child)
void cgroup_exit(struct task_struct *tsk, int run_callbacks)
int cgroup_is_descendant(const struct cgroup *cgrp, struct task_struct *task)
static void check_for_release(struct cgroup *cgrp)
void __css_put(struct cgroup_subsys_state *css, int count)
EXPORT_SYMBOL_GPL(__css_put);
static void cgroup_release_agent(struct work_struct *work)
static int __init cgroup_disable(char *str)
__setup("cgroup_disable=", cgroup_disable);
unsigned short css_id(struct cgroup_subsys_state *css)
EXPORT_SYMBOL_GPL(css_id);
unsigned short css_depth(struct cgroup_subsys_state *css)
EXPORT_SYMBOL_GPL(css_depth);
bool css_is_ancestor(struct cgroup_subsys_state *child,
const struct cgroup_subsys_state *root)
void free_css_id(struct cgroup_subsys *ss, struct cgroup_subsys_state *css)
EXPORT_SYMBOL_GPL(free_css_id);
static struct css_id *get_new_cssid(struct cgroup_subsys *ss, int depth)
static int __init_or_module cgroup_init_idr(struct cgroup_subsys *ss,
struct cgroup_subsys_state *rootcss)
static int alloc_css_id(struct cgroup_subsys *ss, struct cgroup *parent,
struct cgroup *child)
struct cgroup_subsys_state *css_lookup(struct cgroup_subsys *ss, int id)
EXPORT_SYMBOL_GPL(css_lookup);
struct cgroup_subsys_state *
css_get_next(struct cgroup_subsys *ss, int id,
struct cgroup_subsys_state *root, int *foundid)
struct cgroup_subsys_state *cgroup_css_from_dir(struct file *f, int id)
static struct cgroup_subsys_state *debug_create(struct cgroup_subsys *ss,
struct cgroup *cont)
static void debug_destroy(struct cgroup_subsys *ss, struct cgroup *cont)
static u64 cgroup_refcount_read(struct cgroup *cont, struct cftype *cft)
static u64 debug_taskcount_read(struct cgroup *cont, struct cftype *cft)
static u64 current_css_set_read(struct cgroup *cont, struct cftype *cft)
static u64 current_css_set_refcount_read(struct cgroup *cont,
struct cftype *cft)
static int current_css_set_cg_links_read(struct cgroup *cont,
struct cftype *cft,
struct seq_file *seq)
#define MAX_TASKS_SHOWN_PER_CSS 25
static int cgroup_css_links_read(struct cgroup *cont,
struct cftype *cft,
struct seq_file *seq)
static u64 releasable_read(struct cgroup *cgrp, struct cftype *cft)
static struct cftype debug_files[] =  ;
static int debug_populate(struct cgroup_subsys *ss, struct cgroup *cont)
struct cgroup_subsys debug_subsys = ;
