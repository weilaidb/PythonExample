#define DAVINCI_KEYSCAN_KEYCTRL		0x0000
#define DAVINCI_KEYSCAN_INTENA		0x0004
#define DAVINCI_KEYSCAN_INTFLAG		0x0008
#define DAVINCI_KEYSCAN_INTCLR		0x000c
#define DAVINCI_KEYSCAN_STRBWIDTH	0x0010
#define DAVINCI_KEYSCAN_INTERVAL	0x0014
#define DAVINCI_KEYSCAN_CONTTIME	0x0018
#define DAVINCI_KEYSCAN_CURRENTST	0x001c
#define DAVINCI_KEYSCAN_PREVSTATE	0x0020
#define DAVINCI_KEYSCAN_EMUCTRL		0x0024
#define DAVINCI_KEYSCAN_IODFTCTRL	0x002c
#define DAVINCI_KEYSCAN_KEYEN		0x00000001
#define DAVINCI_KEYSCAN_PREVMODE	0x00000002
#define DAVINCI_KEYSCAN_CHATOFF		0x00000004
#define DAVINCI_KEYSCAN_AUTODET		0x00000008
#define DAVINCI_KEYSCAN_SCANMODE	0x00000010
#define DAVINCI_KEYSCAN_OUTTYPE		0x00000020
#define DAVINCI_KEYSCAN_INT_CONT	0x00000008
#define DAVINCI_KEYSCAN_INT_OFF		0x00000004
#define DAVINCI_KEYSCAN_INT_ON		0x00000002
#define DAVINCI_KEYSCAN_INT_CHANGE	0x00000001
#define DAVINCI_KEYSCAN_INT_ALL		0x0000000f
struct davinci_ks ;
static int __init davinci_ks_initialize(struct davinci_ks *davinci_ks)
static irqreturn_t davinci_ks_interrupt(int irq, void *dev_id)
static int __init davinci_ks_probe(struct platform_device *pdev)
static int __devexit davinci_ks_remove(struct platform_device *pdev)
static struct platform_driver davinci_ks_driver = ;
static int __init davinci_ks_init(void)
module_init(davinci_ks_init);
static void __exit davinci_ks_exit(void)
module_exit(davinci_ks_exit);
MODULE_AUTHOR("Miguel Aguilar");
MODULE_DESCRIPTION("Texas Instruments DaVinci Key Scan Driver");
MODULE_LICENSE("GPL");
