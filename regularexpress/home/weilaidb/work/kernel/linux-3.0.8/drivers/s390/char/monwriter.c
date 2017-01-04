#define KMSG_COMPONENT "monwriter"
#define pr_fmt(fmt) KMSG_COMPONENT ": " fmt
#define MONWRITE_MAX_DATALEN	4010
static int mon_max_bufs = 255;
static int mon_buf_count;
struct mon_buf ;
static LIST_HEAD(mon_priv_list);
struct mon_private ;
static int monwrite_diag(struct monwrite_hdr *myhdr, char *buffer, int fcn)
static struct mon_buf *monwrite_find_hdr(struct mon_private *monpriv,
struct monwrite_hdr *monhdr)
static int monwrite_new_hdr(struct mon_private *monpriv)
static int monwrite_new_data(struct mon_private *monpriv)
static int monwrite_open(struct inode *inode, struct file *filp)
static int monwrite_close(struct inode *inode, struct file *filp)
static ssize_t monwrite_write(struct file *filp, const char __user *data,
size_t count, loff_t *ppos)
static const struct file_operations monwrite_fops = ;
static struct miscdevice mon_dev = ;
static int monwriter_freeze(struct device *dev)
static int monwriter_restore(struct device *dev)
static int monwriter_thaw(struct device *dev)
static const struct dev_pm_ops monwriter_pm_ops = ;
static struct platform_driver monwriter_pdrv = ;
static struct platform_device *monwriter_pdev;
static int __init mon_init(void)
static void __exit mon_exit(void)
module_init(mon_init);
module_exit(mon_exit);
module_param_named(max_bufs, mon_max_bufs, int, 0644);
MODULE_PARM_DESC(max_bufs, "Maximum number of sample monitor data buffers "
"that can be active at one time");
MODULE_AUTHOR("Melissa Howland <Melissa.Howland@us.ibm.com>");
MODULE_DESCRIPTION("Character device driver for writing z/VM "
"APPLDATA monitor records.");
MODULE_LICENSE("GPL");
