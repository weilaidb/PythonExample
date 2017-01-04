#define IOC4_CALIBRATE_COUNT 63
#define IOC4_CALIBRATE_CYCLES 256
#define IOC4_CALIBRATE_DISCARD 2
#define IOC4_CALIBRATE_LOW_MHZ 25
#define IOC4_CALIBRATE_HIGH_MHZ 75
#define IOC4_CALIBRATE_DEFAULT_MHZ 66
static DEFINE_MUTEX(ioc4_mutex);
static LIST_HEAD(ioc4_devices);
static LIST_HEAD(ioc4_submodules);
int
ioc4_register_submodule(struct ioc4_submodule *is)
void
ioc4_unregister_submodule(struct ioc4_submodule *is)
#define IOC4_CALIBRATE_LOW_LIMIT \
(1000*IOC4_EXTINT_COUNT_DIVISOR/IOC4_CALIBRATE_LOW_MHZ)
#define IOC4_CALIBRATE_HIGH_LIMIT \
(1000*IOC4_EXTINT_COUNT_DIVISOR/IOC4_CALIBRATE_HIGH_MHZ)
#define IOC4_CALIBRATE_DEFAULT \
(1000*IOC4_EXTINT_COUNT_DIVISOR/IOC4_CALIBRATE_DEFAULT_MHZ)
#define IOC4_CALIBRATE_END \
(IOC4_CALIBRATE_CYCLES + IOC4_CALIBRATE_DISCARD)
#define IOC4_INT_OUT_MODE_TOGGLE 0x7
static void __devinit
ioc4_clock_calibrate(struct ioc4_driver_data *idd)
static unsigned int __devinit
ioc4_variant(struct ioc4_driver_data *idd)
static void
ioc4_load_modules(struct work_struct *work)
static DECLARE_WORK(ioc4_load_modules_work, ioc4_load_modules);
static int __devinit
ioc4_probe(struct pci_dev *pdev, const struct pci_device_id *pci_id)
static void __devexit
ioc4_remove(struct pci_dev *pdev)
static struct pci_device_id ioc4_id_table[] = ;
static struct pci_driver ioc4_driver = ;
MODULE_DEVICE_TABLE(pci, ioc4_id_table);
static int __init
ioc4_init(void)
static void __exit
ioc4_exit(void)
module_init(ioc4_init);
module_exit(ioc4_exit);
MODULE_AUTHOR("Brent Casavant - Silicon Graphics, Inc. <bcasavan@sgi.com>");
MODULE_DESCRIPTION("PCI driver master module for SGI IOC4 Base-IO Card");
MODULE_LICENSE("GPL");
EXPORT_SYMBOL(ioc4_register_submodule);
EXPORT_SYMBOL(ioc4_unregister_submodule);
