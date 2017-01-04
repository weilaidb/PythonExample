struct ipmi_file_private
;
static DEFINE_MUTEX(ipmi_mutex);
static void file_receive_handler(struct ipmi_recv_msg *msg,
void                 *handler_data)
static unsigned int ipmi_poll(struct file *file, poll_table *wait)
static int ipmi_fasync(int fd, struct file *file, int on)
static struct ipmi_user_hndl ipmi_hndlrs =
;
static int ipmi_open(struct inode *inode, struct file *file)
static int ipmi_release(struct inode *inode, struct file *file)
static int handle_send_req(ipmi_user_t     user,
struct ipmi_req *req,
int             retries,
unsigned int    retry_time_ms)
static int ipmi_ioctl(struct file   *file,
unsigned int  cmd,
unsigned long data)
static long ipmi_unlocked_ioctl(struct file   *file,
unsigned int  cmd,
unsigned long data)
#define COMPAT_IPMICTL_SEND_COMMAND	\
_IOR(IPMI_IOC_MAGIC, 13, struct compat_ipmi_req)
#define COMPAT_IPMICTL_SEND_COMMAND_SETTIME	\
_IOR(IPMI_IOC_MAGIC, 21, struct compat_ipmi_req_settime)
#define COMPAT_IPMICTL_RECEIVE_MSG	\
_IOWR(IPMI_IOC_MAGIC, 12, struct compat_ipmi_recv)
#define COMPAT_IPMICTL_RECEIVE_MSG_TRUNC	\
_IOWR(IPMI_IOC_MAGIC, 11, struct compat_ipmi_recv)
struct compat_ipmi_msg ;
struct compat_ipmi_req ;
struct compat_ipmi_recv ;
struct compat_ipmi_req_settime ;
static long get_compat_ipmi_msg(struct ipmi_msg *p64,
struct compat_ipmi_msg __user *p32)
static long put_compat_ipmi_msg(struct ipmi_msg *p64,
struct compat_ipmi_msg __user *p32)
static long get_compat_ipmi_req(struct ipmi_req *p64,
struct compat_ipmi_req __user *p32)
static long get_compat_ipmi_req_settime(struct ipmi_req_settime *p64,
struct compat_ipmi_req_settime __user *p32)
static long get_compat_ipmi_recv(struct ipmi_recv *p64,
struct compat_ipmi_recv __user *p32)
static long put_compat_ipmi_recv(struct ipmi_recv *p64,
struct compat_ipmi_recv __user *p32)
static long compat_ipmi_ioctl(struct file *filep, unsigned int cmd,
unsigned long arg)
static const struct file_operations ipmi_fops = ;
#define DEVICE_NAME     "ipmidev"
static int ipmi_major;
module_param(ipmi_major, int, 0);
MODULE_PARM_DESC(ipmi_major, "Sets the major number of the IPMI device.  By"
" default, or if you set it to zero, it will choose the next"
" available device.  Setting it to -1 will disable the"
" interface.  Other values will set the major device number"
" to that value.");
struct ipmi_reg_list ;
static LIST_HEAD(reg_list);
static DEFINE_MUTEX(reg_list_mutex);
static struct class *ipmi_class;
static void ipmi_new_smi(int if_num, struct device *device)
static void ipmi_smi_gone(int if_num)
static struct ipmi_smi_watcher smi_watcher =
;
static int __init init_ipmi_devintf(void)
module_init(init_ipmi_devintf);
static void __exit cleanup_ipmi(void)
module_exit(cleanup_ipmi);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Corey Minyard <minyard@mvista.com>");
MODULE_DESCRIPTION("Linux device interface for the IPMI message handler.");
MODULE_ALIAS("platform:ipmi_si");
