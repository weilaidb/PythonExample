#define TBCR		(0x000C)
#define TBCNTR		(0x0010)
#define TBSBC		(0x0014)
#define TBCR_TBRST	(1 << 1)
#define TBCR_TBSB	(1 << 10)
#define TBCR_Y_FLT(n)	(((n) & 0xf) << 6)
#define TBCR_X_FLT(n)	(((n) & 0xf) << 2)
#define TBCNTR_YM(n)	(((n) >> 24) & 0xff)
#define TBCNTR_YP(n)	(((n) >> 16) & 0xff)
#define TBCNTR_XM(n)	(((n) >> 8) & 0xff)
#define TBCNTR_XP(n)	((n) & 0xff)
#define TBSBC_TBSBC	(0x1)
struct pxa930_trkball ;
static irqreturn_t pxa930_trkball_interrupt(int irq, void *dev_id)
static int write_tbcr(struct pxa930_trkball *trkball, int v)
static void pxa930_trkball_config(struct pxa930_trkball *trkball)
static int pxa930_trkball_open(struct input_dev *dev)
static void pxa930_trkball_disable(struct pxa930_trkball *trkball)
static void pxa930_trkball_close(struct input_dev *dev)
static int __devinit pxa930_trkball_probe(struct platform_device *pdev)
static int __devexit pxa930_trkball_remove(struct platform_device *pdev)
static struct platform_driver pxa930_trkball_driver = ;
static int __init pxa930_trkball_init(void)
static void __exit pxa930_trkball_exit(void)
module_init(pxa930_trkball_init);
module_exit(pxa930_trkball_exit);
MODULE_AUTHOR("Yong Yao <yaoyong@marvell.com>");
MODULE_DESCRIPTION("PXA930 Trackball Mouse Driver");
MODULE_LICENSE("GPL");
