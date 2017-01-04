#define SBCR	(0x04)
#define ERCR	(0x0c)
#define SBCR_ERSB	(1 << 5)
struct pxa930_rotary ;
static void clear_sbcr(struct pxa930_rotary *r)
static irqreturn_t rotary_irq(int irq, void *dev_id)
static int pxa930_rotary_open(struct input_dev *dev)
static void pxa930_rotary_close(struct input_dev *dev)
static int __devinit pxa930_rotary_probe(struct platform_device *pdev)
static int __devexit pxa930_rotary_remove(struct platform_device *pdev)
static struct platform_driver pxa930_rotary_driver = ;
static int __init pxa930_rotary_init(void)
module_init(pxa930_rotary_init);
static void __exit pxa930_rotary_exit(void)
module_exit(pxa930_rotary_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Driver for PXA93x Enhanced Rotary Controller");
MODULE_AUTHOR("Yao Yong <yaoyong@marvell.com>");
