#define CE4100_PCI_I2C_DEVS	3
struct ce4100_devices ;
static struct platform_device *add_i2c_device(struct pci_dev *dev, int bar)
static int __devinit ce4100_i2c_probe(struct pci_dev *dev,
const struct pci_device_id *ent)
static void __devexit ce4100_i2c_remove(struct pci_dev *dev)
static struct pci_device_id ce4100_i2c_devices[] __devinitdata = ;
MODULE_DEVICE_TABLE(pci, ce4100_i2c_devices);
static struct pci_driver ce4100_i2c_driver = ;
static int __init ce4100_i2c_init(void)
module_init(ce4100_i2c_init);
static void __exit ce4100_i2c_exit(void)
module_exit(ce4100_i2c_exit);
MODULE_DESCRIPTION("CE4100 PCI-I2C glue code for PXA's driver");
MODULE_LICENSE("GPL v2");
MODULE_AUTHOR("Sebastian Andrzej Siewior <bigeasy@linutronix.de>");
