MODULE_DESCRIPTION("AMD Family 15h CPU processor power monitor");
MODULE_AUTHOR("Andreas Herrmann <andreas.herrmann3@amd.com>");
MODULE_LICENSE("GPL");
#define REG_NORTHBRIDGE_CAP		0xe8
#define REG_PROCESSOR_TDP		0x1b8
#define REG_TDP_RUNNING_AVERAGE		0xe0
#define REG_TDP_LIMIT3			0xe8
struct fam15h_power_data ;
static ssize_t show_power(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(power1_input, S_IRUGO, show_power, NULL);
static ssize_t show_power_crit(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(power1_crit, S_IRUGO, show_power_crit, NULL);
static ssize_t show_name(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(name, S_IRUGO, show_name, NULL);
static struct attribute *fam15h_power_attrs[] = ;
static const struct attribute_group fam15h_power_attr_group = ;
static bool __devinit fam15h_power_is_internal_node0(struct pci_dev *f4)
static void __devinit fam15h_power_init_data(struct pci_dev *f4,
struct fam15h_power_data *data)
static int __devinit fam15h_power_probe(struct pci_dev *pdev,
const struct pci_device_id *id)
static void __devexit fam15h_power_remove(struct pci_dev *pdev)
static DEFINE_PCI_DEVICE_TABLE(fam15h_power_id_table) = ;
MODULE_DEVICE_TABLE(pci, fam15h_power_id_table);
static struct pci_driver fam15h_power_driver = ;
static int __init fam15h_power_init(void)
static void __exit fam15h_power_exit(void)
module_init(fam15h_power_init)
module_exit(fam15h_power_exit)
