MODULE_DESCRIPTION("AMD Family 10h+ CPU core temperature monitor");
MODULE_AUTHOR("Clemens Ladisch <clemens@ladisch.de>");
MODULE_LICENSE("GPL");
static bool force;
module_param(force, bool, 0444);
MODULE_PARM_DESC(force, "force loading on processors with erratum 319");
#define CPUID_PKGTYPE_MASK	0xf0000000
#define CPUID_PKGTYPE_F		0x00000000
#define CPUID_PKGTYPE_AM2R2_AM3	0x10000000
#define REG_DCT0_CONFIG_HIGH		0x094
#define  DDR3_MODE			0x00000100
#define REG_HARDWARE_THERMAL_CONTROL	0x64
#define  HTC_ENABLE			0x00000001
#define REG_REPORTED_TEMPERATURE	0xa4
#define REG_NORTHBRIDGE_CAPABILITIES	0xe8
#define  NB_CAP_HTC			0x00000400
static ssize_t show_temp(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t show_temp_max(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t show_temp_crit(struct device *dev,
struct device_attribute *devattr, char *buf)
static ssize_t show_name(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(temp1_input, S_IRUGO, show_temp, NULL);
static DEVICE_ATTR(temp1_max, S_IRUGO, show_temp_max, NULL);
static SENSOR_DEVICE_ATTR(temp1_crit, S_IRUGO, show_temp_crit, NULL, 0);
static SENSOR_DEVICE_ATTR(temp1_crit_hyst, S_IRUGO, show_temp_crit, NULL, 1);
static DEVICE_ATTR(name, S_IRUGO, show_name, NULL);
static bool __devinit has_erratum_319(struct pci_dev *pdev)
static int __devinit k10temp_probe(struct pci_dev *pdev,
const struct pci_device_id *id)
static void __devexit k10temp_remove(struct pci_dev *pdev)
static const struct pci_device_id k10temp_id_table[] = ;
MODULE_DEVICE_TABLE(pci, k10temp_id_table);
static struct pci_driver k10temp_driver = ;
static int __init k10temp_init(void)
static void __exit k10temp_exit(void)
module_init(k10temp_init)
module_exit(k10temp_exit)
