#define DA9034_MANUAL_CTRL	0x50
#define DA9034_LDO_ADC_EN	(1 << 4)
#define DA9034_AUTO_CTRL1	0x51
#define DA9034_AUTO_CTRL2	0x52
#define DA9034_AUTO_TSI_EN	(1 << 3)
#define DA9034_PEN_DETECT	(1 << 4)
#define DA9034_TSI_CTRL1	0x53
#define DA9034_TSI_CTRL2	0x54
#define DA9034_TSI_X_MSB	0x6c
#define DA9034_TSI_Y_MSB	0x6d
#define DA9034_TSI_XY_LSB	0x6e
enum ;
enum ;
struct da9034_touch ;
static inline int is_pen_down(struct da9034_touch *touch)
static inline int detect_pen_down(struct da9034_touch *touch, int on)
static int read_tsi(struct da9034_touch *touch)
static inline int start_tsi(struct da9034_touch *touch)
static inline int stop_tsi(struct da9034_touch *touch)
static inline void report_pen_down(struct da9034_touch *touch)
static inline void report_pen_up(struct da9034_touch *touch)
static void da9034_event_handler(struct da9034_touch *touch, int event)
static void da9034_tsi_work(struct work_struct *work)
static int da9034_touch_notifier(struct notifier_block *nb,
unsigned long event, void *data)
static int da9034_touch_open(struct input_dev *dev)
static void da9034_touch_close(struct input_dev *dev)
static int __devinit da9034_touch_probe(struct platform_device *pdev)
static int __devexit da9034_touch_remove(struct platform_device *pdev)
static struct platform_driver da9034_touch_driver = ;
static int __init da9034_touch_init(void)
module_init(da9034_touch_init);
static void __exit da9034_touch_exit(void)
module_exit(da9034_touch_exit);
MODULE_DESCRIPTION("Touchscreen driver for Dialog Semiconductor DA9034");
MODULE_AUTHOR("Eric Miao <eric.miao@marvell.com>, Bin Yang <bin.yang@marvell.com>");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:da9034-touch");
