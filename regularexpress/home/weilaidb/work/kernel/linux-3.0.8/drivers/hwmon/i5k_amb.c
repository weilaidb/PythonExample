#define DRVNAME "i5k_amb"
#define I5K_REG_AMB_BASE_ADDR		0x48
#define I5K_REG_AMB_LEN_ADDR		0x50
#define I5K_REG_CHAN0_PRESENCE_ADDR	0x64
#define I5K_REG_CHAN1_PRESENCE_ADDR	0x66
#define AMB_REG_TEMP_MIN_ADDR		0x80
#define AMB_REG_TEMP_MID_ADDR		0x81
#define AMB_REG_TEMP_MAX_ADDR		0x82
#define AMB_REG_TEMP_STATUS_ADDR	0x84
#define AMB_REG_TEMP_ADDR		0x85
#define AMB_CONFIG_SIZE			2048
#define AMB_FUNC_3_OFFSET		768
static unsigned long amb_reg_temp_status(unsigned int amb)
static unsigned long amb_reg_temp_min(unsigned int amb)
static unsigned long amb_reg_temp_mid(unsigned int amb)
static unsigned long amb_reg_temp_max(unsigned int amb)
static unsigned long amb_reg_temp(unsigned int amb)
#define MAX_MEM_CHANNELS		4
#define MAX_AMBS_PER_CHANNEL		16
#define MAX_AMBS			(MAX_MEM_CHANNELS * \
MAX_AMBS_PER_CHANNEL)
#define CHANNEL_SHIFT			4
#define DIMM_MASK			0xF
#define REAL_MAX_AMBS_PER_CHANNEL	15
#define KNOBS_PER_AMB			6
static unsigned long amb_num_from_reg(unsigned int byte_num, unsigned int bit)
#define AMB_SYSFS_NAME_LEN		16
struct i5k_device_attribute ;
struct i5k_amb_data ;
static ssize_t show_name(struct device *dev, struct device_attribute *devattr,
char *buf)
static DEVICE_ATTR(name, S_IRUGO, show_name, NULL);
static struct platform_device *amb_pdev;
static u8 amb_read_byte(struct i5k_amb_data *data, unsigned long offset)
static void amb_write_byte(struct i5k_amb_data *data, unsigned long offset,
u8 val)
static ssize_t show_amb_alarm(struct device *dev,
struct device_attribute *devattr,
char *buf)
static ssize_t store_amb_min(struct device *dev,
struct device_attribute *devattr,
const char *buf,
size_t count)
static ssize_t store_amb_mid(struct device *dev,
struct device_attribute *devattr,
const char *buf,
size_t count)
static ssize_t store_amb_max(struct device *dev,
struct device_attribute *devattr,
const char *buf,
size_t count)
static ssize_t show_amb_min(struct device *dev,
struct device_attribute *devattr,
char *buf)
static ssize_t show_amb_mid(struct device *dev,
struct device_attribute *devattr,
char *buf)
static ssize_t show_amb_max(struct device *dev,
struct device_attribute *devattr,
char *buf)
static ssize_t show_amb_temp(struct device *dev,
struct device_attribute *devattr,
char *buf)
static ssize_t show_label(struct device *dev,
struct device_attribute *devattr,
char *buf)
static int __devinit i5k_amb_hwmon_init(struct platform_device *pdev)
static int __devinit i5k_amb_add(void)
static int __devinit i5k_find_amb_registers(struct i5k_amb_data *data,
unsigned long devid)
static int __devinit i5k_channel_probe(u16 *amb_present, unsigned long dev_id)
static unsigned long i5k_channel_pci_id(struct i5k_amb_data *data,
unsigned long channel)
static unsigned long chipset_ids[] = ;
static struct pci_device_id i5k_amb_ids[] __devinitdata = ;
MODULE_DEVICE_TABLE(pci, i5k_amb_ids);
static int __devinit i5k_amb_probe(struct platform_device *pdev)
static int __devexit i5k_amb_remove(struct platform_device *pdev)
static struct platform_driver i5k_amb_driver = ;
static int __init i5k_amb_init(void)
static void __exit i5k_amb_exit(void)
MODULE_AUTHOR("Darrick J. Wong <djwong@us.ibm.com>");
MODULE_DESCRIPTION("Intel 5000 chipset FB-DIMM AMB temperature sensor");
MODULE_LICENSE("GPL");
module_init(i5k_amb_init);
module_exit(i5k_amb_exit);
