#undef DEBUG
#define ugeth_printk(level, format, arg...)  \
printk(level format "\n", ## arg)
#define ugeth_dbg(format, arg...)            \
ugeth_printk(KERN_DEBUG , format , ## arg)
#define ugeth_err(format, arg...)            \
ugeth_printk(KERN_ERR , format , ## arg)
#define ugeth_info(format, arg...)           \
ugeth_printk(KERN_INFO , format , ## arg)
#define ugeth_warn(format, arg...)           \
ugeth_printk(KERN_WARNING , format , ## arg)
#define ugeth_vdbg ugeth_dbg
#define ugeth_vdbg(fmt, args...) do  while (0)
#define UGETH_MSG_DEFAULT	(NETIF_MSG_IFUP << 1 ) - 1
static DEFINE_SPINLOCK(ugeth_lock);
static struct  debug = ;
module_param_named(debug, debug.msg_enable, int, 0);
MODULE_PARM_DESC(debug, "Debug verbosity level (0=none, ..., 0xffff=all)");
static struct ucc_geth_info ugeth_primary_info = ;
static struct ucc_geth_info ugeth_info[8];
static void mem_disp(u8 *addr, int size)
static struct list_head *dequeue(struct list_head *lh)
static struct sk_buff *get_new_skb(struct ucc_geth_private *ugeth,
u8 __iomem *bd)
static int rx_bd_buffer_set(struct ucc_geth_private *ugeth, u8 rxQ)
static int fill_init_enet_entries(struct ucc_geth_private *ugeth,
u32 *p_start,
u8 num_entries,
u32 thread_size,
u32 thread_alignment,
unsigned int risc,
int skip_page_for_first_entry)
static int return_init_enet_entries(struct ucc_geth_private *ugeth,
u32 *p_start,
u8 num_entries,
unsigned int risc,
int skip_page_for_first_entry)
static int dump_init_enet_entries(struct ucc_geth_private *ugeth,
u32 __iomem *p_start,
u8 num_entries,
u32 thread_size,
unsigned int risc,
int skip_page_for_first_entry)
static void put_enet_addr_container(struct enet_addr_container *enet_addr_cont)
static void set_mac_addr(__be16 __iomem *reg, u8 *mac)
static int hw_clear_addr_in_paddr(struct ucc_geth_private *ugeth, u8 paddr_num)
static void hw_add_addr_in_hash(struct ucc_geth_private *ugeth,
u8 *p_enet_addr)
static inline int compare_addr(u8 **addr1, u8 **addr2)
static void get_statistics(struct ucc_geth_private *ugeth,
struct ucc_geth_tx_firmware_statistics *
tx_firmware_statistics,
struct ucc_geth_rx_firmware_statistics *
rx_firmware_statistics,
struct ucc_geth_hardware_statistics *hardware_statistics)
static void dump_bds(struct ucc_geth_private *ugeth)
static void dump_regs(struct ucc_geth_private *ugeth)
static void init_default_reg_vals(u32 __iomem *upsmr_register,
u32 __iomem *maccfg1_register,
u32 __iomem *maccfg2_register)
static int init_half_duplex_params(int alt_beb,
int back_pressure_no_backoff,
int no_backoff,
int excess_defer,
u8 alt_beb_truncation,
u8 max_retransmissions,
u8 collision_window,
u32 __iomem *hafdup_register)
static int init_inter_frame_gap_params(u8 non_btb_cs_ipg,
u8 non_btb_ipg,
u8 min_ifg,
u8 btb_ipg,
u32 __iomem *ipgifg_register)
int init_flow_control_params(u32 automatic_flow_control_mode,
int rx_flow_control_enable,
int tx_flow_control_enable,
u16 pause_period,
u16 extension_field,
u32 __iomem *upsmr_register,
u32 __iomem *uempr_register,
u32 __iomem *maccfg1_register)
static int init_hw_statistics_gathering_mode(int enable_hardware_statistics,
int auto_zero_hardware_statistics,
u32 __iomem *upsmr_register,
u16 __iomem *uescr_register)
static int init_firmware_statistics_gathering_mode(int
enable_tx_firmware_statistics,
int enable_rx_firmware_statistics,
u32 __iomem *tx_rmon_base_ptr,
u32 tx_firmware_statistics_structure_address,
u32 __iomem *rx_rmon_base_ptr,
u32 rx_firmware_statistics_structure_address,
u16 __iomem *temoder_register,
u32 __iomem *remoder_register)
static int init_mac_station_addr_regs(u8 address_byte_0,
u8 address_byte_1,
u8 address_byte_2,
u8 address_byte_3,
u8 address_byte_4,
u8 address_byte_5,
u32 __iomem *macstnaddr1_register,
u32 __iomem *macstnaddr2_register)
static int init_check_frame_length_mode(int length_check,
u32 __iomem *maccfg2_register)
static int init_preamble_length(u8 preamble_length,
u32 __iomem *maccfg2_register)
static int init_rx_parameters(int reject_broadcast,
int receive_short_frames,
int promiscuous, u32 __iomem *upsmr_register)
static int init_max_rx_buff_len(u16 max_rx_buf_len,
u16 __iomem *mrblr_register)
static int init_min_frame_len(u16 min_frame_length,
u16 __iomem *minflr_register,
u16 __iomem *mrblr_register)
static int adjust_enet_interface(struct ucc_geth_private *ugeth)
static int ugeth_graceful_stop_tx(struct ucc_geth_private *ugeth)
static int ugeth_graceful_stop_rx(struct ucc_geth_private *ugeth)
static int ugeth_restart_tx(struct ucc_geth_private *ugeth)
static int ugeth_restart_rx(struct ucc_geth_private *ugeth)
static int ugeth_enable(struct ucc_geth_private *ugeth, enum comm_dir mode)
static int ugeth_disable(struct ucc_geth_private *ugeth, enum comm_dir mode)
static void ugeth_quiesce(struct ucc_geth_private *ugeth)
static void ugeth_activate(struct ucc_geth_private *ugeth)
static void adjust_link(struct net_device *dev)
static void uec_configure_serdes(struct net_device *dev)
static int init_phy(struct net_device *dev)
static void ugeth_dump_regs(struct ucc_geth_private *ugeth)
static int ugeth_82xx_filtering_clear_all_addr_in_hash(struct ucc_geth_private *
ugeth,
enum enet_addr_type
enet_addr_type)
static int ugeth_82xx_filtering_clear_addr_in_paddr(struct ucc_geth_private *ugeth,
u8 paddr_num)
static void ucc_geth_memclean(struct ucc_geth_private *ugeth)
static void ucc_geth_set_multi(struct net_device *dev)
static void ucc_geth_stop(struct ucc_geth_private *ugeth)
static int ucc_struct_init(struct ucc_geth_private *ugeth)
static int ucc_geth_startup(struct ucc_geth_private *ugeth)
static int ucc_geth_start_xmit(struct sk_buff *skb, struct net_device *dev)
static int ucc_geth_rx(struct ucc_geth_private *ugeth, u8 rxQ, int rx_work_limit)
static int ucc_geth_tx(struct net_device *dev, u8 txQ)
static int ucc_geth_poll(struct napi_struct *napi, int budget)
static irqreturn_t ucc_geth_irq_handler(int irq, void *info)
static void ucc_netpoll(struct net_device *dev)
static int ucc_geth_set_mac_addr(struct net_device *dev, void *p)
static int ucc_geth_init_mac(struct ucc_geth_private *ugeth)
static int ucc_geth_open(struct net_device *dev)
static int ucc_geth_close(struct net_device *dev)
static void ucc_geth_timeout_work(struct work_struct *work)
static void ucc_geth_timeout(struct net_device *dev)
static int ucc_geth_suspend(struct platform_device *ofdev, pm_message_t state)
static int ucc_geth_resume(struct platform_device *ofdev)
#define ucc_geth_suspend NULL
#define ucc_geth_resume NULL
static phy_interface_t to_phy_interface(const char *phy_connection_type)
static int ucc_geth_ioctl(struct net_device *dev, struct ifreq *rq, int cmd)
static const struct net_device_ops ucc_geth_netdev_ops = ;
static int ucc_geth_probe(struct platform_device* ofdev)
static int ucc_geth_remove(struct platform_device* ofdev)
static struct of_device_id ucc_geth_match[] = ;
MODULE_DEVICE_TABLE(of, ucc_geth_match);
static struct platform_driver ucc_geth_driver = ;
static int __init ucc_geth_init(void)
static void __exit ucc_geth_exit(void)
module_init(ucc_geth_init);
module_exit(ucc_geth_exit);
MODULE_AUTHOR("Freescale Semiconductor, Inc");
MODULE_DESCRIPTION(DRV_DESC);
MODULE_VERSION(DRV_VERSION);
MODULE_LICENSE("GPL");
