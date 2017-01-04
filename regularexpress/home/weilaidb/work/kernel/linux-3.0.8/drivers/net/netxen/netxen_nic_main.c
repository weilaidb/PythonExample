MODULE_DESCRIPTION("QLogic/NetXen (1/10) GbE Intelligent Ethernet Driver");
MODULE_LICENSE("GPL");
MODULE_VERSION(NETXEN_NIC_LINUX_VERSIONID);
MODULE_FIRMWARE(NX_UNIFIED_ROMIMAGE_NAME);
char netxen_nic_driver_name[] = "netxen_nic";
static char netxen_nic_driver_string[] = "QLogic/NetXen Network Driver v"
NETXEN_NIC_LINUX_VERSIONID;
static int port_mode = NETXEN_PORT_MODE_AUTO_NEG;
static int wol_port_mode = 5;
static int use_msi = 1;
static int use_msi_x = 1;
static int auto_fw_reset = AUTO_FW_RESET_ENABLED;
module_param(auto_fw_reset, int, 0644);
MODULE_PARM_DESC(auto_fw_reset,"Auto firmware reset (0=disabled, 1=enabled");
static int __devinit netxen_nic_probe(struct pci_dev *pdev,
const struct pci_device_id *ent);
static void __devexit netxen_nic_remove(struct pci_dev *pdev);
static int netxen_nic_open(struct net_device *netdev);
static int netxen_nic_close(struct net_device *netdev);
static netdev_tx_t netxen_nic_xmit_frame(struct sk_buff *,
struct net_device *);
static void netxen_tx_timeout(struct net_device *netdev);
static void netxen_tx_timeout_task(struct work_struct *work);
static void netxen_fw_poll_work(struct work_struct *work);
static void netxen_schedule_work(struct netxen_adapter *adapter,
work_func_t func, int delay);
static void netxen_cancel_fw_work(struct netxen_adapter *adapter);
static int netxen_nic_poll(struct napi_struct *napi, int budget);
static void netxen_nic_poll_controller(struct net_device *netdev);
static void netxen_create_sysfs_entries(struct netxen_adapter *adapter);
static void netxen_remove_sysfs_entries(struct netxen_adapter *adapter);
static void netxen_create_diag_entries(struct netxen_adapter *adapter);
static void netxen_remove_diag_entries(struct netxen_adapter *adapter);
static int nx_dev_request_aer(struct netxen_adapter *adapter);
static int nx_decr_dev_ref_cnt(struct netxen_adapter *adapter);
static int netxen_can_start_firmware(struct netxen_adapter *adapter);
static irqreturn_t netxen_intr(int irq, void *data);
static irqreturn_t netxen_msi_intr(int irq, void *data);
static irqreturn_t netxen_msix_intr(int irq, void *data);
static void netxen_config_indev_addr(struct net_device *dev, unsigned long);
static struct net_device_stats *netxen_nic_get_stats(struct net_device *netdev);
static int netxen_nic_set_mac(struct net_device *netdev, void *p);
#define ENTRY(device) \
static DEFINE_PCI_DEVICE_TABLE(netxen_pci_tbl) = ;
MODULE_DEVICE_TABLE(pci, netxen_pci_tbl);
static uint32_t crb_cmd_producer[4] = ;
void
netxen_nic_update_cmd_producer(struct netxen_adapter *adapter,
struct nx_host_tx_ring *tx_ring)
static uint32_t crb_cmd_consumer[4] = ;
static inline void
netxen_nic_update_cmd_consumer(struct netxen_adapter *adapter,
struct nx_host_tx_ring *tx_ring)
static uint32_t msi_tgt_status[8] = ;
static struct netxen_legacy_intr_set legacy_intr[] = NX_LEGACY_INTR_CONFIG;
static inline void netxen_nic_disable_int(struct nx_host_sds_ring *sds_ring)
static inline void netxen_nic_enable_int(struct nx_host_sds_ring *sds_ring)
static int
netxen_alloc_sds_rings(struct netxen_recv_context *recv_ctx, int count)
static void
netxen_free_sds_rings(struct netxen_recv_context *recv_ctx)
static int
netxen_napi_add(struct netxen_adapter *adapter, struct net_device *netdev)
static void
netxen_napi_del(struct netxen_adapter *adapter)
static void
netxen_napi_enable(struct netxen_adapter *adapter)
static void
netxen_napi_disable(struct netxen_adapter *adapter)
static int nx_set_dma_mask(struct netxen_adapter *adapter)
static int
nx_update_dma_mask(struct netxen_adapter *adapter)
static int
netxen_check_hw_init(struct netxen_adapter *adapter, int first_boot)
static void netxen_set_port_mode(struct netxen_adapter *adapter)
static void netxen_set_msix_bit(struct pci_dev *pdev, int enable)
static void netxen_init_msix_entries(struct netxen_adapter *adapter, int count)
static int
netxen_read_mac_addr(struct netxen_adapter *adapter)
static int netxen_nic_set_mac(struct net_device *netdev, void *p)
static void netxen_set_multicast_list(struct net_device *dev)
static u32 netxen_fix_features(struct net_device *dev, u32 features)
static int netxen_set_features(struct net_device *dev, u32 features)
static const struct net_device_ops netxen_netdev_ops = ;
static void
netxen_setup_intr(struct netxen_adapter *adapter)
static void
netxen_teardown_intr(struct netxen_adapter *adapter)
static void
netxen_cleanup_pci_map(struct netxen_adapter *adapter)
static int
netxen_setup_pci_map(struct netxen_adapter *adapter)
static void
netxen_check_options(struct netxen_adapter *adapter)
static int
netxen_start_firmware(struct netxen_adapter *adapter)
static int
netxen_nic_request_irq(struct netxen_adapter *adapter)
static void
netxen_nic_free_irq(struct netxen_adapter *adapter)
static void
netxen_nic_init_coalesce_defaults(struct netxen_adapter *adapter)
static int
__netxen_nic_up(struct netxen_adapter *adapter, struct net_device *netdev)
static inline int
netxen_nic_up(struct netxen_adapter *adapter, struct net_device *netdev)
static void
__netxen_nic_down(struct netxen_adapter *adapter, struct net_device *netdev)
static inline void
netxen_nic_down(struct netxen_adapter *adapter, struct net_device *netdev)
static int
netxen_nic_attach(struct netxen_adapter *adapter)
static void
netxen_nic_detach(struct netxen_adapter *adapter)
int
netxen_nic_reset_context(struct netxen_adapter *adapter)
static int
netxen_setup_netdev(struct netxen_adapter *adapter,
struct net_device *netdev)
static void netxen_mask_aer_correctable(struct netxen_adapter *adapter)
static int __devinit
netxen_nic_probe(struct pci_dev *pdev, const struct pci_device_id *ent)
static void __devexit netxen_nic_remove(struct pci_dev *pdev)
static void netxen_nic_detach_func(struct netxen_adapter *adapter)
static int netxen_nic_attach_func(struct pci_dev *pdev)
static pci_ers_result_t netxen_io_error_detected(struct pci_dev *pdev,
pci_channel_state_t state)
static pci_ers_result_t netxen_io_slot_reset(struct pci_dev *pdev)
static void netxen_io_resume(struct pci_dev *pdev)
static void netxen_nic_shutdown(struct pci_dev *pdev)
static int
netxen_nic_suspend(struct pci_dev *pdev, pm_message_t state)
static int
netxen_nic_resume(struct pci_dev *pdev)
static int netxen_nic_open(struct net_device *netdev)
static int netxen_nic_close(struct net_device *netdev)
static void
netxen_tso_check(struct net_device *netdev,
struct nx_host_tx_ring *tx_ring,
struct cmd_desc_type0 *first_desc,
struct sk_buff *skb)
static int
netxen_map_tx_skb(struct pci_dev *pdev,
struct sk_buff *skb, struct netxen_cmd_buffer *pbuf)
static inline void
netxen_clear_cmddesc(u64 *desc)
static netdev_tx_t
netxen_nic_xmit_frame(struct sk_buff *skb, struct net_device *netdev)
static int netxen_nic_check_temp(struct netxen_adapter *adapter)
void netxen_advert_link_change(struct netxen_adapter *adapter, int linkup)
static void netxen_nic_handle_phy_intr(struct netxen_adapter *adapter)
static void netxen_tx_timeout(struct net_device *netdev)
static void netxen_tx_timeout_task(struct work_struct *work)
static struct net_device_stats *netxen_nic_get_stats(struct net_device *netdev)
static irqreturn_t netxen_intr(int irq, void *data)
static irqreturn_t netxen_msi_intr(int irq, void *data)
static irqreturn_t netxen_msix_intr(int irq, void *data)
static int netxen_nic_poll(struct napi_struct *napi, int budget)
static void netxen_nic_poll_controller(struct net_device *netdev)
static int
nx_incr_dev_ref_cnt(struct netxen_adapter *adapter)
static int
nx_decr_dev_ref_cnt(struct netxen_adapter *adapter)
static int
nx_dev_request_aer(struct netxen_adapter *adapter)
static int
nx_dev_request_reset(struct netxen_adapter *adapter)
static int
netxen_can_start_firmware(struct netxen_adapter *adapter)
static void
netxen_schedule_work(struct netxen_adapter *adapter,
work_func_t func, int delay)
static void
netxen_cancel_fw_work(struct netxen_adapter *adapter)
static void
netxen_attach_work(struct work_struct *work)
static void
netxen_fwinit_work(struct work_struct *work)
static void
netxen_detach_work(struct work_struct *work)
static int
netxen_check_health(struct netxen_adapter *adapter)
static void
netxen_fw_poll_work(struct work_struct *work)
static ssize_t
netxen_store_bridged_mode(struct device *dev,
struct device_attribute *attr, const char *buf, size_t len)
static ssize_t
netxen_show_bridged_mode(struct device *dev,
struct device_attribute *attr, char *buf)
static struct device_attribute dev_attr_bridged_mode = ;
static ssize_t
netxen_store_diag_mode(struct device *dev,
struct device_attribute *attr, const char *buf, size_t len)
static ssize_t
netxen_show_diag_mode(struct device *dev,
struct device_attribute *attr, char *buf)
static struct device_attribute dev_attr_diag_mode = ;
static int
netxen_sysfs_validate_crb(struct netxen_adapter *adapter,
loff_t offset, size_t size)
static ssize_t
netxen_sysfs_read_crb(struct file *filp, struct kobject *kobj,
struct bin_attribute *attr,
char *buf, loff_t offset, size_t size)
static ssize_t
netxen_sysfs_write_crb(struct file *filp, struct kobject *kobj,
struct bin_attribute *attr,
char *buf, loff_t offset, size_t size)
static int
netxen_sysfs_validate_mem(struct netxen_adapter *adapter,
loff_t offset, size_t size)
static ssize_t
netxen_sysfs_read_mem(struct file *filp, struct kobject *kobj,
struct bin_attribute *attr,
char *buf, loff_t offset, size_t size)
static ssize_t netxen_sysfs_write_mem(struct file *filp, struct kobject *kobj,
struct bin_attribute *attr, char *buf,
loff_t offset, size_t size)
static struct bin_attribute bin_attr_crb = ;
static struct bin_attribute bin_attr_mem = ;
static void
netxen_create_sysfs_entries(struct netxen_adapter *adapter)
static void
netxen_remove_sysfs_entries(struct netxen_adapter *adapter)
static void
netxen_create_diag_entries(struct netxen_adapter *adapter)
static void
netxen_remove_diag_entries(struct netxen_adapter *adapter)
#define is_netxen_netdev(dev) (dev->netdev_ops == &netxen_netdev_ops)
static int
netxen_destip_supported(struct netxen_adapter *adapter)
static void
netxen_config_indev_addr(struct net_device *dev, unsigned long event)
static int netxen_netdev_event(struct notifier_block *this,
unsigned long event, void *ptr)
static int
netxen_inetaddr_event(struct notifier_block *this,
unsigned long event, void *ptr)
static struct notifier_block	netxen_netdev_cb = ;
static struct notifier_block netxen_inetaddr_cb = ;
static void
netxen_config_indev_addr(struct net_device *dev, unsigned long event)
static struct pci_error_handlers netxen_err_handler = ;
static struct pci_driver netxen_driver = ;
static int __init netxen_init_module(void)
module_init(netxen_init_module);
static void __exit netxen_exit_module(void)
module_exit(netxen_exit_module);
