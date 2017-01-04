#define KMSG_COMPONENT "dasd"
#define PRINTK_HEADER "dasd_ioctl:"
static int
dasd_ioctl_api_version(void __user *argp)
static int
dasd_ioctl_enable(struct block_device *bdev)
static int
dasd_ioctl_disable(struct block_device *bdev)
static int dasd_ioctl_quiesce(struct dasd_block *block)
static int dasd_ioctl_resume(struct dasd_block *block)
static int dasd_format(struct dasd_block *block, struct format_data_t *fdata)
static int
dasd_ioctl_format(struct block_device *bdev, void __user *argp)
static int dasd_ioctl_reset_profile(struct dasd_block *block)
static int dasd_ioctl_read_profile(struct dasd_block *block, void __user *argp)
static int dasd_ioctl_reset_profile(struct dasd_block *block)
static int dasd_ioctl_read_profile(struct dasd_block *block, void __user *argp)
static int dasd_ioctl_information(struct dasd_block *block,
unsigned int cmd, void __user *argp)
static int
dasd_ioctl_set_ro(struct block_device *bdev, void __user *argp)
static int dasd_ioctl_readall_cmb(struct dasd_block *block, unsigned int cmd,
struct cmbdata __user *argp)
int dasd_ioctl(struct block_device *bdev, fmode_t mode,
unsigned int cmd, unsigned long arg)
