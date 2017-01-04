#define stamp(fmt, args...) pr_debug("%s:%i: " fmt "\n", __func__, __LINE__, ## args)
#define stampit() stamp("here i am")
#define pr_init(fmt, args...) ()
#define DRIVER_NAME "bfin-otp"
#define PFX DRIVER_NAME ": "
static DEFINE_MUTEX(bfin_otp_lock);
static ssize_t bfin_otp_read(struct file *file, char __user *buff, size_t count, loff_t *pos)
static bool allow_writes;
static u32 bfin_otp_init_timing(void)
static void bfin_otp_deinit_timing(u32 timing)
static ssize_t bfin_otp_write(struct file *filp, const char __user *buff, size_t count, loff_t *pos)
static long bfin_otp_ioctl(struct file *filp, unsigned cmd, unsigned long arg)
# define bfin_otp_write NULL
# define bfin_otp_ioctl NULL
static const struct file_operations bfin_otp_fops = ;
static struct miscdevice bfin_otp_misc_device = ;
static int __init bfin_otp_init(void)
static void __exit bfin_otp_exit(void)
module_init(bfin_otp_init);
module_exit(bfin_otp_exit);
MODULE_AUTHOR("Mike Frysinger <vapier@gentoo.org>");
MODULE_DESCRIPTION("Blackfin OTP Memory Interface");
MODULE_LICENSE("GPL");
