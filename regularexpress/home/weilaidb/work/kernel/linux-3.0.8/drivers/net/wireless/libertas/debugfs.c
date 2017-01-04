static struct dentry *lbs_dir;
static char *szStates[] = ;
static void lbs_debug_init(struct lbs_private *priv);
static int open_file_generic(struct inode *inode, struct file *file)
static ssize_t write_file_dummy(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
static const size_t len = PAGE_SIZE;
static ssize_t lbs_dev_info(struct file *file, char __user *userbuf,
size_t count, loff_t *ppos)
static ssize_t lbs_sleepparams_write(struct file *file,
const char __user *user_buf, size_t count,
loff_t *ppos)
static ssize_t lbs_sleepparams_read(struct file *file, char __user *userbuf,
size_t count, loff_t *ppos)
static ssize_t lbs_host_sleep_write(struct file *file,
const char __user *user_buf, size_t count,
loff_t *ppos)
static ssize_t lbs_host_sleep_read(struct file *file, char __user *userbuf,
size_t count, loff_t *ppos)
static void *lbs_tlv_find(uint16_t tlv_type, const uint8_t *tlv, uint16_t size)
static ssize_t lbs_threshold_read(uint16_t tlv_type, uint16_t event_mask,
struct file *file, char __user *userbuf,
size_t count, loff_t *ppos)
static ssize_t lbs_threshold_write(uint16_t tlv_type, uint16_t event_mask,
struct file *file,
const char __user *userbuf, size_t count,
loff_t *ppos)
static ssize_t lbs_lowrssi_read(struct file *file, char __user *userbuf,
size_t count, loff_t *ppos)
static ssize_t lbs_lowrssi_write(struct file *file, const char __user *userbuf,
size_t count, loff_t *ppos)
static ssize_t lbs_lowsnr_read(struct file *file, char __user *userbuf,
size_t count, loff_t *ppos)
static ssize_t lbs_lowsnr_write(struct file *file, const char __user *userbuf,
size_t count, loff_t *ppos)
static ssize_t lbs_failcount_read(struct file *file, char __user *userbuf,
size_t count, loff_t *ppos)
static ssize_t lbs_failcount_write(struct file *file, const char __user *userbuf,
size_t count, loff_t *ppos)
static ssize_t lbs_highrssi_read(struct file *file, char __user *userbuf,
size_t count, loff_t *ppos)
static ssize_t lbs_highrssi_write(struct file *file, const char __user *userbuf,
size_t count, loff_t *ppos)
static ssize_t lbs_highsnr_read(struct file *file, char __user *userbuf,
size_t count, loff_t *ppos)
static ssize_t lbs_highsnr_write(struct file *file, const char __user *userbuf,
size_t count, loff_t *ppos)
static ssize_t lbs_bcnmiss_read(struct file *file, char __user *userbuf,
size_t count, loff_t *ppos)
static ssize_t lbs_bcnmiss_write(struct file *file, const char __user *userbuf,
size_t count, loff_t *ppos)
static ssize_t lbs_rdmac_read(struct file *file, char __user *userbuf,
size_t count, loff_t *ppos)
static ssize_t lbs_rdmac_write(struct file *file,
const char __user *userbuf,
size_t count, loff_t *ppos)
static ssize_t lbs_wrmac_write(struct file *file,
const char __user *userbuf,
size_t count, loff_t *ppos)
static ssize_t lbs_rdbbp_read(struct file *file, char __user *userbuf,
size_t count, loff_t *ppos)
static ssize_t lbs_rdbbp_write(struct file *file,
const char __user *userbuf,
size_t count, loff_t *ppos)
static ssize_t lbs_wrbbp_write(struct file *file,
const char __user *userbuf,
size_t count, loff_t *ppos)
static ssize_t lbs_rdrf_read(struct file *file, char __user *userbuf,
size_t count, loff_t *ppos)
static ssize_t lbs_rdrf_write(struct file *file,
const char __user *userbuf,
size_t count, loff_t *ppos)
static ssize_t lbs_wrrf_write(struct file *file,
const char __user *userbuf,
size_t count, loff_t *ppos)
#define FOPS(fread, fwrite)
struct lbs_debugfs_files ;
static const struct lbs_debugfs_files debugfs_files[] = ;
static const struct lbs_debugfs_files debugfs_events_files[] = ;
static const struct lbs_debugfs_files debugfs_regs_files[] = ;
void lbs_debugfs_init(void)
void lbs_debugfs_remove(void)
void lbs_debugfs_init_one(struct lbs_private *priv, struct net_device *dev)
void lbs_debugfs_remove_one(struct lbs_private *priv)
#define item_size(n)	(FIELD_SIZEOF(struct lbs_private, n))
#define item_addr(n)	(offsetof(struct lbs_private, n))
struct debug_data ;
static struct debug_data items[] = ;
static int num_of_items = ARRAY_SIZE(items);
static ssize_t lbs_debugfs_read(struct file *file, char __user *userbuf,
size_t count, loff_t *ppos)
static ssize_t lbs_debugfs_write(struct file *f, const char __user *buf,
size_t cnt, loff_t *ppos)
static const struct file_operations lbs_debug_fops = ;
static void lbs_debug_init(struct lbs_private *priv)
