#define KPCR		0x00
#define KPSR		0x02
#define KBD_STAT_KPKD	(0x1 << 0)
#define KBD_STAT_KPKR	(0x1 << 1)
#define KBD_STAT_KDSC	(0x1 << 2)
#define KBD_STAT_KRSS	(0x1 << 3)
#define KBD_STAT_KDIE	(0x1 << 8)
#define KBD_STAT_KRIE	(0x1 << 9)
#define KBD_STAT_KPPEN	(0x1 << 10)
#define KDDR		0x04
#define KPDR		0x06
#define MAX_MATRIX_KEY_ROWS	8
#define MAX_MATRIX_KEY_COLS	8
#define MATRIX_ROW_SHIFT	3
#define MAX_MATRIX_KEY_NUM	(MAX_MATRIX_KEY_ROWS * MAX_MATRIX_KEY_COLS)
struct imx_keypad ;
static void imx_keypad_scan_matrix(struct imx_keypad *keypad,
unsigned short *matrix_volatile_state)
static void imx_keypad_fire_events(struct imx_keypad *keypad,
unsigned short *matrix_volatile_state)
static void imx_keypad_check_for_events(unsigned long data)
static irqreturn_t imx_keypad_irq_handler(int irq, void *dev_id)
static void imx_keypad_config(struct imx_keypad *keypad)
static void imx_keypad_inhibit(struct imx_keypad *keypad)
static void imx_keypad_close(struct input_dev *dev)
static int imx_keypad_open(struct input_dev *dev)
static int __devinit imx_keypad_probe(struct platform_device *pdev)
static int __devexit imx_keypad_remove(struct platform_device *pdev)
static struct platform_driver imx_keypad_driver = ;
static int __init imx_keypad_init(void)
static void __exit imx_keypad_exit(void)
module_init(imx_keypad_init);
module_exit(imx_keypad_exit);
MODULE_AUTHOR("Alberto Panizzo <maramaopercheseimorto@gmail.com>");
MODULE_DESCRIPTION("IMX Keypad Port Driver");
MODULE_LICENSE("GPL v2");
MODULE_ALIAS("platform:imx-keypad");
