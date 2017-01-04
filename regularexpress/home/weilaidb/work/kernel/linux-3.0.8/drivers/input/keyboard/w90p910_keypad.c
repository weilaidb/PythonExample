#define KPI_CONF		0x00
#define KPI_3KCONF		0x04
#define KPI_LPCONF		0x08
#define KPI_STATUS		0x0C
#define IS1KEY			(0x01 << 16)
#define INTTR			(0x01 << 21)
#define KEY0R			(0x0f << 3)
#define KEY0C			0x07
#define DEBOUNCE_BIT		0x08
#define KSIZE0			(0x01 << 16)
#define KSIZE1			(0x01 << 17)
#define KPSEL			(0x01 << 19)
#define ENKP			(0x01 << 18)
#define KGET_RAW(n)		(((n) & KEY0R) >> 3)
#define KGET_COLUMN(n)		((n) & KEY0C)
#define W90P910_MAX_KEY_NUM	(8 * 8)
#define W90P910_ROW_SHIFT	3
struct w90p910_keypad ;
static void w90p910_keypad_scan_matrix(struct w90p910_keypad *keypad,
unsigned int status)
static irqreturn_t w90p910_keypad_irq_handler(int irq, void *dev_id)
static int w90p910_keypad_open(struct input_dev *dev)
static void w90p910_keypad_close(struct input_dev *dev)
static int __devinit w90p910_keypad_probe(struct platform_device *pdev)
static int __devexit w90p910_keypad_remove(struct platform_device *pdev)
static struct platform_driver w90p910_keypad_driver = ;
static int __init w90p910_keypad_init(void)
static void __exit w90p910_keypad_exit(void)
module_init(w90p910_keypad_init);
module_exit(w90p910_keypad_exit);
MODULE_AUTHOR("Wan ZongShun <mcuos.com@gmail.com>");
MODULE_DESCRIPTION("w90p910 keypad driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:nuc900-keypad");
