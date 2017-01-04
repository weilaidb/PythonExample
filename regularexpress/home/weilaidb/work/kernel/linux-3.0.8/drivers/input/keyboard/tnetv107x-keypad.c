#define BITS(x)			(BIT(x) - 1)
#define KEYPAD_ROWS		9
#define KEYPAD_COLS		9
#define DEBOUNCE_MIN		0x400ul
#define DEBOUNCE_MAX		0x3ffffffful
struct keypad_regs ;
#define keypad_read(kp, reg)		__raw_readl(&(kp)->regs->reg)
#define keypad_write(kp, reg, val)	__raw_writel(val, &(kp)->regs->reg)
struct keypad_data ;
static irqreturn_t keypad_irq(int irq, void *data)
static int keypad_start(struct input_dev *dev)
static void keypad_stop(struct input_dev *dev)
static int __devinit keypad_probe(struct platform_device *pdev)
static int __devexit keypad_remove(struct platform_device *pdev)
static struct platform_driver keypad_driver = ;
static int __init keypad_init(void)
static void __exit keypad_exit(void)
module_init(keypad_init);
module_exit(keypad_exit);
MODULE_AUTHOR("Cyril Chemparathy");
MODULE_DESCRIPTION("TNETV107X Keypad Driver");
MODULE_ALIAS("platform: tnetv107x-keypad");
MODULE_LICENSE("GPL");
