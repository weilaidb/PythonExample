#define INTERNAL_MEM_SIZE       0x400
#define INTERNAL_MEM_RX_OFFSET  0x1FF
#define PARM_SPEED_DUPLEX_MIN   0
#define PARM_SPEED_DUPLEX_MAX   5
static u32 et131x_speed_set;
module_param(et131x_speed_set, uint, 0);
MODULE_PARM_DESC(et131x_speed_set,
"Set Link speed and dublex manually (0-5)  [0]\n \
1 : 10Mb   Half-Duplex\n \
2 : 10Mb   Full-Duplex\n \
3 : 100Mb  Half-Duplex\n \
4 : 100Mb  Full-Duplex\n \
5 : 1000Mb Full-Duplex\n \
0 : Auto Speed Auto Dublex");
void et131x_hwaddr_init(struct et131x_adapter *adapter)
static int et131x_pci_init(struct et131x_adapter *adapter,
struct pci_dev *pdev)
void et131x_error_timer_handler(unsigned long data)
void et131x_link_detection_handler(unsigned long data)
void ConfigGlobalRegs(struct et131x_adapter *etdev)
int et131x_adapter_setup(struct et131x_adapter *etdev)
void et131x_soft_reset(struct et131x_adapter *adapter)
void et131x_align_allocated_memory(struct et131x_adapter *adapter,
uint64_t *phys_addr,
uint64_t *offset, uint64_t mask)
int et131x_adapter_memory_alloc(struct et131x_adapter *adapter)
void et131x_adapter_memory_free(struct et131x_adapter *adapter)
static struct et131x_adapter *et131x_adapter_init(struct net_device *netdev,
struct pci_dev *pdev)
static int __devinit et131x_pci_setup(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit et131x_pci_remove(struct pci_dev *pdev)
static struct pci_device_id et131x_pci_table[] __devinitdata = ;
MODULE_DEVICE_TABLE(pci, et131x_pci_table);
static struct pci_driver et131x_driver = ;
static int __init et131x_init_module(void)
static void __exit et131x_cleanup_module(void)
module_init(et131x_init_module);
module_exit(et131x_cleanup_module);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_DESCRIPTION(DRIVER_INFO);
MODULE_LICENSE(DRIVER_LICENSE);
