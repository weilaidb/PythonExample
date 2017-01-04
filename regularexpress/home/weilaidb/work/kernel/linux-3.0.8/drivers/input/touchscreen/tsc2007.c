#define TSC2007_MEASURE_TEMP0		(0x0 << 4)
#define TSC2007_MEASURE_AUX		(0x2 << 4)
#define TSC2007_MEASURE_TEMP1		(0x4 << 4)
#define TSC2007_ACTIVATE_XN		(0x8 << 4)
#define TSC2007_ACTIVATE_YN		(0x9 << 4)
#define TSC2007_ACTIVATE_YP_XN		(0xa << 4)
#define TSC2007_SETUP			(0xb << 4)
#define TSC2007_MEASURE_X		(0xc << 4)
#define TSC2007_MEASURE_Y		(0xd << 4)
#define TSC2007_MEASURE_Z1		(0xe << 4)
#define TSC2007_MEASURE_Z2		(0xf << 4)
#define TSC2007_POWER_OFF_IRQ_EN	(0x0 << 2)
#define TSC2007_ADC_ON_IRQ_DIS0		(0x1 << 2)
#define TSC2007_ADC_OFF_IRQ_EN		(0x2 << 2)
#define TSC2007_ADC_ON_IRQ_DIS1		(0x3 << 2)
#define TSC2007_12BIT			(0x0 << 1)
#define TSC2007_8BIT			(0x1 << 1)
#define	MAX_12BIT			((1 << 12) - 1)
#define ADC_ON_12BIT	(TSC2007_12BIT | TSC2007_ADC_ON_IRQ_DIS0)
#define READ_Y		(ADC_ON_12BIT | TSC2007_MEASURE_Y)
#define READ_Z1		(ADC_ON_12BIT | TSC2007_MEASURE_Z1)
#define READ_Z2		(ADC_ON_12BIT | TSC2007_MEASURE_Z2)
#define READ_X		(ADC_ON_12BIT | TSC2007_MEASURE_X)
#define PWRDOWN		(TSC2007_12BIT | TSC2007_POWER_OFF_IRQ_EN)
struct ts_event ;
struct tsc2007 ;
static inline int tsc2007_xfer(struct tsc2007 *tsc, u8 cmd)
static void tsc2007_read_values(struct tsc2007 *tsc, struct ts_event *tc)
static u32 tsc2007_calculate_pressure(struct tsc2007 *tsc, struct ts_event *tc)
static void tsc2007_send_up_event(struct tsc2007 *tsc)
static void tsc2007_work(struct work_struct *work)
static irqreturn_t tsc2007_irq(int irq, void *handle)
static void tsc2007_free_irq(struct tsc2007 *ts)
static int __devinit tsc2007_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int __devexit tsc2007_remove(struct i2c_client *client)
static const struct i2c_device_id tsc2007_idtable[] = ;
MODULE_DEVICE_TABLE(i2c, tsc2007_idtable);
static struct i2c_driver tsc2007_driver = ;
static int __init tsc2007_init(void)
static void __exit tsc2007_exit(void)
module_init(tsc2007_init);
module_exit(tsc2007_exit);
MODULE_AUTHOR("Kwangwoo Lee <kwlee@mtekvision.com>");
MODULE_DESCRIPTION("TSC2007 TouchScreen Driver");
MODULE_LICENSE("GPL");
