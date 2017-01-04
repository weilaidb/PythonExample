static int velocity_nics;
static int msglevel = MSG_LEVEL_INFO;
static void mac_get_cam_mask(struct mac_regs __iomem *regs, u8 *mask)
static void mac_set_cam_mask(struct mac_regs __iomem *regs, u8 *mask)
static void mac_set_vlan_cam_mask(struct mac_regs __iomem *regs, u8 *mask)
static void mac_set_cam(struct mac_regs __iomem *regs, int idx, const u8 *addr)
static void mac_set_vlan_cam(struct mac_regs __iomem *regs, int idx,
const u8 *addr)
static void mac_wol_reset(struct mac_regs __iomem *regs)
static const struct ethtool_ops velocity_ethtool_ops;
MODULE_AUTHOR("VIA Networking Technologies, Inc.");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("VIA Networking Velocity Family Gigabit Ethernet Adapter Driver");
#define VELOCITY_PARAM(N, D) \
static int N[MAX_UNITS] = OPTION_DEFAULT;\
module_param_array(N, int, NULL, 0); \
MODULE_PARM_DESC(N, D);
#define RX_DESC_MIN     64
#define RX_DESC_MAX     255
#define RX_DESC_DEF     64
VELOCITY_PARAM(RxDescriptors, "Number of receive descriptors");
#define TX_DESC_MIN     16
#define TX_DESC_MAX     256
#define TX_DESC_DEF     64
VELOCITY_PARAM(TxDescriptors, "Number of transmit descriptors");
#define RX_THRESH_MIN   0
#define RX_THRESH_MAX   3
#define RX_THRESH_DEF   0
VELOCITY_PARAM(rx_thresh, "Receive fifo threshold");
#define DMA_LENGTH_MIN  0
#define DMA_LENGTH_MAX  7
#define DMA_LENGTH_DEF  6
VELOCITY_PARAM(DMA_length, "DMA length");
#define IP_ALIG_DEF     0
VELOCITY_PARAM(IP_byte_align, "Enable IP header dword aligned");
#define FLOW_CNTL_DEF   1
#define FLOW_CNTL_MIN   1
#define FLOW_CNTL_MAX   5
VELOCITY_PARAM(flow_control, "Enable flow control ability");
#define MED_LNK_DEF 0
#define MED_LNK_MIN 0
#define MED_LNK_MAX 5
VELOCITY_PARAM(speed_duplex, "Setting the speed and duplex mode");
#define VAL_PKT_LEN_DEF     0
VELOCITY_PARAM(ValPktLen, "Receiving or Drop invalid 802.3 frame");
#define WOL_OPT_DEF     0
#define WOL_OPT_MIN     0
#define WOL_OPT_MAX     7
VELOCITY_PARAM(wol_opts, "Wake On Lan options");
static int rx_copybreak = 200;
module_param(rx_copybreak, int, 0644);
MODULE_PARM_DESC(rx_copybreak, "Copy breakpoint for copy-only-tiny-frames");
static struct velocity_info_tbl chip_info_table[] = ;
static DEFINE_PCI_DEVICE_TABLE(velocity_id_table) = ;
MODULE_DEVICE_TABLE(pci, velocity_id_table);
static const char __devinit *get_chip_name(enum chip_type chip_id)
static void __devexit velocity_remove1(struct pci_dev *pdev)
static void __devinit velocity_set_int_opt(int *opt, int val, int min, int max, int def, char *name, const char *devname)
static void __devinit velocity_set_bool_opt(u32 *opt, int val, int def, u32 flag, char *name, const char *devname)
static void __devinit velocity_get_options(struct velocity_opt *opts, int index, const char *devname)
static void velocity_init_cam_filter(struct velocity_info *vptr)
static void velocity_vlan_rx_register(struct net_device *dev,
struct vlan_group *grp)
static void velocity_vlan_rx_add_vid(struct net_device *dev, unsigned short vid)
static void velocity_vlan_rx_kill_vid(struct net_device *dev, unsigned short vid)
static void velocity_init_rx_ring_indexes(struct velocity_info *vptr)
static void velocity_rx_reset(struct velocity_info *vptr)
static u32 velocity_get_opt_media_mode(struct velocity_info *vptr)
static void safe_disable_mii_autopoll(struct mac_regs __iomem *regs)
static void enable_mii_autopoll(struct mac_regs __iomem *regs)
static int velocity_mii_read(struct mac_regs __iomem *regs, u8 index, u16 *data)
static u32 mii_check_media_mode(struct mac_regs __iomem *regs)
static int velocity_mii_write(struct mac_regs __iomem *regs, u8 mii_addr, u16 data)
static void set_mii_flow_control(struct velocity_info *vptr)
static void mii_set_auto_on(struct velocity_info *vptr)
static u32 check_connection_type(struct mac_regs __iomem *regs)
static int velocity_set_media_mode(struct velocity_info *vptr, u32 mii_status)
static void velocity_print_link_status(struct velocity_info *vptr)
static void enable_flow_control_ability(struct velocity_info *vptr)
static int velocity_soft_reset(struct velocity_info *vptr)
static void velocity_set_multi(struct net_device *dev)
static void mii_init(struct velocity_info *vptr, u32 mii_status)
static void setup_queue_timers(struct velocity_info *vptr)
static void setup_adaptive_interrupts(struct velocity_info *vptr)
static void velocity_init_registers(struct velocity_info *vptr,
enum velocity_init_type type)
static void velocity_give_many_rx_descs(struct velocity_info *vptr)
static int velocity_init_dma_rings(struct velocity_info *vptr)
static void velocity_set_rxbufsize(struct velocity_info *vptr, int mtu)
static int velocity_alloc_rx_buf(struct velocity_info *vptr, int idx)
static int velocity_rx_refill(struct velocity_info *vptr)
static void velocity_free_rd_ring(struct velocity_info *vptr)
static int velocity_init_rd_ring(struct velocity_info *vptr)
static int velocity_init_td_ring(struct velocity_info *vptr)
static void velocity_free_dma_rings(struct velocity_info *vptr)
static int velocity_init_rings(struct velocity_info *vptr, int mtu)
static void velocity_free_tx_buf(struct velocity_info *vptr,
struct velocity_td_info *tdinfo, struct tx_desc *td)
static void velocity_free_td_ring_entry(struct velocity_info *vptr,
int q, int n)
static void velocity_free_td_ring(struct velocity_info *vptr)
static void velocity_free_rings(struct velocity_info *vptr)
static void velocity_error(struct velocity_info *vptr, int status)
static int velocity_tx_srv(struct velocity_info *vptr)
static inline void velocity_rx_csum(struct rx_desc *rd, struct sk_buff *skb)
static int velocity_rx_copy(struct sk_buff **rx_skb, int pkt_size,
struct velocity_info *vptr)
static inline void velocity_iph_realign(struct velocity_info *vptr,
struct sk_buff *skb, int pkt_size)
static int velocity_receive_frame(struct velocity_info *vptr, int idx)
static int velocity_rx_srv(struct velocity_info *vptr, int budget_left)
static int velocity_poll(struct napi_struct *napi, int budget)
static irqreturn_t velocity_intr(int irq, void *dev_instance)
static int velocity_open(struct net_device *dev)
static void velocity_shutdown(struct velocity_info *vptr)
static int velocity_change_mtu(struct net_device *dev, int new_mtu)
static int velocity_mii_ioctl(struct net_device *dev, struct ifreq *ifr, int cmd)
static int velocity_ioctl(struct net_device *dev, struct ifreq *rq, int cmd)
static struct net_device_stats *velocity_get_stats(struct net_device *dev)
static int velocity_close(struct net_device *dev)
static netdev_tx_t velocity_xmit(struct sk_buff *skb,
struct net_device *dev)
static const struct net_device_ops velocity_netdev_ops = ;
static void __devinit velocity_init_info(struct pci_dev *pdev,
struct velocity_info *vptr,
const struct velocity_info_tbl *info)
static int __devinit velocity_get_pci_info(struct velocity_info *vptr, struct pci_dev *pdev)
static void __devinit velocity_print_info(struct velocity_info *vptr)
static u32 velocity_get_link(struct net_device *dev)
static int __devinit velocity_found1(struct pci_dev *pdev, const struct pci_device_id *ent)
static u16 wol_calc_crc(int size, u8 *pattern, u8 *mask_pattern)
static int velocity_set_wol(struct velocity_info *vptr)
static void velocity_save_context(struct velocity_info *vptr, struct velocity_context *context)
static int velocity_suspend(struct pci_dev *pdev, pm_message_t state)
static void velocity_restore_context(struct velocity_info *vptr, struct velocity_context *context)
static int velocity_resume(struct pci_dev *pdev)
static struct pci_driver velocity_driver = ;
static int velocity_ethtool_up(struct net_device *dev)
static void velocity_ethtool_down(struct net_device *dev)
static int velocity_get_settings(struct net_device *dev,
struct ethtool_cmd *cmd)
static int velocity_set_settings(struct net_device *dev,
struct ethtool_cmd *cmd)
static void velocity_get_drvinfo(struct net_device *dev, struct ethtool_drvinfo *info)
static void velocity_ethtool_get_wol(struct net_device *dev, struct ethtool_wolinfo *wol)
static int velocity_ethtool_set_wol(struct net_device *dev, struct ethtool_wolinfo *wol)
static u32 velocity_get_msglevel(struct net_device *dev)
static void velocity_set_msglevel(struct net_device *dev, u32 value)
static int get_pending_timer_val(int val)
static void set_pending_timer_val(int *val, u32 us)
static int velocity_get_coalesce(struct net_device *dev,
struct ethtool_coalesce *ecmd)
static int velocity_set_coalesce(struct net_device *dev,
struct ethtool_coalesce *ecmd)
static const struct ethtool_ops velocity_ethtool_ops = ;
static int velocity_netdev_event(struct notifier_block *nb, unsigned long notification, void *ptr)
#if defined(CONFIG_PM) && defined(CONFIG_INET)
static struct notifier_block velocity_inetaddr_notifier = ;
static void velocity_register_notifier(void)
static void velocity_unregister_notifier(void)
#define velocity_register_notifier()	do  while (0)
#define velocity_unregister_notifier()	do  while (0)
static int __init velocity_init_module(void)
static void __exit velocity_cleanup_module(void)
module_init(velocity_init_module);
module_exit(velocity_cleanup_module);
