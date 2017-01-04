MODULE_DESCRIPTION("QLogic 1/10 GbE Converged/Intelligent Ethernet Driver");
MODULE_LICENSE("GPL");
MODULE_VERSION(QLCNIC_LINUX_VERSIONID);
MODULE_FIRMWARE(QLCNIC_UNIFIED_ROMIMAGE_NAME);
char qlcnic_driver_name[] = "qlcnic";
static const char qlcnic_driver_string[] = "QLogic 1/10 GbE "
"Converged/Intelligent Ethernet Driver v" QLCNIC_LINUX_VERSIONID;
static struct workqueue_struct *qlcnic_wq;
static int qlcnic_mac_learn;
module_param(qlcnic_mac_learn, int, 0444);
MODULE_PARM_DESC(qlcnic_mac_learn, "Mac Filter (0=disabled, 1=enabled)");
static int use_msi = 1;
module_param(use_msi, int, 0444);
MODULE_PARM_DESC(use_msi, "MSI interrupt (0=disabled, 1=enabled");
static int use_msi_x = 1;
module_param(use_msi_x, int, 0444);
MODULE_PARM_DESC(use_msi_x, "MSI-X interrupt (0=disabled, 1=enabled");
static int auto_fw_reset = 1;
module_param(auto_fw_reset, int, 0644);
MODULE_PARM_DESC(auto_fw_reset, "Auto firmware reset (0=disabled, 1=enabled");
static int load_fw_file;
module_param(load_fw_file, int, 0444);
MODULE_PARM_DESC(load_fw_file, "Load firmware from (0=flash, 1=file");
static int qlcnic_config_npars;
module_param(qlcnic_config_npars, int, 0444);
MODULE_PARM_DESC(qlcnic_config_npars, "Configure NPARs (0=disabled, 1=enabled");
static int __devinit qlcnic_probe(struct pci_dev *pdev,
const struct pci_device_id *ent);
static void __devexit qlcnic_remove(struct pci_dev *pdev);
static int qlcnic_open(struct net_device *netdev);
static int qlcnic_close(struct net_device *netdev);
static void qlcnic_tx_timeout(struct net_device *netdev);
static void qlcnic_attach_work(struct work_struct *work);
static void qlcnic_fwinit_work(struct work_struct *work);
static void qlcnic_fw_poll_work(struct work_struct *work);
static void qlcnic_schedule_work(struct qlcnic_adapter *adapter,
work_func_t func, int delay);
static void qlcnic_cancel_fw_work(struct qlcnic_adapter *adapter);
static int qlcnic_poll(struct napi_struct *napi, int budget);
static int qlcnic_rx_poll(struct napi_struct *napi, int budget);
static void qlcnic_poll_controller(struct net_device *netdev);
static void qlcnic_create_sysfs_entries(struct qlcnic_adapter *adapter);
static void qlcnic_remove_sysfs_entries(struct qlcnic_adapter *adapter);
static void qlcnic_create_diag_entries(struct qlcnic_adapter *adapter);
static void qlcnic_remove_diag_entries(struct qlcnic_adapter *adapter);
static void qlcnic_idc_debug_info(struct qlcnic_adapter *adapter, u8 encoding);
static void qlcnic_clr_all_drv_state(struct qlcnic_adapter *adapter, u8);
static int qlcnic_can_start_firmware(struct qlcnic_adapter *adapter);
static irqreturn_t qlcnic_tmp_intr(int irq, void *data);
static irqreturn_t qlcnic_intr(int irq, void *data);
static irqreturn_t qlcnic_msi_intr(int irq, void *data);
static irqreturn_t qlcnic_msix_intr(int irq, void *data);
static struct net_device_stats *qlcnic_get_stats(struct net_device *netdev);
static void qlcnic_restore_indev_addr(struct net_device *dev, unsigned long);
static int qlcnic_start_firmware(struct qlcnic_adapter *);
static void qlcnic_alloc_lb_filters_mem(struct qlcnic_adapter *adapter);
static void qlcnic_free_lb_filters_mem(struct qlcnic_adapter *adapter);
static void qlcnic_dev_set_npar_ready(struct qlcnic_adapter *);
static int qlcnicvf_config_led(struct qlcnic_adapter *, u32, u32);
static int qlcnicvf_config_bridged_mode(struct qlcnic_adapter *, u32);
static int qlcnicvf_start_firmware(struct qlcnic_adapter *);
static void qlcnic_set_netdev_features(struct qlcnic_adapter *,
struct qlcnic_esw_func_cfg *);
static void qlcnic_vlan_rx_add(struct net_device *, u16);
static void qlcnic_vlan_rx_del(struct net_device *, u16);
#define ENTRY(device) \
#define PCI_DEVICE_ID_QLOGIC_QLE824X  0x8020
static DEFINE_PCI_DEVICE_TABLE(qlcnic_pci_tbl) = ;
MODULE_DEVICE_TABLE(pci, qlcnic_pci_tbl);
inline void
qlcnic_update_cmd_producer(struct qlcnic_adapter *adapter,
struct qlcnic_host_tx_ring *tx_ring)
static const u32 msi_tgt_status[8] = ;
static const
struct qlcnic_legacy_intr_set legacy_intr[] = QLCNIC_LEGACY_INTR_CONFIG;
static inline void qlcnic_disable_int(struct qlcnic_host_sds_ring *sds_ring)
static inline void qlcnic_enable_int(struct qlcnic_host_sds_ring *sds_ring)
static int
qlcnic_alloc_sds_rings(struct qlcnic_recv_context *recv_ctx, int count)
static void
qlcnic_free_sds_rings(struct qlcnic_recv_context *recv_ctx)
static int
qlcnic_napi_add(struct qlcnic_adapter *adapter, struct net_device *netdev)
static void
qlcnic_napi_del(struct qlcnic_adapter *adapter)
static void
qlcnic_napi_enable(struct qlcnic_adapter *adapter)
static void
qlcnic_napi_disable(struct qlcnic_adapter *adapter)
static void qlcnic_clear_stats(struct qlcnic_adapter *adapter)
static void qlcnic_set_msix_bit(struct pci_dev *pdev, int enable)
static void qlcnic_init_msix_entries(struct qlcnic_adapter *adapter, int count)
static int
qlcnic_read_mac_addr(struct qlcnic_adapter *adapter)
static int qlcnic_set_mac(struct net_device *netdev, void *p)
static const struct net_device_ops qlcnic_netdev_ops = ;
static struct qlcnic_nic_template qlcnic_ops = ;
static struct qlcnic_nic_template qlcnic_vf_ops = ;
static int qlcnic_enable_msix(struct qlcnic_adapter *adapter, u32 num_msix)
static void qlcnic_enable_msi_legacy(struct qlcnic_adapter *adapter)
static void
qlcnic_setup_intr(struct qlcnic_adapter *adapter)
static void
qlcnic_teardown_intr(struct qlcnic_adapter *adapter)
static void
qlcnic_cleanup_pci_map(struct qlcnic_adapter *adapter)
static int
qlcnic_init_pci_info(struct qlcnic_adapter *adapter)
static int
qlcnic_set_function_modes(struct qlcnic_adapter *adapter)
static void
qlcnic_check_vf(struct qlcnic_adapter *adapter)
static int
qlcnic_setup_pci_map(struct qlcnic_adapter *adapter)
static void get_brd_name(struct qlcnic_adapter *adapter, char *name)
static void
qlcnic_check_options(struct qlcnic_adapter *adapter)
static int
qlcnic_initialize_nic(struct qlcnic_adapter *adapter)
static void
qlcnic_set_vlan_config(struct qlcnic_adapter *adapter,
struct qlcnic_esw_func_cfg *esw_cfg)
static void
qlcnic_vlan_rx_add(struct net_device *netdev, u16 vid)
static void
qlcnic_vlan_rx_del(struct net_device *netdev, u16 vid)
static void
qlcnic_set_eswitch_port_features(struct qlcnic_adapter *adapter,
struct qlcnic_esw_func_cfg *esw_cfg)
static int
qlcnic_set_eswitch_port_config(struct qlcnic_adapter *adapter)
static void
qlcnic_set_netdev_features(struct qlcnic_adapter *adapter,
struct qlcnic_esw_func_cfg *esw_cfg)
static int
qlcnic_check_eswitch_mode(struct qlcnic_adapter *adapter)
static int
qlcnic_set_default_offload_settings(struct qlcnic_adapter *adapter)
static int
qlcnic_reset_eswitch_config(struct qlcnic_adapter *adapter,
struct qlcnic_npar_info *npar, int pci_func)
static int
qlcnic_reset_npar_config(struct qlcnic_adapter *adapter)
static int qlcnic_check_npar_opertional(struct qlcnic_adapter *adapter)
static int
qlcnic_set_mgmt_operations(struct qlcnic_adapter *adapter)
static int
qlcnic_start_firmware(struct qlcnic_adapter *adapter)
static int
qlcnic_request_irq(struct qlcnic_adapter *adapter)
static void
qlcnic_free_irq(struct qlcnic_adapter *adapter)
static int
__qlcnic_up(struct qlcnic_adapter *adapter, struct net_device *netdev)
static int
qlcnic_up(struct qlcnic_adapter *adapter, struct net_device *netdev)
static void
__qlcnic_down(struct qlcnic_adapter *adapter, struct net_device *netdev)
static void
qlcnic_down(struct qlcnic_adapter *adapter, struct net_device *netdev)
static int
qlcnic_attach(struct qlcnic_adapter *adapter)
static void
qlcnic_detach(struct qlcnic_adapter *adapter)
void qlcnic_diag_free_res(struct net_device *netdev, int max_sds_rings)
static int qlcnic_alloc_adapter_resources(struct qlcnic_adapter *adapter)
static void qlcnic_free_adapter_resources(struct qlcnic_adapter *adapter)
int qlcnic_diag_alloc_res(struct net_device *netdev, int test)
static int
qlcnic_reset_hw_context(struct qlcnic_adapter *adapter)
int
qlcnic_reset_context(struct qlcnic_adapter *adapter)
static int
qlcnic_setup_netdev(struct qlcnic_adapter *adapter,
struct net_device *netdev, u8 pci_using_dac)
static int qlcnic_set_dma_mask(struct pci_dev *pdev, u8 *pci_using_dac)
static int
qlcnic_alloc_msix_entries(struct qlcnic_adapter *adapter, u16 count)
static int __devinit
qlcnic_probe(struct pci_dev *pdev, const struct pci_device_id *ent)
static void __devexit qlcnic_remove(struct pci_dev *pdev)
static int __qlcnic_shutdown(struct pci_dev *pdev)
static void qlcnic_shutdown(struct pci_dev *pdev)
static int
qlcnic_suspend(struct pci_dev *pdev, pm_message_t state)
static int
qlcnic_resume(struct pci_dev *pdev)
static int qlcnic_open(struct net_device *netdev)
static int qlcnic_close(struct net_device *netdev)
static void
qlcnic_alloc_lb_filters_mem(struct qlcnic_adapter *adapter)
static void qlcnic_free_lb_filters_mem(struct qlcnic_adapter *adapter)
static void qlcnic_change_filter(struct qlcnic_adapter *adapter,
u64 uaddr, __le16 vlan_id, struct qlcnic_host_tx_ring *tx_ring)
#define QLCNIC_MAC_HASH(MAC)\
((((MAC) & 0x70000) >> 0x10) | (((MAC) & 0x70000000000ULL) >> 0x25))
static void
qlcnic_send_filter(struct qlcnic_adapter *adapter,
struct qlcnic_host_tx_ring *tx_ring,
struct cmd_desc_type0 *first_desc,
struct sk_buff *skb)
static int
qlcnic_tx_pkt(struct qlcnic_adapter *adapter,
struct cmd_desc_type0 *first_desc,
struct sk_buff *skb)
static int
qlcnic_map_tx_skb(struct pci_dev *pdev,
struct sk_buff *skb, struct qlcnic_cmd_buffer *pbuf)
static void
qlcnic_unmap_buffers(struct pci_dev *pdev, struct sk_buff *skb,
struct qlcnic_cmd_buffer *pbuf)
static inline void
qlcnic_clear_cmddesc(u64 *desc)
netdev_tx_t
qlcnic_xmit_frame(struct sk_buff *skb, struct net_device *netdev)
static int qlcnic_check_temp(struct qlcnic_adapter *adapter)
void qlcnic_advert_link_change(struct qlcnic_adapter *adapter, int linkup)
static void qlcnic_tx_timeout(struct net_device *netdev)
static struct net_device_stats *qlcnic_get_stats(struct net_device *netdev)
static irqreturn_t qlcnic_clear_legacy_intr(struct qlcnic_adapter *adapter)
static irqreturn_t qlcnic_tmp_intr(int irq, void *data)
static irqreturn_t qlcnic_intr(int irq, void *data)
static irqreturn_t qlcnic_msi_intr(int irq, void *data)
static irqreturn_t qlcnic_msix_intr(int irq, void *data)
static int qlcnic_process_cmd_ring(struct qlcnic_adapter *adapter)
static int qlcnic_poll(struct napi_struct *napi, int budget)
static int qlcnic_rx_poll(struct napi_struct *napi, int budget)
static void qlcnic_poll_controller(struct net_device *netdev)
static void
qlcnic_idc_debug_info(struct qlcnic_adapter *adapter, u8 encoding)
static int
qlcnic_set_drv_state(struct qlcnic_adapter *adapter, u8 state)
static int
qlcnic_clr_drv_state(struct qlcnic_adapter *adapter)
static void
qlcnic_clr_all_drv_state(struct qlcnic_adapter *adapter, u8 failed)
static int
qlcnic_check_drv_state(struct qlcnic_adapter *adapter)
static int qlcnic_check_idc_ver(struct qlcnic_adapter *adapter)
static int
qlcnic_can_start_firmware(struct qlcnic_adapter *adapter)
static void
qlcnic_fwinit_work(struct work_struct *work)
static void
qlcnic_detach_work(struct work_struct *work)
static void
qlcnic_set_npar_non_operational(struct qlcnic_adapter *adapter)
void
qlcnic_dev_request_reset(struct qlcnic_adapter *adapter)
static void
qlcnic_dev_set_npar_ready(struct qlcnic_adapter *adapter)
static void
qlcnic_schedule_work(struct qlcnic_adapter *adapter,
work_func_t func, int delay)
static void
qlcnic_cancel_fw_work(struct qlcnic_adapter *adapter)
static void
qlcnic_attach_work(struct work_struct *work)
static int
qlcnic_check_health(struct qlcnic_adapter *adapter)
static void
qlcnic_fw_poll_work(struct work_struct *work)
static int qlcnic_is_first_func(struct pci_dev *pdev)
static int qlcnic_attach_func(struct pci_dev *pdev)
static pci_ers_result_t qlcnic_io_error_detected(struct pci_dev *pdev,
pci_channel_state_t state)
static pci_ers_result_t qlcnic_io_slot_reset(struct pci_dev *pdev)
static void qlcnic_io_resume(struct pci_dev *pdev)
static int
qlcnicvf_start_firmware(struct qlcnic_adapter *adapter)
static int
qlcnicvf_config_bridged_mode(struct qlcnic_adapter *adapter, u32 enable)
static int
qlcnicvf_config_led(struct qlcnic_adapter *adapter, u32 state, u32 rate)
static ssize_t
qlcnic_store_bridged_mode(struct device *dev,
struct device_attribute *attr, const char *buf, size_t len)
static ssize_t
qlcnic_show_bridged_mode(struct device *dev,
struct device_attribute *attr, char *buf)
static struct device_attribute dev_attr_bridged_mode = ;
static ssize_t
qlcnic_store_diag_mode(struct device *dev,
struct device_attribute *attr, const char *buf, size_t len)
static ssize_t
qlcnic_show_diag_mode(struct device *dev,
struct device_attribute *attr, char *buf)
static struct device_attribute dev_attr_diag_mode = ;
int qlcnic_validate_max_rss(struct net_device *netdev, u8 max_hw, u8 val)
int qlcnic_set_max_rss(struct qlcnic_adapter *adapter, u8 data)
static int
qlcnic_sysfs_validate_crb(struct qlcnic_adapter *adapter,
loff_t offset, size_t size)
static ssize_t
qlcnic_sysfs_read_crb(struct file *filp, struct kobject *kobj,
struct bin_attribute *attr,
char *buf, loff_t offset, size_t size)
static ssize_t
qlcnic_sysfs_write_crb(struct file *filp, struct kobject *kobj,
struct bin_attribute *attr,
char *buf, loff_t offset, size_t size)
static int
qlcnic_sysfs_validate_mem(struct qlcnic_adapter *adapter,
loff_t offset, size_t size)
static ssize_t
qlcnic_sysfs_read_mem(struct file *filp, struct kobject *kobj,
struct bin_attribute *attr,
char *buf, loff_t offset, size_t size)
static ssize_t
qlcnic_sysfs_write_mem(struct file *filp, struct kobject *kobj,
struct bin_attribute *attr,
char *buf, loff_t offset, size_t size)
static struct bin_attribute bin_attr_crb = ;
static struct bin_attribute bin_attr_mem = ;
static int
validate_pm_config(struct qlcnic_adapter *adapter,
struct qlcnic_pm_func_cfg *pm_cfg, int count)
static ssize_t
qlcnic_sysfs_write_pm_config(struct file *filp, struct kobject *kobj,
struct bin_attribute *attr, char *buf, loff_t offset, size_t size)
static ssize_t
qlcnic_sysfs_read_pm_config(struct file *filp, struct kobject *kobj,
struct bin_attribute *attr, char *buf, loff_t offset, size_t size)
static int
validate_esw_config(struct qlcnic_adapter *adapter,
struct qlcnic_esw_func_cfg *esw_cfg, int count)
static ssize_t
qlcnic_sysfs_write_esw_config(struct file *file, struct kobject *kobj,
struct bin_attribute *attr, char *buf, loff_t offset, size_t size)
static ssize_t
qlcnic_sysfs_read_esw_config(struct file *file, struct kobject *kobj,
struct bin_attribute *attr, char *buf, loff_t offset, size_t size)
static int
validate_npar_config(struct qlcnic_adapter *adapter,
struct qlcnic_npar_func_cfg *np_cfg, int count)
static ssize_t
qlcnic_sysfs_write_npar_config(struct file *file, struct kobject *kobj,
struct bin_attribute *attr, char *buf, loff_t offset, size_t size)
static ssize_t
qlcnic_sysfs_read_npar_config(struct file *file, struct kobject *kobj,
struct bin_attribute *attr, char *buf, loff_t offset, size_t size)
static ssize_t
qlcnic_sysfs_get_port_stats(struct file *file, struct kobject *kobj,
struct bin_attribute *attr, char *buf, loff_t offset, size_t size)
static ssize_t
qlcnic_sysfs_get_esw_stats(struct file *file, struct kobject *kobj,
struct bin_attribute *attr, char *buf, loff_t offset, size_t size)
static ssize_t
qlcnic_sysfs_clear_esw_stats(struct file *file, struct kobject *kobj,
struct bin_attribute *attr, char *buf, loff_t offset, size_t size)
static ssize_t
qlcnic_sysfs_clear_port_stats(struct file *file, struct kobject *kobj,
struct bin_attribute *attr, char *buf, loff_t offset, size_t size)
static ssize_t
qlcnic_sysfs_read_pci_config(struct file *file, struct kobject *kobj,
struct bin_attribute *attr, char *buf, loff_t offset, size_t size)
static struct bin_attribute bin_attr_npar_config = ;
static struct bin_attribute bin_attr_pci_config = ;
static struct bin_attribute bin_attr_port_stats = ;
static struct bin_attribute bin_attr_esw_stats = ;
static struct bin_attribute bin_attr_esw_config = ;
static struct bin_attribute bin_attr_pm_config = ;
static void
qlcnic_create_sysfs_entries(struct qlcnic_adapter *adapter)
static void
qlcnic_remove_sysfs_entries(struct qlcnic_adapter *adapter)
static void
qlcnic_create_diag_entries(struct qlcnic_adapter *adapter)
static void
qlcnic_remove_diag_entries(struct qlcnic_adapter *adapter)
#define is_qlcnic_netdev(dev) (dev->netdev_ops == &qlcnic_netdev_ops)
static void
qlcnic_config_indev_addr(struct qlcnic_adapter *adapter,
struct net_device *dev, unsigned long event)
static void
qlcnic_restore_indev_addr(struct net_device *netdev, unsigned long event)
static int qlcnic_netdev_event(struct notifier_block *this,
unsigned long event, void *ptr)
static int
qlcnic_inetaddr_event(struct notifier_block *this,
unsigned long event, void *ptr)
static struct notifier_block	qlcnic_netdev_cb = ;
static struct notifier_block qlcnic_inetaddr_cb = ;
static void
qlcnic_restore_indev_addr(struct net_device *dev, unsigned long event)
static struct pci_error_handlers qlcnic_err_handler = ;
static struct pci_driver qlcnic_driver = ;
static int __init qlcnic_init_module(void)
module_init(qlcnic_init_module);
static void __exit qlcnic_exit_module(void)
module_exit(qlcnic_exit_module);
