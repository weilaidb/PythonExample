#define BAR_0	0
#define BAR_2	2
static inline int _tg3_flag(enum TG3_FLAGS flag, unsigned long *bits)
static inline void _tg3_flag_set(enum TG3_FLAGS flag, unsigned long *bits)
static inline void _tg3_flag_clear(enum TG3_FLAGS flag, unsigned long *bits)
#define tg3_flag(tp, flag)				\
_tg3_flag(TG3_FLAG_##flag, (tp)->tg3_flags)
#define tg3_flag_set(tp, flag)				\
_tg3_flag_set(TG3_FLAG_##flag, (tp)->tg3_flags)
#define tg3_flag_clear(tp, flag)			\
_tg3_flag_clear(TG3_FLAG_##flag, (tp)->tg3_flags)
#define DRV_MODULE_NAME		"tg3"
#define TG3_MAJ_NUM			3
#define TG3_MIN_NUM			119
#define DRV_MODULE_VERSION	\
__stringify(TG3_MAJ_NUM) "." __stringify(TG3_MIN_NUM)
#define DRV_MODULE_RELDATE	"May 18, 2011"
#define TG3_DEF_MAC_MODE	0
#define TG3_DEF_RX_MODE		0
#define TG3_DEF_TX_MODE		0
#define TG3_DEF_MSG_ENABLE	  \
(NETIF_MSG_DRV		| \
NETIF_MSG_PROBE	| \
NETIF_MSG_LINK		| \
NETIF_MSG_TIMER	| \
NETIF_MSG_IFDOWN	| \
NETIF_MSG_IFUP		| \
NETIF_MSG_RX_ERR	| \
NETIF_MSG_TX_ERR)
#define TG3_TX_TIMEOUT			(5 * HZ)
#define TG3_MIN_MTU			60
#define TG3_MAX_MTU(tp)	\
(tg3_flag(tp, JUMBO_CAPABLE) ? 9000 : 1500)
#define TG3_RX_STD_RING_SIZE(tp) \
(tg3_flag(tp, LRG_PROD_RING_CAP) ? \
TG3_RX_STD_MAX_SIZE_5717 : TG3_RX_STD_MAX_SIZE_5700)
#define TG3_DEF_RX_RING_PENDING		200
#define TG3_RX_JMB_RING_SIZE(tp) \
(tg3_flag(tp, LRG_PROD_RING_CAP) ? \
TG3_RX_JMB_MAX_SIZE_5717 : TG3_RX_JMB_MAX_SIZE_5700)
#define TG3_DEF_RX_JUMBO_RING_PENDING	100
#define TG3_RSS_INDIR_TBL_SIZE		128
#define TG3_TX_RING_SIZE		512
#define TG3_DEF_TX_RING_PENDING		(TG3_TX_RING_SIZE - 1)
#define TG3_RX_STD_RING_BYTES(tp) \
(sizeof(struct tg3_rx_buffer_desc) * TG3_RX_STD_RING_SIZE(tp))
#define TG3_RX_JMB_RING_BYTES(tp) \
(sizeof(struct tg3_ext_rx_buffer_desc) * TG3_RX_JMB_RING_SIZE(tp))
#define TG3_RX_RCB_RING_BYTES(tp) \
(sizeof(struct tg3_rx_buffer_desc) * (tp->rx_ret_ring_mask + 1))
#define TG3_TX_RING_BYTES	(sizeof(struct tg3_tx_buffer_desc) * \
TG3_TX_RING_SIZE)
#define NEXT_TX(N)		(((N) + 1) & (TG3_TX_RING_SIZE - 1))
#define TG3_DMA_BYTE_ENAB		64
#define TG3_RX_STD_DMA_SZ		1536
#define TG3_RX_JMB_DMA_SZ		9046
#define TG3_RX_DMA_TO_MAP_SZ(x)		((x) + TG3_DMA_BYTE_ENAB)
#define TG3_RX_STD_MAP_SZ		TG3_RX_DMA_TO_MAP_SZ(TG3_RX_STD_DMA_SZ)
#define TG3_RX_JMB_MAP_SZ		TG3_RX_DMA_TO_MAP_SZ(TG3_RX_JMB_DMA_SZ)
#define TG3_RX_STD_BUFF_RING_SIZE(tp) \
(sizeof(struct ring_info) * TG3_RX_STD_RING_SIZE(tp))
#define TG3_RX_JMB_BUFF_RING_SIZE(tp) \
(sizeof(struct ring_info) * TG3_RX_JMB_RING_SIZE(tp))
#define TG3_RX_COPY_THRESHOLD		256
#if NET_IP_ALIGN == 0 || defined(CONFIG_HAVE_EFFICIENT_UNALIGNED_ACCESS)
#define TG3_RX_COPY_THRESH(tp)	TG3_RX_COPY_THRESHOLD
#define TG3_RX_COPY_THRESH(tp)	((tp)->rx_copy_thresh)
#define TG3_TX_WAKEUP_THRESH(tnapi)		((tnapi)->tx_pending / 4)
#define TG3_RAW_IP_ALIGN 2
#define TG3_FW_UPDATE_TIMEOUT_SEC	5
#define FIRMWARE_TG3		"tigon/tg3.bin"
#define FIRMWARE_TG3TSO		"tigon/tg3_tso.bin"
#define FIRMWARE_TG3TSO5	"tigon/tg3_tso5.bin"
static char version[] __devinitdata =
DRV_MODULE_NAME ".c:v" DRV_MODULE_VERSION " (" DRV_MODULE_RELDATE ")";
MODULE_AUTHOR("David S. Miller (davem@redhat.com) and Jeff Garzik (jgarzik@pobox.com)");
MODULE_DESCRIPTION("Broadcom Tigon3 ethernet driver");
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_MODULE_VERSION);
MODULE_FIRMWARE(FIRMWARE_TG3);
MODULE_FIRMWARE(FIRMWARE_TG3TSO);
MODULE_FIRMWARE(FIRMWARE_TG3TSO5);
static int tg3_debug = -1;
module_param(tg3_debug, int, 0);
MODULE_PARM_DESC(tg3_debug, "Tigon3 bitmapped debugging message enable value");
static DEFINE_PCI_DEVICE_TABLE(tg3_pci_tbl) = ;
MODULE_DEVICE_TABLE(pci, tg3_pci_tbl);
static const struct  ethtool_stats_keys[] = ;
#define TG3_NUM_STATS	ARRAY_SIZE(ethtool_stats_keys)
static const struct  ethtool_test_keys[] = ;
#define TG3_NUM_TEST	ARRAY_SIZE(ethtool_test_keys)
static void tg3_write32(struct tg3 *tp, u32 off, u32 val)
static u32 tg3_read32(struct tg3 *tp, u32 off)
static void tg3_ape_write32(struct tg3 *tp, u32 off, u32 val)
static u32 tg3_ape_read32(struct tg3 *tp, u32 off)
static void tg3_write_indirect_reg32(struct tg3 *tp, u32 off, u32 val)
static void tg3_write_flush_reg32(struct tg3 *tp, u32 off, u32 val)
static u32 tg3_read_indirect_reg32(struct tg3 *tp, u32 off)
static void tg3_write_indirect_mbox(struct tg3 *tp, u32 off, u32 val)
static u32 tg3_read_indirect_mbox(struct tg3 *tp, u32 off)
static void _tw32_flush(struct tg3 *tp, u32 off, u32 val, u32 usec_wait)
static inline void tw32_mailbox_flush(struct tg3 *tp, u32 off, u32 val)
static void tg3_write32_tx_mbox(struct tg3 *tp, u32 off, u32 val)
static u32 tg3_read32_mbox_5906(struct tg3 *tp, u32 off)
static void tg3_write32_mbox_5906(struct tg3 *tp, u32 off, u32 val)
#define tw32_mailbox(reg, val)		tp->write32_mbox(tp, reg, val)
#define tw32_mailbox_f(reg, val)	tw32_mailbox_flush(tp, (reg), (val))
#define tw32_rx_mbox(reg, val)		tp->write32_rx_mbox(tp, reg, val)
#define tw32_tx_mbox(reg, val)		tp->write32_tx_mbox(tp, reg, val)
#define tr32_mailbox(reg)		tp->read32_mbox(tp, reg)
#define tw32(reg, val)			tp->write32(tp, reg, val)
#define tw32_f(reg, val)		_tw32_flush(tp, (reg), (val), 0)
#define tw32_wait_f(reg, val, us)	_tw32_flush(tp, (reg), (val), (us))
#define tr32(reg)			tp->read32(tp, reg)
static void tg3_write_mem(struct tg3 *tp, u32 off, u32 val)
static void tg3_read_mem(struct tg3 *tp, u32 off, u32 *val)
static void tg3_ape_lock_init(struct tg3 *tp)
static int tg3_ape_lock(struct tg3 *tp, int locknum)
static void tg3_ape_unlock(struct tg3 *tp, int locknum)
static void tg3_disable_ints(struct tg3 *tp)
static void tg3_enable_ints(struct tg3 *tp)
static inline unsigned int tg3_has_work(struct tg3_napi *tnapi)
static void tg3_int_reenable(struct tg3_napi *tnapi)
static void tg3_switch_clocks(struct tg3 *tp)
#define PHY_BUSY_LOOPS	5000
static int tg3_readphy(struct tg3 *tp, int reg, u32 *val)
static int tg3_writephy(struct tg3 *tp, int reg, u32 val)
static int tg3_phy_cl45_write(struct tg3 *tp, u32 devad, u32 addr, u32 val)
static int tg3_phy_cl45_read(struct tg3 *tp, u32 devad, u32 addr, u32 *val)
static int tg3_phydsp_read(struct tg3 *tp, u32 reg, u32 *val)
static int tg3_phydsp_write(struct tg3 *tp, u32 reg, u32 val)
static int tg3_phy_auxctl_read(struct tg3 *tp, int reg, u32 *val)
static int tg3_phy_auxctl_write(struct tg3 *tp, int reg, u32 set)
#define TG3_PHY_AUXCTL_SMDSP_ENABLE(tp) \
tg3_phy_auxctl_write((tp), MII_TG3_AUXCTL_SHDWSEL_AUXCTL, \
MII_TG3_AUXCTL_ACTL_SMDSP_ENA | \
MII_TG3_AUXCTL_ACTL_TX_6DB)
#define TG3_PHY_AUXCTL_SMDSP_DISABLE(tp) \
tg3_phy_auxctl_write((tp), MII_TG3_AUXCTL_SHDWSEL_AUXCTL, \
MII_TG3_AUXCTL_ACTL_TX_6DB);
static int tg3_bmcr_reset(struct tg3 *tp)
static int tg3_mdio_read(struct mii_bus *bp, int mii_id, int reg)
static int tg3_mdio_write(struct mii_bus *bp, int mii_id, int reg, u16 val)
static int tg3_mdio_reset(struct mii_bus *bp)
static void tg3_mdio_config_5785(struct tg3 *tp)
static void tg3_mdio_start(struct tg3 *tp)
static int tg3_mdio_init(struct tg3 *tp)
static void tg3_mdio_fini(struct tg3 *tp)
static inline void tg3_generate_fw_event(struct tg3 *tp)
#define TG3_FW_EVENT_TIMEOUT_USEC 2500
static void tg3_wait_for_event_ack(struct tg3 *tp)
static void tg3_ump_link_report(struct tg3 *tp)
static void tg3_link_report(struct tg3 *tp)
static u16 tg3_advert_flowctrl_1000T(u8 flow_ctrl)
static u16 tg3_advert_flowctrl_1000X(u8 flow_ctrl)
static u8 tg3_resolve_flowctrl_1000X(u16 lcladv, u16 rmtadv)
static void tg3_setup_flow_control(struct tg3 *tp, u32 lcladv, u32 rmtadv)
static void tg3_adjust_link(struct net_device *dev)
static int tg3_phy_init(struct tg3 *tp)
static void tg3_phy_start(struct tg3 *tp)
static void tg3_phy_stop(struct tg3 *tp)
static void tg3_phy_fini(struct tg3 *tp)
static void tg3_phy_fet_toggle_apd(struct tg3 *tp, bool enable)
static void tg3_phy_toggle_apd(struct tg3 *tp, bool enable)
static void tg3_phy_toggle_automdix(struct tg3 *tp, int enable)
static void tg3_phy_set_wirespeed(struct tg3 *tp)
static void tg3_phy_apply_otp(struct tg3 *tp)
static void tg3_phy_eee_adjust(struct tg3 *tp, u32 current_link_up)
static void tg3_phy_eee_enable(struct tg3 *tp)
static int tg3_wait_macro_done(struct tg3 *tp)
static int tg3_phy_write_and_check_testpat(struct tg3 *tp, int *resetp)
static int tg3_phy_reset_chanpat(struct tg3 *tp)
static int tg3_phy_reset_5703_4_5(struct tg3 *tp)
static int tg3_phy_reset(struct tg3 *tp)
static void tg3_frob_aux_power(struct tg3 *tp)
static int tg3_5700_link_polarity(struct tg3 *tp, u32 speed)
static int tg3_setup_phy(struct tg3 *, int);
#define RESET_KIND_SHUTDOWN	0
#define RESET_KIND_INIT		1
#define RESET_KIND_SUSPEND	2
static void tg3_write_sig_post_reset(struct tg3 *, int);
static int tg3_halt_cpu(struct tg3 *, u32);
static void tg3_power_down_phy(struct tg3 *tp, bool do_low_power)
static int tg3_nvram_lock(struct tg3 *tp)
static void tg3_nvram_unlock(struct tg3 *tp)
static void tg3_enable_nvram_access(struct tg3 *tp)
static void tg3_disable_nvram_access(struct tg3 *tp)
static int tg3_nvram_read_using_eeprom(struct tg3 *tp,
u32 offset, u32 *val)
#define NVRAM_CMD_TIMEOUT 10000
static int tg3_nvram_exec_cmd(struct tg3 *tp, u32 nvram_cmd)
static u32 tg3_nvram_phys_addr(struct tg3 *tp, u32 addr)
static u32 tg3_nvram_logical_addr(struct tg3 *tp, u32 addr)
static int tg3_nvram_read(struct tg3 *tp, u32 offset, u32 *val)
static int tg3_nvram_read_be32(struct tg3 *tp, u32 offset, __be32 *val)
static void __tg3_set_mac_addr(struct tg3 *tp, int skip_mac_1)
static void tg3_enable_register_access(struct tg3 *tp)
static int tg3_power_up(struct tg3 *tp)
static int tg3_power_down_prepare(struct tg3 *tp)
static void tg3_power_down(struct tg3 *tp)
static void tg3_aux_stat_to_speed_duplex(struct tg3 *tp, u32 val, u16 *speed, u8 *duplex)
static int tg3_phy_autoneg_cfg(struct tg3 *tp, u32 advertise, u32 flowctrl)
static void tg3_phy_copper_begin(struct tg3 *tp)
static int tg3_init_5401phy_dsp(struct tg3 *tp)
static int tg3_copper_is_advertising_all(struct tg3 *tp, u32 mask)
static int tg3_adv_1000T_flowctrl_ok(struct tg3 *tp, u32 *lcladv, u32 *rmtadv)
static int tg3_setup_copper_phy(struct tg3 *tp, int force_reset)
struct tg3_fiber_aneginfo ;
#define ANEG_OK		0
#define ANEG_DONE	1
#define ANEG_TIMER_ENAB	2
#define ANEG_FAILED	-1
#define ANEG_STATE_SETTLE_TIME	10000
static int tg3_fiber_aneg_smachine(struct tg3 *tp,
struct tg3_fiber_aneginfo *ap)
static int fiber_autoneg(struct tg3 *tp, u32 *txflags, u32 *rxflags)
static void tg3_init_bcm8002(struct tg3 *tp)
static int tg3_setup_fiber_hw_autoneg(struct tg3 *tp, u32 mac_status)
static int tg3_setup_fiber_by_hand(struct tg3 *tp, u32 mac_status)
static int tg3_setup_fiber_phy(struct tg3 *tp, int force_reset)
static int tg3_setup_fiber_mii_phy(struct tg3 *tp, int force_reset)
static void tg3_serdes_parallel_detect(struct tg3 *tp)
static int tg3_setup_phy(struct tg3 *tp, int force_reset)
static inline int tg3_irq_sync(struct tg3 *tp)
static inline void tg3_rd32_loop(struct tg3 *tp, u32 *dst, u32 off, u32 len)
static void tg3_dump_legacy_regs(struct tg3 *tp, u32 *regs)
static void tg3_dump_state(struct tg3 *tp)
static void tg3_tx_recover(struct tg3 *tp)
static inline u32 tg3_tx_avail(struct tg3_napi *tnapi)
static void tg3_tx(struct tg3_napi *tnapi)
static void tg3_rx_skb_free(struct tg3 *tp, struct ring_info *ri, u32 map_sz)
static int tg3_alloc_rx_skb(struct tg3 *tp, struct tg3_rx_prodring_set *tpr,
u32 opaque_key, u32 dest_idx_unmasked)
static void tg3_recycle_rx(struct tg3_napi *tnapi,
struct tg3_rx_prodring_set *dpr,
u32 opaque_key, int src_idx,
u32 dest_idx_unmasked)
static int tg3_rx(struct tg3_napi *tnapi, int budget)
static void tg3_poll_link(struct tg3 *tp)
static int tg3_rx_prodring_xfer(struct tg3 *tp,
struct tg3_rx_prodring_set *dpr,
struct tg3_rx_prodring_set *spr)
static int tg3_poll_work(struct tg3_napi *tnapi, int work_done, int budget)
static int tg3_poll_msix(struct napi_struct *napi, int budget)
static void tg3_process_error(struct tg3 *tp)
static int tg3_poll(struct napi_struct *napi, int budget)
static void tg3_napi_disable(struct tg3 *tp)
static void tg3_napi_enable(struct tg3 *tp)
static void tg3_napi_init(struct tg3 *tp)
static void tg3_napi_fini(struct tg3 *tp)
static inline void tg3_netif_stop(struct tg3 *tp)
static inline void tg3_netif_start(struct tg3 *tp)
static void tg3_irq_quiesce(struct tg3 *tp)
static inline void tg3_full_lock(struct tg3 *tp, int irq_sync)
static inline void tg3_full_unlock(struct tg3 *tp)
static irqreturn_t tg3_msi_1shot(int irq, void *dev_id)
static irqreturn_t tg3_msi(int irq, void *dev_id)
static irqreturn_t tg3_interrupt(int irq, void *dev_id)
static irqreturn_t tg3_interrupt_tagged(int irq, void *dev_id)
static irqreturn_t tg3_test_isr(int irq, void *dev_id)
static int tg3_init_hw(struct tg3 *, int);
static int tg3_halt(struct tg3 *, int, int);
static int tg3_restart_hw(struct tg3 *tp, int reset_phy)
__releases(tp->lock)
__acquires(tp->lock)
static void tg3_poll_controller(struct net_device *dev)
static void tg3_reset_task(struct work_struct *work)
static void tg3_tx_timeout(struct net_device *dev)
static inline int tg3_4g_overflow_test(dma_addr_t mapping, int len)
static inline int tg3_40bit_overflow_test(struct tg3 *tp, dma_addr_t mapping,
int len)
static void tg3_set_txd(struct tg3_napi *tnapi, int entry,
dma_addr_t mapping, int len, u32 flags,
u32 mss_and_is_end)
static void tg3_skb_error_unmap(struct tg3_napi *tnapi,
struct sk_buff *skb, int last)
static int tigon3_dma_hwbug_workaround(struct tg3_napi *tnapi,
struct sk_buff *skb,
u32 base_flags, u32 mss)
static netdev_tx_t tg3_start_xmit(struct sk_buff *, struct net_device *);
static int tg3_tso_bug(struct tg3 *tp, struct sk_buff *skb)
static netdev_tx_t tg3_start_xmit(struct sk_buff *skb, struct net_device *dev)
static void tg3_set_loopback(struct net_device *dev, u32 features)
static u32 tg3_fix_features(struct net_device *dev, u32 features)
static int tg3_set_features(struct net_device *dev, u32 features)
static inline void tg3_set_mtu(struct net_device *dev, struct tg3 *tp,
int new_mtu)
static int tg3_change_mtu(struct net_device *dev, int new_mtu)
static void tg3_rx_prodring_free(struct tg3 *tp,
struct tg3_rx_prodring_set *tpr)
static int tg3_rx_prodring_alloc(struct tg3 *tp,
struct tg3_rx_prodring_set *tpr)
static void tg3_rx_prodring_fini(struct tg3 *tp,
struct tg3_rx_prodring_set *tpr)
static int tg3_rx_prodring_init(struct tg3 *tp,
struct tg3_rx_prodring_set *tpr)
static void tg3_free_rings(struct tg3 *tp)
static int tg3_init_rings(struct tg3 *tp)
static void tg3_free_consistent(struct tg3 *tp)
static int tg3_alloc_consistent(struct tg3 *tp)
#define MAX_WAIT_CNT 1000
static int tg3_stop_block(struct tg3 *tp, unsigned long ofs, u32 enable_bit, int silent)
static int tg3_abort_hw(struct tg3 *tp, int silent)
static void tg3_ape_send_event(struct tg3 *tp, u32 event)
static void tg3_ape_driver_state_change(struct tg3 *tp, int kind)
static void tg3_write_sig_pre_reset(struct tg3 *tp, int kind)
static void tg3_write_sig_post_reset(struct tg3 *tp, int kind)
static void tg3_write_sig_legacy(struct tg3 *tp, int kind)
static int tg3_poll_fw(struct tg3 *tp)
static void tg3_save_pci_state(struct tg3 *tp)
static void tg3_restore_pci_state(struct tg3 *tp)
static void tg3_stop_fw(struct tg3 *);
static int tg3_chip_reset(struct tg3 *tp)
static void tg3_stop_fw(struct tg3 *tp)
static int tg3_halt(struct tg3 *tp, int kind, int silent)
#define RX_CPU_SCRATCH_BASE	0x30000
#define RX_CPU_SCRATCH_SIZE	0x04000
#define TX_CPU_SCRATCH_BASE	0x34000
#define TX_CPU_SCRATCH_SIZE	0x04000
static int tg3_halt_cpu(struct tg3 *tp, u32 offset)
struct fw_info ;
static int tg3_load_firmware_cpu(struct tg3 *tp, u32 cpu_base, u32 cpu_scratch_base,
int cpu_scratch_size, struct fw_info *info)
static int tg3_load_5701_a0_firmware_fix(struct tg3 *tp)
static int tg3_load_tso_firmware(struct tg3 *tp)
static int tg3_set_mac_addr(struct net_device *dev, void *p)
static void tg3_set_bdinfo(struct tg3 *tp, u32 bdinfo_addr,
dma_addr_t mapping, u32 maxlen_flags,
u32 nic_addr)
static void __tg3_set_rx_mode(struct net_device *);
static void __tg3_set_coalesce(struct tg3 *tp, struct ethtool_coalesce *ec)
static void tg3_rings_reset(struct tg3 *tp)
static void tg3_setup_rxbd_thresholds(struct tg3 *tp)
static int tg3_reset_hw(struct tg3 *tp, int reset_phy)
static int tg3_init_hw(struct tg3 *tp, int reset_phy)
#define TG3_STAT_ADD32(PSTAT, REG) \
do  while (0)
static void tg3_periodic_fetch_stats(struct tg3 *tp)
static void tg3_timer(unsigned long __opaque)
static int tg3_request_irq(struct tg3 *tp, int irq_num)
static int tg3_test_interrupt(struct tg3 *tp)
static int tg3_test_msi(struct tg3 *tp)
static int tg3_request_firmware(struct tg3 *tp)
static bool tg3_enable_msix(struct tg3 *tp)
static void tg3_ints_init(struct tg3 *tp)
static void tg3_ints_fini(struct tg3 *tp)
static int tg3_open(struct net_device *dev)
static struct rtnl_link_stats64 *tg3_get_stats64(struct net_device *,
struct rtnl_link_stats64 *);
static struct tg3_ethtool_stats *tg3_get_estats(struct tg3 *);
static int tg3_close(struct net_device *dev)
static inline u64 get_stat64(tg3_stat64_t *val)
static u64 calc_crc_errors(struct tg3 *tp)
#define ESTAT_ADD(member) \
estats->member =	old_estats->member + \
get_stat64(&hw_stats->member)
static struct tg3_ethtool_stats *tg3_get_estats(struct tg3 *tp)
static struct rtnl_link_stats64 *tg3_get_stats64(struct net_device *dev,
struct rtnl_link_stats64 *stats)
static inline u32 calc_crc(unsigned char *buf, int len)
static void tg3_set_multi(struct tg3 *tp, unsigned int accept_all)
static void __tg3_set_rx_mode(struct net_device *dev)
static void tg3_set_rx_mode(struct net_device *dev)
static int tg3_get_regs_len(struct net_device *dev)
static void tg3_get_regs(struct net_device *dev,
struct ethtool_regs *regs, void *_p)
static int tg3_get_eeprom_len(struct net_device *dev)
static int tg3_get_eeprom(struct net_device *dev, struct ethtool_eeprom *eeprom, u8 *data)
static int tg3_nvram_write_block(struct tg3 *tp, u32 offset, u32 len, u8 *buf);
static int tg3_set_eeprom(struct net_device *dev, struct ethtool_eeprom *eeprom, u8 *data)
static int tg3_get_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static int tg3_set_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static void tg3_get_drvinfo(struct net_device *dev, struct ethtool_drvinfo *info)
static void tg3_get_wol(struct net_device *dev, struct ethtool_wolinfo *wol)
static int tg3_set_wol(struct net_device *dev, struct ethtool_wolinfo *wol)
static u32 tg3_get_msglevel(struct net_device *dev)
static void tg3_set_msglevel(struct net_device *dev, u32 value)
static int tg3_nway_reset(struct net_device *dev)
static void tg3_get_ringparam(struct net_device *dev, struct ethtool_ringparam *ering)
static int tg3_set_ringparam(struct net_device *dev, struct ethtool_ringparam *ering)
static void tg3_get_pauseparam(struct net_device *dev, struct ethtool_pauseparam *epause)
static int tg3_set_pauseparam(struct net_device *dev, struct ethtool_pauseparam *epause)
static int tg3_get_sset_count(struct net_device *dev, int sset)
static void tg3_get_strings(struct net_device *dev, u32 stringset, u8 *buf)
static int tg3_set_phys_id(struct net_device *dev,
enum ethtool_phys_id_state state)
static void tg3_get_ethtool_stats(struct net_device *dev,
struct ethtool_stats *estats, u64 *tmp_stats)
static __be32 * tg3_vpd_readblock(struct tg3 *tp)
#define NVRAM_TEST_SIZE 0x100
#define NVRAM_SELFBOOT_FORMAT1_0_SIZE	0x14
#define NVRAM_SELFBOOT_FORMAT1_2_SIZE	0x18
#define NVRAM_SELFBOOT_FORMAT1_3_SIZE	0x1c
#define NVRAM_SELFBOOT_HW_SIZE 0x20
#define NVRAM_SELFBOOT_DATA_SIZE 0x1c
static int tg3_test_nvram(struct tg3 *tp)
#define TG3_SERDES_TIMEOUT_SEC	2
#define TG3_COPPER_TIMEOUT_SEC	6
static int tg3_test_link(struct tg3 *tp)
static int tg3_test_registers(struct tg3 *tp)
static int tg3_do_mem_test(struct tg3 *tp, u32 offset, u32 len)
static int tg3_test_memory(struct tg3 *tp)
#define TG3_MAC_LOOPBACK	0
#define TG3_PHY_LOOPBACK	1
#define TG3_TSO_LOOPBACK	2
#define TG3_TSO_MSS		500
#define TG3_TSO_IP_HDR_LEN	20
#define TG3_TSO_TCP_HDR_LEN	20
#define TG3_TSO_TCP_OPT_LEN	12
static const u8 tg3_tso_header[] = ;
static int tg3_run_loopback(struct tg3 *tp, u32 pktsz, int loopback_mode)
#define TG3_STD_LOOPBACK_FAILED		1
#define TG3_JMB_LOOPBACK_FAILED		2
#define TG3_TSO_LOOPBACK_FAILED		4
#define TG3_MAC_LOOPBACK_SHIFT		0
#define TG3_PHY_LOOPBACK_SHIFT		4
#define TG3_LOOPBACK_FAILED		0x00000077
static int tg3_test_loopback(struct tg3 *tp)
static void tg3_self_test(struct net_device *dev, struct ethtool_test *etest,
u64 *data)
static int tg3_ioctl(struct net_device *dev, struct ifreq *ifr, int cmd)
static int tg3_get_coalesce(struct net_device *dev, struct ethtool_coalesce *ec)
static int tg3_set_coalesce(struct net_device *dev, struct ethtool_coalesce *ec)
static const struct ethtool_ops tg3_ethtool_ops = ;
static void __devinit tg3_get_eeprom_size(struct tg3 *tp)
static void __devinit tg3_get_nvram_size(struct tg3 *tp)
static void __devinit tg3_get_nvram_info(struct tg3 *tp)
static void __devinit tg3_nvram_get_pagesize(struct tg3 *tp, u32 nvmcfg1)
static void __devinit tg3_get_5752_nvram_info(struct tg3 *tp)
static void __devinit tg3_get_5755_nvram_info(struct tg3 *tp)
static void __devinit tg3_get_5787_nvram_info(struct tg3 *tp)
static void __devinit tg3_get_5761_nvram_info(struct tg3 *tp)
static void __devinit tg3_get_5906_nvram_info(struct tg3 *tp)
static void __devinit tg3_get_57780_nvram_info(struct tg3 *tp)
static void __devinit tg3_get_5717_nvram_info(struct tg3 *tp)
static void __devinit tg3_get_5720_nvram_info(struct tg3 *tp)
static void __devinit tg3_nvram_init(struct tg3 *tp)
static int tg3_nvram_write_block_using_eeprom(struct tg3 *tp,
u32 offset, u32 len, u8 *buf)
static int tg3_nvram_write_block_unbuffered(struct tg3 *tp, u32 offset, u32 len,
u8 *buf)
static int tg3_nvram_write_block_buffered(struct tg3 *tp, u32 offset, u32 len,
u8 *buf)
static int tg3_nvram_write_block(struct tg3 *tp, u32 offset, u32 len, u8 *buf)
struct subsys_tbl_ent ;
static struct subsys_tbl_ent subsys_id_to_phy_id[] __devinitdata = ;
static struct subsys_tbl_ent * __devinit tg3_lookup_by_subsys(struct tg3 *tp)
static void __devinit tg3_get_eeprom_hw_cfg(struct tg3 *tp)
static int __devinit tg3_issue_otp_command(struct tg3 *tp, u32 cmd)
static u32 __devinit tg3_read_otp_phycfg(struct tg3 *tp)
static void __devinit tg3_phy_init_link_config(struct tg3 *tp)
static int __devinit tg3_phy_probe(struct tg3 *tp)
static void __devinit tg3_read_vpd(struct tg3 *tp)
static int __devinit tg3_fw_img_is_valid(struct tg3 *tp, u32 offset)
static void __devinit tg3_read_bc_ver(struct tg3 *tp)
static void __devinit tg3_read_hwsb_ver(struct tg3 *tp)
static void __devinit tg3_read_sb_ver(struct tg3 *tp, u32 val)
static void __devinit tg3_read_mgmtfw_ver(struct tg3 *tp)
static void __devinit tg3_read_dash_ver(struct tg3 *tp)
static void __devinit tg3_read_fw_ver(struct tg3 *tp)
static struct pci_dev * __devinit tg3_find_peer(struct tg3 *);
static inline u32 tg3_rx_ret_ring_size(struct tg3 *tp)
static DEFINE_PCI_DEVICE_TABLE(tg3_write_reorder_chipsets) = ;
static int __devinit tg3_get_invariants(struct tg3 *tp)
static int __devinit tg3_get_macaddr_sparc(struct tg3 *tp)
static int __devinit tg3_get_default_macaddr_sparc(struct tg3 *tp)
static int __devinit tg3_get_device_address(struct tg3 *tp)
#define BOUNDARY_SINGLE_CACHELINE	1
#define BOUNDARY_MULTI_CACHELINE	2
static u32 __devinit tg3_calc_dma_bndry(struct tg3 *tp, u32 val)
static int __devinit tg3_do_test_dma(struct tg3 *tp, u32 *buf, dma_addr_t buf_dma, int size, int to_device)
#define TEST_BUFFER_SIZE	0x2000
static DEFINE_PCI_DEVICE_TABLE(tg3_dma_wait_state_chipsets) = ;
static int __devinit tg3_test_dma(struct tg3 *tp)
static void __devinit tg3_init_bufmgr_config(struct tg3 *tp)
static char * __devinit tg3_phy_string(struct tg3 *tp)
static char * __devinit tg3_bus_string(struct tg3 *tp, char *str)
static struct pci_dev * __devinit tg3_find_peer(struct tg3 *tp)
static void __devinit tg3_init_coal(struct tg3 *tp)
static const struct net_device_ops tg3_netdev_ops = ;
static int __devinit tg3_init_one(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit tg3_remove_one(struct pci_dev *pdev)
static int tg3_suspend(struct device *device)
static int tg3_resume(struct device *device)
static SIMPLE_DEV_PM_OPS(tg3_pm_ops, tg3_suspend, tg3_resume);
#define TG3_PM_OPS (&tg3_pm_ops)
#define TG3_PM_OPS NULL
static pci_ers_result_t tg3_io_error_detected(struct pci_dev *pdev,
pci_channel_state_t state)
static pci_ers_result_t tg3_io_slot_reset(struct pci_dev *pdev)
static void tg3_io_resume(struct pci_dev *pdev)
static struct pci_error_handlers tg3_err_handler = ;
static struct pci_driver tg3_driver = ;
static int __init tg3_init(void)
static void __exit tg3_cleanup(void)
module_init(tg3_init);
module_exit(tg3_cleanup);
