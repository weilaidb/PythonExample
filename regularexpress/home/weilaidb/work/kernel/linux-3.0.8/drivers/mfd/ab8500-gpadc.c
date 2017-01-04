#define AB8500_GPADC_CTRL1_REG		0x00
#define AB8500_GPADC_CTRL2_REG		0x01
#define AB8500_GPADC_CTRL3_REG		0x02
#define AB8500_GPADC_AUTO_TIMER_REG	0x03
#define AB8500_GPADC_STAT_REG		0x04
#define AB8500_GPADC_MANDATAL_REG	0x05
#define AB8500_GPADC_MANDATAH_REG	0x06
#define AB8500_GPADC_AUTODATAL_REG	0x07
#define AB8500_GPADC_AUTODATAH_REG	0x08
#define AB8500_GPADC_MUX_CTRL_REG	0x09
#define AB8500_GPADC_CAL_1		0x0F
#define AB8500_GPADC_CAL_2		0x10
#define AB8500_GPADC_CAL_3		0x11
#define AB8500_GPADC_CAL_4		0x12
#define AB8500_GPADC_CAL_5		0x13
#define AB8500_GPADC_CAL_6		0x14
#define AB8500_GPADC_CAL_7		0x15
#define EN_VINTCORE12			0x04
#define EN_VTVOUT			0x02
#define EN_GPADC			0x01
#define DIS_GPADC			0x00
#define SW_AVG_16			0x60
#define ADC_SW_CONV			0x04
#define EN_ICHAR			0x80
#define BTEMP_PULL_UP			0x08
#define EN_BUF				0x40
#define DIS_ZERO			0x00
#define GPADC_BUSY			0x01
#define ADC_RESOLUTION			1024
#define ADC_CH_BTEMP_MIN		0
#define ADC_CH_BTEMP_MAX		1350
#define ADC_CH_DIETEMP_MIN		0
#define ADC_CH_DIETEMP_MAX		1350
#define ADC_CH_CHG_V_MIN		0
#define ADC_CH_CHG_V_MAX		20030
#define ADC_CH_ACCDET2_MIN		0
#define ADC_CH_ACCDET2_MAX		2500
#define ADC_CH_VBAT_MIN			2300
#define ADC_CH_VBAT_MAX			4800
#define ADC_CH_CHG_I_MIN		0
#define ADC_CH_CHG_I_MAX		1500
#define ADC_CH_BKBAT_MIN		0
#define ADC_CH_BKBAT_MAX		3200
#define CALIB_SCALE			1000
enum cal_channels ;
struct adc_cal_data ;
struct ab8500_gpadc ;
static LIST_HEAD(ab8500_gpadc_list);
struct ab8500_gpadc *ab8500_gpadc_get(char *name)
EXPORT_SYMBOL(ab8500_gpadc_get);
static int ab8500_gpadc_ad_to_voltage(struct ab8500_gpadc *gpadc, u8 input,
int ad_value)
int ab8500_gpadc_convert(struct ab8500_gpadc *gpadc, u8 input)
EXPORT_SYMBOL(ab8500_gpadc_convert);
static irqreturn_t ab8500_bm_gpswadcconvend_handler(int irq, void *_gpadc)
static int otp_cal_regs[] = ;
static void ab8500_gpadc_read_calibration_data(struct ab8500_gpadc *gpadc)
static int __devinit ab8500_gpadc_probe(struct platform_device *pdev)
static int __devexit ab8500_gpadc_remove(struct platform_device *pdev)
static struct platform_driver ab8500_gpadc_driver = ;
static int __init ab8500_gpadc_init(void)
static void __exit ab8500_gpadc_exit(void)
subsys_initcall_sync(ab8500_gpadc_init);
module_exit(ab8500_gpadc_exit);
MODULE_LICENSE("GPL v2");
MODULE_AUTHOR("Arun R Murthy, Daniel Willerud, Johan Palsson");
MODULE_ALIAS("platform:ab8500_gpadc");
MODULE_DESCRIPTION("AB8500 GPADC driver");
