#define PMIC_REG_ID1		0x00
#define PMIC_REG_INT		0x04
#define PMIC_REG_MINT		0x05
#define PMIC_REG_ADCINT		0x5F
#define PMIC_REG_MADCINT	0x60
#define PMIC_REG_ADCCNTL1	0x61
#define PMICADDR0		0xA4
#define END_OF_CHANNEL		0x1F
#define PMIC_REG_ADCSNS0H	0x64
#define MRST_TS_CHAN10		0xA
#define MRST_TS_CHAN11		0xB
#define MRST_TS_CHAN12		0xC
#define MRST_TS_CHAN13		0xD
#define MRST_XBIAS		0x20
#define MRST_YBIAS		0x40
#define MRST_ZBIAS		0x80
#define MRST_X_MIN		10
#define MRST_X_MAX		1024
#define MRST_X_FUZZ		5
#define MRST_Y_MIN		10
#define MRST_Y_MAX		1024
#define MRST_Y_FUZZ		5
#define MRST_PRESSURE_MIN	0
#define MRST_PRESSURE_NOMINAL	50
#define MRST_PRESSURE_MAX	100
#define WAIT_ADC_COMPLETION	10
#define ADC_LOOP_DELAY0		0x0
#define ADC_LOOP_DELAY1		0x1
#define PMIC_VENDOR_FS		0
#define PMIC_VENDOR_MAXIM	1
#define PMIC_VENDOR_NEC		2
#define MRSTOUCH_MAX_CHANNELS	32
struct mrstouch_dev ;
static int mrstouch_nec_adc_read_prepare(struct mrstouch_dev *tsdev)
static int mrstouch_nec_adc_read_finish(struct mrstouch_dev *tsdev)
static int mrstouch_ts_chan_read(u16 offset, u16 chan, u16 *vp, u16 *vm)
static int mrstouch_ts_bias_set(uint offset, uint bias)
static int mrstouch_nec_adc_read(struct mrstouch_dev *tsdev,
u16 *x, u16 *y, u16 *z)
static int mrstouch_fs_adc_read_prepare(struct mrstouch_dev *tsdev)
static int mrstouch_fs_adc_read(struct mrstouch_dev *tsdev,
u16 *x, u16 *y, u16 *z)
static int mrstouch_fs_adc_read_finish(struct mrstouch_dev *tsdev)
static void mrstouch_report_event(struct input_dev *input,
unsigned int x, unsigned int y, unsigned int z)
static irqreturn_t mrstouch_pendet_irq(int irq, void *dev_id)
static int __devinit mrstouch_read_pmic_id(uint *vendor, uint *rev)
static int __devinit mrstouch_chan_parse(struct mrstouch_dev *tsdev)
static int __devinit mrstouch_ts_chan_set(uint offset)
static int __devinit mrstouch_adc_init(struct mrstouch_dev *tsdev)
static int __devinit mrstouch_probe(struct platform_device *pdev)
static int __devexit mrstouch_remove(struct platform_device *pdev)
static struct platform_driver mrstouch_driver = ;
static int __init mrstouch_init(void)
module_init(mrstouch_init);
static void __exit mrstouch_exit(void)
module_exit(mrstouch_exit);
MODULE_AUTHOR("Sreedhara Murthy. D.S, sreedhara.ds@intel.com");
MODULE_DESCRIPTION("Intel Moorestown Resistive Touch Screen Driver");
MODULE_LICENSE("GPL");
