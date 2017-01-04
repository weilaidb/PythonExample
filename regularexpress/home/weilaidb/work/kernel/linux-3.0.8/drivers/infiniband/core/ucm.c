MODULE_AUTHOR("Libor Michalek");
MODULE_DESCRIPTION("InfiniBand userspace Connection Manager access");
MODULE_LICENSE("Dual BSD/GPL");
struct ib_ucm_device ;
struct ib_ucm_file ;
struct ib_ucm_context ;
struct ib_ucm_event ;
enum ;
extern struct class cm_class;
#define IB_UCM_BASE_DEV MKDEV(IB_UCM_MAJOR, IB_UCM_BASE_MINOR)
static void ib_ucm_add_one(struct ib_device *device);
static void ib_ucm_remove_one(struct ib_device *device);
static struct ib_client ucm_client = ;
static DEFINE_MUTEX(ctx_id_mutex);
static DEFINE_IDR(ctx_id_table);
static DECLARE_BITMAP(dev_map, IB_UCM_MAX_DEVICES);
static struct ib_ucm_context *ib_ucm_ctx_get(struct ib_ucm_file *file, int id)
static void ib_ucm_ctx_put(struct ib_ucm_context *ctx)
static inline int ib_ucm_new_cm_id(int event)
static void ib_ucm_cleanup_events(struct ib_ucm_context *ctx)
static struct ib_ucm_context *ib_ucm_ctx_alloc(struct ib_ucm_file *file)
static void ib_ucm_event_req_get(struct ib_ucm_req_event_resp *ureq,
struct ib_cm_req_event_param *kreq)
static void ib_ucm_event_rep_get(struct ib_ucm_rep_event_resp *urep,
struct ib_cm_rep_event_param *krep)
static void ib_ucm_event_sidr_rep_get(struct ib_ucm_sidr_rep_event_resp *urep,
struct ib_cm_sidr_rep_event_param *krep)
;
static int ib_ucm_event_process(struct ib_cm_event *evt,
struct ib_ucm_event *uvt)
static int ib_ucm_event_handler(struct ib_cm_id *cm_id,
struct ib_cm_event *event)
static ssize_t ib_ucm_event(struct ib_ucm_file *file,
const char __user *inbuf,
int in_len, int out_len)
static ssize_t ib_ucm_create_id(struct ib_ucm_file *file,
const char __user *inbuf,
int in_len, int out_len)
static ssize_t ib_ucm_destroy_id(struct ib_ucm_file *file,
const char __user *inbuf,
int in_len, int out_len)
static ssize_t ib_ucm_attr_id(struct ib_ucm_file *file,
const char __user *inbuf,
int in_len, int out_len)
static ssize_t ib_ucm_init_qp_attr(struct ib_ucm_file *file,
const char __user *inbuf,
int in_len, int out_len)
static int ucm_validate_listen(__be64 service_id, __be64 service_mask)
static ssize_t ib_ucm_listen(struct ib_ucm_file *file,
const char __user *inbuf,
int in_len, int out_len)
static ssize_t ib_ucm_notify(struct ib_ucm_file *file,
const char __user *inbuf,
int in_len, int out_len)
static int ib_ucm_alloc_data(const void **dest, u64 src, u32 len)
static int ib_ucm_path_get(struct ib_sa_path_rec **path, u64 src)
static ssize_t ib_ucm_send_req(struct ib_ucm_file *file,
const char __user *inbuf,
int in_len, int out_len)
static ssize_t ib_ucm_send_rep(struct ib_ucm_file *file,
const char __user *inbuf,
int in_len, int out_len)
static ssize_t ib_ucm_send_private_data(struct ib_ucm_file *file,
const char __user *inbuf, int in_len,
int (*func)(struct ib_cm_id *cm_id,
const void *private_data,
u8 private_data_len))
static ssize_t ib_ucm_send_rtu(struct ib_ucm_file *file,
const char __user *inbuf,
int in_len, int out_len)
static ssize_t ib_ucm_send_dreq(struct ib_ucm_file *file,
const char __user *inbuf,
int in_len, int out_len)
static ssize_t ib_ucm_send_drep(struct ib_ucm_file *file,
const char __user *inbuf,
int in_len, int out_len)
static ssize_t ib_ucm_send_info(struct ib_ucm_file *file,
const char __user *inbuf, int in_len,
int (*func)(struct ib_cm_id *cm_id,
int status,
const void *info,
u8 info_len,
const void *data,
u8 data_len))
static ssize_t ib_ucm_send_rej(struct ib_ucm_file *file,
const char __user *inbuf,
int in_len, int out_len)
static ssize_t ib_ucm_send_apr(struct ib_ucm_file *file,
const char __user *inbuf,
int in_len, int out_len)
static ssize_t ib_ucm_send_mra(struct ib_ucm_file *file,
const char __user *inbuf,
int in_len, int out_len)
static ssize_t ib_ucm_send_lap(struct ib_ucm_file *file,
const char __user *inbuf,
int in_len, int out_len)
static ssize_t ib_ucm_send_sidr_req(struct ib_ucm_file *file,
const char __user *inbuf,
int in_len, int out_len)
static ssize_t ib_ucm_send_sidr_rep(struct ib_ucm_file *file,
const char __user *inbuf,
int in_len, int out_len)
static ssize_t (*ucm_cmd_table[])(struct ib_ucm_file *file,
const char __user *inbuf,
int in_len, int out_len) = ;
static ssize_t ib_ucm_write(struct file *filp, const char __user *buf,
size_t len, loff_t *pos)
static unsigned int ib_ucm_poll(struct file *filp,
struct poll_table_struct *wait)
static int ib_ucm_open(struct inode *inode, struct file *filp)
static int ib_ucm_close(struct inode *inode, struct file *filp)
static void ib_ucm_release_dev(struct device *dev)
static const struct file_operations ucm_fops = ;
static ssize_t show_ibdev(struct device *dev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(ibdev, S_IRUGO, show_ibdev, NULL);
static dev_t overflow_maj;
static DECLARE_BITMAP(overflow_map, IB_UCM_MAX_DEVICES);
static int find_overflow_devnum(void)
static void ib_ucm_add_one(struct ib_device *device)
static void ib_ucm_remove_one(struct ib_device *device)
static CLASS_ATTR_STRING(abi_version, S_IRUGO,
__stringify(IB_USER_CM_ABI_VERSION));
static int __init ib_ucm_init(void)
static void __exit ib_ucm_cleanup(void)
module_init(ib_ucm_init);
module_exit(ib_ucm_cleanup);
