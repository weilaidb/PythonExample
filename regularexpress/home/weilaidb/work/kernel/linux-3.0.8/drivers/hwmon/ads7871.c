#define REG_LS_BYTE	0
#define REG_MS_BYTE	1
#define REG_PGA_VALID	2
#define REG_AD_CONTROL	3
#define REG_GAIN_MUX	4
#define REG_IO_STATE	5
#define REG_IO_CONTROL	6
#define REG_OSC_CONTROL	7
#define REG_SER_CONTROL 24
#define REG_ID		31
#define INST_MODE_bm	(1<<7)
#define INST_READ_bm	(1<<6)
#define INST_16BIT_bm	(1<<5)
#define MUX_CNV_bv	7
#define MUX_CNV_bm	(1<<MUX_CNV_bv)
#define MUX_M3_bm	(1<<3)
#define MUX_G_bv	4
#define OSC_OSCR_bm	(1<<5)
#define OSC_OSCE_bm	(1<<4)
#define OSC_REFE_bm	(1<<3)
#define OSC_BUFE_bm	(1<<2)
#define OSC_R2V_bm	(1<<1)
#define OSC_RBG_bm	(1<<0)
#define DEVICE_NAME	"ads7871"
struct ads7871_data ;
static int ads7871_read_reg8(struct spi_device *spi, int reg)
static int ads7871_read_reg16(struct spi_device *spi, int reg)
static int ads7871_write_reg8(struct spi_device *spi, int reg, u8 val)
static ssize_t show_voltage(struct device *dev,
struct device_attribute *da, char *buf)
static SENSOR_DEVICE_ATTR(in0_input, S_IRUGO, show_voltage, NULL, 0);
static SENSOR_DEVICE_ATTR(in1_input, S_IRUGO, show_voltage, NULL, 1);
static SENSOR_DEVICE_ATTR(in2_input, S_IRUGO, show_voltage, NULL, 2);
static SENSOR_DEVICE_ATTR(in3_input, S_IRUGO, show_voltage, NULL, 3);
static SENSOR_DEVICE_ATTR(in4_input, S_IRUGO, show_voltage, NULL, 4);
static SENSOR_DEVICE_ATTR(in5_input, S_IRUGO, show_voltage, NULL, 5);
static SENSOR_DEVICE_ATTR(in6_input, S_IRUGO, show_voltage, NULL, 6);
static SENSOR_DEVICE_ATTR(in7_input, S_IRUGO, show_voltage, NULL, 7);
static struct attribute *ads7871_attributes[] = ;
static const struct attribute_group ads7871_group = ;
static int __devinit ads7871_probe(struct spi_device *spi)
static int __devexit ads7871_remove(struct spi_device *spi)
static struct spi_driver ads7871_driver = ;
static int __init ads7871_init(void)
static void __exit ads7871_exit(void)
module_init(ads7871_init);
module_exit(ads7871_exit);
MODULE_AUTHOR("Paul Thomas <pthomas8589@gmail.com>");
MODULE_DESCRIPTION("TI ADS7871 A/D driver");
MODULE_LICENSE("GPL");
