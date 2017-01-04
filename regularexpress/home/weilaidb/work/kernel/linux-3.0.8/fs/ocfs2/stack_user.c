#define OCFS2_CONTROL_PROTO			"T01\n"
#define OCFS2_CONTROL_PROTO_LEN			4
#define OCFS2_CONTROL_HANDSHAKE_INVALID		(0)
#define OCFS2_CONTROL_HANDSHAKE_READ		(1)
#define OCFS2_CONTROL_HANDSHAKE_PROTOCOL	(2)
#define OCFS2_CONTROL_HANDSHAKE_VALID		(3)
#define OCFS2_CONTROL_MESSAGE_OP_LEN		4
#define OCFS2_CONTROL_MESSAGE_SETNODE_OP	"SETN"
#define OCFS2_CONTROL_MESSAGE_SETNODE_TOTAL_LEN	14
#define OCFS2_CONTROL_MESSAGE_SETVERSION_OP	"SETV"
#define OCFS2_CONTROL_MESSAGE_SETVERSION_TOTAL_LEN	11
#define OCFS2_CONTROL_MESSAGE_DOWN_OP		"DOWN"
#define OCFS2_CONTROL_MESSAGE_DOWN_TOTAL_LEN	47
#define OCFS2_TEXT_UUID_LEN			32
#define OCFS2_CONTROL_MESSAGE_VERNUM_LEN	2
#define OCFS2_CONTROL_MESSAGE_NODENUM_LEN	8
struct ocfs2_live_connection ;
struct ocfs2_control_private ;
struct ocfs2_control_message_setn ;
struct ocfs2_control_message_setv ;
struct ocfs2_control_message_down ;
union ocfs2_control_message ;
static struct ocfs2_stack_plugin ocfs2_user_plugin;
static atomic_t ocfs2_control_opened;
static int ocfs2_control_this_node = -1;
static struct ocfs2_protocol_version running_proto;
static LIST_HEAD(ocfs2_live_connection_list);
static LIST_HEAD(ocfs2_control_private_list);
static DEFINE_MUTEX(ocfs2_control_lock);
static inline void ocfs2_control_set_handshake_state(struct file *file,
int state)
static inline int ocfs2_control_get_handshake_state(struct file *file)
static struct ocfs2_live_connection *ocfs2_connection_find(const char *name)
static int ocfs2_live_connection_new(struct ocfs2_cluster_connection *conn,
struct ocfs2_live_connection **c_ret)
static void ocfs2_live_connection_drop(struct ocfs2_live_connection *c)
static int ocfs2_control_cfu(void *target, size_t target_len,
const char __user *buf, size_t count)
static ssize_t ocfs2_control_validate_protocol(struct file *file,
const char __user *buf,
size_t count)
static void ocfs2_control_send_down(const char *uuid,
int nodenum)
static int ocfs2_control_install_private(struct file *file)
static int ocfs2_control_get_this_node(void)
static int ocfs2_control_do_setnode_msg(struct file *file,
struct ocfs2_control_message_setn *msg)
static int ocfs2_control_do_setversion_msg(struct file *file,
struct ocfs2_control_message_setv *msg)
static int ocfs2_control_do_down_msg(struct file *file,
struct ocfs2_control_message_down *msg)
static ssize_t ocfs2_control_message(struct file *file,
const char __user *buf,
size_t count)
static ssize_t ocfs2_control_write(struct file *file,
const char __user *buf,
size_t count,
loff_t *ppos)
static ssize_t ocfs2_control_read(struct file *file,
char __user *buf,
size_t count,
loff_t *ppos)
static int ocfs2_control_release(struct inode *inode, struct file *file)
static int ocfs2_control_open(struct inode *inode, struct file *file)
static const struct file_operations ocfs2_control_fops = ;
static struct miscdevice ocfs2_control_device = ;
static int ocfs2_control_init(void)
static void ocfs2_control_exit(void)
static void fsdlm_lock_ast_wrapper(void *astarg)
static void fsdlm_blocking_ast_wrapper(void *astarg, int level)
static int user_dlm_lock(struct ocfs2_cluster_connection *conn,
int mode,
struct ocfs2_dlm_lksb *lksb,
u32 flags,
void *name,
unsigned int namelen)
static int user_dlm_unlock(struct ocfs2_cluster_connection *conn,
struct ocfs2_dlm_lksb *lksb,
u32 flags)
static int user_dlm_lock_status(struct ocfs2_dlm_lksb *lksb)
static int user_dlm_lvb_valid(struct ocfs2_dlm_lksb *lksb)
static void *user_dlm_lvb(struct ocfs2_dlm_lksb *lksb)
static void user_dlm_dump_lksb(struct ocfs2_dlm_lksb *lksb)
static int user_plock(struct ocfs2_cluster_connection *conn,
u64 ino,
struct file *file,
int cmd,
struct file_lock *fl)
static int fs_protocol_compare(struct ocfs2_protocol_version *existing,
struct ocfs2_protocol_version *request)
static int user_cluster_connect(struct ocfs2_cluster_connection *conn)
static int user_cluster_disconnect(struct ocfs2_cluster_connection *conn)
static int user_cluster_this_node(unsigned int *this_node)
static struct ocfs2_stack_operations ocfs2_user_plugin_ops = ;
static struct ocfs2_stack_plugin ocfs2_user_plugin = ;
static int __init ocfs2_user_plugin_init(void)
static void __exit ocfs2_user_plugin_exit(void)
MODULE_AUTHOR("Oracle");
MODULE_DESCRIPTION("ocfs2 driver for userspace cluster stacks");
MODULE_LICENSE("GPL");
module_init(ocfs2_user_plugin_init);
module_exit(ocfs2_user_plugin_exit);
