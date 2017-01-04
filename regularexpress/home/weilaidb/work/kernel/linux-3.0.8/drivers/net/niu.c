#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define DRV_MODULE_NAME		"niu"
#define DRV_MODULE_VERSION	"1.1"
#define DRV_MODULE_RELDATE	"Apr 22, 2010"
static char version[] __devinitdata =
DRV_MODULE_NAME ".c:v" DRV_MODULE_VERSION " (" DRV_MODULE_RELDATE ")\n";
MODULE_AUTHOR("David S. Miller (davem@davemloft.net)");
MODULE_DESCRIPTION("NIU ethernet driver");
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_MODULE_VERSION);
static u64 readq(void __iomem *reg)
static void writeq(u64 val, void __iomem *reg)
static DEFINE_PCI_DEVICE_TABLE(niu_pci_tbl) = ;
MODULE_DEVICE_TABLE(pci, niu_pci_tbl);
#define NIU_TX_TIMEOUT			(5 * HZ)
#define nr64(reg)		readq(np->regs + (reg))
#define nw64(reg, val)		writeq((val), np->regs + (reg))
#define nr64_mac(reg)		readq(np->mac_regs + (reg))
#define nw64_mac(reg, val)	writeq((val), np->mac_regs + (reg))
#define nr64_ipp(reg)		readq(np->regs + np->ipp_off + (reg))
#define nw64_ipp(reg, val)	writeq((val), np->regs + np->ipp_off + (reg))
#define nr64_pcs(reg)		readq(np->regs + np->pcs_off + (reg))
#define nw64_pcs(reg, val)	writeq((val), np->regs + np->pcs_off + (reg))
#define nr64_xpcs(reg)		readq(np->regs + np->xpcs_off + (reg))
#define nw64_xpcs(reg, val)	writeq((val), np->regs + np->xpcs_off + (reg))
#define NIU_MSG_DEFAULT (NETIF_MSG_DRV | NETIF_MSG_PROBE | NETIF_MSG_LINK)
static int niu_debug;
static int debug = -1;
module_param(debug, int, 0);
MODULE_PARM_DESC(debug, "NIU debug level");
#define niu_lock_parent(np, flags) \
spin_lock_irqsave(&np->parent->lock, flags)
#define niu_unlock_parent(np, flags) \
spin_unlock_irqrestore(&np->parent->lock, flags)
static int serdes_init_10g_serdes(struct niu *np);
static int __niu_wait_bits_clear_mac(struct niu *np, unsigned long reg,
u64 bits, int limit, int delay)
static int __niu_set_and_wait_clear_mac(struct niu *np, unsigned long reg,
u64 bits, int limit, int delay,
const char *reg_name)
#define niu_set_and_wait_clear_mac(NP, REG, BITS, LIMIT, DELAY, REG_NAME) \
()
static int __niu_wait_bits_clear_ipp(struct niu *np, unsigned long reg,
u64 bits, int limit, int delay)
static int __niu_set_and_wait_clear_ipp(struct niu *np, unsigned long reg,
u64 bits, int limit, int delay,
const char *reg_name)
#define niu_set_and_wait_clear_ipp(NP, REG, BITS, LIMIT, DELAY, REG_NAME) \
()
static int __niu_wait_bits_clear(struct niu *np, unsigned long reg,
u64 bits, int limit, int delay)
#define niu_wait_bits_clear(NP, REG, BITS, LIMIT, DELAY) \
()
static int __niu_set_and_wait_clear(struct niu *np, unsigned long reg,
u64 bits, int limit, int delay,
const char *reg_name)
#define niu_set_and_wait_clear(NP, REG, BITS, LIMIT, DELAY, REG_NAME) \
()
static void niu_ldg_rearm(struct niu *np, struct niu_ldg *lp, int on)
static int niu_ldn_irq_enable(struct niu *np, int ldn, int on)
static int niu_enable_ldn_in_ldg(struct niu *np, struct niu_ldg *lp, int on)
static int niu_enable_interrupts(struct niu *np, int on)
static u32 phy_encode(u32 type, int port)
static u32 phy_decode(u32 val, int port)
static int mdio_wait(struct niu *np)
static int mdio_read(struct niu *np, int port, int dev, int reg)
static int mdio_write(struct niu *np, int port, int dev, int reg, int data)
static int mii_read(struct niu *np, int port, int reg)
static int mii_write(struct niu *np, int port, int reg, int data)
static int esr2_set_tx_cfg(struct niu *np, unsigned long channel, u32 val)
static int esr2_set_rx_cfg(struct niu *np, unsigned long channel, u32 val)
static int serdes_init_niu_10g_fiber(struct niu *np)
static int serdes_init_niu_1g_serdes(struct niu *np)
static int serdes_init_niu_10g_serdes(struct niu *np)
static int esr_read_rxtx_ctrl(struct niu *np, unsigned long chan, u32 *val)
static int esr_read_glue0(struct niu *np, unsigned long chan, u32 *val)
static int esr_read_reset(struct niu *np, u32 *val)
static int esr_write_rxtx_ctrl(struct niu *np, unsigned long chan, u32 val)
static int esr_write_glue0(struct niu *np, unsigned long chan, u32 val)
static int esr_reset(struct niu *np)
static int serdes_init_10g(struct niu *np)
static int serdes_init_1g(struct niu *np)
static int serdes_init_1g_serdes(struct niu *np)
static int link_status_1g_serdes(struct niu *np, int *link_up_p)
static int link_status_10g_serdes(struct niu *np, int *link_up_p)
static int link_status_mii(struct niu *np, int *link_up_p)
static int link_status_1g_rgmii(struct niu *np, int *link_up_p)
static int link_status_1g(struct niu *np, int *link_up_p)
static int bcm8704_reset(struct niu *np)
static int bcm8704_user_dev3_readback(struct niu *np, int reg)
static int bcm8706_init_user_dev3(struct niu *np)
static int bcm8704_init_user_dev3(struct niu *np)
static int mrvl88x2011_act_led(struct niu *np, int val)
static int mrvl88x2011_led_blink_rate(struct niu *np, int rate)
static int xcvr_init_10g_mrvl88x2011(struct niu *np)
static int xcvr_diag_bcm870x(struct niu *np)
static int xcvr_10g_set_lb_bcm870x(struct niu *np)
static int xcvr_init_10g_bcm8706(struct niu *np)
static int xcvr_init_10g_bcm8704(struct niu *np)
static int xcvr_init_10g(struct niu *np)
static int mii_reset(struct niu *np)
static int xcvr_init_1g_rgmii(struct niu *np)
static int mii_init_common(struct niu *np)
static int xcvr_init_1g(struct niu *np)
static int niu_xcvr_init(struct niu *np)
static int niu_serdes_init(struct niu *np)
static void niu_init_xif(struct niu *);
static void niu_handle_led(struct niu *, int status);
static int niu_link_status_common(struct niu *np, int link_up)
static int link_status_10g_mrvl(struct niu *np, int *link_up_p)
static int link_status_10g_bcm8706(struct niu *np, int *link_up_p)
static int link_status_10g_bcom(struct niu *np, int *link_up_p)
static int link_status_10g(struct niu *np, int *link_up_p)
static int niu_10g_phy_present(struct niu *np)
static int link_status_10g_hotplug(struct niu *np, int *link_up_p)
static int niu_link_status(struct niu *np, int *link_up_p)
static void niu_timer(unsigned long __opaque)
static const struct niu_phy_ops phy_ops_10g_serdes = ;
static const struct niu_phy_ops phy_ops_10g_serdes_niu = ;
static const struct niu_phy_ops phy_ops_1g_serdes_niu = ;
static const struct niu_phy_ops phy_ops_1g_rgmii = ;
static const struct niu_phy_ops phy_ops_10g_fiber_niu = ;
static const struct niu_phy_ops phy_ops_10g_fiber = ;
static const struct niu_phy_ops phy_ops_10g_fiber_hotplug = ;
static const struct niu_phy_ops phy_ops_niu_10g_hotplug = ;
static const struct niu_phy_ops phy_ops_10g_copper = ;
static const struct niu_phy_ops phy_ops_1g_fiber = ;
static const struct niu_phy_ops phy_ops_1g_copper = ;
struct niu_phy_template ;
static const struct niu_phy_template phy_template_niu_10g_fiber = ;
static const struct niu_phy_template phy_template_niu_10g_serdes = ;
static const struct niu_phy_template phy_template_niu_1g_serdes = ;
static const struct niu_phy_template phy_template_10g_fiber = ;
static const struct niu_phy_template phy_template_10g_fiber_hotplug = ;
static const struct niu_phy_template phy_template_niu_10g_hotplug = ;
static const struct niu_phy_template phy_template_10g_copper = ;
static const struct niu_phy_template phy_template_1g_fiber = ;
static const struct niu_phy_template phy_template_1g_copper = ;
static const struct niu_phy_template phy_template_1g_rgmii = ;
static const struct niu_phy_template phy_template_10g_serdes = ;
static int niu_atca_port_num[4] = ;
static int serdes_init_10g_serdes(struct niu *np)
static int niu_determine_phy_disposition(struct niu *np)
static int niu_init_link(struct niu *np)
static void niu_set_primary_mac(struct niu *np, unsigned char *addr)
static int niu_num_alt_addr(struct niu *np)
static int niu_set_alt_mac(struct niu *np, int index, unsigned char *addr)
static int niu_enable_alt_mac(struct niu *np, int index, int on)
static void __set_rdc_table_num_hw(struct niu *np, unsigned long reg,
int num, int mac_pref)
static int __set_rdc_table_num(struct niu *np,
int xmac_index, int bmac_index,
int rdc_table_num, int mac_pref)
static int niu_set_primary_mac_rdc_table(struct niu *np, int table_num,
int mac_pref)
static int niu_set_multicast_mac_rdc_table(struct niu *np, int table_num,
int mac_pref)
static int niu_set_alt_mac_rdc_table(struct niu *np, int idx,
int table_num, int mac_pref)
static u64 vlan_entry_set_parity(u64 reg_val)
static void vlan_tbl_write(struct niu *np, unsigned long index,
int port, int vpr, int rdc_table)
static void vlan_tbl_clear(struct niu *np)
static int tcam_wait_bit(struct niu *np, u64 bit)
static int tcam_flush(struct niu *np, int index)
static int tcam_write(struct niu *np, int index,
u64 *key, u64 *mask)
static int tcam_assoc_write(struct niu *np, int index, u64 assoc_data)
static void tcam_enable(struct niu *np, int on)
static void tcam_set_lat_and_ratio(struct niu *np, u64 latency, u64 ratio)
static int tcam_user_eth_class_enable(struct niu *np, unsigned long class,
int on)
static int tcam_user_ip_class_enable(struct niu *np, unsigned long class,
int on)
static int tcam_user_ip_class_set(struct niu *np, unsigned long class,
int ipv6, u64 protocol_id,
u64 tos_mask, u64 tos_val)
static int tcam_early_init(struct niu *np)
static int tcam_flush_all(struct niu *np)
static u64 hash_addr_regval(unsigned long index, unsigned long num_entries)
static int hash_write(struct niu *np, unsigned long partition,
unsigned long index, unsigned long num_entries,
u64 *data)
static void fflp_reset(struct niu *np)
static void fflp_set_timings(struct niu *np)
static int fflp_set_partition(struct niu *np, u64 partition,
u64 mask, u64 base, int enable)
static int fflp_disable_all_partitions(struct niu *np)
static void fflp_llcsnap_enable(struct niu *np, int on)
static void fflp_errors_enable(struct niu *np, int on)
static int fflp_hash_clear(struct niu *np)
static int fflp_early_init(struct niu *np)
static int niu_set_flow_key(struct niu *np, unsigned long class_code, u64 key)
static int niu_set_tcam_key(struct niu *np, unsigned long class_code, u64 key)
static u16 tcam_get_index(struct niu *np, u16 idx)
static u16 tcam_get_size(struct niu *np)
static u16 tcam_get_valid_entry_cnt(struct niu *np)
static void niu_rx_skb_append(struct sk_buff *skb, struct page *page,
u32 offset, u32 size)
static unsigned int niu_hash_rxaddr(struct rx_ring_info *rp, u64 a)
static struct page *niu_find_rxpage(struct rx_ring_info *rp, u64 addr,
struct page ***link)
static void niu_hash_page(struct rx_ring_info *rp, struct page *page, u64 base)
static int niu_rbr_add_page(struct niu *np, struct rx_ring_info *rp,
gfp_t mask, int start_index)
static void niu_rbr_refill(struct niu *np, struct rx_ring_info *rp, gfp_t mask)
static int niu_rx_pkt_ignore(struct niu *np, struct rx_ring_info *rp)
static int niu_process_rx_pkt(struct napi_struct *napi, struct niu *np,
struct rx_ring_info *rp)
static int niu_rbr_fill(struct niu *np, struct rx_ring_info *rp, gfp_t mask)
static void niu_rbr_free(struct niu *np, struct rx_ring_info *rp)
static int release_tx_packet(struct niu *np, struct tx_ring_info *rp, int idx)
#define NIU_TX_WAKEUP_THRESH(rp)		((rp)->pending / 4)
static void niu_tx_work(struct niu *np, struct tx_ring_info *rp)
static inline void niu_sync_rx_discard_stats(struct niu *np,
struct rx_ring_info *rp,
const int limit)
static int niu_rx_work(struct napi_struct *napi, struct niu *np,
struct rx_ring_info *rp, int budget)
static int niu_poll_core(struct niu *np, struct niu_ldg *lp, int budget)
static int niu_poll(struct napi_struct *napi, int budget)
static void niu_log_rxchan_errors(struct niu *np, struct rx_ring_info *rp,
u64 stat)
static int niu_rx_error(struct niu *np, struct rx_ring_info *rp)
static void niu_log_txchan_errors(struct niu *np, struct tx_ring_info *rp,
u64 cs)
static int niu_tx_error(struct niu *np, struct tx_ring_info *rp)
static int niu_mif_interrupt(struct niu *np)
static void niu_xmac_interrupt(struct niu *np)
static void niu_bmac_interrupt(struct niu *np)
static int niu_mac_interrupt(struct niu *np)
static void niu_log_device_error(struct niu *np, u64 stat)
static int niu_device_error(struct niu *np)
static int niu_slowpath_interrupt(struct niu *np, struct niu_ldg *lp,
u64 v0, u64 v1, u64 v2)
static void niu_rxchan_intr(struct niu *np, struct rx_ring_info *rp,
int ldn)
static void niu_txchan_intr(struct niu *np, struct tx_ring_info *rp,
int ldn)
static void __niu_fastpath_interrupt(struct niu *np, int ldg, u64 v0)
static void niu_schedule_napi(struct niu *np, struct niu_ldg *lp,
u64 v0, u64 v1, u64 v2)
static irqreturn_t niu_interrupt(int irq, void *dev_id)
static void niu_free_rx_ring_info(struct niu *np, struct rx_ring_info *rp)
static void niu_free_tx_ring_info(struct niu *np, struct tx_ring_info *rp)
static void niu_free_channels(struct niu *np)
static int niu_alloc_rx_ring_info(struct niu *np,
struct rx_ring_info *rp)
static void niu_set_max_burst(struct niu *np, struct tx_ring_info *rp)
static int niu_alloc_tx_ring_info(struct niu *np,
struct tx_ring_info *rp)
static void niu_size_rbr(struct niu *np, struct rx_ring_info *rp)
static int niu_alloc_channels(struct niu *np)
static int niu_tx_cs_sng_poll(struct niu *np, int channel)
static int niu_tx_channel_stop(struct niu *np, int channel)
static int niu_tx_cs_reset_poll(struct niu *np, int channel)
static int niu_tx_channel_reset(struct niu *np, int channel)
static int niu_tx_channel_lpage_init(struct niu *np, int channel)
static void niu_txc_enable_port(struct niu *np, int on)
static void niu_txc_set_imask(struct niu *np, u64 imask)
static void niu_txc_port_dma_enable(struct niu *np, int on)
static int niu_init_one_tx_channel(struct niu *np, struct tx_ring_info *rp)
static void niu_init_rdc_groups(struct niu *np)
static void niu_init_drr_weight(struct niu *np)
static int niu_init_hostinfo(struct niu *np)
static int niu_rx_channel_reset(struct niu *np, int channel)
static int niu_rx_channel_lpage_init(struct niu *np, int channel)
static void niu_rx_channel_wred_init(struct niu *np, struct rx_ring_info *rp)
static int niu_compute_rbr_cfig_b(struct rx_ring_info *rp, u64 *ret)
static int niu_enable_rx_channel(struct niu *np, int channel, int on)
static int niu_init_one_rx_channel(struct niu *np, struct rx_ring_info *rp)
static int niu_init_rx_channels(struct niu *np)
static int niu_set_ip_frag_rule(struct niu *np)
static int niu_init_classifier_hw(struct niu *np)
static int niu_zcp_write(struct niu *np, int index, u64 *data)
static int niu_zcp_read(struct niu *np, int index, u64 *data)
static void niu_zcp_cfifo_reset(struct niu *np)
static int niu_init_zcp(struct niu *np)
static void niu_ipp_write(struct niu *np, int index, u64 *data)
static void niu_ipp_read(struct niu *np, int index, u64 *data)
static int niu_ipp_reset(struct niu *np)
static int niu_init_ipp(struct niu *np)
static void niu_handle_led(struct niu *np, int status)
static void niu_init_xif_xmac(struct niu *np)
static void niu_init_xif_bmac(struct niu *np)
static void niu_init_xif(struct niu *np)
static void niu_pcs_mii_reset(struct niu *np)
static void niu_xpcs_reset(struct niu *np)
static int niu_init_pcs(struct niu *np)
static int niu_reset_tx_xmac(struct niu *np)
static int niu_reset_tx_bmac(struct niu *np)
static int niu_reset_tx_mac(struct niu *np)
static void niu_init_tx_xmac(struct niu *np, u64 min, u64 max)
static void niu_init_tx_bmac(struct niu *np, u64 min, u64 max)
static void niu_init_tx_mac(struct niu *np)
static int niu_reset_rx_xmac(struct niu *np)
static int niu_reset_rx_bmac(struct niu *np)
static int niu_reset_rx_mac(struct niu *np)
static void niu_init_rx_xmac(struct niu *np)
static void niu_init_rx_bmac(struct niu *np)
static void niu_init_rx_mac(struct niu *np)
static void niu_enable_tx_xmac(struct niu *np, int on)
static void niu_enable_tx_bmac(struct niu *np, int on)
static void niu_enable_tx_mac(struct niu *np, int on)
static void niu_enable_rx_xmac(struct niu *np, int on)
static void niu_enable_rx_bmac(struct niu *np, int on)
static void niu_enable_rx_mac(struct niu *np, int on)
static int niu_init_mac(struct niu *np)
static void niu_stop_one_tx_channel(struct niu *np, struct tx_ring_info *rp)
static void niu_stop_tx_channels(struct niu *np)
static void niu_reset_one_tx_channel(struct niu *np, struct tx_ring_info *rp)
static void niu_reset_tx_channels(struct niu *np)
static void niu_stop_one_rx_channel(struct niu *np, struct rx_ring_info *rp)
static void niu_stop_rx_channels(struct niu *np)
static void niu_reset_one_rx_channel(struct niu *np, struct rx_ring_info *rp)
static void niu_reset_rx_channels(struct niu *np)
static void niu_disable_ipp(struct niu *np)
static int niu_init_hw(struct niu *np)
static void niu_stop_hw(struct niu *np)
static void niu_set_irq_name(struct niu *np)
static int niu_request_irq(struct niu *np)
static void niu_free_irq(struct niu *np)
static void niu_enable_napi(struct niu *np)
static void niu_disable_napi(struct niu *np)
static int niu_open(struct net_device *dev)
static void niu_full_shutdown(struct niu *np, struct net_device *dev)
static int niu_close(struct net_device *dev)
static void niu_sync_xmac_stats(struct niu *np)
static void niu_sync_bmac_stats(struct niu *np)
static void niu_sync_mac_stats(struct niu *np)
static void niu_get_rx_stats(struct niu *np)
static void niu_get_tx_stats(struct niu *np)
static struct net_device_stats *niu_get_stats(struct net_device *dev)
static void niu_load_hash_xmac(struct niu *np, u16 *hash)
static void niu_load_hash_bmac(struct niu *np, u16 *hash)
static void niu_load_hash(struct niu *np, u16 *hash)
static void niu_set_rx_mode(struct net_device *dev)
static int niu_set_mac_addr(struct net_device *dev, void *p)
static int niu_ioctl(struct net_device *dev, struct ifreq *ifr, int cmd)
static void niu_netif_stop(struct niu *np)
static void niu_netif_start(struct niu *np)
static void niu_reset_buffers(struct niu *np)
static void niu_reset_task(struct work_struct *work)
static void niu_tx_timeout(struct net_device *dev)
static void niu_set_txd(struct tx_ring_info *rp, int index,
u64 mapping, u64 len, u64 mark,
u64 n_frags)
static u64 niu_compute_tx_flags(struct sk_buff *skb, struct ethhdr *ehdr,
u64 pad_bytes, u64 len)
static netdev_tx_t niu_start_xmit(struct sk_buff *skb,
struct net_device *dev)
static int niu_change_mtu(struct net_device *dev, int new_mtu)
static void niu_get_drvinfo(struct net_device *dev,
struct ethtool_drvinfo *info)
static int niu_get_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static int niu_set_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static u32 niu_get_msglevel(struct net_device *dev)
static void niu_set_msglevel(struct net_device *dev, u32 value)
static int niu_nway_reset(struct net_device *dev)
static int niu_get_eeprom_len(struct net_device *dev)
static int niu_get_eeprom(struct net_device *dev,
struct ethtool_eeprom *eeprom, u8 *data)
static void niu_ethflow_to_l3proto(int flow_type, u8 *pid)
static int niu_class_to_ethflow(u64 class, int *flow_type)
static int niu_ethflow_to_class(int flow_type, u64 *class)
static u64 niu_flowkey_to_ethflow(u64 flow_key)
static int niu_ethflow_to_flowkey(u64 ethflow, u64 *flow_key)
static int niu_get_hash_opts(struct niu *np, struct ethtool_rxnfc *nfc)
static void niu_get_ip4fs_from_tcam_key(struct niu_tcam_entry *tp,
struct ethtool_rx_flow_spec *fsp)
static int niu_get_ethtool_tcam_entry(struct niu *np,
struct ethtool_rxnfc *nfc)
static int niu_get_ethtool_tcam_all(struct niu *np,
struct ethtool_rxnfc *nfc,
u32 *rule_locs)
static int niu_get_nfc(struct net_device *dev, struct ethtool_rxnfc *cmd,
void *rule_locs)
static int niu_set_hash_opts(struct niu *np, struct ethtool_rxnfc *nfc)
static void niu_get_tcamkey_from_ip4fs(struct ethtool_rx_flow_spec *fsp,
struct niu_tcam_entry *tp,
int l2_rdc_tab, u64 class)
static int niu_add_ethtool_tcam_entry(struct niu *np,
struct ethtool_rxnfc *nfc)
static int niu_del_ethtool_tcam_entry(struct niu *np, u32 loc)
static int niu_set_nfc(struct net_device *dev, struct ethtool_rxnfc *cmd)
static const struct  niu_xmac_stat_keys[] = ;
#define NUM_XMAC_STAT_KEYS	ARRAY_SIZE(niu_xmac_stat_keys)
static const struct  niu_bmac_stat_keys[] = ;
#define NUM_BMAC_STAT_KEYS	ARRAY_SIZE(niu_bmac_stat_keys)
static const struct  niu_rxchan_stat_keys[] = ;
#define NUM_RXCHAN_STAT_KEYS	ARRAY_SIZE(niu_rxchan_stat_keys)
static const struct  niu_txchan_stat_keys[] = ;
#define NUM_TXCHAN_STAT_KEYS	ARRAY_SIZE(niu_txchan_stat_keys)
static void niu_get_strings(struct net_device *dev, u32 stringset, u8 *data)
static int niu_get_sset_count(struct net_device *dev, int stringset)
static void niu_get_ethtool_stats(struct net_device *dev,
struct ethtool_stats *stats, u64 *data)
static u64 niu_led_state_save(struct niu *np)
static void niu_led_state_restore(struct niu *np, u64 val)
static void niu_force_led(struct niu *np, int on)
static int niu_set_phys_id(struct net_device *dev,
enum ethtool_phys_id_state state)
static const struct ethtool_ops niu_ethtool_ops = ;
static int niu_ldg_assign_ldn(struct niu *np, struct niu_parent *parent,
int ldg, int ldn)
static int niu_set_ldg_timer_res(struct niu *np, int res)
static int niu_set_ldg_sid(struct niu *np, int ldg, int func, int vector)
static int __devinit niu_pci_eeprom_read(struct niu *np, u32 addr)
static int __devinit niu_pci_eeprom_read16(struct niu *np, u32 off)
static int __devinit niu_pci_eeprom_read16_swp(struct niu *np, u32 off)
static int __devinit niu_pci_vpd_get_propname(struct niu *np,
u32 off,
char *namebuf,
int namebuf_len)
static void __devinit niu_vpd_parse_version(struct niu *np)
static int __devinit niu_pci_vpd_scan_props(struct niu *np,
u32 start, u32 end)
static void __devinit niu_pci_vpd_fetch(struct niu *np, u32 start)
static u32 __devinit niu_pci_vpd_offset(struct niu *np)
static int __devinit niu_phy_type_prop_decode(struct niu *np,
const char *phy_prop)
static int niu_pci_vpd_get_nports(struct niu *np)
static void __devinit niu_pci_vpd_validate(struct niu *np)
static int __devinit niu_pci_probe_sprom(struct niu *np)
static int __devinit niu_get_and_validate_port(struct niu *np)
static int __devinit phy_record(struct niu_parent *parent,
struct phy_probe_info *p,
int dev_id_1, int dev_id_2, u8 phy_port,
int type)
static int __devinit port_has_10g(struct phy_probe_info *p, int port)
static int __devinit count_10g_ports(struct phy_probe_info *p, int *lowest)
static int __devinit count_1g_ports(struct phy_probe_info *p, int *lowest)
static void __devinit niu_n2_divide_channels(struct niu_parent *parent)
static void __devinit niu_divide_channels(struct niu_parent *parent,
int num_10g, int num_1g)
static void __devinit niu_divide_rdc_groups(struct niu_parent *parent,
int num_10g, int num_1g)
static int __devinit fill_phy_probe_info(struct niu *np,
struct niu_parent *parent,
struct phy_probe_info *info)
static int __devinit walk_phys(struct niu *np, struct niu_parent *parent)
static int __devinit niu_probe_ports(struct niu *np)
static int __devinit niu_classifier_swstate_init(struct niu *np)
static void __devinit niu_link_config_init(struct niu *np)
static int __devinit niu_init_mac_ipp_pcs_base(struct niu *np)
static void __devinit niu_try_msix(struct niu *np, u8 *ldg_num_map)
static int __devinit niu_n2_irq_init(struct niu *np, u8 *ldg_num_map)
static int __devinit niu_ldg_init(struct niu *np)
static void __devexit niu_ldg_free(struct niu *np)
static int __devinit niu_get_of_props(struct niu *np)
static int __devinit niu_get_invariants(struct niu *np)
static LIST_HEAD(niu_parent_list);
static DEFINE_MUTEX(niu_parent_lock);
static int niu_parent_index;
static ssize_t show_port_phy(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t show_plat_type(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t __show_chan_per_port(struct device *dev,
struct device_attribute *attr, char *buf,
int rx)
static ssize_t show_rxchan_per_port(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t show_txchan_per_port(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t show_num_ports(struct device *dev,
struct device_attribute *attr, char *buf)
static struct device_attribute niu_parent_attributes[] = ;
static struct niu_parent * __devinit niu_new_parent(struct niu *np,
union niu_parent_id *id,
u8 ptype)
static struct niu_parent * __devinit niu_get_parent(struct niu *np,
union niu_parent_id *id,
u8 ptype)
static void niu_put_parent(struct niu *np)
static void *niu_pci_alloc_coherent(struct device *dev, size_t size,
u64 *handle, gfp_t flag)
static void niu_pci_free_coherent(struct device *dev, size_t size,
void *cpu_addr, u64 handle)
static u64 niu_pci_map_page(struct device *dev, struct page *page,
unsigned long offset, size_t size,
enum dma_data_direction direction)
static void niu_pci_unmap_page(struct device *dev, u64 dma_address,
size_t size, enum dma_data_direction direction)
static u64 niu_pci_map_single(struct device *dev, void *cpu_addr,
size_t size,
enum dma_data_direction direction)
static void niu_pci_unmap_single(struct device *dev, u64 dma_address,
size_t size,
enum dma_data_direction direction)
static const struct niu_ops niu_pci_ops = ;
static void __devinit niu_driver_version(void)
static struct net_device * __devinit niu_alloc_and_init(
struct device *gen_dev, struct pci_dev *pdev,
struct platform_device *op, const struct niu_ops *ops,
u8 port)
static const struct net_device_ops niu_netdev_ops = ;
static void __devinit niu_assign_netdev_ops(struct net_device *dev)
static void __devinit niu_device_announce(struct niu *np)
static void __devinit niu_set_basic_features(struct net_device *dev)
static int __devinit niu_pci_init_one(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit niu_pci_remove_one(struct pci_dev *pdev)
static int niu_suspend(struct pci_dev *pdev, pm_message_t state)
static int niu_resume(struct pci_dev *pdev)
static struct pci_driver niu_pci_driver = ;
static void *niu_phys_alloc_coherent(struct device *dev, size_t size,
u64 *dma_addr, gfp_t flag)
static void niu_phys_free_coherent(struct device *dev, size_t size,
void *cpu_addr, u64 handle)
static u64 niu_phys_map_page(struct device *dev, struct page *page,
unsigned long offset, size_t size,
enum dma_data_direction direction)
static void niu_phys_unmap_page(struct device *dev, u64 dma_address,
size_t size, enum dma_data_direction direction)
static u64 niu_phys_map_single(struct device *dev, void *cpu_addr,
size_t size,
enum dma_data_direction direction)
static void niu_phys_unmap_single(struct device *dev, u64 dma_address,
size_t size,
enum dma_data_direction direction)
static const struct niu_ops niu_phys_ops = ;
static int __devinit niu_of_probe(struct platform_device *op)
static int __devexit niu_of_remove(struct platform_device *op)
static const struct of_device_id niu_match[] = ;
MODULE_DEVICE_TABLE(of, niu_match);
static struct platform_driver niu_of_driver = ;
static int __init niu_init(void)
static void __exit niu_exit(void)
module_init(niu_init);
module_exit(niu_exit);
