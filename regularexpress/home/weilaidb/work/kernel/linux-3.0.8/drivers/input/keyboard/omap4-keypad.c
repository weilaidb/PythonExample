#define OMAP4_KBD_REVISION		0x00
#define OMAP4_KBD_SYSCONFIG		0x10
#define OMAP4_KBD_SYSSTATUS		0x14
#define OMAP4_KBD_IRQSTATUS		0x18
#define OMAP4_KBD_IRQENABLE		0x1C
#define OMAP4_KBD_WAKEUPENABLE		0x20
#define OMAP4_KBD_PENDING		0x24
#define OMAP4_KBD_CTRL			0x28
#define OMAP4_KBD_DEBOUNCINGTIME	0x2C
#define OMAP4_KBD_LONGKEYTIME		0x30
#define OMAP4_KBD_TIMEOUT		0x34
#define OMAP4_KBD_STATEMACHINE		0x38
#define OMAP4_KBD_ROWINPUTS		0x3C
#define OMAP4_KBD_COLUMNOUTPUTS		0x40
#define OMAP4_KBD_FULLCODE31_0		0x44
#define OMAP4_KBD_FULLCODE63_32		0x48
#define OMAP4_DEF_IRQENABLE_EVENTEN	(1 << 0)
#define OMAP4_DEF_IRQENABLE_LONGKEY	(1 << 1)
#define OMAP4_DEF_IRQENABLE_TIMEOUTEN	(1 << 2)
#define OMAP4_DEF_WUP_EVENT_ENA		(1 << 0)
#define OMAP4_DEF_WUP_LONG_KEY_ENA	(1 << 1)
#define OMAP4_DEF_CTRL_NOSOFTMODE	(1 << 1)
#define OMAP4_DEF_CTRLPTVVALUE		(1 << 2)
#define OMAP4_DEF_CTRLPTV		(1 << 1)
#define OMAP4_VAL_IRQDISABLE		0x00
#define OMAP4_VAL_DEBOUNCINGTIME	0x07
#define OMAP4_VAL_FUNCTIONALCFG		0x1E
#define OMAP4_MASK_IRQSTATUSDISABLE	0xFFFF
struct omap4_keypad ;
static irqreturn_t omap4_keypad_interrupt(int irq, void *dev_id)
static int omap4_keypad_open(struct input_dev *input)
static void omap4_keypad_close(struct input_dev *input)
static int __devinit omap4_keypad_probe(struct platform_device *pdev)
static int __devexit omap4_keypad_remove(struct platform_device *pdev)
static struct platform_driver omap4_keypad_driver = ;
static int __init omap4_keypad_init(void)
module_init(omap4_keypad_init);
static void __exit omap4_keypad_exit(void)
module_exit(omap4_keypad_exit);
MODULE_AUTHOR("Texas Instruments");
MODULE_DESCRIPTION("OMAP4 Keypad Driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:omap4-keypad");
