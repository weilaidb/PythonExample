#define DRIVER_NAME	"cpwd"
#define PFX		DRIVER_NAME ": "
#define WD_OBPNAME	"watchdog"
#define WD_BADMODEL	"SUNW,501-5336"
#define WD_BTIMEOUT	(jiffies + (HZ * 1000))
#define WD_BLIMIT	0xFFFF
#define WD0_MINOR	212
#define WD1_MINOR	213
#define WD2_MINOR	214
#define WD0_ID			0
#define WD1_ID			1
#define WD2_ID			2
#define WD_NUMDEVS		3
#define WD_INTR_OFF		0
#define WD_INTR_ON		1
#define WD_STAT_INIT	0x01
#define WD_STAT_BSTOP	0x02
#define WD_STAT_SVCD	0x04
#define WD0_INTR_MASK	0x01
#define WD1_INTR_MASK	0x02
#define WD2_INTR_MASK	0x04
#define WD_S_RUNNING	0x01
#define WD_S_EXPIRED	0x02
struct cpwd ;
static DEFINE_MUTEX(cpwd_mutex);
static struct cpwd *cpwd_device;
#define WD_TIMER_REGSZ	16
#define WD0_OFF		0
#define WD1_OFF		(WD_TIMER_REGSZ * 1)
#define WD2_OFF		(WD_TIMER_REGSZ * 2)
#define PLD_OFF		(WD_TIMER_REGSZ * 3)
#define WD_DCNTR	0x00
#define WD_LIMIT	0x04
#define WD_STATUS	0x08
#define PLD_IMASK	(PLD_OFF + 0x00)
#define PLD_STATUS	(PLD_OFF + 0x04)
static struct timer_list cpwd_timer;
static int wd0_timeout;
static int wd1_timeout;
static int wd2_timeout;
module_param(wd0_timeout, int, 0);
MODULE_PARM_DESC(wd0_timeout, "Default watchdog0 timeout in 1/10secs");
module_param(wd1_timeout, int, 0);
MODULE_PARM_DESC(wd1_timeout, "Default watchdog1 timeout in 1/10secs");
module_param(wd2_timeout, int, 0);
MODULE_PARM_DESC(wd2_timeout, "Default watchdog2 timeout in 1/10secs");
MODULE_AUTHOR("Eric Brower <ebrower@usa.net>");
MODULE_DESCRIPTION("Hardware watchdog driver for Sun Microsystems CP1400/1500");
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("watchdog");
static void cpwd_writew(u16 val, void __iomem *addr)
static u16 cpwd_readw(void __iomem *addr)
static void cpwd_writeb(u8 val, void __iomem *addr)
static u8 cpwd_readb(void __iomem *addr)
static void cpwd_toggleintr(struct cpwd *p, int index, int enable)
static void cpwd_resetbrokentimer(struct cpwd *p, int index)
static void cpwd_brokentimer(unsigned long data)
static void cpwd_pingtimer(struct cpwd *p, int index)
static void cpwd_stoptimer(struct cpwd *p, int index)
static void cpwd_starttimer(struct cpwd *p, int index)
static int cpwd_getstatus(struct cpwd *p, int index)
static irqreturn_t cpwd_interrupt(int irq, void *dev_id)
static int cpwd_open(struct inode *inode, struct file *f)
static int cpwd_release(struct inode *inode, struct file *file)
static long cpwd_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
static long cpwd_compat_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static ssize_t cpwd_write(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
static ssize_t cpwd_read(struct file *file, char __user *buffer,
size_t count, loff_t *ppos)
static const struct file_operations cpwd_fops = ;
static int __devinit cpwd_probe(struct platform_device *op)
static int __devexit cpwd_remove(struct platform_device *op)
static const struct of_device_id cpwd_match[] = ;
MODULE_DEVICE_TABLE(of, cpwd_match);
static struct platform_driver cpwd_driver = ;
static int __init cpwd_init(void)
static void __exit cpwd_exit(void)
module_init(cpwd_init);
module_exit(cpwd_exit);
