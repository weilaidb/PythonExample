const unsigned int efx_loopback_mode_max = LOOPBACK_MAX;
const char *efx_loopback_mode_names[] = ;
const unsigned int efx_reset_type_max = RESET_TYPE_MAX;
const char *efx_reset_type_names[] = ;
#define EFX_MAX_MTU (9 * 1024)
static struct workqueue_struct *reset_workqueue;
static unsigned int separate_tx_channels;
module_param(separate_tx_channels, uint, 0444);
MODULE_PARM_DESC(separate_tx_channels,
"Use separate channels for TX and RX");
static int napi_weight = 64;
static unsigned int efx_monitor_interval = 1 * HZ;
static unsigned int allow_bad_hwaddr;
static unsigned int rx_irq_mod_usec = 60;
static unsigned int tx_irq_mod_usec = 150;
static unsigned int interrupt_mode;
static unsigned int rss_cpus;
module_param(rss_cpus, uint, 0444);
MODULE_PARM_DESC(rss_cpus, "Number of CPUs to use for Receive-Side Scaling");
static int phy_flash_cfg;
module_param(phy_flash_cfg, int, 0644);
MODULE_PARM_DESC(phy_flash_cfg, "Set PHYs into reflash mode initially");
static unsigned irq_adapt_low_thresh = 10000;
module_param(irq_adapt_low_thresh, uint, 0644);
MODULE_PARM_DESC(irq_adapt_low_thresh,
"Threshold score for reducing IRQ moderation");
static unsigned irq_adapt_high_thresh = 20000;
module_param(irq_adapt_high_thresh, uint, 0644);
MODULE_PARM_DESC(irq_adapt_high_thresh,
"Threshold score for increasing IRQ moderation");
static unsigned debug = (NETIF_MSG_DRV | NETIF_MSG_PROBE |
NETIF_MSG_LINK | NETIF_MSG_IFDOWN |
NETIF_MSG_IFUP | NETIF_MSG_RX_ERR |
NETIF_MSG_TX_ERR | NETIF_MSG_HW);
module_param(debug, uint, 0);
MODULE_PARM_DESC(debug, "Bitmapped debugging message enable value");
static void efx_remove_channels(struct efx_nic *efx);
static void efx_remove_port(struct efx_nic *efx);
static void efx_init_napi(struct efx_nic *efx);
static void efx_fini_napi(struct efx_nic *efx);
static void efx_fini_napi_channel(struct efx_channel *channel);
static void efx_fini_struct(struct efx_nic *efx);
static void efx_start_all(struct efx_nic *efx);
static void efx_stop_all(struct efx_nic *efx);
#define EFX_ASSERT_RESET_SERIALISED(efx)		\
do  while (0)
static int efx_process_channel(struct efx_channel *channel, int budget)
static inline void efx_channel_processed(struct efx_channel *channel)
static int efx_poll(struct napi_struct *napi, int budget)
void efx_process_channel_now(struct efx_channel *channel)
static int efx_probe_eventq(struct efx_channel *channel)
static void efx_init_eventq(struct efx_channel *channel)
static void efx_fini_eventq(struct efx_channel *channel)
static void efx_remove_eventq(struct efx_channel *channel)
static struct efx_channel *
efx_alloc_channel(struct efx_nic *efx, int i, struct efx_channel *old_channel)
static int efx_probe_channel(struct efx_channel *channel)
static void efx_set_channel_names(struct efx_nic *efx)
static int efx_probe_channels(struct efx_nic *efx)
static void efx_init_channels(struct efx_nic *efx)
static void efx_start_channel(struct efx_channel *channel)
static void efx_stop_channel(struct efx_channel *channel)
static void efx_fini_channels(struct efx_nic *efx)
static void efx_remove_channel(struct efx_channel *channel)
static void efx_remove_channels(struct efx_nic *efx)
int
efx_realloc_channels(struct efx_nic *efx, u32 rxq_entries, u32 txq_entries)
void efx_schedule_slow_fill(struct efx_rx_queue *rx_queue)
void efx_link_status_changed(struct efx_nic *efx)
void efx_link_set_advertising(struct efx_nic *efx, u32 advertising)
void efx_link_set_wanted_fc(struct efx_nic *efx, u8 wanted_fc)
static void efx_fini_port(struct efx_nic *efx);
int __efx_reconfigure_port(struct efx_nic *efx)
int efx_reconfigure_port(struct efx_nic *efx)
static void efx_mac_work(struct work_struct *data)
static int efx_probe_port(struct efx_nic *efx)
static int efx_init_port(struct efx_nic *efx)
static void efx_start_port(struct efx_nic *efx)
static void efx_stop_port(struct efx_nic *efx)
static void efx_fini_port(struct efx_nic *efx)
static void efx_remove_port(struct efx_nic *efx)
static int efx_init_io(struct efx_nic *efx)
static void efx_fini_io(struct efx_nic *efx)
static int efx_wanted_channels(void)
static int
efx_init_rx_cpu_rmap(struct efx_nic *efx, struct msix_entry *xentries)
static int efx_probe_interrupts(struct efx_nic *efx)
static void efx_remove_interrupts(struct efx_nic *efx)
static void efx_set_channels(struct efx_nic *efx)
static int efx_probe_nic(struct efx_nic *efx)
static void efx_remove_nic(struct efx_nic *efx)
static int efx_probe_all(struct efx_nic *efx)
static void efx_start_all(struct efx_nic *efx)
static void efx_flush_all(struct efx_nic *efx)
static void efx_stop_all(struct efx_nic *efx)
static void efx_remove_all(struct efx_nic *efx)
static unsigned irq_mod_ticks(int usecs, int resolution)
void efx_init_irq_moderation(struct efx_nic *efx, int tx_usecs, int rx_usecs,
bool rx_adaptive)
static void efx_monitor(struct work_struct *data)
static int efx_ioctl(struct net_device *net_dev, struct ifreq *ifr, int cmd)
static void efx_init_napi(struct efx_nic *efx)
static void efx_fini_napi_channel(struct efx_channel *channel)
static void efx_fini_napi(struct efx_nic *efx)
static void efx_netpoll(struct net_device *net_dev)
static int efx_net_open(struct net_device *net_dev)
static int efx_net_stop(struct net_device *net_dev)
static struct rtnl_link_stats64 *efx_net_stats(struct net_device *net_dev, struct rtnl_link_stats64 *stats)
static void efx_watchdog(struct net_device *net_dev)
static int efx_change_mtu(struct net_device *net_dev, int new_mtu)
static int efx_set_mac_address(struct net_device *net_dev, void *data)
static void efx_set_multicast_list(struct net_device *net_dev)
static int efx_set_features(struct net_device *net_dev, u32 data)
static const struct net_device_ops efx_netdev_ops = ;
static void efx_update_name(struct efx_nic *efx)
static int efx_netdev_event(struct notifier_block *this,
unsigned long event, void *ptr)
static struct notifier_block efx_netdev_notifier = ;
static ssize_t
show_phy_type(struct device *dev, struct device_attribute *attr, char *buf)
static DEVICE_ATTR(phy_type, 0644, show_phy_type, NULL);
static int efx_register_netdev(struct efx_nic *efx)
static void efx_unregister_netdev(struct efx_nic *efx)
void efx_reset_down(struct efx_nic *efx, enum reset_type method)
int efx_reset_up(struct efx_nic *efx, enum reset_type method, bool ok)
int efx_reset(struct efx_nic *efx, enum reset_type method)
static void efx_reset_work(struct work_struct *data)
void efx_schedule_reset(struct efx_nic *efx, enum reset_type type)
static DEFINE_PCI_DEVICE_TABLE(efx_pci_table) = ;
int efx_port_dummy_op_int(struct efx_nic *efx)
void efx_port_dummy_op_void(struct efx_nic *efx)
static bool efx_port_dummy_op_poll(struct efx_nic *efx)
static const struct efx_phy_operations efx_dummy_phy_operations = ;
static int efx_init_struct(struct efx_nic *efx, const struct efx_nic_type *type,
struct pci_dev *pci_dev, struct net_device *net_dev)
static void efx_fini_struct(struct efx_nic *efx)
static void efx_pci_remove_main(struct efx_nic *efx)
static void efx_pci_remove(struct pci_dev *pci_dev)
;
static int efx_pci_probe_main(struct efx_nic *efx)
static int __devinit efx_pci_probe(struct pci_dev *pci_dev,
const struct pci_device_id *entry)
static int efx_pm_freeze(struct device *dev)
static int efx_pm_thaw(struct device *dev)
static int efx_pm_poweroff(struct device *dev)
static int efx_pm_resume(struct device *dev)
static int efx_pm_suspend(struct device *dev)
static struct dev_pm_ops efx_pm_ops = ;
static struct pci_driver efx_pci_driver = ;
module_param(interrupt_mode, uint, 0444);
MODULE_PARM_DESC(interrupt_mode,
"Interrupt mode (0=>MSIX 1=>MSI 2=>legacy)");
static int __init efx_init_module(void)
static void __exit efx_exit_module(void)
module_init(efx_init_module);
module_exit(efx_exit_module);
MODULE_AUTHOR("Solarflare Communications and "
"Michael Brown <mbrown@fensystems.co.uk>");
MODULE_DESCRIPTION("Solarflare Communications network driver");
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(pci, efx_pci_table);
