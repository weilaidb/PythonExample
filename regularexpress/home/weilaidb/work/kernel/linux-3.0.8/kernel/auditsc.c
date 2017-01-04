#define AUDIT_NAMES    20
#define AUDIT_NAME_FULL -1
#define MAX_EXECVE_AUDIT_LEN 7500
int audit_n_rules;
int audit_signals;
struct audit_cap_data ;
struct audit_names ;
struct audit_aux_data ;
#define AUDIT_AUX_IPCPERM	0
#define AUDIT_AUX_PIDS	16
struct audit_aux_data_execve ;
struct audit_aux_data_pids ;
struct audit_aux_data_bprm_fcaps ;
struct audit_aux_data_capset ;
struct audit_tree_refs ;
struct audit_context ;
static inline int open_arg(int flags, int mask)
static int audit_match_perm(struct audit_context *ctx, int mask)
static int audit_match_filetype(struct audit_context *ctx, int which)
static void audit_set_auditable(struct audit_context *ctx)
static int put_tree_ref(struct audit_context *ctx, struct audit_chunk *chunk)
static int grow_tree_refs(struct audit_context *ctx)
static void unroll_tree_refs(struct audit_context *ctx,
struct audit_tree_refs *p, int count)
static void free_tree_refs(struct audit_context *ctx)
static int match_tree_refs(struct audit_context *ctx, struct audit_tree *tree)
static int audit_filter_rules(struct task_struct *tsk,
struct audit_krule *rule,
struct audit_context *ctx,
struct audit_names *name,
enum audit_state *state,
bool task_creation)
static enum audit_state audit_filter_task(struct task_struct *tsk, char **key)
static enum audit_state audit_filter_syscall(struct task_struct *tsk,
struct audit_context *ctx,
struct list_head *list)
void audit_filter_inodes(struct task_struct *tsk, struct audit_context *ctx)
static inline struct audit_context *audit_get_context(struct task_struct *tsk,
int return_valid,
long return_code)
static inline void audit_free_names(struct audit_context *context)
static inline void audit_free_aux(struct audit_context *context)
static inline void audit_zero_context(struct audit_context *context,
enum audit_state state)
static inline struct audit_context *audit_alloc_context(enum audit_state state)
int audit_alloc(struct task_struct *tsk)
static inline void audit_free_context(struct audit_context *context)
void audit_log_task_context(struct audit_buffer *ab)
EXPORT_SYMBOL(audit_log_task_context);
static void audit_log_task_info(struct audit_buffer *ab, struct task_struct *tsk)
static int audit_log_pid_context(struct audit_context *context, pid_t pid,
uid_t auid, uid_t uid, unsigned int sessionid,
u32 sid, char *comm)
static int audit_log_single_execve_arg(struct audit_context *context,
struct audit_buffer **ab,
int arg_num,
size_t *len_sent,
const char __user *p,
char *buf)
static void audit_log_execve_info(struct audit_context *context,
struct audit_buffer **ab,
struct audit_aux_data_execve *axi)
static void audit_log_cap(struct audit_buffer *ab, char *prefix, kernel_cap_t *cap)
static void audit_log_fcaps(struct audit_buffer *ab, struct audit_names *name)
static void show_special(struct audit_context *context, int *call_panic)
static void audit_log_exit(struct audit_context *context, struct task_struct *tsk)
void audit_free(struct task_struct *tsk)
void audit_syscall_entry(int arch, int major,
unsigned long a1, unsigned long a2,
unsigned long a3, unsigned long a4)
void audit_finish_fork(struct task_struct *child)
void audit_syscall_exit(int valid, long return_code)
static inline void handle_one(const struct inode *inode)
static void handle_path(const struct dentry *dentry)
void __audit_getname(const char *name)
void audit_putname(const char *name)
static int audit_inc_name_count(struct audit_context *context,
const struct inode *inode)
static inline int audit_copy_fcaps(struct audit_names *name, const struct dentry *dentry)
static void audit_copy_inode(struct audit_names *name, const struct dentry *dentry,
const struct inode *inode)
void __audit_inode(const char *name, const struct dentry *dentry)
void __audit_inode_child(const struct dentry *dentry,
const struct inode *parent)
EXPORT_SYMBOL_GPL(__audit_inode_child);
int auditsc_get_stamp(struct audit_context *ctx,
struct timespec *t, unsigned int *serial)
static atomic_t session_id = ATOMIC_INIT(0);
int audit_set_loginuid(struct task_struct *task, uid_t loginuid)
void __audit_mq_open(int oflag, mode_t mode, struct mq_attr *attr)
void __audit_mq_sendrecv(mqd_t mqdes, size_t msg_len, unsigned int msg_prio,
const struct timespec *abs_timeout)
void __audit_mq_notify(mqd_t mqdes, const struct sigevent *notification)
void __audit_mq_getsetattr(mqd_t mqdes, struct mq_attr *mqstat)
void __audit_ipc_obj(struct kern_ipc_perm *ipcp)
void __audit_ipc_set_perm(unsigned long qbytes, uid_t uid, gid_t gid, mode_t mode)
int audit_bprm(struct linux_binprm *bprm)
void audit_socketcall(int nargs, unsigned long *args)
void __audit_fd_pair(int fd1, int fd2)
int audit_sockaddr(int len, void *a)
void __audit_ptrace(struct task_struct *t)
int __audit_signal_info(int sig, struct task_struct *t)
int __audit_log_bprm_fcaps(struct linux_binprm *bprm,
const struct cred *new, const struct cred *old)
void __audit_log_capset(pid_t pid,
const struct cred *new, const struct cred *old)
void __audit_mmap_fd(int fd, int flags)
void audit_core_dumps(long signr)
struct list_head *audit_killed_trees(void)
