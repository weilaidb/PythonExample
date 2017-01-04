static int get_exclusive(struct ubi_volume_desc *desc)
static void revoke_exclusive(struct ubi_volume_desc *desc, int mode)
static int vol_cdev_open(struct inode *inode, struct file *file)
static int vol_cdev_release(struct inode *inode, struct file *file)
static loff_t vol_cdev_llseek(struct file *file, loff_t offset, int origin)
static int vol_cdev_fsync(struct file *file, int datasync)
static ssize_t vol_cdev_read(struct file *file, __user char *buf, size_t count,
loff_t *offp)
static ssize_t vol_cdev_direct_write(struct file *file, const char __user *buf,
size_t count, loff_t *offp)
static ssize_t vol_cdev_write(struct file *file, const char __user *buf,
size_t count, loff_t *offp)
static long vol_cdev_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static int verify_mkvol_req(const struct ubi_device *ubi,
const struct ubi_mkvol_req *req)
static int verify_rsvol_req(const struct ubi_device *ubi,
const struct ubi_rsvol_req *req)
static int rename_volumes(struct ubi_device *ubi,
struct ubi_rnvol_req *req)
static long ubi_cdev_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static long ctrl_cdev_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static long vol_cdev_compat_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static long ubi_cdev_compat_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static long ctrl_cdev_compat_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
#define vol_cdev_compat_ioctl  NULL
#define ubi_cdev_compat_ioctl  NULL
#define ctrl_cdev_compat_ioctl NULL
const struct file_operations ubi_vol_cdev_operations = ;
const struct file_operations ubi_cdev_operations = ;
const struct file_operations ubi_ctrl_cdev_operations = ;
