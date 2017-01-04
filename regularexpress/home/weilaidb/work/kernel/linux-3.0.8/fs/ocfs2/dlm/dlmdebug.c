#define MLOG_MASK_PREFIX ML_DLM
static int stringify_lockname(const char *lockname, int locklen, char *buf,
int len);
void dlm_print_one_lock_resource(struct dlm_lock_resource *res)
static void dlm_print_lockres_refmap(struct dlm_lock_resource *res)
static void __dlm_print_lock(struct dlm_lock *lock)
void __dlm_print_one_lock_resource(struct dlm_lock_resource *res)
void dlm_print_one_lock(struct dlm_lock *lockid)
EXPORT_SYMBOL_GPL(dlm_print_one_lock);
static const char *dlm_errnames[] = ;
static const char *dlm_errmsgs[] = ;
const char *dlm_errmsg(enum dlm_status err)
EXPORT_SYMBOL_GPL(dlm_errmsg);
const char *dlm_errname(enum dlm_status err)
EXPORT_SYMBOL_GPL(dlm_errname);
static int stringify_lockname(const char *lockname, int locklen, char *buf,
int len)
static int stringify_nodemap(unsigned long *nodemap, int maxnodes,
char *buf, int len)
static int dump_mle(struct dlm_master_list_entry *mle, char *buf, int len)
void dlm_print_one_mle(struct dlm_master_list_entry *mle)
static struct dentry *dlm_debugfs_root = NULL;
#define DLM_DEBUGFS_DIR				"o2dlm"
#define DLM_DEBUGFS_DLM_STATE			"dlm_state"
#define DLM_DEBUGFS_LOCKING_STATE		"locking_state"
#define DLM_DEBUGFS_MLE_STATE			"mle_state"
#define DLM_DEBUGFS_PURGE_LIST			"purge_list"
static void dlm_debug_free(struct kref *kref)
static void dlm_debug_put(struct dlm_debug_ctxt *dc)
static void dlm_debug_get(struct dlm_debug_ctxt *dc)
static int debug_release(struct inode *inode, struct file *file)
static ssize_t debug_read(struct file *file, char __user *buf,
size_t nbytes, loff_t *ppos)
static int debug_purgelist_print(struct dlm_ctxt *dlm, char *buf, int len)
static int debug_purgelist_open(struct inode *inode, struct file *file)
static const struct file_operations debug_purgelist_fops = ;
static int debug_mle_print(struct dlm_ctxt *dlm, char *buf, int len)
static int debug_mle_open(struct inode *inode, struct file *file)
static const struct file_operations debug_mle_fops = ;
static int dump_lock(struct dlm_lock *lock, int list_type, char *buf, int len)
static int dump_lockres(struct dlm_lock_resource *res, char *buf, int len)
static void *lockres_seq_start(struct seq_file *m, loff_t *pos)
static void lockres_seq_stop(struct seq_file *m, void *v)
static void *lockres_seq_next(struct seq_file *m, void *v, loff_t *pos)
static int lockres_seq_show(struct seq_file *s, void *v)
static const struct seq_operations debug_lockres_ops = ;
static int debug_lockres_open(struct inode *inode, struct file *file)
static int debug_lockres_release(struct inode *inode, struct file *file)
static const struct file_operations debug_lockres_fops = ;
static int debug_state_print(struct dlm_ctxt *dlm, char *buf, int len)
static int debug_state_open(struct inode *inode, struct file *file)
static const struct file_operations debug_state_fops = ;
int dlm_debug_init(struct dlm_ctxt *dlm)
void dlm_debug_shutdown(struct dlm_ctxt *dlm)
int dlm_create_debugfs_subroot(struct dlm_ctxt *dlm)
void dlm_destroy_debugfs_subroot(struct dlm_ctxt *dlm)
int dlm_create_debugfs_root(void)
void dlm_destroy_debugfs_root(void)
