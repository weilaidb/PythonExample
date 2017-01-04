struct pid_entry ;
#define NOD(NAME, MODE, IOP, FOP, OP)
#define DIR(NAME, MODE, iops, fops)	\
NOD(NAME, (S_IFDIR|(MODE)), &iops, &fops,  )
#define LNK(NAME, get_link)					\
NOD(NAME, (S_IFLNK|S_IRWXUGO),				\
&proc_pid_link_inode_operations, NULL,		\
)
#define REG(NAME, MODE, fops)				\
NOD(NAME, (S_IFREG|(MODE)), NULL, &fops, )
#define INF(NAME, MODE, read)				\
NOD(NAME, (S_IFREG|(MODE)), 			\
NULL, &proc_info_file_operations,	\
)
#define ONE(NAME, MODE, show)				\
NOD(NAME, (S_IFREG|(MODE)), 			\
NULL, &proc_single_file_operations,	\
)
static unsigned int pid_entry_count_dirs(const struct pid_entry *entries,
unsigned int n)
static int get_task_root(struct task_struct *task, struct path *root)
static int proc_cwd_link(struct inode *inode, struct path *path)
static int proc_root_link(struct inode *inode, struct path *path)
static struct mm_struct *__check_mem_permission(struct task_struct *task)
static struct mm_struct *check_mem_permission(struct task_struct *task)
struct mm_struct *mm_for_maps(struct task_struct *task)
static int proc_pid_cmdline(struct task_struct *task, char * buffer)
static int proc_pid_auxv(struct task_struct *task, char *buffer)
static int proc_pid_wchan(struct task_struct *task, char *buffer)
static int lock_trace(struct task_struct *task)
static void unlock_trace(struct task_struct *task)
#define MAX_STACK_TRACE_DEPTH	64
static int proc_pid_stack(struct seq_file *m, struct pid_namespace *ns,
struct pid *pid, struct task_struct *task)
static int proc_pid_schedstat(struct task_struct *task, char *buffer)
static int lstats_show_proc(struct seq_file *m, void *v)
static int lstats_open(struct inode *inode, struct file *file)
static ssize_t lstats_write(struct file *file, const char __user *buf,
size_t count, loff_t *offs)
static const struct file_operations proc_lstats_operations = ;
static int proc_oom_score(struct task_struct *task, char *buffer)
struct limit_names ;
static const struct limit_names lnames[RLIM_NLIMITS] = ;
static int proc_pid_limits(struct task_struct *task, char *buffer)
static int proc_pid_syscall(struct task_struct *task, char *buffer)
static int proc_fd_access_allowed(struct inode *inode)
int proc_setattr(struct dentry *dentry, struct iattr *attr)
static const struct inode_operations proc_def_inode_operations = ;
static int mounts_open_common(struct inode *inode, struct file *file,
const struct seq_operations *op)
static int mounts_release(struct inode *inode, struct file *file)
static unsigned mounts_poll(struct file *file, poll_table *wait)
static int mounts_open(struct inode *inode, struct file *file)
static const struct file_operations proc_mounts_operations = ;
static int mountinfo_open(struct inode *inode, struct file *file)
static const struct file_operations proc_mountinfo_operations = ;
static int mountstats_open(struct inode *inode, struct file *file)
static const struct file_operations proc_mountstats_operations = ;
#define PROC_BLOCK_SIZE	(3*1024)
static ssize_t proc_info_read(struct file * file, char __user * buf,
size_t count, loff_t *ppos)
static const struct file_operations proc_info_file_operations = ;
static int proc_single_show(struct seq_file *m, void *v)
static int proc_single_open(struct inode *inode, struct file *filp)
static const struct file_operations proc_single_file_operations = ;
static int mem_open(struct inode* inode, struct file* file)
static ssize_t mem_read(struct file * file, char __user * buf,
size_t count, loff_t *ppos)
static ssize_t mem_write(struct file * file, const char __user *buf,
size_t count, loff_t *ppos)
loff_t mem_lseek(struct file *file, loff_t offset, int orig)
static const struct file_operations proc_mem_operations = ;
static ssize_t environ_read(struct file *file, char __user *buf,
size_t count, loff_t *ppos)
static const struct file_operations proc_environ_operations = ;
static ssize_t oom_adjust_read(struct file *file, char __user *buf,
size_t count, loff_t *ppos)
static ssize_t oom_adjust_write(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
static const struct file_operations proc_oom_adjust_operations = ;
static ssize_t oom_score_adj_read(struct file *file, char __user *buf,
size_t count, loff_t *ppos)
static ssize_t oom_score_adj_write(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
static const struct file_operations proc_oom_score_adj_operations = ;
#define TMPBUFLEN 21
static ssize_t proc_loginuid_read(struct file * file, char __user * buf,
size_t count, loff_t *ppos)
static ssize_t proc_loginuid_write(struct file * file, const char __user * buf,
size_t count, loff_t *ppos)
static const struct file_operations proc_loginuid_operations = ;
static ssize_t proc_sessionid_read(struct file * file, char __user * buf,
size_t count, loff_t *ppos)
static const struct file_operations proc_sessionid_operations = ;
static ssize_t proc_fault_inject_read(struct file * file, char __user * buf,
size_t count, loff_t *ppos)
static ssize_t proc_fault_inject_write(struct file * file,
const char __user * buf, size_t count, loff_t *ppos)
static const struct file_operations proc_fault_inject_operations = ;
static int sched_show(struct seq_file *m, void *v)
static ssize_t
sched_write(struct file *file, const char __user *buf,
size_t count, loff_t *offset)
static int sched_open(struct inode *inode, struct file *filp)
static const struct file_operations proc_pid_sched_operations = ;
static int sched_autogroup_show(struct seq_file *m, void *v)
static ssize_t
sched_autogroup_write(struct file *file, const char __user *buf,
size_t count, loff_t *offset)
static int sched_autogroup_open(struct inode *inode, struct file *filp)
static const struct file_operations proc_pid_sched_autogroup_operations = ;
static ssize_t comm_write(struct file *file, const char __user *buf,
size_t count, loff_t *offset)
static int comm_show(struct seq_file *m, void *v)
static int comm_open(struct inode *inode, struct file *filp)
static const struct file_operations proc_pid_set_comm_operations = ;
static int proc_exe_link(struct inode *inode, struct path *exe_path)
static void *proc_pid_follow_link(struct dentry *dentry, struct nameidata *nd)
static int do_proc_readlink(struct path *path, char __user *buffer, int buflen)
static int proc_pid_readlink(struct dentry * dentry, char __user * buffer, int buflen)
static const struct inode_operations proc_pid_link_inode_operations = ;
static int task_dumpable(struct task_struct *task)
struct inode *proc_pid_make_inode(struct super_block * sb, struct task_struct *task)
int pid_getattr(struct vfsmount *mnt, struct dentry *dentry, struct kstat *stat)
int pid_revalidate(struct dentry *dentry, struct nameidata *nd)
static int pid_delete_dentry(const struct dentry * dentry)
const struct dentry_operations pid_dentry_operations =
;
int proc_fill_cache(struct file *filp, void *dirent, filldir_t filldir,
const char *name, int len,
instantiate_t instantiate, struct task_struct *task, const void *ptr)
static unsigned name_to_int(struct dentry *dentry)
#define PROC_FDINFO_MAX 64
static int proc_fd_info(struct inode *inode, struct path *path, char *info)
static int proc_fd_link(struct inode *inode, struct path *path)
static int tid_fd_revalidate(struct dentry *dentry, struct nameidata *nd)
static const struct dentry_operations tid_fd_dentry_operations =
;
static struct dentry *proc_fd_instantiate(struct inode *dir,
struct dentry *dentry, struct task_struct *task, const void *ptr)
static struct dentry *proc_lookupfd_common(struct inode *dir,
struct dentry *dentry,
instantiate_t instantiate)
static int proc_readfd_common(struct file * filp, void * dirent,
filldir_t filldir, instantiate_t instantiate)
static struct dentry *proc_lookupfd(struct inode *dir, struct dentry *dentry,
struct nameidata *nd)
static int proc_readfd(struct file *filp, void *dirent, filldir_t filldir)
static ssize_t proc_fdinfo_read(struct file *file, char __user *buf,
size_t len, loff_t *ppos)
static const struct file_operations proc_fdinfo_file_operations = ;
static const struct file_operations proc_fd_operations = ;
static int proc_fd_permission(struct inode *inode, int mask, unsigned int flags)
static const struct inode_operations proc_fd_inode_operations = ;
static struct dentry *proc_fdinfo_instantiate(struct inode *dir,
struct dentry *dentry, struct task_struct *task, const void *ptr)
static struct dentry *proc_lookupfdinfo(struct inode *dir,
struct dentry *dentry,
struct nameidata *nd)
static int proc_readfdinfo(struct file *filp, void *dirent, filldir_t filldir)
static const struct file_operations proc_fdinfo_operations = ;
static const struct inode_operations proc_fdinfo_inode_operations = ;
static struct dentry *proc_pident_instantiate(struct inode *dir,
struct dentry *dentry, struct task_struct *task, const void *ptr)
static struct dentry *proc_pident_lookup(struct inode *dir,
struct dentry *dentry,
const struct pid_entry *ents,
unsigned int nents)
static int proc_pident_fill_cache(struct file *filp, void *dirent,
filldir_t filldir, struct task_struct *task, const struct pid_entry *p)
static int proc_pident_readdir(struct file *filp,
void *dirent, filldir_t filldir,
const struct pid_entry *ents, unsigned int nents)
static ssize_t proc_pid_attr_read(struct file * file, char __user * buf,
size_t count, loff_t *ppos)
static ssize_t proc_pid_attr_write(struct file * file, const char __user * buf,
size_t count, loff_t *ppos)
static const struct file_operations proc_pid_attr_operations = ;
static const struct pid_entry attr_dir_stuff[] = ;
static int proc_attr_dir_readdir(struct file * filp,
void * dirent, filldir_t filldir)
static const struct file_operations proc_attr_dir_operations = ;
static struct dentry *proc_attr_dir_lookup(struct inode *dir,
struct dentry *dentry, struct nameidata *nd)
static const struct inode_operations proc_attr_dir_inode_operations = ;
static ssize_t proc_coredump_filter_read(struct file *file, char __user *buf,
size_t count, loff_t *ppos)
static ssize_t proc_coredump_filter_write(struct file *file,
const char __user *buf,
size_t count,
loff_t *ppos)
static const struct file_operations proc_coredump_filter_operations = ;
static int proc_self_readlink(struct dentry *dentry, char __user *buffer,
int buflen)
static void *proc_self_follow_link(struct dentry *dentry, struct nameidata *nd)
static void proc_self_put_link(struct dentry *dentry, struct nameidata *nd,
void *cookie)
static const struct inode_operations proc_self_inode_operations = ;
static const struct pid_entry proc_base_stuff[] = ;
static struct dentry *proc_base_instantiate(struct inode *dir,
struct dentry *dentry, struct task_struct *task, const void *ptr)
static struct dentry *proc_base_lookup(struct inode *dir, struct dentry *dentry)
static int proc_base_fill_cache(struct file *filp, void *dirent,
filldir_t filldir, struct task_struct *task, const struct pid_entry *p)
static int do_io_accounting(struct task_struct *task, char *buffer, int whole)
static int proc_tid_io_accounting(struct task_struct *task, char *buffer)
static int proc_tgid_io_accounting(struct task_struct *task, char *buffer)
static int proc_pid_personality(struct seq_file *m, struct pid_namespace *ns,
struct pid *pid, struct task_struct *task)
static const struct file_operations proc_task_operations;
static const struct inode_operations proc_task_inode_operations;
static const struct pid_entry tgid_base_stuff[] = ;
static int proc_tgid_base_readdir(struct file * filp,
void * dirent, filldir_t filldir)
static const struct file_operations proc_tgid_base_operations = ;
static struct dentry *proc_tgid_base_lookup(struct inode *dir, struct dentry *dentry, struct nameidata *nd)
static const struct inode_operations proc_tgid_base_inode_operations = ;
static void proc_flush_task_mnt(struct vfsmount *mnt, pid_t pid, pid_t tgid)
void proc_flush_task(struct task_struct *task)
static struct dentry *proc_pid_instantiate(struct inode *dir,
struct dentry * dentry,
struct task_struct *task, const void *ptr)
struct dentry *proc_pid_lookup(struct inode *dir, struct dentry * dentry, struct nameidata *nd)
struct tgid_iter ;
static struct tgid_iter next_tgid(struct pid_namespace *ns, struct tgid_iter iter)
#define TGID_OFFSET (FIRST_PROCESS_ENTRY + ARRAY_SIZE(proc_base_stuff))
static int proc_pid_fill_cache(struct file *filp, void *dirent, filldir_t filldir,
struct tgid_iter iter)
int proc_pid_readdir(struct file * filp, void * dirent, filldir_t filldir)
static const struct pid_entry tid_base_stuff[] = ;
static int proc_tid_base_readdir(struct file * filp,
void * dirent, filldir_t filldir)
static struct dentry *proc_tid_base_lookup(struct inode *dir, struct dentry *dentry, struct nameidata *nd)
static const struct file_operations proc_tid_base_operations = ;
static const struct inode_operations proc_tid_base_inode_operations = ;
static struct dentry *proc_task_instantiate(struct inode *dir,
struct dentry *dentry, struct task_struct *task, const void *ptr)
static struct dentry *proc_task_lookup(struct inode *dir, struct dentry * dentry, struct nameidata *nd)
static struct task_struct *first_tid(struct task_struct *leader,
int tid, int nr, struct pid_namespace *ns)
static struct task_struct *next_tid(struct task_struct *start)
static int proc_task_fill_cache(struct file *filp, void *dirent, filldir_t filldir,
struct task_struct *task, int tid)
static int proc_task_readdir(struct file * filp, void * dirent, filldir_t filldir)
static int proc_task_getattr(struct vfsmount *mnt, struct dentry *dentry, struct kstat *stat)
static const struct inode_operations proc_task_inode_operations = ;
static const struct file_operations proc_task_operations = ;
