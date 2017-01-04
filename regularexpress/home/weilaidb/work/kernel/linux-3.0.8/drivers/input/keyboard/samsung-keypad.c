#define SAMSUNG_KEYIFCON			0x00
#define SAMSUNG_KEYIFSTSCLR			0x04
#define SAMSUNG_KEYIFCOL			0x08
#define SAMSUNG_KEYIFROW			0x0c
#define SAMSUNG_KEYIFFC				0x10
#define SAMSUNG_KEYIFCON_INT_F_EN		(1 << 0)
#define SAMSUNG_KEYIFCON_INT_R_EN		(1 << 1)
#define SAMSUNG_KEYIFCON_DF_EN			(1 << 2)
#define SAMSUNG_KEYIFCON_FC_EN			(1 << 3)
#define SAMSUNG_KEYIFCON_WAKEUPEN		(1 << 4)
#define SAMSUNG_KEYIFSTSCLR_P_INT_MASK		(0xff << 0)
#define SAMSUNG_KEYIFSTSCLR_R_INT_MASK		(0xff << 8)
#define SAMSUNG_KEYIFSTSCLR_R_INT_OFFSET	8
#define S5PV210_KEYIFSTSCLR_P_INT_MASK		(0x3fff << 0)
#define S5PV210_KEYIFSTSCLR_R_INT_MASK		(0x3fff << 16)
#define S5PV210_KEYIFSTSCLR_R_INT_OFFSET	16
#define SAMSUNG_KEYIFCOL_MASK			(0xff << 0)
#define S5PV210_KEYIFCOLEN_MASK			(0xff << 8)
#define SAMSUNG_KEYIFROW_MASK			(0xff << 0)
#define S5PV210_KEYIFROW_MASK			(0x3fff << 0)
#define SAMSUNG_KEYIFFC_MASK			(0x3ff << 0)
enum samsung_keypad_type ;
struct samsung_keypad ;
static int samsung_keypad_is_s5pv210(struct device *dev)
static void samsung_keypad_scan(struct samsung_keypad *keypad,
unsigned int *row_state)
static bool samsung_keypad_report(struct samsung_keypad *keypad,
unsigned int *row_state)
static irqreturn_t samsung_keypad_irq(int irq, void *dev_id)
static void samsung_keypad_start(struct samsung_keypad *keypad)
static void samsung_keypad_stop(struct samsung_keypad *keypad)
static int samsung_keypad_open(struct input_dev *input_dev)
static void samsung_keypad_close(struct input_dev *input_dev)
static int __devinit samsung_keypad_probe(struct platform_device *pdev)
static int __devexit samsung_keypad_remove(struct platform_device *pdev)
static void samsung_keypad_toggle_wakeup(struct samsung_keypad *keypad,
bool enable)
static int samsung_keypad_suspend(struct device *dev)
static int samsung_keypad_resume(struct device *dev)
static const struct dev_pm_ops samsung_keypad_pm_ops = ;
static struct platform_device_id samsung_keypad_driver_ids[] = ;
MODULE_DEVICE_TABLE(platform, samsung_keypad_driver_ids);
static struct platform_driver samsung_keypad_driver = ;
static int __init samsung_keypad_init(void)
module_init(samsung_keypad_init);
static void __exit samsung_keypad_exit(void)
module_exit(samsung_keypad_exit);
MODULE_DESCRIPTION("Samsung keypad driver");
MODULE_AUTHOR("Joonyoung Shim <jy0922.shim@samsung.com>");
MODULE_AUTHOR("Donghwa Lee <dh09.lee@samsung.com>");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:samsung-keypad");
