#define APC_MINOR	MISC_DYNAMIC_MINOR
#define APC_OBPNAME	"power-management"
#define APC_DEVNAME "apc"
static u8 __iomem *regs;
static int apc_no_idle __devinitdata = 0;
#define apc_readb(offs)		(sbus_readb(regs+offs))
#define apc_writeb(val, offs) 	(sbus_writeb(val, regs+offs))
static int __init apc_setup(char *str)
__setup("apc=", apc_setup);
static void apc_swift_idle(void)
static inline void apc_free(struct platform_device *op)
static int apc_open(struct inode *inode, struct file *f)
static int apc_release(struct inode *inode, struct file *f)
static long apc_ioctl(struct file *f, unsigned int cmd, unsigned long __arg)
static const struct file_operations apc_fops = ;
static struct miscdevice apc_miscdev = ;
static int __devinit apc_probe(struct platform_device *op)
static struct of_device_id apc_match[] = ;
MODULE_DEVICE_TABLE(of, apc_match);
static struct platform_driver apc_driver = ;
static int __init apc_init(void)
__initcall(apc_init);
