struct o2dlm_private ;
static struct ocfs2_stack_plugin o2cb_stack;
#if (DLM_LOCK_IV != LKM_IVMODE)
# error Lock modes do not match
#if (DLM_LOCK_NL != LKM_NLMODE)
# error Lock modes do not match
#if (DLM_LOCK_CR != LKM_CRMODE)
# error Lock modes do not match
#if (DLM_LOCK_CW != LKM_CWMODE)
# error Lock modes do not match
#if (DLM_LOCK_PR != LKM_PRMODE)
# error Lock modes do not match
#if (DLM_LOCK_PW != LKM_PWMODE)
# error Lock modes do not match
#if (DLM_LOCK_EX != LKM_EXMODE)
# error Lock modes do not match
static inline int mode_to_o2dlm(int mode)
#define map_flag(_generic, _o2dlm)		\
if (flags & (_generic))
static int flags_to_o2dlm(u32 flags)
#undef map_flag
static int status_map[] = ;
static int dlm_status_to_errno(enum dlm_status status)
static void o2dlm_lock_ast_wrapper(void *astarg)
static void o2dlm_blocking_ast_wrapper(void *astarg, int level)
static void o2dlm_unlock_ast_wrapper(void *astarg, enum dlm_status status)
static int o2cb_dlm_lock(struct ocfs2_cluster_connection *conn,
int mode,
struct ocfs2_dlm_lksb *lksb,
u32 flags,
void *name,
unsigned int namelen)
static int o2cb_dlm_unlock(struct ocfs2_cluster_connection *conn,
struct ocfs2_dlm_lksb *lksb,
u32 flags)
static int o2cb_dlm_lock_status(struct ocfs2_dlm_lksb *lksb)
static int o2cb_dlm_lvb_valid(struct ocfs2_dlm_lksb *lksb)
static void *o2cb_dlm_lvb(struct ocfs2_dlm_lksb *lksb)
static void o2cb_dump_lksb(struct ocfs2_dlm_lksb *lksb)
static void o2dlm_eviction_cb(int node_num, void *data)
static int o2cb_cluster_connect(struct ocfs2_cluster_connection *conn)
static int o2cb_cluster_disconnect(struct ocfs2_cluster_connection *conn)
static int o2cb_cluster_this_node(unsigned int *node)
static struct ocfs2_stack_operations o2cb_stack_ops = ;
static struct ocfs2_stack_plugin o2cb_stack = ;
static int __init o2cb_stack_init(void)
static void __exit o2cb_stack_exit(void)
MODULE_AUTHOR("Oracle");
MODULE_DESCRIPTION("ocfs2 driver for the classic o2cb stack");
MODULE_LICENSE("GPL");
module_init(o2cb_stack_init);
module_exit(o2cb_stack_exit);
