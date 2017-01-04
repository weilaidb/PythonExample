MODULE_AUTHOR("Sean Hefty");
MODULE_DESCRIPTION("RDMA Userspace Connection Manager Access");
MODULE_LICENSE("Dual BSD/GPL");
static unsigned int max_backlog = 1024;
static struct ctl_table_header *ucma_ctl_table_hdr;
static ctl_table ucma_ctl_table[] = ;
static struct ctl_path ucma_ctl_path[] = ;
struct ucma_file ;
struct ucma_context ;
struct ucma_multicast ;
struct ucma_event ;
static DEFINE_MUTEX(mut);
static DEFINE_IDR(ctx_idr);
static DEFINE_IDR(multicast_idr);
static inline struct ucma_context *_ucma_find_context(int id,
struct ucma_file *file)
static struct ucma_context *ucma_get_ctx(struct ucma_file *file, int id)
static void ucma_put_ctx(struct ucma_context *ctx)
static struct ucma_context *ucma_alloc_ctx(struct ucma_file *file)
static struct ucma_multicast* ucma_alloc_multicast(struct ucma_context *ctx)
static void ucma_copy_conn_event(struct rdma_ucm_conn_param *dst,
struct rdma_conn_param *src)
static void ucma_copy_ud_event(struct rdma_ucm_ud_param *dst,
struct rdma_ud_param *src)
static void ucma_set_event_context(struct ucma_context *ctx,
struct rdma_cm_event *event,
struct ucma_event *uevent)
static int ucma_event_handler(struct rdma_cm_id *cm_id,
struct rdma_cm_event *event)
static ssize_t ucma_get_event(struct ucma_file *file, const char __user *inbuf,
int in_len, int out_len)
static int ucma_get_qp_type(struct rdma_ucm_create_id *cmd, enum ib_qp_type *qp_type)
static ssize_t ucma_create_id(struct ucma_file *file, const char __user *inbuf,
int in_len, int out_len)
static void ucma_cleanup_multicast(struct ucma_context *ctx)
static void ucma_cleanup_events(struct ucma_context *ctx)
static void ucma_cleanup_mc_events(struct ucma_multicast *mc)
static int ucma_free_ctx(struct ucma_context *ctx)
static ssize_t ucma_destroy_id(struct ucma_file *file, const char __user *inbuf,
int in_len, int out_len)
static ssize_t ucma_bind_addr(struct ucma_file *file, const char __user *inbuf,
int in_len, int out_len)
static ssize_t ucma_resolve_addr(struct ucma_file *file,
const char __user *inbuf,
int in_len, int out_len)
static ssize_t ucma_resolve_route(struct ucma_file *file,
const char __user *inbuf,
int in_len, int out_len)
static void ucma_copy_ib_route(struct rdma_ucm_query_route_resp *resp,
struct rdma_route *route)
static void ucma_copy_iboe_route(struct rdma_ucm_query_route_resp *resp,
struct rdma_route *route)
static void ucma_copy_iw_route(struct rdma_ucm_query_route_resp *resp,
struct rdma_route *route)
static ssize_t ucma_query_route(struct ucma_file *file,
const char __user *inbuf,
int in_len, int out_len)
static void ucma_copy_conn_param(struct rdma_conn_param *dst,
struct rdma_ucm_conn_param *src)
static ssize_t ucma_connect(struct ucma_file *file, const char __user *inbuf,
int in_len, int out_len)
static ssize_t ucma_listen(struct ucma_file *file, const char __user *inbuf,
int in_len, int out_len)
static ssize_t ucma_accept(struct ucma_file *file, const char __user *inbuf,
int in_len, int out_len)
static ssize_t ucma_reject(struct ucma_file *file, const char __user *inbuf,
int in_len, int out_len)
static ssize_t ucma_disconnect(struct ucma_file *file, const char __user *inbuf,
int in_len, int out_len)
static ssize_t ucma_init_qp_attr(struct ucma_file *file,
const char __user *inbuf,
int in_len, int out_len)
static int ucma_set_option_id(struct ucma_context *ctx, int optname,
void *optval, size_t optlen)
static int ucma_set_ib_path(struct ucma_context *ctx,
struct ib_path_rec_data *path_data, size_t optlen)
static int ucma_set_option_ib(struct ucma_context *ctx, int optname,
void *optval, size_t optlen)
static int ucma_set_option_level(struct ucma_context *ctx, int level,
int optname, void *optval, size_t optlen)
static ssize_t ucma_set_option(struct ucma_file *file, const char __user *inbuf,
int in_len, int out_len)
static ssize_t ucma_notify(struct ucma_file *file, const char __user *inbuf,
int in_len, int out_len)
static ssize_t ucma_join_multicast(struct ucma_file *file,
const char __user *inbuf,
int in_len, int out_len)
static ssize_t ucma_leave_multicast(struct ucma_file *file,
const char __user *inbuf,
int in_len, int out_len)
static void ucma_lock_files(struct ucma_file *file1, struct ucma_file *file2)
static void ucma_unlock_files(struct ucma_file *file1, struct ucma_file *file2)
static void ucma_move_events(struct ucma_context *ctx, struct ucma_file *file)
static ssize_t ucma_migrate_id(struct ucma_file *new_file,
const char __user *inbuf,
int in_len, int out_len)
static ssize_t (*ucma_cmd_table[])(struct ucma_file *file,
const char __user *inbuf,
int in_len, int out_len) = ;
static ssize_t ucma_write(struct file *filp, const char __user *buf,
size_t len, loff_t *pos)
static unsigned int ucma_poll(struct file *filp, struct poll_table_struct *wait)
static int ucma_open(struct inode *inode, struct file *filp)
static int ucma_close(struct inode *inode, struct file *filp)
static const struct file_operations ucma_fops = ;
static struct miscdevice ucma_misc = ;
static ssize_t show_abi_version(struct device *dev,
struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(abi_version, S_IRUGO, show_abi_version, NULL);
static int __init ucma_init(void)
static void __exit ucma_cleanup(void)
module_init(ucma_init);
module_exit(ucma_cleanup);
