#define SMM665_VREF_ADC_X1000	1250
static int vref = SMM665_VREF_ADC_X1000;
module_param(vref, int, 0);
MODULE_PARM_DESC(vref, "Reference voltage in mV");
enum chips ;
#define	SMM665_MISC16_ADC_DATA_A	0x00
#define	SMM665_MISC16_ADC_DATA_B	0x01
#define	SMM665_MISC16_ADC_DATA_C	0x02
#define	SMM665_MISC16_ADC_DATA_D	0x03
#define	SMM665_MISC16_ADC_DATA_E	0x04
#define	SMM665_MISC16_ADC_DATA_F	0x05
#define	SMM665_MISC16_ADC_DATA_VDD	0x06
#define	SMM665_MISC16_ADC_DATA_12V	0x07
#define	SMM665_MISC16_ADC_DATA_INT_TEMP	0x08
#define	SMM665_MISC16_ADC_DATA_AIN1	0x09
#define	SMM665_MISC16_ADC_DATA_AIN2	0x0a
#define	SMM665_MISC8_CMD_STS		0x80
#define	SMM665_MISC8_STATUS1		0x81
#define	SMM665_MISC8_STATUSS2		0x82
#define	SMM665_MISC8_IO_POLARITY	0x83
#define	SMM665_MISC8_PUP_POLARITY	0x84
#define	SMM665_MISC8_ADOC_STATUS1	0x85
#define	SMM665_MISC8_ADOC_STATUS2	0x86
#define	SMM665_MISC8_WRITE_PROT		0x87
#define	SMM665_MISC8_STS_TRACK		0x88
#define SMM665_ADOC_ENABLE		0x0d
#define SMM665_LIMIT_BASE		0x80
#define SMM665_TRIGGER_RST		0x8000
#define SMM665_TRIGGER_HEALTHY		0x4000
#define SMM665_TRIGGER_POWEROFF		0x2000
#define SMM665_TRIGGER_SHUTDOWN		0x1000
#define SMM665_ADC_MASK			0x03ff
#define smm665_is_critical(lim)	((lim) & (SMM665_TRIGGER_RST \
| SMM665_TRIGGER_POWEROFF \
| SMM665_TRIGGER_SHUTDOWN))
#define SMM665_FAULT_A		0x0001
#define SMM665_FAULT_B		0x0002
#define SMM665_FAULT_C		0x0004
#define SMM665_FAULT_D		0x0008
#define SMM665_FAULT_E		0x0010
#define SMM665_FAULT_F		0x0020
#define SMM665_FAULT_VDD	0x0040
#define SMM665_FAULT_12V	0x0080
#define SMM665_FAULT_TEMP	0x0100
#define SMM665_FAULT_AIN1	0x0200
#define SMM665_FAULT_AIN2	0x0400
#define SMM665_REGMASK		0x78
#define SMM665_CMDREG_BASE	0x48
#define SMM665_CONFREG_BASE	0x50
#define SMM665_VMON_ADC_TO_VOLTS(adc)  ((adc) * vref / 256)
#define SMM665_12VIN_ADC_TO_VOLTS(adc) ((adc) * vref * 3 / 256)
#define SMM665_AIN_ADC_TO_VOLTS(adc)   ((adc) * vref / 512)
#define SMM665_TEMP_ADC_TO_CELSIUS(adc) ((adc) <= 511) ?		   \
((int)(adc) * 1000 / 4) :	   \
(((int)(adc) - 0x400) * 1000 / 4)
#define SMM665_NUM_ADC		11
#define SMM665_ADC_WAIT_SMM665	70
#define SMM665_ADC_WAIT_SMM766	185
struct smm665_data ;
static int smm665_read16(struct i2c_client *client, int reg)
static int smm665_read_adc(struct smm665_data *data, int adc)
static struct smm665_data *smm665_update_device(struct device *dev)
static int smm665_convert(u16 adcval, int index)
static int smm665_get_min(struct device *dev, int index)
static int smm665_get_max(struct device *dev, int index)
static int smm665_get_lcrit(struct device *dev, int index)
static int smm665_get_crit(struct device *dev, int index)
static ssize_t smm665_show_crit_alarm(struct device *dev,
struct device_attribute *da, char *buf)
static ssize_t smm665_show_input(struct device *dev,
struct device_attribute *da, char *buf)
#define SMM665_SHOW(what) \
static ssize_t smm665_show_##what(struct device *dev, \
struct device_attribute *da, char *buf) \
SMM665_SHOW(min);
SMM665_SHOW(max);
SMM665_SHOW(lcrit);
SMM665_SHOW(crit);
#define SMM665_ATTR(name, type, cmd_idx) \
static SENSOR_DEVICE_ATTR(name##_##type, S_IRUGO, \
smm665_show_##type, NULL, cmd_idx)
SMM665_ATTR(in1, input, SMM665_MISC16_ADC_DATA_12V);
SMM665_ATTR(in2, input, SMM665_MISC16_ADC_DATA_VDD);
SMM665_ATTR(in3, input, SMM665_MISC16_ADC_DATA_A);
SMM665_ATTR(in4, input, SMM665_MISC16_ADC_DATA_B);
SMM665_ATTR(in5, input, SMM665_MISC16_ADC_DATA_C);
SMM665_ATTR(in6, input, SMM665_MISC16_ADC_DATA_D);
SMM665_ATTR(in7, input, SMM665_MISC16_ADC_DATA_E);
SMM665_ATTR(in8, input, SMM665_MISC16_ADC_DATA_F);
SMM665_ATTR(in9, input, SMM665_MISC16_ADC_DATA_AIN1);
SMM665_ATTR(in10, input, SMM665_MISC16_ADC_DATA_AIN2);
SMM665_ATTR(in1, min, SMM665_MISC16_ADC_DATA_12V);
SMM665_ATTR(in2, min, SMM665_MISC16_ADC_DATA_VDD);
SMM665_ATTR(in3, min, SMM665_MISC16_ADC_DATA_A);
SMM665_ATTR(in4, min, SMM665_MISC16_ADC_DATA_B);
SMM665_ATTR(in5, min, SMM665_MISC16_ADC_DATA_C);
SMM665_ATTR(in6, min, SMM665_MISC16_ADC_DATA_D);
SMM665_ATTR(in7, min, SMM665_MISC16_ADC_DATA_E);
SMM665_ATTR(in8, min, SMM665_MISC16_ADC_DATA_F);
SMM665_ATTR(in9, min, SMM665_MISC16_ADC_DATA_AIN1);
SMM665_ATTR(in10, min, SMM665_MISC16_ADC_DATA_AIN2);
SMM665_ATTR(in1, max, SMM665_MISC16_ADC_DATA_12V);
SMM665_ATTR(in2, max, SMM665_MISC16_ADC_DATA_VDD);
SMM665_ATTR(in3, max, SMM665_MISC16_ADC_DATA_A);
SMM665_ATTR(in4, max, SMM665_MISC16_ADC_DATA_B);
SMM665_ATTR(in5, max, SMM665_MISC16_ADC_DATA_C);
SMM665_ATTR(in6, max, SMM665_MISC16_ADC_DATA_D);
SMM665_ATTR(in7, max, SMM665_MISC16_ADC_DATA_E);
SMM665_ATTR(in8, max, SMM665_MISC16_ADC_DATA_F);
SMM665_ATTR(in9, max, SMM665_MISC16_ADC_DATA_AIN1);
SMM665_ATTR(in10, max, SMM665_MISC16_ADC_DATA_AIN2);
SMM665_ATTR(in1, lcrit, SMM665_MISC16_ADC_DATA_12V);
SMM665_ATTR(in2, lcrit, SMM665_MISC16_ADC_DATA_VDD);
SMM665_ATTR(in3, lcrit, SMM665_MISC16_ADC_DATA_A);
SMM665_ATTR(in4, lcrit, SMM665_MISC16_ADC_DATA_B);
SMM665_ATTR(in5, lcrit, SMM665_MISC16_ADC_DATA_C);
SMM665_ATTR(in6, lcrit, SMM665_MISC16_ADC_DATA_D);
SMM665_ATTR(in7, lcrit, SMM665_MISC16_ADC_DATA_E);
SMM665_ATTR(in8, lcrit, SMM665_MISC16_ADC_DATA_F);
SMM665_ATTR(in9, lcrit, SMM665_MISC16_ADC_DATA_AIN1);
SMM665_ATTR(in10, lcrit, SMM665_MISC16_ADC_DATA_AIN2);
SMM665_ATTR(in1, crit, SMM665_MISC16_ADC_DATA_12V);
SMM665_ATTR(in2, crit, SMM665_MISC16_ADC_DATA_VDD);
SMM665_ATTR(in3, crit, SMM665_MISC16_ADC_DATA_A);
SMM665_ATTR(in4, crit, SMM665_MISC16_ADC_DATA_B);
SMM665_ATTR(in5, crit, SMM665_MISC16_ADC_DATA_C);
SMM665_ATTR(in6, crit, SMM665_MISC16_ADC_DATA_D);
SMM665_ATTR(in7, crit, SMM665_MISC16_ADC_DATA_E);
SMM665_ATTR(in8, crit, SMM665_MISC16_ADC_DATA_F);
SMM665_ATTR(in9, crit, SMM665_MISC16_ADC_DATA_AIN1);
SMM665_ATTR(in10, crit, SMM665_MISC16_ADC_DATA_AIN2);
SMM665_ATTR(in1, crit_alarm, SMM665_FAULT_12V);
SMM665_ATTR(in2, crit_alarm, SMM665_FAULT_VDD);
SMM665_ATTR(in3, crit_alarm, SMM665_FAULT_A);
SMM665_ATTR(in4, crit_alarm, SMM665_FAULT_B);
SMM665_ATTR(in5, crit_alarm, SMM665_FAULT_C);
SMM665_ATTR(in6, crit_alarm, SMM665_FAULT_D);
SMM665_ATTR(in7, crit_alarm, SMM665_FAULT_E);
SMM665_ATTR(in8, crit_alarm, SMM665_FAULT_F);
SMM665_ATTR(in9, crit_alarm, SMM665_FAULT_AIN1);
SMM665_ATTR(in10, crit_alarm, SMM665_FAULT_AIN2);
SMM665_ATTR(temp1, input, SMM665_MISC16_ADC_DATA_INT_TEMP);
SMM665_ATTR(temp1, min, SMM665_MISC16_ADC_DATA_INT_TEMP);
SMM665_ATTR(temp1, max, SMM665_MISC16_ADC_DATA_INT_TEMP);
SMM665_ATTR(temp1, lcrit, SMM665_MISC16_ADC_DATA_INT_TEMP);
SMM665_ATTR(temp1, crit, SMM665_MISC16_ADC_DATA_INT_TEMP);
SMM665_ATTR(temp1, crit_alarm, SMM665_FAULT_TEMP);
static struct attribute *smm665_attributes[] = ;
static const struct attribute_group smm665_group = ;
static int smm665_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int smm665_remove(struct i2c_client *client)
static const struct i2c_device_id smm665_id[] = ;
MODULE_DEVICE_TABLE(i2c, smm665_id);
static struct i2c_driver smm665_driver = ;
static int __init smm665_init(void)
static void __exit smm665_exit(void)
MODULE_AUTHOR("Guenter Roeck");
MODULE_DESCRIPTION("SMM665 driver");
MODULE_LICENSE("GPL");
module_init(smm665_init);
module_exit(smm665_exit);
