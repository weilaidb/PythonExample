#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define DRV_VERSION "2.0.26.28"
static const char s2io_driver_name[] = "Neterion";
static const char s2io_driver_version[] = DRV_VERSION;
static const int rxd_size[2] = ;
static const int rxd_count[2] = ;
static inline int RXD_IS_UP2DT(struct RxD_t *rxdp)
#define CARDS_WITH_FAULTY_LINK_INDICATORS(dev_type, subid)		\
(dev_type == XFRAME_I_DEVICE) ?					\
((((subid >= 0x600B) && (subid <= 0x600D)) ||			\
((subid >= 0x640B) && (subid <= 0x640D))) ? 1 : 0) : 0
#define LINK_IS_UP(val64) (!(val64 & (ADAPTER_STATUS_RMAC_REMOTE_FAULT | \
ADAPTER_STATUS_RMAC_LOCAL_FAULT)))
static inline int is_s2io_card_up(const struct s2io_nic *sp)
static const char s2io_gstrings[][ETH_GSTRING_LEN] = ;
static const char ethtool_xena_stats_keys[][ETH_GSTRING_LEN] = ;
static const char ethtool_enhanced_stats_keys[][ETH_GSTRING_LEN] = ;
static const char ethtool_driver_stats_keys[][ETH_GSTRING_LEN] = ;
#define S2IO_XENA_STAT_LEN	ARRAY_SIZE(ethtool_xena_stats_keys)
#define S2IO_ENHANCED_STAT_LEN	ARRAY_SIZE(ethtool_enhanced_stats_keys)
#define S2IO_DRIVER_STAT_LEN	ARRAY_SIZE(ethtool_driver_stats_keys)
#define XFRAME_I_STAT_LEN (S2IO_XENA_STAT_LEN + S2IO_DRIVER_STAT_LEN)
#define XFRAME_II_STAT_LEN (XFRAME_I_STAT_LEN + S2IO_ENHANCED_STAT_LEN)
#define XFRAME_I_STAT_STRINGS_LEN (XFRAME_I_STAT_LEN * ETH_GSTRING_LEN)
#define XFRAME_II_STAT_STRINGS_LEN (XFRAME_II_STAT_LEN * ETH_GSTRING_LEN)
#define S2IO_TEST_LEN	ARRAY_SIZE(s2io_gstrings)
#define S2IO_STRINGS_LEN	(S2IO_TEST_LEN * ETH_GSTRING_LEN)
#define S2IO_TIMER_CONF(timer, handle, arg, exp)	\
init_timer(&timer);				\
timer.function = handle;			\
timer.data = (unsigned long)arg;		\
mod_timer(&timer, (jiffies + exp))		\
static void do_s2io_copy_mac_addr(struct s2io_nic *sp, int offset, u64 mac_addr)
static void s2io_vlan_rx_register(struct net_device *dev,
struct vlan_group *grp)
static void s2io_vlan_rx_kill_vid(struct net_device *dev, unsigned short vid)
#define	END_SIGN	0x0
static const u64 herc_act_dtx_cfg[] = ;
static const u64 xena_dtx_cfg[] = ;
static const u64 fix_mac[] = ;
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_VERSION);
S2IO_PARM_INT(tx_fifo_num, FIFO_DEFAULT_NUM);
S2IO_PARM_INT(rx_ring_num, 1);
S2IO_PARM_INT(multiq, 0);
S2IO_PARM_INT(rx_ring_mode, 1);
S2IO_PARM_INT(use_continuous_tx_intrs, 1);
S2IO_PARM_INT(rmac_pause_time, 0x100);
S2IO_PARM_INT(mc_pause_threshold_q0q3, 187);
S2IO_PARM_INT(mc_pause_threshold_q4q7, 187);
S2IO_PARM_INT(shared_splits, 0);
S2IO_PARM_INT(tmac_util_period, 5);
S2IO_PARM_INT(rmac_util_period, 5);
S2IO_PARM_INT(l3l4hdr_size, 128);
S2IO_PARM_INT(tx_steering_type, TX_DEFAULT_STEERING);
S2IO_PARM_INT(rxsync_frequency, 3);
S2IO_PARM_INT(intr_type, 2);
S2IO_PARM_INT(lro_max_pkts, 0xFFFF);
S2IO_PARM_INT(indicate_max_pkts, 0);
S2IO_PARM_INT(napi, 1);
S2IO_PARM_INT(ufo, 0);
S2IO_PARM_INT(vlan_tag_strip, NO_STRIP_IN_PROMISC);
static unsigned int tx_fifo_len[MAX_TX_FIFOS] =
;
static unsigned int rx_ring_sz[MAX_RX_RINGS] =
;
static unsigned int rts_frm_len[MAX_RX_RINGS] =
;
module_param_array(tx_fifo_len, uint, NULL, 0);
module_param_array(rx_ring_sz, uint, NULL, 0);
module_param_array(rts_frm_len, uint, NULL, 0);
static DEFINE_PCI_DEVICE_TABLE(s2io_tbl) = ;
MODULE_DEVICE_TABLE(pci, s2io_tbl);
static struct pci_error_handlers s2io_err_handler = ;
static struct pci_driver s2io_driver = ;
#define TXD_MEM_PAGE_CNT(len, per_each) ((len+per_each - 1) / per_each)
static inline void s2io_stop_all_tx_queue(struct s2io_nic *sp)
static inline void s2io_stop_tx_queue(struct s2io_nic *sp, int fifo_no)
static inline void s2io_start_all_tx_queue(struct s2io_nic *sp)
static inline void s2io_start_tx_queue(struct s2io_nic *sp, int fifo_no)
static inline void s2io_wake_all_tx_queue(struct s2io_nic *sp)
static inline void s2io_wake_tx_queue(
struct fifo_info *fifo, int cnt, u8 multiq)
static int init_shared_mem(struct s2io_nic *nic)
static void free_shared_mem(struct s2io_nic *nic)
static int s2io_verify_pci_mode(struct s2io_nic *nic)
#define NEC_VENID   0x1033
#define NEC_DEVID   0x0125
static int s2io_on_nec_bridge(struct pci_dev *s2io_pdev)
static int bus_speed[8] = ;
static int s2io_print_pci_mode(struct s2io_nic *nic)
static int init_tti(struct s2io_nic *nic, int link)
static int init_nic(struct s2io_nic *nic)
#define LINK_UP_DOWN_INTERRUPT		1
#define MAC_RMAC_ERR_TIMER		2
static int s2io_link_fault_indication(struct s2io_nic *nic)
static void do_s2io_write_bits(u64 value, int flag, void __iomem *addr)
static void en_dis_err_alarms(struct s2io_nic *nic, u16 mask, int flag)
static void en_dis_able_nic_intrs(struct s2io_nic *nic, u16 mask, int flag)
static int verify_pcc_quiescent(struct s2io_nic *sp, int flag)
static int verify_xena_quiescence(struct s2io_nic *sp)
static void fix_mac_address(struct s2io_nic *sp)
static int start_nic(struct s2io_nic *nic)
static struct sk_buff *s2io_txdl_getskb(struct fifo_info *fifo_data,
struct TxD *txdlp, int get_off)
static void free_tx_buffers(struct s2io_nic *nic)
static void stop_nic(struct s2io_nic *nic)
static int fill_rx_buffers(struct s2io_nic *nic, struct ring_info *ring,
int from_card_up)
static void free_rxd_blk(struct s2io_nic *sp, int ring_no, int blk)
static void free_rx_buffers(struct s2io_nic *sp)
static int s2io_chk_rx_buffers(struct s2io_nic *nic, struct ring_info *ring)
static int s2io_poll_msix(struct napi_struct *napi, int budget)
static int s2io_poll_inta(struct napi_struct *napi, int budget)
static void s2io_netpoll(struct net_device *dev)
static int rx_intr_handler(struct ring_info *ring_data, int budget)
static void tx_intr_handler(struct fifo_info *fifo_data)
static void s2io_mdio_write(u32 mmd_type, u64 addr, u16 value,
struct net_device *dev)
static u64 s2io_mdio_read(u32 mmd_type, u64 addr, struct net_device *dev)
static void s2io_chk_xpak_counter(u64 *counter, u64 * regs_stat, u32 index,
u16 flag, u16 type)
static void s2io_updt_xpak_counter(struct net_device *dev)
static int wait_for_cmd_complete(void __iomem *addr, u64 busy_bit,
int bit_state)
static u16 check_pci_device_id(u16 id)
static void s2io_reset(struct s2io_nic *sp)
static int s2io_set_swapper(struct s2io_nic *sp)
static int wait_for_msix_trans(struct s2io_nic *nic, int i)
static void restore_xmsi_data(struct s2io_nic *nic)
static void store_xmsi_data(struct s2io_nic *nic)
static int s2io_enable_msi_x(struct s2io_nic *nic)
static irqreturn_t s2io_test_intr(int irq, void *dev_id)
static int s2io_test_msi(struct s2io_nic *sp)
static void remove_msix_isr(struct s2io_nic *sp)
static void remove_inta_isr(struct s2io_nic *sp)
static int s2io_open(struct net_device *dev)
static int s2io_close(struct net_device *dev)
static netdev_tx_t s2io_xmit(struct sk_buff *skb, struct net_device *dev)
static void
s2io_alarm_handle(unsigned long data)
static irqreturn_t s2io_msix_ring_handle(int irq, void *dev_id)
static irqreturn_t s2io_msix_fifo_handle(int irq, void *dev_id)
static void s2io_txpic_intr_handle(struct s2io_nic *sp)
static int do_s2io_chk_alarm_bit(u64 value, void __iomem *addr,
unsigned long long *cnt)
static void s2io_handle_errors(void *dev_id)
static irqreturn_t s2io_isr(int irq, void *dev_id)
static void s2io_updt_stats(struct s2io_nic *sp)
static struct net_device_stats *s2io_get_stats(struct net_device *dev)
static void s2io_set_multicast(struct net_device *dev)
static void do_s2io_store_unicast_mc(struct s2io_nic *sp)
static void do_s2io_restore_unicast_mc(struct s2io_nic *sp)
static int do_s2io_add_mc(struct s2io_nic *sp, u8 *addr)
static int do_s2io_add_mac(struct s2io_nic *sp, u64 addr, int off)
static int do_s2io_delete_unicast_mc(struct s2io_nic *sp, u64 addr)
static u64 do_s2io_read_unicast_mc(struct s2io_nic *sp, int offset)
static int s2io_set_mac_addr(struct net_device *dev, void *p)
static int do_s2io_prog_unicast(struct net_device *dev, u8 *addr)
static int s2io_ethtool_sset(struct net_device *dev,
struct ethtool_cmd *info)
static int s2io_ethtool_gset(struct net_device *dev, struct ethtool_cmd *info)
static void s2io_ethtool_gdrvinfo(struct net_device *dev,
struct ethtool_drvinfo *info)
static void s2io_ethtool_gregs(struct net_device *dev,
struct ethtool_regs *regs, void *space)
static void s2io_set_led(struct s2io_nic *sp, bool on)
static int s2io_ethtool_set_led(struct net_device *dev,
enum ethtool_phys_id_state state)
static void s2io_ethtool_gringparam(struct net_device *dev,
struct ethtool_ringparam *ering)
static void s2io_ethtool_getpause_data(struct net_device *dev,
struct ethtool_pauseparam *ep)
static int s2io_ethtool_setpause_data(struct net_device *dev,
struct ethtool_pauseparam *ep)
#define S2IO_DEV_ID		5
static int read_eeprom(struct s2io_nic *sp, int off, u64 *data)
static int write_eeprom(struct s2io_nic *sp, int off, u64 data, int cnt)
static void s2io_vpd_read(struct s2io_nic *nic)
static int s2io_ethtool_geeprom(struct net_device *dev,
struct ethtool_eeprom *eeprom, u8 * data_buf)
static int s2io_ethtool_seeprom(struct net_device *dev,
struct ethtool_eeprom *eeprom,
u8 *data_buf)
static int s2io_register_test(struct s2io_nic *sp, uint64_t *data)
static int s2io_eeprom_test(struct s2io_nic *sp, uint64_t *data)
static int s2io_bist_test(struct s2io_nic *sp, uint64_t *data)
static int s2io_link_test(struct s2io_nic *sp, uint64_t *data)
static int s2io_rldram_test(struct s2io_nic *sp, uint64_t *data)
static void s2io_ethtool_test(struct net_device *dev,
struct ethtool_test *ethtest,
uint64_t *data)
static void s2io_get_ethtool_stats(struct net_device *dev,
struct ethtool_stats *estats,
u64 *tmp_stats)
static int s2io_ethtool_get_regs_len(struct net_device *dev)
static int s2io_get_eeprom_len(struct net_device *dev)
static int s2io_get_sset_count(struct net_device *dev, int sset)
static void s2io_ethtool_get_strings(struct net_device *dev,
u32 stringset, u8 *data)
static int s2io_set_features(struct net_device *dev, u32 features)
static const struct ethtool_ops netdev_ethtool_ops = ;
static int s2io_ioctl(struct net_device *dev, struct ifreq *rq, int cmd)
static int s2io_change_mtu(struct net_device *dev, int new_mtu)
static void s2io_set_link(struct work_struct *work)
static int set_rxd_buffer_pointer(struct s2io_nic *sp, struct RxD_t *rxdp,
struct buffAdd *ba,
struct sk_buff **skb, u64 *temp0, u64 *temp1,
u64 *temp2, int size)
static void set_rxd_buffer_size(struct s2io_nic *sp, struct RxD_t *rxdp,
int size)
static  int rxd_owner_bit_reset(struct s2io_nic *sp)
static int s2io_add_isr(struct s2io_nic *sp)
static void s2io_rem_isr(struct s2io_nic *sp)
static void do_s2io_card_down(struct s2io_nic *sp, int do_io)
static void s2io_card_down(struct s2io_nic *sp)
static int s2io_card_up(struct s2io_nic *sp)
static void s2io_restart_nic(struct work_struct *work)
static void s2io_tx_watchdog(struct net_device *dev)
static int rx_osm_handler(struct ring_info *ring_data, struct RxD_t * rxdp)
static void s2io_link(struct s2io_nic *sp, int link)
static void s2io_init_pci(struct s2io_nic *sp)
static int s2io_verify_parm(struct pci_dev *pdev, u8 *dev_intr_type,
u8 *dev_multiq)
static int rts_ds_steer(struct s2io_nic *nic, u8 ds_codepoint, u8 ring)
static const struct net_device_ops s2io_netdev_ops = ;
static int __devinit
s2io_init_nic(struct pci_dev *pdev, const struct pci_device_id *pre)
static void __devexit s2io_rem_nic(struct pci_dev *pdev)
static int __init s2io_starter(void)
static __exit void s2io_closer(void)
module_init(s2io_starter);
module_exit(s2io_closer);
static int check_L2_lro_capable(u8 *buffer, struct iphdr **ip,
struct tcphdr **tcp, struct RxD_t *rxdp,
struct s2io_nic *sp)
static int check_for_socket_match(struct lro *lro, struct iphdr *ip,
struct tcphdr *tcp)
static inline int get_l4_pyld_length(struct iphdr *ip, struct tcphdr *tcp)
static void initiate_new_session(struct lro *lro, u8 *l2h,
struct iphdr *ip, struct tcphdr *tcp,
u32 tcp_pyld_len, u16 vlan_tag)
static void update_L3L4_header(struct s2io_nic *sp, struct lro *lro)
static void aggregate_new_rx(struct lro *lro, struct iphdr *ip,
struct tcphdr *tcp, u32 l4_pyld)
static int verify_l3_l4_lro_capable(struct lro *l_lro, struct iphdr *ip,
struct tcphdr *tcp, u32 tcp_pyld_len)
static int s2io_club_tcp_session(struct ring_info *ring_data, u8 *buffer,
u8 **tcp, u32 *tcp_len, struct lro **lro,
struct RxD_t *rxdp, struct s2io_nic *sp)
static void clear_lro_session(struct lro *lro)
static void queue_rx_frame(struct sk_buff *skb, u16 vlan_tag)
static void lro_append_pkt(struct s2io_nic *sp, struct lro *lro,
struct sk_buff *skb, u32 tcp_len)
static pci_ers_result_t s2io_io_error_detected(struct pci_dev *pdev,
pci_channel_state_t state)
static pci_ers_result_t s2io_io_slot_reset(struct pci_dev *pdev)
static void s2io_io_resume(struct pci_dev *pdev)
