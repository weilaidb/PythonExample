#define PMC_OBPNAME	"SUNW,pmc"
#define PMC_DEVNAME	"pmc"
#define PMC_IDLE_REG	0x00
#define PMC_IDLE_ON	0x01
static u8 __iomem *regs;
#define pmc_readb(offs)		(sbus_readb(regs+offs))
#define pmc_writeb(val, offs)	(sbus_writeb(val, regs+offs))
static void pmc_swift_idle(void)
static int __devinit pmc_probe(struct platform_device *op)
static struct of_device_id pmc_match[] = ;
MODULE_DEVICE_TABLE(of, pmc_match);
static struct platform_driver pmc_driver = ;
static int __init pmc_init(void)
__initcall(pmc_init);
