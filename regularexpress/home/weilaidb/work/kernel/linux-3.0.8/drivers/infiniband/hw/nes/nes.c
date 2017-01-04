MODULE_AUTHOR("NetEffect");
MODULE_DESCRIPTION("NetEffect RNIC Low-level iWARP Driver");
MODULE_LICENSE("Dual BSD/GPL");
MODULE_VERSION(DRV_VERSION);
int max_mtu = 9000;
int interrupt_mod_interval = 0;
int mpa_version = 1;
module_param(mpa_version, int, 0644);
MODULE_PARM_DESC(mpa_version, "MPA version to be used int MPA Req/Resp (0 or 1)");
int disable_mpa_crc = 0;
module_param(disable_mpa_crc, int, 0644);
MODULE_PARM_DESC(disable_mpa_crc, "Disable checking of MPA CRC");
unsigned int send_first = 0;
module_param(send_first, int, 0644);
MODULE_PARM_DESC(send_first, "Send RDMA Message First on Active Connection");
unsigned int nes_drv_opt = 0;
module_param(nes_drv_opt, int, 0644);
MODULE_PARM_DESC(nes_drv_opt, "Driver option parameters");
unsigned int nes_debug_level = 0;
module_param_named(debug_level, nes_debug_level, uint, 0644);
MODULE_PARM_DESC(debug_level, "Enable debug output level");
unsigned int wqm_quanta = 0x10000;
module_param(wqm_quanta, int, 0644);
MODULE_PARM_DESC(wqm_quanta, "WQM quanta");
static unsigned int limit_maxrdreqsz;
module_param(limit_maxrdreqsz, bool, 0644);
MODULE_PARM_DESC(limit_maxrdreqsz, "Limit max read request size to 256 Bytes");
LIST_HEAD(nes_adapter_list);
static LIST_HEAD(nes_dev_list);
atomic_t qps_destroyed;
static unsigned int ee_flsh_adapter;
static unsigned int sysfs_nonidx_addr;
static unsigned int sysfs_idx_addr;
static struct pci_device_id nes_pci_table[] = ;
MODULE_DEVICE_TABLE(pci, nes_pci_table);
static int nes_inetaddr_event(struct notifier_block *, unsigned long, void *);
static int nes_net_event(struct notifier_block *, unsigned long, void *);
static int nes_notifiers_registered;
static struct notifier_block nes_inetaddr_notifier = ;
static struct notifier_block nes_net_notifier = ;
static int nes_inetaddr_event(struct notifier_block *notifier,
unsigned long event, void *ptr)
static int nes_net_event(struct notifier_block *notifier,
unsigned long event, void *ptr)
void nes_add_ref(struct ib_qp *ibqp)
static void nes_cqp_rem_ref_callback(struct nes_device *nesdev, struct nes_cqp_request *cqp_request)
void nes_rem_ref(struct ib_qp *ibqp)
struct ib_qp *nes_get_qp(struct ib_device *device, int qpn)
static void nes_print_macaddr(struct net_device *netdev)
static irqreturn_t nes_interrupt(int irq, void *dev_id)
static int __devinit nes_probe(struct pci_dev *pcidev, const struct pci_device_id *ent)
static void __devexit nes_remove(struct pci_dev *pcidev)
static struct pci_driver nes_pci_driver = ;
static ssize_t nes_show_adapter(struct device_driver *ddp, char *buf)
static ssize_t nes_store_adapter(struct device_driver *ddp,
const char *buf, size_t count)
static ssize_t nes_show_ee_cmd(struct device_driver *ddp, char *buf)
static ssize_t nes_store_ee_cmd(struct device_driver *ddp,
const char *buf, size_t count)
static ssize_t nes_show_ee_data(struct device_driver *ddp, char *buf)
static ssize_t nes_store_ee_data(struct device_driver *ddp,
const char *buf, size_t count)
static ssize_t nes_show_flash_cmd(struct device_driver *ddp, char *buf)
static ssize_t nes_store_flash_cmd(struct device_driver *ddp,
const char *buf, size_t count)
static ssize_t nes_show_flash_data(struct device_driver *ddp, char *buf)
static ssize_t nes_store_flash_data(struct device_driver *ddp,
const char *buf, size_t count)
static ssize_t nes_show_nonidx_addr(struct device_driver *ddp, char *buf)
static ssize_t nes_store_nonidx_addr(struct device_driver *ddp,
const char *buf, size_t count)
static ssize_t nes_show_nonidx_data(struct device_driver *ddp, char *buf)
static ssize_t nes_store_nonidx_data(struct device_driver *ddp,
const char *buf, size_t count)
static ssize_t nes_show_idx_addr(struct device_driver *ddp, char *buf)
static ssize_t nes_store_idx_addr(struct device_driver *ddp,
const char *buf, size_t count)
static ssize_t nes_show_idx_data(struct device_driver *ddp, char *buf)
static ssize_t nes_store_idx_data(struct device_driver *ddp,
const char *buf, size_t count)
static ssize_t nes_show_wqm_quanta(struct device_driver *ddp, char *buf)
static ssize_t nes_store_wqm_quanta(struct device_driver *ddp,
const char *buf, size_t count)
static DRIVER_ATTR(adapter, S_IRUSR | S_IWUSR,
nes_show_adapter, nes_store_adapter);
static DRIVER_ATTR(eeprom_cmd, S_IRUSR | S_IWUSR,
nes_show_ee_cmd, nes_store_ee_cmd);
static DRIVER_ATTR(eeprom_data, S_IRUSR | S_IWUSR,
nes_show_ee_data, nes_store_ee_data);
static DRIVER_ATTR(flash_cmd, S_IRUSR | S_IWUSR,
nes_show_flash_cmd, nes_store_flash_cmd);
static DRIVER_ATTR(flash_data, S_IRUSR | S_IWUSR,
nes_show_flash_data, nes_store_flash_data);
static DRIVER_ATTR(nonidx_addr, S_IRUSR | S_IWUSR,
nes_show_nonidx_addr, nes_store_nonidx_addr);
static DRIVER_ATTR(nonidx_data, S_IRUSR | S_IWUSR,
nes_show_nonidx_data, nes_store_nonidx_data);
static DRIVER_ATTR(idx_addr, S_IRUSR | S_IWUSR,
nes_show_idx_addr, nes_store_idx_addr);
static DRIVER_ATTR(idx_data, S_IRUSR | S_IWUSR,
nes_show_idx_data, nes_store_idx_data);
static DRIVER_ATTR(wqm_quanta, S_IRUSR | S_IWUSR,
nes_show_wqm_quanta, nes_store_wqm_quanta);
static int nes_create_driver_sysfs(struct pci_driver *drv)
static void nes_remove_driver_sysfs(struct pci_driver *drv)
static int __init nes_init_module(void)
static void __exit nes_exit_module(void)
module_init(nes_init_module);
module_exit(nes_exit_module);
