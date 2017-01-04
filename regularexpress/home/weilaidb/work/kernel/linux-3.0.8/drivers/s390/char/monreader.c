#define KMSG_COMPONENT "monreader"
#define pr_fmt(fmt) KMSG_COMPONENT ": " fmt
#define MON_COLLECT_SAMPLE 0x80
#define MON_COLLECT_EVENT  0x40
#define MON_SERVICE	   "*MONITOR"
#define MON_IN_USE	   0x01
#define MON_MSGLIM	   255
static char mon_dcss_name[9] = "MONDCSS\0";
struct mon_msg ;
struct mon_private ;
static unsigned long mon_in_use = 0;
static unsigned long mon_dcss_start;
static unsigned long mon_dcss_end;
static DECLARE_WAIT_QUEUE_HEAD(mon_read_wait_queue);
static DECLARE_WAIT_QUEUE_HEAD(mon_conn_wait_queue);
static u8 user_data_connect[16] = ;
static u8 user_data_sever[16] = ;
static struct device *monreader_device;
static void dcss_mkname(char *ascii_name, char *ebcdic_name)
static inline unsigned long mon_mca_start(struct mon_msg *monmsg)
static inline unsigned long mon_mca_end(struct mon_msg *monmsg)
static inline u8 mon_mca_type(struct mon_msg *monmsg, u8 index)
static inline u32 mon_mca_size(struct mon_msg *monmsg)
static inline u32 mon_rec_start(struct mon_msg *monmsg)
static inline u32 mon_rec_end(struct mon_msg *monmsg)
static int mon_check_mca(struct mon_msg *monmsg)
static int mon_send_reply(struct mon_msg *monmsg,
struct mon_private *monpriv)
static void mon_free_mem(struct mon_private *monpriv)
static struct mon_private *mon_alloc_mem(void)
static inline void mon_next_mca(struct mon_msg *monmsg)
static struct mon_msg *mon_next_message(struct mon_private *monpriv)
static void mon_iucv_path_complete(struct iucv_path *path, u8 ipuser[16])
static void mon_iucv_path_severed(struct iucv_path *path, u8 ipuser[16])
static void mon_iucv_message_pending(struct iucv_path *path,
struct iucv_message *msg)
static struct iucv_handler monreader_iucv_handler = ;
static int mon_open(struct inode *inode, struct file *filp)
static int mon_close(struct inode *inode, struct file *filp)
static ssize_t mon_read(struct file *filp, char __user *data,
size_t count, loff_t *ppos)
static unsigned int mon_poll(struct file *filp, struct poll_table_struct *p)
static const struct file_operations mon_fops = ;
static struct miscdevice mon_dev = ;
static int monreader_freeze(struct device *dev)
static int monreader_thaw(struct device *dev)
static int monreader_restore(struct device *dev)
static const struct dev_pm_ops monreader_pm_ops = ;
static struct device_driver monreader_driver = ;
static int __init mon_init(void)
static void __exit mon_exit(void)
module_init(mon_init);
module_exit(mon_exit);
module_param_string(mondcss, mon_dcss_name, 9, 0444);
MODULE_PARM_DESC(mondcss, "Name of DCSS segment to be used for *MONITOR "
"service, max. 8 chars. Default is MONDCSS");
MODULE_AUTHOR("Gerald Schaefer <geraldsc@de.ibm.com>");
MODULE_DESCRIPTION("Character device driver for reading z/VM "
"monitor service records.");
MODULE_LICENSE("GPL");
