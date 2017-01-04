struct btmrvl_debugfs_data ;
static int btmrvl_open_generic(struct inode *inode, struct file *file)
static ssize_t btmrvl_hscfgcmd_write(struct file *file,
const char __user *ubuf, size_t count, loff_t *ppos)
static ssize_t btmrvl_hscfgcmd_read(struct file *file, char __user *userbuf,
size_t count, loff_t *ppos)
static const struct file_operations btmrvl_hscfgcmd_fops = ;
static ssize_t btmrvl_psmode_write(struct file *file, const char __user *ubuf,
size_t count, loff_t *ppos)
static ssize_t btmrvl_psmode_read(struct file *file, char __user *userbuf,
size_t count, loff_t *ppos)
static const struct file_operations btmrvl_psmode_fops = ;
static ssize_t btmrvl_pscmd_write(struct file *file, const char __user *ubuf,
size_t count, loff_t *ppos)
static ssize_t btmrvl_pscmd_read(struct file *file, char __user *userbuf,
size_t count, loff_t *ppos)
static const struct file_operations btmrvl_pscmd_fops = ;
static ssize_t btmrvl_gpiogap_write(struct file *file, const char __user *ubuf,
size_t count, loff_t *ppos)
static ssize_t btmrvl_gpiogap_read(struct file *file, char __user *userbuf,
size_t count, loff_t *ppos)
static const struct file_operations btmrvl_gpiogap_fops = ;
static ssize_t btmrvl_hscmd_write(struct file *file, const char __user *ubuf,
size_t count, loff_t *ppos)
static ssize_t btmrvl_hscmd_read(struct file *file, char __user *userbuf,
size_t count, loff_t *ppos)
static const struct file_operations btmrvl_hscmd_fops = ;
static ssize_t btmrvl_hsmode_write(struct file *file, const char __user *ubuf,
size_t count, loff_t *ppos)
static ssize_t btmrvl_hsmode_read(struct file *file, char __user * userbuf,
size_t count, loff_t *ppos)
static const struct file_operations btmrvl_hsmode_fops = ;
static ssize_t btmrvl_curpsmode_read(struct file *file, char __user *userbuf,
size_t count, loff_t *ppos)
static const struct file_operations btmrvl_curpsmode_fops = ;
static ssize_t btmrvl_psstate_read(struct file *file, char __user * userbuf,
size_t count, loff_t *ppos)
static const struct file_operations btmrvl_psstate_fops = ;
static ssize_t btmrvl_hsstate_read(struct file *file, char __user *userbuf,
size_t count, loff_t *ppos)
static const struct file_operations btmrvl_hsstate_fops = ;
static ssize_t btmrvl_txdnldready_read(struct file *file, char __user *userbuf,
size_t count, loff_t *ppos)
static const struct file_operations btmrvl_txdnldready_fops = ;
void btmrvl_debugfs_init(struct hci_dev *hdev)
void btmrvl_debugfs_remove(struct hci_dev *hdev)
