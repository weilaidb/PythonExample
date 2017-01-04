#define ADC_DELAY	0xf00
#define ADC_DOWN	0x01
#define ADC_TSC_Y	(0x01 << 8)
#define ADC_TSC_X	(0x00 << 8)
#define TSC_FOURWIRE	(~(0x03 << 1))
#define ADC_CLK_EN	(0x01 << 28)
#define ADC_READ_CON	(0x01 << 12)
#define ADC_CONV	(0x01 << 13)
#define ADC_SEMIAUTO	(0x01 << 14)
#define ADC_WAITTRIG	(0x03 << 14)
#define ADC_RST1	(0x01 << 16)
#define ADC_RST0	(0x00 << 16)
#define ADC_EN		(0x01 << 17)
#define ADC_INT		(0x01 << 18)
#define WT_INT		(0x01 << 20)
#define ADC_INT_EN	(0x01 << 21)
#define LVD_INT_EN	(0x01 << 22)
#define WT_INT_EN	(0x01 << 23)
#define ADC_DIV		(0x04 << 1)
enum ts_state ;
struct w90p910_ts ;
static void w90p910_report_event(struct w90p910_ts *w90p910_ts, bool down)
static void w90p910_prepare_x_reading(struct w90p910_ts *w90p910_ts)
static void w90p910_prepare_y_reading(struct w90p910_ts *w90p910_ts)
static void w90p910_prepare_next_packet(struct w90p910_ts *w90p910_ts)
static irqreturn_t w90p910_ts_interrupt(int irq, void *dev_id)
static void w90p910_check_pen_up(unsigned long data)
static int w90p910_open(struct input_dev *dev)
static void w90p910_close(struct input_dev *dev)
static int __devinit w90x900ts_probe(struct platform_device *pdev)
static int __devexit w90x900ts_remove(struct platform_device *pdev)
static struct platform_driver w90x900ts_driver = ;
static int __init w90x900ts_init(void)
static void __exit w90x900ts_exit(void)
module_init(w90x900ts_init);
module_exit(w90x900ts_exit);
MODULE_AUTHOR("Wan ZongShun <mcuos.com@gmail.com>");
MODULE_DESCRIPTION("w90p910 touch screen driver!");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:nuc900-ts");
