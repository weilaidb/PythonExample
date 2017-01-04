#define KEY_INIT		0x00
#define KEY_DIAG		0x04
#define KEY_REG			0x08
#define KEY_INIT_DBNC_MASK	(0x00ff0000)
#define KEY_INIT_DBNC_SHIFT	(16)
#define KEY_INIT_DIS3KY		(1<<15)
#define KEY_INIT_DIAG		(1<<14)
#define KEY_INIT_BACK		(1<<13)
#define KEY_INIT_T2		(1<<12)
#define KEY_INIT_PRSCL_MASK	(0x000003ff)
#define KEY_INIT_PRSCL_SHIFT	(0)
#define KEY_DIAG_MASK		(0x0000003f)
#define KEY_DIAG_SHIFT		(0)
#define KEY_REG_K		(1<<15)
#define KEY_REG_INT		(1<<14)
#define KEY_REG_2KEYS		(1<<13)
#define KEY_REG_1KEY		(1<<12)
#define KEY_REG_KEY2_MASK	(0x00000fc0)
#define KEY_REG_KEY2_SHIFT	(6)
#define KEY_REG_KEY1_MASK	(0x0000003f)
#define KEY_REG_KEY1_SHIFT	(0)
#define EP93XX_MATRIX_SIZE	(EP93XX_MATRIX_ROWS * EP93XX_MATRIX_COLS)
struct ep93xx_keypad ;
static irqreturn_t ep93xx_keypad_irq_handler(int irq, void *dev_id)
static void ep93xx_keypad_config(struct ep93xx_keypad *keypad)
static int ep93xx_keypad_open(struct input_dev *pdev)
static void ep93xx_keypad_close(struct input_dev *pdev)
static int ep93xx_keypad_suspend(struct platform_device *pdev,
pm_message_t state)
static int ep93xx_keypad_resume(struct platform_device *pdev)
#define ep93xx_keypad_suspend	NULL
#define ep93xx_keypad_resume	NULL
static int __devinit ep93xx_keypad_probe(struct platform_device *pdev)
static int __devexit ep93xx_keypad_remove(struct platform_device *pdev)
static struct platform_driver ep93xx_keypad_driver = ;
static int __init ep93xx_keypad_init(void)
static void __exit ep93xx_keypad_exit(void)
module_init(ep93xx_keypad_init);
module_exit(ep93xx_keypad_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("H Hartley Sweeten <hsweeten@visionengravers.com>");
MODULE_DESCRIPTION("EP93xx Matrix Keypad Controller");
MODULE_ALIAS("platform:ep93xx-keypad");
