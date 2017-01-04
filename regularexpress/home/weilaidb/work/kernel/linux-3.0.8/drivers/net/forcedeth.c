#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define FORCEDETH_VERSION		"0.64"
#define DRV_NAME			"forcedeth"
#define TX_WORK_PER_LOOP  64
#define RX_WORK_PER_LOOP  64
#define DEV_NEED_TIMERIRQ          0x0000001
#define DEV_NEED_LINKTIMER         0x0000002
#define DEV_HAS_LARGEDESC          0x0000004
#define DEV_HAS_HIGH_DMA           0x0000008
#define DEV_HAS_CHECKSUM           0x0000010
#define DEV_HAS_VLAN               0x0000020
#define DEV_HAS_MSI                0x0000040
#define DEV_HAS_MSI_X              0x0000080
#define DEV_HAS_POWER_CNTRL        0x0000100
#define DEV_HAS_STATISTICS_V1      0x0000200
#define DEV_HAS_STATISTICS_V2      0x0000400
#define DEV_HAS_STATISTICS_V3      0x0000800
#define DEV_HAS_STATISTICS_V12     0x0000600
#define DEV_HAS_STATISTICS_V123    0x0000e00
#define DEV_HAS_TEST_EXTENDED      0x0001000
#define DEV_HAS_MGMT_UNIT          0x0002000
#define DEV_HAS_CORRECT_MACADDR    0x0004000
#define DEV_HAS_COLLISION_FIX      0x0008000
#define DEV_HAS_PAUSEFRAME_TX_V1   0x0010000
#define DEV_HAS_PAUSEFRAME_TX_V2   0x0020000
#define DEV_HAS_PAUSEFRAME_TX_V3   0x0040000
#define DEV_NEED_TX_LIMIT          0x0080000
#define DEV_NEED_TX_LIMIT2         0x0180000
#define DEV_HAS_GEAR_MODE          0x0200000
#define DEV_NEED_PHY_INIT_FIX      0x0400000
#define DEV_NEED_LOW_POWER_FIX     0x0800000
#define DEV_NEED_MSI_FIX           0x1000000
enum ;
struct ring_desc ;
struct ring_desc_ex ;
union ring_type ;
#define FLAG_MASK_V1 0xffff0000
#define FLAG_MASK_V2 0xffffc000
#define LEN_MASK_V1 (0xffffffff ^ FLAG_MASK_V1)
#define LEN_MASK_V2 (0xffffffff ^ FLAG_MASK_V2)
#define NV_TX_LASTPACKET	(1<<16)
#define NV_TX_RETRYERROR	(1<<19)
#define NV_TX_RETRYCOUNT_MASK	(0xF<<20)
#define NV_TX_FORCED_INTERRUPT	(1<<24)
#define NV_TX_DEFERRED		(1<<26)
#define NV_TX_CARRIERLOST	(1<<27)
#define NV_TX_LATECOLLISION	(1<<28)
#define NV_TX_UNDERFLOW		(1<<29)
#define NV_TX_ERROR		(1<<30)
#define NV_TX_VALID		(1<<31)
#define NV_TX2_LASTPACKET	(1<<29)
#define NV_TX2_RETRYERROR	(1<<18)
#define NV_TX2_RETRYCOUNT_MASK	(0xF<<19)
#define NV_TX2_FORCED_INTERRUPT	(1<<30)
#define NV_TX2_DEFERRED		(1<<25)
#define NV_TX2_CARRIERLOST	(1<<26)
#define NV_TX2_LATECOLLISION	(1<<27)
#define NV_TX2_UNDERFLOW	(1<<28)
#define NV_TX2_ERROR		(1<<30)
#define NV_TX2_VALID		(1<<31)
#define NV_TX2_TSO		(1<<28)
#define NV_TX2_TSO_SHIFT	14
#define NV_TX2_TSO_MAX_SHIFT	14
#define NV_TX2_TSO_MAX_SIZE	(1<<NV_TX2_TSO_MAX_SHIFT)
#define NV_TX2_CHECKSUM_L3	(1<<27)
#define NV_TX2_CHECKSUM_L4	(1<<26)
#define NV_TX3_VLAN_TAG_PRESENT (1<<18)
#define NV_RX_DESCRIPTORVALID	(1<<16)
#define NV_RX_MISSEDFRAME	(1<<17)
#define NV_RX_SUBSTRACT1	(1<<18)
#define NV_RX_ERROR1		(1<<23)
#define NV_RX_ERROR2		(1<<24)
#define NV_RX_ERROR3		(1<<25)
#define NV_RX_ERROR4		(1<<26)
#define NV_RX_CRCERR		(1<<27)
#define NV_RX_OVERFLOW		(1<<28)
#define NV_RX_FRAMINGERR	(1<<29)
#define NV_RX_ERROR		(1<<30)
#define NV_RX_AVAIL		(1<<31)
#define NV_RX_ERROR_MASK	(NV_RX_ERROR1|NV_RX_ERROR2|NV_RX_ERROR3|NV_RX_ERROR4|NV_RX_CRCERR|NV_RX_OVERFLOW|NV_RX_FRAMINGERR)
#define NV_RX2_CHECKSUMMASK	(0x1C000000)
#define NV_RX2_CHECKSUM_IP	(0x10000000)
#define NV_RX2_CHECKSUM_IP_TCP	(0x14000000)
#define NV_RX2_CHECKSUM_IP_UDP	(0x18000000)
#define NV_RX2_DESCRIPTORVALID	(1<<29)
#define NV_RX2_SUBSTRACT1	(1<<25)
#define NV_RX2_ERROR1		(1<<18)
#define NV_RX2_ERROR2		(1<<19)
#define NV_RX2_ERROR3		(1<<20)
#define NV_RX2_ERROR4		(1<<21)
#define NV_RX2_CRCERR		(1<<22)
#define NV_RX2_OVERFLOW		(1<<23)
#define NV_RX2_FRAMINGERR	(1<<24)
#define NV_RX2_ERROR		(1<<30)
#define NV_RX2_AVAIL		(1<<31)
#define NV_RX2_ERROR_MASK	(NV_RX2_ERROR1|NV_RX2_ERROR2|NV_RX2_ERROR3|NV_RX2_ERROR4|NV_RX2_CRCERR|NV_RX2_OVERFLOW|NV_RX2_FRAMINGERR)
#define NV_RX3_VLAN_TAG_PRESENT (1<<16)
#define NV_RX3_VLAN_TAG_MASK	(0x0000FFFF)
#define NV_PCI_REGSZ_VER1	0x270
#define NV_PCI_REGSZ_VER2	0x2d4
#define NV_PCI_REGSZ_VER3	0x604
#define NV_PCI_REGSZ_MAX	0x604
#define NV_TXRX_RESET_DELAY	4
#define NV_TXSTOP_DELAY1	10
#define NV_TXSTOP_DELAY1MAX	500000
#define NV_TXSTOP_DELAY2	100
#define NV_RXSTOP_DELAY1	10
#define NV_RXSTOP_DELAY1MAX	500000
#define NV_RXSTOP_DELAY2	100
#define NV_SETUP5_DELAY		5
#define NV_SETUP5_DELAYMAX	50000
#define NV_POWERUP_DELAY	5
#define NV_POWERUP_DELAYMAX	5000
#define NV_MIIBUSY_DELAY	50
#define NV_MIIPHY_DELAY	10
#define NV_MIIPHY_DELAYMAX	10000
#define NV_MAC_RESET_DELAY	64
#define NV_WAKEUPPATTERNS	5
#define NV_WAKEUPMASKENTRIES	4
#define NV_WATCHDOG_TIMEO	(5*HZ)
#define RX_RING_DEFAULT		512
#define TX_RING_DEFAULT		256
#define RX_RING_MIN		128
#define TX_RING_MIN		64
#define RING_MAX_DESC_VER_1	1024
#define RING_MAX_DESC_VER_2_3	16384
#define NV_RX_HEADERS		(64)
#define NV_RX_ALLOC_PAD		(64)
#define NV_PKTLIMIT_1	ETH_DATA_LEN
#define NV_PKTLIMIT_2	9100
#define OOM_REFILL	(1+HZ/20)
#define POLL_WAIT	(1+HZ/100)
#define LINK_TIMEOUT	(3*HZ)
#define STATS_INTERVAL	(10*HZ)
#define DESC_VER_1	1
#define DESC_VER_2	2
#define DESC_VER_3	3
#define PHY_OUI_MARVELL		0x5043
#define PHY_OUI_CICADA		0x03f1
#define PHY_OUI_VITESSE		0x01c1
#define PHY_OUI_REALTEK		0x0732
#define PHY_OUI_REALTEK2	0x0020
#define PHYID1_OUI_MASK	0x03ff
#define PHYID1_OUI_SHFT	6
#define PHYID2_OUI_MASK	0xfc00
#define PHYID2_OUI_SHFT	10
#define PHYID2_MODEL_MASK		0x03f0
#define PHY_MODEL_REALTEK_8211		0x0110
#define PHY_REV_MASK			0x0001
#define PHY_REV_REALTEK_8211B		0x0000
#define PHY_REV_REALTEK_8211C		0x0001
#define PHY_MODEL_REALTEK_8201		0x0200
#define PHY_MODEL_MARVELL_E3016		0x0220
#define PHY_MARVELL_E3016_INITMASK	0x0300
#define PHY_CICADA_INIT1	0x0f000
#define PHY_CICADA_INIT2	0x0e00
#define PHY_CICADA_INIT3	0x01000
#define PHY_CICADA_INIT4	0x0200
#define PHY_CICADA_INIT5	0x0004
#define PHY_CICADA_INIT6	0x02000
#define PHY_VITESSE_INIT_REG1	0x1f
#define PHY_VITESSE_INIT_REG2	0x10
#define PHY_VITESSE_INIT_REG3	0x11
#define PHY_VITESSE_INIT_REG4	0x12
#define PHY_VITESSE_INIT_MSK1	0xc
#define PHY_VITESSE_INIT_MSK2	0x0180
#define PHY_VITESSE_INIT1	0x52b5
#define PHY_VITESSE_INIT2	0xaf8a
#define PHY_VITESSE_INIT3	0x8
#define PHY_VITESSE_INIT4	0x8f8a
#define PHY_VITESSE_INIT5	0xaf86
#define PHY_VITESSE_INIT6	0x8f86
#define PHY_VITESSE_INIT7	0xaf82
#define PHY_VITESSE_INIT8	0x0100
#define PHY_VITESSE_INIT9	0x8f82
#define PHY_VITESSE_INIT10	0x0
#define PHY_REALTEK_INIT_REG1	0x1f
#define PHY_REALTEK_INIT_REG2	0x19
#define PHY_REALTEK_INIT_REG3	0x13
#define PHY_REALTEK_INIT_REG4	0x14
#define PHY_REALTEK_INIT_REG5	0x18
#define PHY_REALTEK_INIT_REG6	0x11
#define PHY_REALTEK_INIT_REG7	0x01
#define PHY_REALTEK_INIT1	0x0000
#define PHY_REALTEK_INIT2	0x8e00
#define PHY_REALTEK_INIT3	0x0001
#define PHY_REALTEK_INIT4	0xad17
#define PHY_REALTEK_INIT5	0xfb54
#define PHY_REALTEK_INIT6	0xf5c7
#define PHY_REALTEK_INIT7	0x1000
#define PHY_REALTEK_INIT8	0x0003
#define PHY_REALTEK_INIT9	0x0008
#define PHY_REALTEK_INIT10	0x0005
#define PHY_REALTEK_INIT11	0x0200
#define PHY_REALTEK_INIT_MSK1	0x0003
#define PHY_GIGABIT	0x0100
#define PHY_TIMEOUT	0x1
#define PHY_ERROR	0x2
#define PHY_100	0x1
#define PHY_1000	0x2
#define PHY_HALF	0x100
#define NV_PAUSEFRAME_RX_CAPABLE 0x0001
#define NV_PAUSEFRAME_TX_CAPABLE 0x0002
#define NV_PAUSEFRAME_RX_ENABLE  0x0004
#define NV_PAUSEFRAME_TX_ENABLE  0x0008
#define NV_PAUSEFRAME_RX_REQ     0x0010
#define NV_PAUSEFRAME_TX_REQ     0x0020
#define NV_PAUSEFRAME_AUTONEG    0x0040
#define NV_MSI_X_MAX_VECTORS  8
#define NV_MSI_X_VECTORS_MASK 0x000f
#define NV_MSI_CAPABLE        0x0010
#define NV_MSI_X_CAPABLE      0x0020
#define NV_MSI_ENABLED        0x0040
#define NV_MSI_X_ENABLED      0x0080
#define NV_MSI_X_VECTOR_ALL   0x0
#define NV_MSI_X_VECTOR_RX    0x0
#define NV_MSI_X_VECTOR_TX    0x1
#define NV_MSI_X_VECTOR_OTHER 0x2
#define NV_MSI_PRIV_OFFSET 0x68
#define NV_MSI_PRIV_VALUE  0xffffffff
#define NV_RESTART_TX         0x1
#define NV_RESTART_RX         0x2
#define NV_TX_LIMIT_COUNT     16
#define NV_DYNAMIC_THRESHOLD        4
#define NV_DYNAMIC_MAX_QUIET_COUNT  2048
struct nv_ethtool_str ;
static const struct nv_ethtool_str nv_estats_str[] = ;
struct nv_ethtool_stats ;
#define NV_DEV_STATISTICS_V3_COUNT (sizeof(struct nv_ethtool_stats)/sizeof(u64))
#define NV_DEV_STATISTICS_V2_COUNT (NV_DEV_STATISTICS_V3_COUNT - 3)
#define NV_DEV_STATISTICS_V1_COUNT (NV_DEV_STATISTICS_V2_COUNT - 6)
#define NV_TEST_COUNT_BASE 3
#define NV_TEST_COUNT_EXTENDED 4
static const struct nv_ethtool_str nv_etests_str[] = ;
struct register_test ;
static const struct register_test nv_registers_test[] = ;
struct nv_skb_map ;
struct fe_priv ;
static int max_interrupt_work = 4;
enum ;
static int optimization_mode = NV_OPTIMIZATION_MODE_DYNAMIC;
static int poll_interval = -1;
enum ;
static int msi = NV_MSI_INT_ENABLED;
enum ;
static int msix = NV_MSIX_INT_ENABLED;
enum ;
static int dma_64bit = NV_DMA_64BIT_ENABLED;
enum ;
static int phy_cross = NV_CROSSOVER_DETECTION_DISABLED;
static int phy_power_down;
static inline struct fe_priv *get_nvpriv(struct net_device *dev)
static inline u8 __iomem *get_hwbase(struct net_device *dev)
static inline void pci_push(u8 __iomem *base)
static inline u32 nv_descr_getlength(struct ring_desc *prd, u32 v)
static inline u32 nv_descr_getlength_ex(struct ring_desc_ex *prd, u32 v)
static bool nv_optimized(struct fe_priv *np)
static int reg_delay(struct net_device *dev, int offset, u32 mask, u32 target,
int delay, int delaymax)
#define NV_SETUP_RX_RING 0x01
#define NV_SETUP_TX_RING 0x02
static inline u32 dma_low(dma_addr_t addr)
static inline u32 dma_high(dma_addr_t addr)
static void setup_hw_rings(struct net_device *dev, int rxtx_flags)
static void free_rings(struct net_device *dev)
static int using_multi_irqs(struct net_device *dev)
static void nv_txrx_gate(struct net_device *dev, bool gate)
static void nv_enable_irq(struct net_device *dev)
static void nv_disable_irq(struct net_device *dev)
static void nv_enable_hw_interrupts(struct net_device *dev, u32 mask)
static void nv_disable_hw_interrupts(struct net_device *dev, u32 mask)
static void nv_napi_enable(struct net_device *dev)
static void nv_napi_disable(struct net_device *dev)
#define MII_READ	(-1)
static int mii_rw(struct net_device *dev, int addr, int miireg, int value)
static int phy_reset(struct net_device *dev, u32 bmcr_setup)
static int init_realtek_8211b(struct net_device *dev, struct fe_priv *np)
static int init_realtek_8211c(struct net_device *dev, struct fe_priv *np)
static int init_realtek_8201(struct net_device *dev, struct fe_priv *np)
static int init_realtek_8201_cross(struct net_device *dev, struct fe_priv *np)
static int init_cicada(struct net_device *dev, struct fe_priv *np,
u32 phyinterface)
static int init_vitesse(struct net_device *dev, struct fe_priv *np)
static int phy_init(struct net_device *dev)
static void nv_start_rx(struct net_device *dev)
static void nv_stop_rx(struct net_device *dev)
static void nv_start_tx(struct net_device *dev)
static void nv_stop_tx(struct net_device *dev)
static void nv_start_rxtx(struct net_device *dev)
static void nv_stop_rxtx(struct net_device *dev)
static void nv_txrx_reset(struct net_device *dev)
static void nv_mac_reset(struct net_device *dev)
static void nv_get_hw_stats(struct net_device *dev)
static struct net_device_stats *nv_get_stats(struct net_device *dev)
static int nv_alloc_rx(struct net_device *dev)
static int nv_alloc_rx_optimized(struct net_device *dev)
static void nv_do_rx_refill(unsigned long data)
static void nv_init_rx(struct net_device *dev)
static void nv_init_tx(struct net_device *dev)
static int nv_init_ring(struct net_device *dev)
static void nv_unmap_txskb(struct fe_priv *np, struct nv_skb_map *tx_skb)
static int nv_release_txskb(struct fe_priv *np, struct nv_skb_map *tx_skb)
static void nv_drain_tx(struct net_device *dev)
static void nv_drain_rx(struct net_device *dev)
static void nv_drain_rxtx(struct net_device *dev)
static inline u32 nv_get_empty_tx_slots(struct fe_priv *np)
static void nv_legacybackoff_reseed(struct net_device *dev)
#define BACKOFF_SEEDSET_ROWS	8
#define BACKOFF_SEEDSET_LFSRS	15
static const u32 main_seedset[BACKOFF_SEEDSET_ROWS][BACKOFF_SEEDSET_LFSRS] = ;
static const u32 gear_seedset[BACKOFF_SEEDSET_ROWS][BACKOFF_SEEDSET_LFSRS] = ;
static void nv_gear_backoff_reseed(struct net_device *dev)
static netdev_tx_t nv_start_xmit(struct sk_buff *skb, struct net_device *dev)
static netdev_tx_t nv_start_xmit_optimized(struct sk_buff *skb,
struct net_device *dev)
static inline void nv_tx_flip_ownership(struct net_device *dev)
static int nv_tx_done(struct net_device *dev, int limit)
static int nv_tx_done_optimized(struct net_device *dev, int limit)
static void nv_tx_timeout(struct net_device *dev)
static int nv_getlen(struct net_device *dev, void *packet, int datalen)
static int nv_rx_process(struct net_device *dev, int limit)
static int nv_rx_process_optimized(struct net_device *dev, int limit)
static void set_bufsize(struct net_device *dev)
static int nv_change_mtu(struct net_device *dev, int new_mtu)
static void nv_copy_mac_to_hw(struct net_device *dev)
static int nv_set_mac_address(struct net_device *dev, void *addr)
static void nv_set_multicast(struct net_device *dev)
static void nv_update_pause(struct net_device *dev, u32 pause_flags)
static int nv_update_linkspeed(struct net_device *dev)
static void nv_linkchange(struct net_device *dev)
static void nv_link_irq(struct net_device *dev)
static void nv_msi_workaround(struct fe_priv *np)
static inline int nv_change_interrupt_mode(struct net_device *dev, int total_work)
static irqreturn_t nv_nic_irq(int foo, void *data)
static irqreturn_t nv_nic_irq_optimized(int foo, void *data)
static irqreturn_t nv_nic_irq_tx(int foo, void *data)
static int nv_napi_poll(struct napi_struct *napi, int budget)
static irqreturn_t nv_nic_irq_rx(int foo, void *data)
static irqreturn_t nv_nic_irq_other(int foo, void *data)
static irqreturn_t nv_nic_irq_test(int foo, void *data)
static void set_msix_vector_map(struct net_device *dev, u32 vector, u32 irqmask)
static int nv_request_irq(struct net_device *dev, int intr_test)
static void nv_free_irq(struct net_device *dev)
static void nv_do_nic_poll(unsigned long data)
static void nv_poll_controller(struct net_device *dev)
static void nv_do_stats_poll(unsigned long data)
static void nv_get_drvinfo(struct net_device *dev, struct ethtool_drvinfo *info)
static void nv_get_wol(struct net_device *dev, struct ethtool_wolinfo *wolinfo)
static int nv_set_wol(struct net_device *dev, struct ethtool_wolinfo *wolinfo)
static int nv_get_settings(struct net_device *dev, struct ethtool_cmd *ecmd)
static int nv_set_settings(struct net_device *dev, struct ethtool_cmd *ecmd)
#define FORCEDETH_REGS_VER	1
static int nv_get_regs_len(struct net_device *dev)
static void nv_get_regs(struct net_device *dev, struct ethtool_regs *regs, void *buf)
static int nv_nway_reset(struct net_device *dev)
static void nv_get_ringparam(struct net_device *dev, struct ethtool_ringparam* ring)
static int nv_set_ringparam(struct net_device *dev, struct ethtool_ringparam* ring)
static void nv_get_pauseparam(struct net_device *dev, struct ethtool_pauseparam* pause)
static int nv_set_pauseparam(struct net_device *dev, struct ethtool_pauseparam* pause)
static u32 nv_fix_features(struct net_device *dev, u32 features)
static int nv_set_features(struct net_device *dev, u32 features)
static int nv_get_sset_count(struct net_device *dev, int sset)
static void nv_get_ethtool_stats(struct net_device *dev, struct ethtool_stats *estats, u64 *buffer)
static int nv_link_test(struct net_device *dev)
static int nv_register_test(struct net_device *dev)
static int nv_interrupt_test(struct net_device *dev)
static int nv_loopback_test(struct net_device *dev)
static void nv_self_test(struct net_device *dev, struct ethtool_test *test, u64 *buffer)
static void nv_get_strings(struct net_device *dev, u32 stringset, u8 *buffer)
static const struct ethtool_ops ops = ;
static void nv_vlan_rx_register(struct net_device *dev, struct vlan_group *grp)
static int nv_mgmt_acquire_sema(struct net_device *dev)
static void nv_mgmt_release_sema(struct net_device *dev)
static int nv_mgmt_get_version(struct net_device *dev)
static int nv_open(struct net_device *dev)
static int nv_close(struct net_device *dev)
static const struct net_device_ops nv_netdev_ops = ;
static const struct net_device_ops nv_netdev_ops_optimized = ;
static int __devinit nv_probe(struct pci_dev *pci_dev, const struct pci_device_id *id)
static void nv_restore_phy(struct net_device *dev)
static void nv_restore_mac_addr(struct pci_dev *pci_dev)
static void __devexit nv_remove(struct pci_dev *pci_dev)
static int nv_suspend(struct device *device)
static int nv_resume(struct device *device)
static SIMPLE_DEV_PM_OPS(nv_pm_ops, nv_suspend, nv_resume);
#define NV_PM_OPS (&nv_pm_ops)
#define NV_PM_OPS NULL
static void nv_shutdown(struct pci_dev *pdev)
#define nv_shutdown NULL
static DEFINE_PCI_DEVICE_TABLE(pci_tbl) = ;
static struct pci_driver driver = ;
static int __init init_nic(void)
static void __exit exit_nic(void)
module_param(max_interrupt_work, int, 0);
MODULE_PARM_DESC(max_interrupt_work, "forcedeth maximum events handled per interrupt");
module_param(optimization_mode, int, 0);
MODULE_PARM_DESC(optimization_mode, "In throughput mode (0), every tx & rx packet will generate an interrupt. In CPU mode (1), interrupts are controlled by a timer. In dynamic mode (2), the mode toggles between throughput and CPU mode based on network load.");
module_param(poll_interval, int, 0);
MODULE_PARM_DESC(poll_interval, "Interval determines how frequent timer interrupt is generated by [(time_in_micro_secs * 100) / (2^10)]. Min is 0 and Max is 65535.");
module_param(msi, int, 0);
MODULE_PARM_DESC(msi, "MSI interrupts are enabled by setting to 1 and disabled by setting to 0.");
module_param(msix, int, 0);
MODULE_PARM_DESC(msix, "MSIX interrupts are enabled by setting to 1 and disabled by setting to 0.");
module_param(dma_64bit, int, 0);
MODULE_PARM_DESC(dma_64bit, "High DMA is enabled by setting to 1 and disabled by setting to 0.");
module_param(phy_cross, int, 0);
MODULE_PARM_DESC(phy_cross, "Phy crossover detection for Realtek 8201 phy is enabled by setting to 1 and disabled by setting to 0.");
module_param(phy_power_down, int, 0);
MODULE_PARM_DESC(phy_power_down, "Power down phy and disable link when interface is down (1), or leave phy powered up (0).");
MODULE_AUTHOR("Manfred Spraul <manfred@colorfullife.com>");
MODULE_DESCRIPTION("Reverse Engineered nForce ethernet driver");
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(pci, pci_tbl);
module_init(init_nic);
module_exit(exit_nic);
