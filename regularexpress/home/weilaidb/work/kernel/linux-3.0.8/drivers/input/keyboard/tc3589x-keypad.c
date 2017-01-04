#define TC3589x_MAX_KPROW               8
#define TC3589x_MAX_KPCOL               12
#define TC3589x_MAX_DEBOUNCE_SETTLE     0xFF
#define DEDICATED_KEY_VAL		0xFF
#define TC3589x_NO_PULL_MASK		0x0
#define TC3589x_PULL_DOWN_MASK		0x1
#define TC3589x_PULL_UP_MASK		0x2
#define TC3589x_PULLUP_ALL_MASK		0xAA
#define TC3589x_IO_PULL_VAL(index, mask)	((mask)<<((index)%4)*2))
#define IOCFG_BALLCFG		0x01
#define IOCFG_IG		0x08
#define KP_EVCODE_COL_MASK	0x0F
#define KP_EVCODE_ROW_MASK	0x70
#define KP_RELEASE_EVT_MASK	0x80
#define KP_ROW_SHIFT		4
#define KP_NO_VALID_KEY_MASK	0x7F
#define TC3589x_KBDRST		0x2
#define TC3589x_IRQRST		0x10
#define TC3589x_RESET_ALL	0x1B
#define TC3589x_KBDMFS_EN	0x1
#define KPD_CLK_EN		0x1
#define IRQ_CLEAR		0x1
#define TC3589x_EVT_LOSS_INT	0x8
#define TC3589x_EVT_INT		0x4
#define TC3589x_KBD_LOSS_INT	0x2
#define TC3589x_KBD_INT		0x1
#define TC3589x_EVT_INT_CLR	0x2
#define TC3589x_KBD_INT_CLR	0x1
#define TC3589x_KBD_KEYMAP_SIZE     64
struct tc_keypad ;
static int __devinit tc3589x_keypad_init_key_hardware(struct tc_keypad *keypad)
#define TC35893_DATA_REGS		4
#define TC35893_KEYCODE_FIFO_EMPTY	0x7f
#define TC35893_KEYCODE_FIFO_CLEAR	0xff
#define TC35893_KEYPAD_ROW_SHIFT	0x3
static irqreturn_t tc3589x_keypad_irq(int irq, void *dev)
static int tc3589x_keypad_enable(struct tc_keypad *keypad)
static int tc3589x_keypad_disable(struct tc_keypad *keypad)
static int tc3589x_keypad_open(struct input_dev *input)
static void tc3589x_keypad_close(struct input_dev *input)
static int __devinit tc3589x_keypad_probe(struct platform_device *pdev)
static int __devexit tc3589x_keypad_remove(struct platform_device *pdev)
static int tc3589x_keypad_suspend(struct device *dev)
static int tc3589x_keypad_resume(struct device *dev)
static SIMPLE_DEV_PM_OPS(tc3589x_keypad_dev_pm_ops,
tc3589x_keypad_suspend, tc3589x_keypad_resume);
static struct platform_driver tc3589x_keypad_driver = ;
static int __init tc3589x_keypad_init(void)
module_init(tc3589x_keypad_init);
static void __exit tc3589x_keypad_exit(void)
module_exit(tc3589x_keypad_exit);
MODULE_LICENSE("GPL v2");
MODULE_AUTHOR("Jayeeta Banerjee/Sundar Iyer");
MODULE_DESCRIPTION("TC35893 Keypad Driver");
MODULE_ALIAS("platform:tc3589x-keypad");
