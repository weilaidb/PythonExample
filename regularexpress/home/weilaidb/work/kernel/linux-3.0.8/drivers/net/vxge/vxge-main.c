#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
MODULE_LICENSE("Dual BSD/GPL");
MODULE_DESCRIPTION("Neterion's X3100 Series 10GbE PCIe I/O"
"Virtualized Server Adapter");
static DEFINE_PCI_DEVICE_TABLE(vxge_id_table) = ;
MODULE_DEVICE_TABLE(pci, vxge_id_table);
VXGE_MODULE_PARAM_INT(vlan_tag_strip, VXGE_HW_VPATH_RPA_STRIP_VLAN_TAG_ENABLE);
VXGE_MODULE_PARAM_INT(addr_learn_en, VXGE_HW_MAC_ADDR_LEARN_DEFAULT);
VXGE_MODULE_PARAM_INT(max_config_port, VXGE_MAX_CONFIG_PORT);
VXGE_MODULE_PARAM_INT(max_config_vpath, VXGE_USE_DEFAULT);
VXGE_MODULE_PARAM_INT(max_mac_vpath, VXGE_MAX_MAC_ADDR_COUNT);
VXGE_MODULE_PARAM_INT(max_config_dev, VXGE_MAX_CONFIG_DEV);
static u16 vpath_selector[VXGE_HW_MAX_VIRTUAL_PATHS] =
;
static unsigned int bw_percentage[VXGE_HW_MAX_VIRTUAL_PATHS] =
;
module_param_array(bw_percentage, uint, NULL, 0);
static struct vxge_drv_config *driver_config;
static inline int is_vxge_card_up(struct vxgedev *vdev)
static inline void VXGE_COMPLETE_VPATH_TX(struct vxge_fifo *fifo)
static inline void VXGE_COMPLETE_ALL_TX(struct vxgedev *vdev)
static inline void VXGE_COMPLETE_ALL_RX(struct vxgedev *vdev)
static void vxge_callback_link_up(struct __vxge_hw_device *hldev)
static void vxge_callback_link_down(struct __vxge_hw_device *hldev)
static struct sk_buff *
vxge_rx_alloc(void *dtrh, struct vxge_ring *ring, const int skb_size)
static int vxge_rx_map(void *dtrh, struct vxge_ring *ring)
static enum vxge_hw_status
vxge_rx_initial_replenish(void *dtrh, void *userdata)
static inline void
vxge_rx_complete(struct vxge_ring *ring, struct sk_buff *skb, u16 vlan,
int pkt_length, struct vxge_hw_ring_rxd_info *ext_info)
static inline void vxge_re_pre_post(void *dtr, struct vxge_ring *ring,
struct vxge_rx_priv *rx_priv)
static inline void vxge_post(int *dtr_cnt, void **first_dtr,
void *post_dtr, struct __vxge_hw_ring *ringh)
static enum vxge_hw_status
vxge_rx_1b_compl(struct __vxge_hw_ring *ringh, void *dtr,
u8 t_code, void *userdata)
static enum vxge_hw_status
vxge_xmit_compl(struct __vxge_hw_fifo *fifo_hw, void *dtr,
enum vxge_hw_fifo_tcode t_code, void *userdata,
struct sk_buff ***skb_ptr, int nr_skb, int *more)
static u32 vxge_get_vpath_no(struct vxgedev *vdev, struct sk_buff *skb)
static enum vxge_hw_status vxge_search_mac_addr_in_list(
struct vxge_vpath *vpath, u64 del_mac)
static int vxge_mac_list_add(struct vxge_vpath *vpath, struct macInfo *mac)
static enum vxge_hw_status
vxge_add_mac_addr(struct vxgedev *vdev, struct macInfo *mac)
static int vxge_learn_mac(struct vxgedev *vdev, u8 *mac_header)
static netdev_tx_t
vxge_xmit(struct sk_buff *skb, struct net_device *dev)
static void
vxge_rx_term(void *dtrh, enum vxge_hw_rxd_state state, void *userdata)
static void
vxge_tx_term(void *dtrh, enum vxge_hw_txdl_state state, void *userdata)
static int vxge_mac_list_del(struct vxge_vpath *vpath, struct macInfo *mac)
static enum vxge_hw_status
vxge_del_mac_addr(struct vxgedev *vdev, struct macInfo *mac)
static void vxge_set_multicast(struct net_device *dev)
static int vxge_set_mac_addr(struct net_device *dev, void *p)
static void vxge_vpath_intr_enable(struct vxgedev *vdev, int vp_id)
static void vxge_vpath_intr_disable(struct vxgedev *vdev, int vp_id)
static enum vxge_hw_status
vxge_search_mac_addr_in_da_table(struct vxge_vpath *vpath, struct macInfo *mac)
static enum vxge_hw_status vxge_restore_vpath_mac_addr(struct vxge_vpath *vpath)
static enum vxge_hw_status
vxge_restore_vpath_vid_table(struct vxge_vpath *vpath)
static int vxge_reset_vpath(struct vxgedev *vdev, int vp_id)
static void vxge_config_ci_for_tti_rti(struct vxgedev *vdev)
static int do_vxge_reset(struct vxgedev *vdev, int event)
static void vxge_reset(struct work_struct *work)
static int vxge_poll_msix(struct napi_struct *napi, int budget)
static int vxge_poll_inta(struct napi_struct *napi, int budget)
static void vxge_netpoll(struct net_device *dev)
static enum vxge_hw_status vxge_rth_configure(struct vxgedev *vdev)
enum vxge_hw_status vxge_reset_all_vpaths(struct vxgedev *vdev)
static void vxge_close_vpaths(struct vxgedev *vdev, int index)
static int vxge_open_vpaths(struct vxgedev *vdev)
static void adaptive_coalesce_tx_interrupts(struct vxge_fifo *fifo)
static void adaptive_coalesce_rx_interrupts(struct vxge_ring *ring)
static irqreturn_t vxge_isr_napi(int irq, void *dev_id)
static irqreturn_t vxge_tx_msix_handle(int irq, void *dev_id)
static irqreturn_t vxge_rx_msix_napi_handle(int irq, void *dev_id)
static irqreturn_t
vxge_alarm_msix_handle(int irq, void *dev_id)
static int vxge_alloc_msix(struct vxgedev *vdev)
static int vxge_enable_msix(struct vxgedev *vdev)
static void vxge_rem_msix_isr(struct vxgedev *vdev)
static void vxge_rem_isr(struct vxgedev *vdev)
static int vxge_add_isr(struct vxgedev *vdev)
static void vxge_poll_vp_reset(unsigned long data)
static void vxge_poll_vp_lockup(unsigned long data)
static u32 vxge_fix_features(struct net_device *dev, u32 features)
static int vxge_set_features(struct net_device *dev, u32 features)
static int vxge_open(struct net_device *dev)
static void vxge_free_mac_add_list(struct vxge_vpath *vpath)
static void vxge_napi_del_all(struct vxgedev *vdev)
static int do_vxge_close(struct net_device *dev, int do_io)
static int vxge_close(struct net_device *dev)
static int vxge_change_mtu(struct net_device *dev, int new_mtu)
static struct rtnl_link_stats64 *
vxge_get_stats64(struct net_device *dev, struct rtnl_link_stats64 *net_stats)
static enum vxge_hw_status vxge_timestamp_config(struct __vxge_hw_device *devh)
static int vxge_hwtstamp_ioctl(struct vxgedev *vdev, void __user *data)
static int vxge_ioctl(struct net_device *dev, struct ifreq *rq, int cmd)
static void vxge_tx_watchdog(struct net_device *dev)
static void
vxge_vlan_rx_register(struct net_device *dev, struct vlan_group *grp)
static void
vxge_vlan_rx_add_vid(struct net_device *dev, unsigned short vid)
static void
vxge_vlan_rx_kill_vid(struct net_device *dev, unsigned short vid)
static const struct net_device_ops vxge_netdev_ops = ;
static int __devinit vxge_device_register(struct __vxge_hw_device *hldev,
struct vxge_config *config,
int high_dma, int no_of_vpath,
struct vxgedev **vdev_out)
static void vxge_device_unregister(struct __vxge_hw_device *hldev)
static void
vxge_callback_crit_err(struct __vxge_hw_device *hldev,
enum vxge_hw_event type, u64 vp_id)
static void verify_bandwidth(void)
static int __devinit vxge_config_vpaths(
struct vxge_hw_device_config *device_config,
u64 vpath_mask, struct vxge_config *config_param)
static void __devinit vxge_device_config_init(
struct vxge_hw_device_config *device_config,
int *intr_type)
static void __devinit vxge_print_parm(struct vxgedev *vdev, u64 vpath_mask)
static int vxge_pm_suspend(struct pci_dev *pdev, pm_message_t state)
static int vxge_pm_resume(struct pci_dev *pdev)
static pci_ers_result_t vxge_io_error_detected(struct pci_dev *pdev,
pci_channel_state_t state)
static pci_ers_result_t vxge_io_slot_reset(struct pci_dev *pdev)
static void vxge_io_resume(struct pci_dev *pdev)
static inline u32 vxge_get_num_vfs(u64 function_mode)
int vxge_fw_upgrade(struct vxgedev *vdev, char *fw_name, int override)
static int vxge_probe_fw_update(struct vxgedev *vdev)
static int __devinit is_sriov_initialized(struct pci_dev *pdev)
static int __devinit
vxge_probe(struct pci_dev *pdev, const struct pci_device_id *pre)
static void __devexit vxge_remove(struct pci_dev *pdev)
static struct pci_error_handlers vxge_err_handler = ;
static struct pci_driver vxge_driver = ;
static int __init
vxge_starter(void)
static void __exit
vxge_closer(void)
module_init(vxge_starter);
module_exit(vxge_closer);
