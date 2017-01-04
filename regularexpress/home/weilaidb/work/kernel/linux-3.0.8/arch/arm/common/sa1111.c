#define IRQ_GPAIN0		(0)
#define IRQ_GPAIN1		(1)
#define IRQ_GPAIN2		(2)
#define IRQ_GPAIN3		(3)
#define IRQ_GPBIN0		(4)
#define IRQ_GPBIN1		(5)
#define IRQ_GPBIN2		(6)
#define IRQ_GPBIN3		(7)
#define IRQ_GPBIN4		(8)
#define IRQ_GPBIN5		(9)
#define IRQ_GPCIN0		(10)
#define IRQ_GPCIN1		(11)
#define IRQ_GPCIN2		(12)
#define IRQ_GPCIN3		(13)
#define IRQ_GPCIN4		(14)
#define IRQ_GPCIN5		(15)
#define IRQ_GPCIN6		(16)
#define IRQ_GPCIN7		(17)
#define IRQ_MSTXINT		(18)
#define IRQ_MSRXINT		(19)
#define IRQ_MSSTOPERRINT	(20)
#define IRQ_TPTXINT		(21)
#define IRQ_TPRXINT		(22)
#define IRQ_TPSTOPERRINT	(23)
#define SSPXMTINT		(24)
#define SSPRCVINT		(25)
#define SSPROR			(26)
#define AUDXMTDMADONEA		(32)
#define AUDRCVDMADONEA		(33)
#define AUDXMTDMADONEB		(34)
#define AUDRCVDMADONEB		(35)
#define AUDTFSR			(36)
#define AUDRFSR			(37)
#define AUDTUR			(38)
#define AUDROR			(39)
#define AUDDTS			(40)
#define AUDRDD			(41)
#define AUDSTO			(42)
#define IRQ_USBPWR		(43)
#define IRQ_HCIM		(44)
#define IRQ_HCIBUFFACC		(45)
#define IRQ_HCIRMTWKP		(46)
#define IRQ_NHCIMFCIR		(47)
#define IRQ_USB_PORT_RESUME	(48)
#define IRQ_S0_READY_NINT	(49)
#define IRQ_S1_READY_NINT	(50)
#define IRQ_S0_CD_VALID		(51)
#define IRQ_S1_CD_VALID		(52)
#define IRQ_S0_BVD1_STSCHG	(53)
#define IRQ_S1_BVD1_STSCHG	(54)
extern void __init sa1110_mb_enable(void);
struct sa1111 ;
static struct sa1111 *g_sa1111;
struct sa1111_dev_info ;
static struct sa1111_dev_info sa1111_devices[] = ;
static void
sa1111_irq_handler(unsigned int irq, struct irq_desc *desc)
#define SA1111_IRQMASK_LO(x)	(1 << (x - sachip->irq_base))
#define SA1111_IRQMASK_HI(x)	(1 << (x - sachip->irq_base - 32))
static void sa1111_ack_irq(struct irq_data *d)
static void sa1111_mask_lowirq(struct irq_data *d)
static void sa1111_unmask_lowirq(struct irq_data *d)
static int sa1111_retrigger_lowirq(struct irq_data *d)
static int sa1111_type_lowirq(struct irq_data *d, unsigned int flags)
static int sa1111_wake_lowirq(struct irq_data *d, unsigned int on)
static struct irq_chip sa1111_low_chip = ;
static void sa1111_mask_highirq(struct irq_data *d)
static void sa1111_unmask_highirq(struct irq_data *d)
static int sa1111_retrigger_highirq(struct irq_data *d)
static int sa1111_type_highirq(struct irq_data *d, unsigned int flags)
static int sa1111_wake_highirq(struct irq_data *d, unsigned int on)
static struct irq_chip sa1111_high_chip = ;
static void sa1111_setup_irq(struct sa1111 *sachip)
static void sa1111_wake(struct sa1111 *sachip)
static u32 sa1111_dma_mask[] = ;
void
sa1111_configure_smc(struct sa1111 *sachip, int sdram, unsigned int drac,
unsigned int cas_latency)
static void sa1111_dev_release(struct device *_dev)
static int
sa1111_init_one_child(struct sa1111 *sachip, struct resource *parent,
struct sa1111_dev_info *info)
static int __devinit
__sa1111_probe(struct device *me, struct resource *mem, int irq)
static int sa1111_remove_one(struct device *dev, void *data)
static void __sa1111_remove(struct sa1111 *sachip)
int dma_needs_bounce(struct device *dev, dma_addr_t addr, size_t size)
struct sa1111_save_data ;
static int sa1111_suspend(struct platform_device *dev, pm_message_t state)
static int sa1111_resume(struct platform_device *dev)
#define sa1111_suspend NULL
#define sa1111_resume  NULL
static int __devinit sa1111_probe(struct platform_device *pdev)
static int sa1111_remove(struct platform_device *pdev)
static struct platform_driver sa1111_device_driver = ;
static inline struct sa1111 *sa1111_chip_driver(struct sa1111_dev *sadev)
static unsigned char opdiv_table[] = ;
static unsigned int __sa1111_pll_clock(struct sa1111 *sachip)
unsigned int sa1111_pll_clock(struct sa1111_dev *sadev)
EXPORT_SYMBOL(sa1111_pll_clock);
void sa1111_select_audio_mode(struct sa1111_dev *sadev, int mode)
EXPORT_SYMBOL(sa1111_select_audio_mode);
int sa1111_set_audio_rate(struct sa1111_dev *sadev, int rate)
EXPORT_SYMBOL(sa1111_set_audio_rate);
int sa1111_get_audio_rate(struct sa1111_dev *sadev)
EXPORT_SYMBOL(sa1111_get_audio_rate);
void sa1111_set_io_dir(struct sa1111_dev *sadev,
unsigned int bits, unsigned int dir,
unsigned int sleep_dir)
EXPORT_SYMBOL(sa1111_set_io_dir);
void sa1111_set_io(struct sa1111_dev *sadev, unsigned int bits, unsigned int v)
EXPORT_SYMBOL(sa1111_set_io);
void sa1111_set_sleep_io(struct sa1111_dev *sadev, unsigned int bits, unsigned int v)
EXPORT_SYMBOL(sa1111_set_sleep_io);
void sa1111_enable_device(struct sa1111_dev *sadev)
EXPORT_SYMBOL(sa1111_enable_device);
void sa1111_disable_device(struct sa1111_dev *sadev)
EXPORT_SYMBOL(sa1111_disable_device);
static int sa1111_match(struct device *_dev, struct device_driver *_drv)
static int sa1111_bus_suspend(struct device *dev, pm_message_t state)
static int sa1111_bus_resume(struct device *dev)
static int sa1111_bus_probe(struct device *dev)
static int sa1111_bus_remove(struct device *dev)
struct bus_type sa1111_bus_type = ;
EXPORT_SYMBOL(sa1111_bus_type);
int sa1111_driver_register(struct sa1111_driver *driver)
EXPORT_SYMBOL(sa1111_driver_register);
void sa1111_driver_unregister(struct sa1111_driver *driver)
EXPORT_SYMBOL(sa1111_driver_unregister);
static int __init sa1111_init(void)
static void __exit sa1111_exit(void)
subsys_initcall(sa1111_init);
module_exit(sa1111_exit);
MODULE_DESCRIPTION("Intel Corporation SA1111 core driver");
MODULE_LICENSE("GPL");
