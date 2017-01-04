#define DRV_NAME	"pxa3xx-gcu"
#define MISCDEV_MINOR	197
#define REG_GCCR	0x00
#define GCCR_SYNC_CLR	(1 << 9)
#define GCCR_BP_RST	(1 << 8)
#define GCCR_ABORT	(1 << 6)
#define GCCR_STOP	(1 << 4)
#define REG_GCISCR	0x04
#define REG_GCIECR	0x08
#define REG_GCRBBR	0x20
#define REG_GCRBLR	0x24
#define REG_GCRBHR	0x28
#define REG_GCRBTR	0x2C
#define REG_GCRBEXHR	0x30
#define IE_EOB		(1 << 0)
#define IE_EEOB		(1 << 5)
#define IE_ALL		0xff
#define SHARED_SIZE	PAGE_ALIGN(sizeof(struct pxa3xx_gcu_shared))
#define QDUMP(msg)					\
do  while (0)
#define QDUMP(msg)	do  while (0)
#define QERROR(msg)					\
do  while (0)
struct pxa3xx_gcu_batch ;
struct pxa3xx_gcu_priv ;
static inline unsigned long
gc_readl(struct pxa3xx_gcu_priv *priv, unsigned int off)
static inline void
gc_writel(struct pxa3xx_gcu_priv *priv, unsigned int off, unsigned long val)
#define QPRINT(priv, level, msg)					\
do  while (0)
static void
pxa3xx_gcu_reset(struct pxa3xx_gcu_priv *priv)
static void
dump_whole_state(struct pxa3xx_gcu_priv *priv)
static void
flush_running(struct pxa3xx_gcu_priv *priv)
static void
run_ready(struct pxa3xx_gcu_priv *priv)
static irqreturn_t
pxa3xx_gcu_handle_irq(int irq, void *ctx)
static int
pxa3xx_gcu_wait_idle(struct pxa3xx_gcu_priv *priv)
static int
pxa3xx_gcu_wait_free(struct pxa3xx_gcu_priv *priv)
static ssize_t
pxa3xx_gcu_misc_write(struct file *filp, const char *buff,
size_t count, loff_t *offp)
static long
pxa3xx_gcu_misc_ioctl(struct file *filp, unsigned int cmd, unsigned long arg)
static int
pxa3xx_gcu_misc_mmap(struct file *filp, struct vm_area_struct *vma)
static struct timer_list pxa3xx_gcu_debug_timer;
static void pxa3xx_gcu_debug_timedout(unsigned long ptr)
static void pxa3xx_gcu_init_debug_timer(void)
static inline void pxa3xx_gcu_init_debug_timer(void)
static int
add_buffer(struct platform_device *dev,
struct pxa3xx_gcu_priv *priv)
static void
free_buffers(struct platform_device *dev,
struct pxa3xx_gcu_priv *priv)
static int __devinit
pxa3xx_gcu_probe(struct platform_device *dev)
static int __devexit
pxa3xx_gcu_remove(struct platform_device *dev)
static struct platform_driver pxa3xx_gcu_driver = ;
static int __init
pxa3xx_gcu_init(void)
static void __exit
pxa3xx_gcu_exit(void)
module_init(pxa3xx_gcu_init);
module_exit(pxa3xx_gcu_exit);
MODULE_DESCRIPTION("PXA3xx graphics controller unit driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS_MISCDEV(MISCDEV_MINOR);
MODULE_AUTHOR("Janine Kropp <nin@directfb.org>, "
"Denis Oliver Kropp <dok@directfb.org>, "
"Daniel Mack <daniel@caiaq.de>");
