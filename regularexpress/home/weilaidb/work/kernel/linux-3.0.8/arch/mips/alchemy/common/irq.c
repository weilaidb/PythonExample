#define IC_CFG0RD	0x40
#define IC_CFG0SET	0x40
#define IC_CFG0CLR	0x44
#define IC_CFG1RD	0x48
#define IC_CFG1SET	0x48
#define IC_CFG1CLR	0x4C
#define IC_CFG2RD	0x50
#define IC_CFG2SET	0x50
#define IC_CFG2CLR	0x54
#define IC_REQ0INT	0x54
#define IC_SRCRD	0x58
#define IC_SRCSET	0x58
#define IC_SRCCLR	0x5C
#define IC_REQ1INT	0x5C
#define IC_ASSIGNRD	0x60
#define IC_ASSIGNSET	0x60
#define IC_ASSIGNCLR	0x64
#define IC_WAKERD	0x68
#define IC_WAKESET	0x68
#define IC_WAKECLR	0x6C
#define IC_MASKRD	0x70
#define IC_MASKSET	0x70
#define IC_MASKCLR	0x74
#define IC_RISINGRD	0x78
#define IC_RISINGCLR	0x78
#define IC_FALLINGRD	0x7C
#define IC_FALLINGCLR	0x7C
#define IC_TESTBIT	0x80
static int au1x_ic_settype(struct irq_data *d, unsigned int flow_type);
struct au1xxx_irqmap ;
struct au1xxx_irqmap au1000_irqmap[] __initdata = ;
struct au1xxx_irqmap au1500_irqmap[] __initdata = ;
struct au1xxx_irqmap au1100_irqmap[] __initdata = ;
struct au1xxx_irqmap au1550_irqmap[] __initdata = ;
struct au1xxx_irqmap au1200_irqmap[] __initdata = ;
static void au1x_ic0_unmask(struct irq_data *d)
static void au1x_ic1_unmask(struct irq_data *d)
static void au1x_ic0_mask(struct irq_data *d)
static void au1x_ic1_mask(struct irq_data *d)
static void au1x_ic0_ack(struct irq_data *d)
static void au1x_ic1_ack(struct irq_data *d)
static void au1x_ic0_maskack(struct irq_data *d)
static void au1x_ic1_maskack(struct irq_data *d)
static int au1x_ic1_setwake(struct irq_data *d, unsigned int on)
static struct irq_chip au1x_ic0_chip = ;
static struct irq_chip au1x_ic1_chip = ;
static int au1x_ic_settype(struct irq_data *d, unsigned int flow_type)
asmlinkage void plat_irq_dispatch(void)
static inline void ic_init(void __iomem *base)
static void __init au1000_init_irq(struct au1xxx_irqmap *map)
void __init arch_init_irq(void)
static unsigned long alchemy_ic_pmdata[7 * 2];
static inline void alchemy_ic_suspend_one(void __iomem *base, unsigned long *d)
static inline void alchemy_ic_resume_one(void __iomem *base, unsigned long *d)
static int alchemy_ic_suspend(void)
static void alchemy_ic_resume(void)
static struct syscore_ops alchemy_ic_syscore_ops = ;
static int __init alchemy_ic_pm_init(void)
device_initcall(alchemy_ic_pm_init);
