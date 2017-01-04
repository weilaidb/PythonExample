#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#if defined(CONFIG_CNIC) || defined(CONFIG_CNIC_MODULE)
#define BCM_CNIC 1
#define DRV_MODULE_NAME		"bnx2"
#define DRV_MODULE_VERSION	"2.1.6"
#define DRV_MODULE_RELDATE	"Mar 7, 2011"
#define FW_MIPS_FILE_06		"bnx2/bnx2-mips-06-6.2.1.fw"
#define FW_RV2P_FILE_06		"bnx2/bnx2-rv2p-06-6.0.15.fw"
#define FW_MIPS_FILE_09		"bnx2/bnx2-mips-09-6.2.1a.fw"
#define FW_RV2P_FILE_09_Ax	"bnx2/bnx2-rv2p-09ax-6.0.17.fw"
#define FW_RV2P_FILE_09		"bnx2/bnx2-rv2p-09-6.0.17.fw"
#define RUN_AT(x) (jiffies + (x))
#define TX_TIMEOUT  (5*HZ)
static char version[] __devinitdata =
"Broadcom NetXtreme II Gigabit Ethernet Driver " DRV_MODULE_NAME " v" DRV_MODULE_VERSION " (" DRV_MODULE_RELDATE ")\n";
MODULE_AUTHOR("Michael Chan <mchan@broadcom.com>");
MODULE_DESCRIPTION("Broadcom NetXtreme II BCM5706/5708/5709/5716 Driver");
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_MODULE_VERSION);
MODULE_FIRMWARE(FW_MIPS_FILE_06);
MODULE_FIRMWARE(FW_RV2P_FILE_06);
MODULE_FIRMWARE(FW_MIPS_FILE_09);
MODULE_FIRMWARE(FW_RV2P_FILE_09);
MODULE_FIRMWARE(FW_RV2P_FILE_09_Ax);
static int disable_msi = 0;
module_param(disable_msi, int, 0);
MODULE_PARM_DESC(disable_msi, "Disable Message Signaled Interrupt (MSI)");
typedef enum  board_t;
static struct  board_info[] __devinitdata = ;
static DEFINE_PCI_DEVICE_TABLE(bnx2_pci_tbl) = ;
static const struct flash_spec flash_table[] =
;
static const struct flash_spec flash_5709 = ;
MODULE_DEVICE_TABLE(pci, bnx2_pci_tbl);
static void bnx2_init_napi(struct bnx2 *bp);
static void bnx2_del_napi(struct bnx2 *bp);
static inline u32 bnx2_tx_avail(struct bnx2 *bp, struct bnx2_tx_ring_info *txr)
static u32
bnx2_reg_rd_ind(struct bnx2 *bp, u32 offset)
static void
bnx2_reg_wr_ind(struct bnx2 *bp, u32 offset, u32 val)
static void
bnx2_shmem_wr(struct bnx2 *bp, u32 offset, u32 val)
static u32
bnx2_shmem_rd(struct bnx2 *bp, u32 offset)
static void
bnx2_ctx_wr(struct bnx2 *bp, u32 cid_addr, u32 offset, u32 val)
static int
bnx2_drv_ctl(struct net_device *dev, struct drv_ctl_info *info)
static void bnx2_setup_cnic_irq_info(struct bnx2 *bp)
static int bnx2_register_cnic(struct net_device *dev, struct cnic_ops *ops,
void *data)
static int bnx2_unregister_cnic(struct net_device *dev)
struct cnic_eth_dev *bnx2_cnic_probe(struct net_device *dev)
EXPORT_SYMBOL(bnx2_cnic_probe);
static void
bnx2_cnic_stop(struct bnx2 *bp)
static void
bnx2_cnic_start(struct bnx2 *bp)
static void
bnx2_cnic_stop(struct bnx2 *bp)
static void
bnx2_cnic_start(struct bnx2 *bp)
static int
bnx2_read_phy(struct bnx2 *bp, u32 reg, u32 *val)
static int
bnx2_write_phy(struct bnx2 *bp, u32 reg, u32 val)
static void
bnx2_disable_int(struct bnx2 *bp)
static void
bnx2_enable_int(struct bnx2 *bp)
static void
bnx2_disable_int_sync(struct bnx2 *bp)
static void
bnx2_napi_disable(struct bnx2 *bp)
static void
bnx2_napi_enable(struct bnx2 *bp)
static void
bnx2_netif_stop(struct bnx2 *bp, bool stop_cnic)
static void
bnx2_netif_start(struct bnx2 *bp, bool start_cnic)
static void
bnx2_free_tx_mem(struct bnx2 *bp)
static void
bnx2_free_rx_mem(struct bnx2 *bp)
static int
bnx2_alloc_tx_mem(struct bnx2 *bp)
static int
bnx2_alloc_rx_mem(struct bnx2 *bp)
static void
bnx2_free_mem(struct bnx2 *bp)
static int
bnx2_alloc_mem(struct bnx2 *bp)
static void
bnx2_report_fw_link(struct bnx2 *bp)
static char *
bnx2_xceiver_str(struct bnx2 *bp)
static void
bnx2_report_link(struct bnx2 *bp)
static void
bnx2_resolve_flow_ctrl(struct bnx2 *bp)
static int
bnx2_5709s_linkup(struct bnx2 *bp)
static int
bnx2_5708s_linkup(struct bnx2 *bp)
static int
bnx2_5706s_linkup(struct bnx2 *bp)
static int
bnx2_copper_linkup(struct bnx2 *bp)
static void
bnx2_init_rx_context(struct bnx2 *bp, u32 cid)
static void
bnx2_init_all_rx_contexts(struct bnx2 *bp)
static void
bnx2_set_mac_link(struct bnx2 *bp)
static void
bnx2_enable_bmsr1(struct bnx2 *bp)
static void
bnx2_disable_bmsr1(struct bnx2 *bp)
static int
bnx2_test_and_enable_2g5(struct bnx2 *bp)
static int
bnx2_test_and_disable_2g5(struct bnx2 *bp)
static void
bnx2_enable_forced_2g5(struct bnx2 *bp)
static void
bnx2_disable_forced_2g5(struct bnx2 *bp)
static void
bnx2_5706s_force_link_dn(struct bnx2 *bp, int start)
static int
bnx2_set_link(struct bnx2 *bp)
static int
bnx2_reset_phy(struct bnx2 *bp)
static u32
bnx2_phy_get_pause_adv(struct bnx2 *bp)
static int bnx2_fw_sync(struct bnx2 *, u32, int, int);
static int
bnx2_setup_remote_phy(struct bnx2 *bp, u8 port)
__releases(&bp->phy_lock)
__acquires(&bp->phy_lock)
static int
bnx2_setup_serdes_phy(struct bnx2 *bp, u8 port)
__releases(&bp->phy_lock)
__acquires(&bp->phy_lock)
#define ETHTOOL_ALL_FIBRE_SPEED						\
(bp->phy_flags & BNX2_PHY_FLAG_2_5G_CAPABLE) ?			\
(ADVERTISED_2500baseX_Full | ADVERTISED_1000baseT_Full) :\
(ADVERTISED_1000baseT_Full)
#define ETHTOOL_ALL_COPPER_SPEED					\
(ADVERTISED_10baseT_Half | ADVERTISED_10baseT_Full |		\
ADVERTISED_100baseT_Half | ADVERTISED_100baseT_Full |		\
ADVERTISED_1000baseT_Full)
#define PHY_ALL_10_100_SPEED (ADVERTISE_10HALF | ADVERTISE_10FULL | \
ADVERTISE_100HALF | ADVERTISE_100FULL | ADVERTISE_CSMA)
#define PHY_ALL_1000_SPEED (ADVERTISE_1000HALF | ADVERTISE_1000FULL)
static void
bnx2_set_default_remote_link(struct bnx2 *bp)
static void
bnx2_set_default_link(struct bnx2 *bp)
static void
bnx2_send_heart_beat(struct bnx2 *bp)
static void
bnx2_remote_phy_event(struct bnx2 *bp)
static int
bnx2_set_remote_link(struct bnx2 *bp)
static int
bnx2_setup_copper_phy(struct bnx2 *bp)
__releases(&bp->phy_lock)
__acquires(&bp->phy_lock)
static int
bnx2_setup_phy(struct bnx2 *bp, u8 port)
__releases(&bp->phy_lock)
__acquires(&bp->phy_lock)
static int
bnx2_init_5709s_phy(struct bnx2 *bp, int reset_phy)
static int
bnx2_init_5708s_phy(struct bnx2 *bp, int reset_phy)
static int
bnx2_init_5706s_phy(struct bnx2 *bp, int reset_phy)
static int
bnx2_init_copper_phy(struct bnx2 *bp, int reset_phy)
static int
bnx2_init_phy(struct bnx2 *bp, int reset_phy)
__releases(&bp->phy_lock)
__acquires(&bp->phy_lock)
static int
bnx2_set_mac_loopback(struct bnx2 *bp)
static int bnx2_test_link(struct bnx2 *);
static int
bnx2_set_phy_loopback(struct bnx2 *bp)
static int
bnx2_fw_sync(struct bnx2 *bp, u32 msg_data, int ack, int silent)
static int
bnx2_init_5709_context(struct bnx2 *bp)
static void
bnx2_init_context(struct bnx2 *bp)
static int
bnx2_alloc_bad_rbuf(struct bnx2 *bp)
static void
bnx2_set_mac_addr(struct bnx2 *bp, u8 *mac_addr, u32 pos)
static inline int
bnx2_alloc_rx_page(struct bnx2 *bp, struct bnx2_rx_ring_info *rxr, u16 index, gfp_t gfp)
static void
bnx2_free_rx_page(struct bnx2 *bp, struct bnx2_rx_ring_info *rxr, u16 index)
static inline int
bnx2_alloc_rx_skb(struct bnx2 *bp, struct bnx2_rx_ring_info *rxr, u16 index, gfp_t gfp)
static int
bnx2_phy_event_is_set(struct bnx2 *bp, struct bnx2_napi *bnapi, u32 event)
static void
bnx2_phy_int(struct bnx2 *bp, struct bnx2_napi *bnapi)
static inline u16
bnx2_get_hw_tx_cons(struct bnx2_napi *bnapi)
static int
bnx2_tx_int(struct bnx2 *bp, struct bnx2_napi *bnapi, int budget)
static void
bnx2_reuse_rx_skb_pages(struct bnx2 *bp, struct bnx2_rx_ring_info *rxr,
struct sk_buff *skb, int count)
static inline void
bnx2_reuse_rx_skb(struct bnx2 *bp, struct bnx2_rx_ring_info *rxr,
struct sk_buff *skb, u16 cons, u16 prod)
static int
bnx2_rx_skb(struct bnx2 *bp, struct bnx2_rx_ring_info *rxr, struct sk_buff *skb,
unsigned int len, unsigned int hdr_len, dma_addr_t dma_addr,
u32 ring_idx)
static inline u16
bnx2_get_hw_rx_cons(struct bnx2_napi *bnapi)
static int
bnx2_rx_int(struct bnx2 *bp, struct bnx2_napi *bnapi, int budget)
static irqreturn_t
bnx2_msi(int irq, void *dev_instance)
static irqreturn_t
bnx2_msi_1shot(int irq, void *dev_instance)
static irqreturn_t
bnx2_interrupt(int irq, void *dev_instance)
static inline int
bnx2_has_fast_work(struct bnx2_napi *bnapi)
#define STATUS_ATTN_EVENTS	(STATUS_ATTN_BITS_LINK_STATE | \
STATUS_ATTN_BITS_TIMER_ABORT)
static inline int
bnx2_has_work(struct bnx2_napi *bnapi)
static void
bnx2_chk_missed_msi(struct bnx2 *bp)
static void bnx2_poll_cnic(struct bnx2 *bp, struct bnx2_napi *bnapi)
static void bnx2_poll_link(struct bnx2 *bp, struct bnx2_napi *bnapi)
static int bnx2_poll_work(struct bnx2 *bp, struct bnx2_napi *bnapi,
int work_done, int budget)
static int bnx2_poll_msix(struct napi_struct *napi, int budget)
static int bnx2_poll(struct napi_struct *napi, int budget)
static void
bnx2_set_rx_mode(struct net_device *dev)
static int __devinit
check_fw_section(const struct firmware *fw,
const struct bnx2_fw_file_section *section,
u32 alignment, bool non_empty)
static int __devinit
check_mips_fw_entry(const struct firmware *fw,
const struct bnx2_mips_fw_file_entry *entry)
static int __devinit
bnx2_request_firmware(struct bnx2 *bp)
static u32
rv2p_fw_fixup(u32 rv2p_proc, int idx, u32 loc, u32 rv2p_code)
static int
load_rv2p_fw(struct bnx2 *bp, u32 rv2p_proc,
const struct bnx2_rv2p_fw_file_entry *fw_entry)
static int
load_cpu_fw(struct bnx2 *bp, const struct cpu_reg *cpu_reg,
const struct bnx2_mips_fw_file_entry *fw_entry)
static int
bnx2_init_cpus(struct bnx2 *bp)
static int
bnx2_set_power_state(struct bnx2 *bp, pci_power_t state)
static int
bnx2_acquire_nvram_lock(struct bnx2 *bp)
static int
bnx2_release_nvram_lock(struct bnx2 *bp)
static int
bnx2_enable_nvram_write(struct bnx2 *bp)
static void
bnx2_disable_nvram_write(struct bnx2 *bp)
static void
bnx2_enable_nvram_access(struct bnx2 *bp)
static void
bnx2_disable_nvram_access(struct bnx2 *bp)
static int
bnx2_nvram_erase_page(struct bnx2 *bp, u32 offset)
static int
bnx2_nvram_read_dword(struct bnx2 *bp, u32 offset, u8 *ret_val, u32 cmd_flags)
static int
bnx2_nvram_write_dword(struct bnx2 *bp, u32 offset, u8 *val, u32 cmd_flags)
static int
bnx2_init_nvram(struct bnx2 *bp)
static int
bnx2_nvram_read(struct bnx2 *bp, u32 offset, u8 *ret_buf,
int buf_size)
static int
bnx2_nvram_write(struct bnx2 *bp, u32 offset, u8 *data_buf,
int buf_size)
static void
bnx2_init_fw_cap(struct bnx2 *bp)
static void
bnx2_setup_msix_tbl(struct bnx2 *bp)
static int
bnx2_reset_chip(struct bnx2 *bp, u32 reset_code)
static int
bnx2_init_chip(struct bnx2 *bp)
static void
bnx2_clear_ring_states(struct bnx2 *bp)
static void
bnx2_init_tx_context(struct bnx2 *bp, u32 cid, struct bnx2_tx_ring_info *txr)
static void
bnx2_init_tx_ring(struct bnx2 *bp, int ring_num)
static void
bnx2_init_rxbd_rings(struct rx_bd *rx_ring[], dma_addr_t dma[], u32 buf_size,
int num_rings)
static void
bnx2_init_rx_ring(struct bnx2 *bp, int ring_num)
static void
bnx2_init_all_rings(struct bnx2 *bp)
static u32 bnx2_find_max_ring(u32 ring_size, u32 max_size)
static void
bnx2_set_rx_ring_size(struct bnx2 *bp, u32 size)
static void
bnx2_free_tx_skbs(struct bnx2 *bp)
static void
bnx2_free_rx_skbs(struct bnx2 *bp)
static void
bnx2_free_skbs(struct bnx2 *bp)
static int
bnx2_reset_nic(struct bnx2 *bp, u32 reset_code)
static int
bnx2_init_nic(struct bnx2 *bp, int reset_phy)
static int
bnx2_shutdown_chip(struct bnx2 *bp)
static int
bnx2_test_registers(struct bnx2 *bp)
static int
bnx2_do_mem_test(struct bnx2 *bp, u32 start, u32 size)
static int
bnx2_test_memory(struct bnx2 *bp)
#define BNX2_MAC_LOOPBACK	0
#define BNX2_PHY_LOOPBACK	1
static int
bnx2_run_loopback(struct bnx2 *bp, int loopback_mode)
#define BNX2_MAC_LOOPBACK_FAILED	1
#define BNX2_PHY_LOOPBACK_FAILED	2
#define BNX2_LOOPBACK_FAILED		(BNX2_MAC_LOOPBACK_FAILED |	\
BNX2_PHY_LOOPBACK_FAILED)
static int
bnx2_test_loopback(struct bnx2 *bp)
#define NVRAM_SIZE 0x200
#define CRC32_RESIDUAL 0xdebb20e3
static int
bnx2_test_nvram(struct bnx2 *bp)
static int
bnx2_test_link(struct bnx2 *bp)
static int
bnx2_test_intr(struct bnx2 *bp)
static int
bnx2_5706_serdes_has_link(struct bnx2 *bp)
static void
bnx2_5706_serdes_timer(struct bnx2 *bp)
static void
bnx2_5708_serdes_timer(struct bnx2 *bp)
static void
bnx2_timer(unsigned long data)
static int
bnx2_request_irq(struct bnx2 *bp)
static void
__bnx2_free_irq(struct bnx2 *bp)
static void
bnx2_free_irq(struct bnx2 *bp)
static void
bnx2_enable_msix(struct bnx2 *bp, int msix_vecs)
static int
bnx2_setup_int_mode(struct bnx2 *bp, int dis_msi)
static int
bnx2_open(struct net_device *dev)
static void
bnx2_reset_task(struct work_struct *work)
static void
bnx2_dump_state(struct bnx2 *bp)
static void
bnx2_tx_timeout(struct net_device *dev)
static netdev_tx_t
bnx2_start_xmit(struct sk_buff *skb, struct net_device *dev)
static int
bnx2_close(struct net_device *dev)
static void
bnx2_save_stats(struct bnx2 *bp)
#define GET_64BIT_NET_STATS64(ctr)		\
(((u64) (ctr##_hi) << 32) + (u64) (ctr##_lo))
#define GET_64BIT_NET_STATS(ctr)				\
GET_64BIT_NET_STATS64(bp->stats_blk->ctr) +		\
GET_64BIT_NET_STATS64(bp->temp_stats_blk->ctr)
#define GET_32BIT_NET_STATS(ctr)				\
(unsigned long) (bp->stats_blk->ctr +			\
bp->temp_stats_blk->ctr)
static struct rtnl_link_stats64 *
bnx2_get_stats64(struct net_device *dev, struct rtnl_link_stats64 *net_stats)
static int
bnx2_get_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static int
bnx2_set_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static void
bnx2_get_drvinfo(struct net_device *dev, struct ethtool_drvinfo *info)
#define BNX2_REGDUMP_LEN		(32 * 1024)
static int
bnx2_get_regs_len(struct net_device *dev)
static void
bnx2_get_regs(struct net_device *dev, struct ethtool_regs *regs, void *_p)
static void
bnx2_get_wol(struct net_device *dev, struct ethtool_wolinfo *wol)
static int
bnx2_set_wol(struct net_device *dev, struct ethtool_wolinfo *wol)
static int
bnx2_nway_reset(struct net_device *dev)
static u32
bnx2_get_link(struct net_device *dev)
static int
bnx2_get_eeprom_len(struct net_device *dev)
static int
bnx2_get_eeprom(struct net_device *dev, struct ethtool_eeprom *eeprom,
u8 *eebuf)
static int
bnx2_set_eeprom(struct net_device *dev, struct ethtool_eeprom *eeprom,
u8 *eebuf)
static int
bnx2_get_coalesce(struct net_device *dev, struct ethtool_coalesce *coal)
static int
bnx2_set_coalesce(struct net_device *dev, struct ethtool_coalesce *coal)
static void
bnx2_get_ringparam(struct net_device *dev, struct ethtool_ringparam *ering)
static int
bnx2_change_ring_size(struct bnx2 *bp, u32 rx, u32 tx)
static int
bnx2_set_ringparam(struct net_device *dev, struct ethtool_ringparam *ering)
static void
bnx2_get_pauseparam(struct net_device *dev, struct ethtool_pauseparam *epause)
static int
bnx2_set_pauseparam(struct net_device *dev, struct ethtool_pauseparam *epause)
static struct  bnx2_stats_str_arr[] = ;
#define BNX2_NUM_STATS (sizeof(bnx2_stats_str_arr)/\
sizeof(bnx2_stats_str_arr[0]))
#define STATS_OFFSET32(offset_name) (offsetof(struct statistics_block, offset_name) / 4)
static const unsigned long bnx2_stats_offset_arr[BNX2_NUM_STATS] = ;
static u8 bnx2_5706_stats_len_arr[BNX2_NUM_STATS] = ;
static u8 bnx2_5708_stats_len_arr[BNX2_NUM_STATS] = ;
#define BNX2_NUM_TESTS 6
static struct  bnx2_tests_str_arr[BNX2_NUM_TESTS] = ;
static int
bnx2_get_sset_count(struct net_device *dev, int sset)
static void
bnx2_self_test(struct net_device *dev, struct ethtool_test *etest, u64 *buf)
static void
bnx2_get_strings(struct net_device *dev, u32 stringset, u8 *buf)
static void
bnx2_get_ethtool_stats(struct net_device *dev,
struct ethtool_stats *stats, u64 *buf)
static int
bnx2_set_phys_id(struct net_device *dev, enum ethtool_phys_id_state state)
static u32
bnx2_fix_features(struct net_device *dev, u32 features)
static int
bnx2_set_features(struct net_device *dev, u32 features)
static const struct ethtool_ops bnx2_ethtool_ops = ;
static int
bnx2_ioctl(struct net_device *dev, struct ifreq *ifr, int cmd)
static int
bnx2_change_mac_addr(struct net_device *dev, void *p)
static int
bnx2_change_mtu(struct net_device *dev, int new_mtu)
static void
poll_bnx2(struct net_device *dev)
static void __devinit
bnx2_get_5709_media(struct bnx2 *bp)
static void __devinit
bnx2_get_pci_speed(struct bnx2 *bp)
static void __devinit
bnx2_read_vpd_fw_ver(struct bnx2 *bp)
static int __devinit
bnx2_init_board(struct pci_dev *pdev, struct net_device *dev)
static char * __devinit
bnx2_bus_string(struct bnx2 *bp, char *str)
static void
bnx2_del_napi(struct bnx2 *bp)
static void
bnx2_init_napi(struct bnx2 *bp)
static const struct net_device_ops bnx2_netdev_ops = ;
static int __devinit
bnx2_init_one(struct pci_dev *pdev, const struct pci_device_id *ent)
static void __devexit
bnx2_remove_one(struct pci_dev *pdev)
static int
bnx2_suspend(struct pci_dev *pdev, pm_message_t state)
static int
bnx2_resume(struct pci_dev *pdev)
static pci_ers_result_t bnx2_io_error_detected(struct pci_dev *pdev,
pci_channel_state_t state)
static pci_ers_result_t bnx2_io_slot_reset(struct pci_dev *pdev)
static void bnx2_io_resume(struct pci_dev *pdev)
static struct pci_error_handlers bnx2_err_handler = ;
static struct pci_driver bnx2_pci_driver = ;
static int __init bnx2_init(void)
static void __exit bnx2_cleanup(void)
module_init(bnx2_init);
module_exit(bnx2_cleanup);
