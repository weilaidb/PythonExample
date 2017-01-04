#define TEMP_FROM_REG(val)	(((((val) >> 16) & 0xff) - 49) * 1000)
#define REG_TEMP	0xe4
#define SEL_PLACE	0x40
#define SEL_CORE	0x04
struct k8temp_data ;
static struct k8temp_data *k8temp_update_device(struct device *dev)
static ssize_t show_name(struct device *dev, struct device_attribute
*devattr, char *buf)
static ssize_t show_temp(struct device *dev,
struct device_attribute *devattr, char *buf)
static SENSOR_DEVICE_ATTR_2(temp1_input, S_IRUGO, show_temp, NULL, 0, 0);
static SENSOR_DEVICE_ATTR_2(temp2_input, S_IRUGO, show_temp, NULL, 0, 1);
static SENSOR_DEVICE_ATTR_2(temp3_input, S_IRUGO, show_temp, NULL, 1, 0);
static SENSOR_DEVICE_ATTR_2(temp4_input, S_IRUGO, show_temp, NULL, 1, 1);
static DEVICE_ATTR(name, S_IRUGO, show_name, NULL);
static const struct pci_device_id k8temp_ids[] = ;
MODULE_DEVICE_TABLE(pci, k8temp_ids);
static int __devinit is_rev_g_desktop(u8 model)
static int __devinit k8temp_probe(struct pci_dev *pdev,
const struct pci_device_id *id)
static void __devexit k8temp_remove(struct pci_dev *pdev)
static struct pci_driver k8temp_driver = ;
static int __init k8temp_init(void)
static void __exit k8temp_exit(void)
MODULE_AUTHOR("Rudolf Marek <r.marek@assembler.cz>");
MODULE_DESCRIPTION("AMD K8 core temperature monitor");
MODULE_LICENSE("GPL");
module_init(k8temp_init)
module_exit(k8temp_exit)
