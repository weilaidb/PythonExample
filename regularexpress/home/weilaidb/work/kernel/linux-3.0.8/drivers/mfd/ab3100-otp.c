#define AB3100_OTP0		0xb0
#define AB3100_OTP1		0xb1
#define AB3100_OTP2		0xb2
#define AB3100_OTP3		0xb3
#define AB3100_OTP4		0xb4
#define AB3100_OTP5		0xb5
#define AB3100_OTP6		0xb6
#define AB3100_OTP7		0xb7
#define AB3100_OTPP		0xbf
struct ab3100_otp ;
static int __init ab3100_otp_read(struct ab3100_otp *otp)
static int ab3100_show_otp(struct seq_file *s, void *v)
static int ab3100_otp_open(struct inode *inode, struct file *file)
static const struct file_operations ab3100_otp_operations = ;
static int __init ab3100_otp_init_debugfs(struct device *dev,
struct ab3100_otp *otp)
static void __exit ab3100_otp_exit_debugfs(struct ab3100_otp *otp)
static inline int __init ab3100_otp_init_debugfs(struct device *dev,
struct ab3100_otp *otp)
static inline void __exit ab3100_otp_exit_debugfs(struct ab3100_otp *otp)
#define SHOW_AB3100_ATTR(name) \
static ssize_t ab3100_otp_##name##_show(struct device *dev, \
struct device_attribute *attr, \
char *buf) \
SHOW_AB3100_ATTR(locked)
SHOW_AB3100_ATTR(freq)
SHOW_AB3100_ATTR(paf)
SHOW_AB3100_ATTR(imeich)
SHOW_AB3100_ATTR(cid)
SHOW_AB3100_ATTR(fac)
SHOW_AB3100_ATTR(tac)
SHOW_AB3100_ATTR(svn)
static struct device_attribute ab3100_otp_attrs[] = ;
static int __init ab3100_otp_probe(struct platform_device *pdev)
static int __exit ab3100_otp_remove(struct platform_device *pdev)
static struct platform_driver ab3100_otp_driver = ;
static int __init ab3100_otp_init(void)
static void __exit ab3100_otp_exit(void)
module_init(ab3100_otp_init);
module_exit(ab3100_otp_exit);
MODULE_AUTHOR("Linus Walleij <linus.walleij@stericsson.com>");
MODULE_DESCRIPTION("AB3100 OTP Readout Driver");
MODULE_LICENSE("GPL");
