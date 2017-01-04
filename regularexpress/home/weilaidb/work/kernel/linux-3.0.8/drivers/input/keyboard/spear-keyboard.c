#define MODE_REG	0x00
#define STATUS_REG	0x0C
#define DATA_REG	0x10
#define INTR_MASK	0x54
#define PCLK_FREQ_MSK	0xA400
#define START_SCAN	0x0100
#define SCAN_RATE_10	0x0000
#define SCAN_RATE_20	0x0004
#define SCAN_RATE_40	0x0008
#define SCAN_RATE_80	0x000C
#define MODE_KEYBOARD	0x0002
#define DATA_AVAIL	0x2
#define KEY_MASK	0xFF000000
#define KEY_VALUE	0x00FFFFFF
#define ROW_MASK	0xF0
#define COLUMN_MASK	0x0F
#define ROW_SHIFT	4
struct spear_kbd ;
static irqreturn_t spear_kbd_interrupt(int irq, void *dev_id)
static int spear_kbd_open(struct input_dev *dev)
static void spear_kbd_close(struct input_dev *dev)
static int __devinit spear_kbd_probe(struct platform_device *pdev)
static int __devexit spear_kbd_remove(struct platform_device *pdev)
static int spear_kbd_suspend(struct device *dev)
static int spear_kbd_resume(struct device *dev)
static const struct dev_pm_ops spear_kbd_pm_ops = ;
static struct platform_driver spear_kbd_driver = ;
static int __init spear_kbd_init(void)
module_init(spear_kbd_init);
static void __exit spear_kbd_exit(void)
module_exit(spear_kbd_exit);
MODULE_AUTHOR("Rajeev Kumar");
MODULE_DESCRIPTION("SPEAr Keyboard Driver");
MODULE_LICENSE("GPL");
