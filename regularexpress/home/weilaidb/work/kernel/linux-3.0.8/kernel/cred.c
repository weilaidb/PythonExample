static struct kmem_cache *cred_jar;
static struct thread_group_cred init_tgcred = ;
struct cred init_cred = ;
static inline void set_cred_subscribers(struct cred *cred, int n)
static inline int read_cred_subscribers(const struct cred *cred)
static inline void alter_cred_subscribers(const struct cred *_cred, int n)
static void release_tgcred_rcu(struct rcu_head *rcu)
static void release_tgcred(struct cred *cred)
static void put_cred_rcu(struct rcu_head *rcu)
void __put_cred(struct cred *cred)
EXPORT_SYMBOL(__put_cred);
void exit_creds(struct task_struct *tsk)
const struct cred *get_task_cred(struct task_struct *task)
struct cred *cred_alloc_blank(void)
struct cred *prepare_creds(void)
EXPORT_SYMBOL(prepare_creds);
struct cred *prepare_exec_creds(void)
int copy_creds(struct task_struct *p, unsigned long clone_flags)
int commit_creds(struct cred *new)
EXPORT_SYMBOL(commit_creds);
void abort_creds(struct cred *new)
EXPORT_SYMBOL(abort_creds);
const struct cred *override_creds(const struct cred *new)
EXPORT_SYMBOL(override_creds);
void revert_creds(const struct cred *old)
EXPORT_SYMBOL(revert_creds);
void __init cred_init(void)
struct cred *prepare_kernel_cred(struct task_struct *daemon)
EXPORT_SYMBOL(prepare_kernel_cred);
int set_security_override(struct cred *new, u32 secid)
EXPORT_SYMBOL(set_security_override);
int set_security_override_from_ctx(struct cred *new, const char *secctx)
EXPORT_SYMBOL(set_security_override_from_ctx);
int set_create_files_as(struct cred *new, struct inode *inode)
EXPORT_SYMBOL(set_create_files_as);
bool creds_are_invalid(const struct cred *cred)
EXPORT_SYMBOL(creds_are_invalid);
static void dump_invalid_creds(const struct cred *cred, const char *label,
const struct task_struct *tsk)
void __invalid_creds(const struct cred *cred, const char *file, unsigned line)
EXPORT_SYMBOL(__invalid_creds);
void __validate_process_creds(struct task_struct *tsk,
const char *file, unsigned line)
EXPORT_SYMBOL(__validate_process_creds);
void validate_creds_for_do_exit(struct task_struct *tsk)
