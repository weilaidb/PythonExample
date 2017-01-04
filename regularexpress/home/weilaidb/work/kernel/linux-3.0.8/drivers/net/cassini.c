#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define cas_page_map(x)      kmap_atomic((x), KM_SKB_DATA_SOFTIRQ)
#define cas_page_unmap(x)    kunmap_atomic((x), KM_SKB_DATA_SOFTIRQ)
#define CAS_NCPUS            num_online_cpus()
#define cas_skb_release(x)  netif_rx(x)
#define USE_HP_WORKAROUND
#define HP_WORKAROUND_DEFAULT
#define CAS_HP_ALT_FIRMWARE   cas_prog_null
#define USE_TX_COMPWB
#define USE_CSMA_CD_PROTO
#define USE_RX_BLANK
#undef USE_ENTROPY_DEV
#undef  USE_PCI_INTB
#undef  USE_PCI_INTC
#undef  USE_PCI_INTD
#undef  USE_QOS
#undef  USE_VPD_DEBUG
#define USE_PAGE_ORDER
#define RX_DONT_BATCH  0
#define RX_COPY_ALWAYS 0
#define RX_COPY_MIN    64
#undef  RX_COUNT_BUFFERS
#define DRV_MODULE_NAME		"cassini"
#define DRV_MODULE_VERSION	"1.6"
#define DRV_MODULE_RELDATE	"21 May 2008"
#define CAS_DEF_MSG_ENABLE	  \
(NETIF_MSG_DRV		| \
NETIF_MSG_PROBE	| \
NETIF_MSG_LINK		| \
NETIF_MSG_TIMER	| \
NETIF_MSG_IFDOWN	| \
NETIF_MSG_IFUP		| \
NETIF_MSG_RX_ERR	| \
NETIF_MSG_TX_ERR)
#define CAS_TX_TIMEOUT			(HZ)
#define CAS_LINK_TIMEOUT                (22*HZ/10)
#define CAS_LINK_FAST_TIMEOUT           (1)
#define STOP_TRIES_PHY 1000
#define STOP_TRIES     5000
#define CAS_MIN_FRAME			97
#define CAS_1000MB_MIN_FRAME            255
#define CAS_MIN_MTU                     60
#define CAS_MAX_MTU                     min(((cp->page_size << 1) - 0x50), 9000)
#if 1
#define CAS_RESET_MTU                   1
#define CAS_RESET_ALL                   2
#define CAS_RESET_SPARE                 3
static char version[] __devinitdata =
DRV_MODULE_NAME ".c:v" DRV_MODULE_VERSION " (" DRV_MODULE_RELDATE ")\n";
static int cassini_debug = -1;
static int link_mode;
MODULE_AUTHOR("Adrian Sun (asun@darksunrising.com)");
MODULE_DESCRIPTION("Sun Cassini(+) ethernet driver");
MODULE_LICENSE("GPL");
MODULE_FIRMWARE("sun/cassini.bin");
module_param(cassini_debug, int, 0);
MODULE_PARM_DESC(cassini_debug, "Cassini bitmapped debugging message enable value");
module_param(link_mode, int, 0);
MODULE_PARM_DESC(link_mode, "default link mode");
#define DEFAULT_LINKDOWN_TIMEOUT 5
static int linkdown_timeout = DEFAULT_LINKDOWN_TIMEOUT;
module_param(linkdown_timeout, int, 0);
MODULE_PARM_DESC(linkdown_timeout,
"min reset interval in sec. for PCS linkdown issue; disabled if not positive");
static int link_transition_timeout;
static u16 link_modes[] __devinitdata = ;
static DEFINE_PCI_DEVICE_TABLE(cas_pci_tbl) = ;
MODULE_DEVICE_TABLE(pci, cas_pci_tbl);
static void cas_set_link_modes(struct cas *cp);
static inline void cas_lock_tx(struct cas *cp)
static inline void cas_lock_all(struct cas *cp)
#define cas_lock_all_save(cp, flags) \
do  while (0)
static inline void cas_unlock_tx(struct cas *cp)
static inline void cas_unlock_all(struct cas *cp)
#define cas_unlock_all_restore(cp, flags) \
do  while (0)
static void cas_disable_irq(struct cas *cp, const int ring)
static inline void cas_mask_intr(struct cas *cp)
static void cas_enable_irq(struct cas *cp, const int ring)
static inline void cas_unmask_intr(struct cas *cp)
static inline void cas_entropy_gather(struct cas *cp)
static inline void cas_entropy_reset(struct cas *cp)
static u16 cas_phy_read(struct cas *cp, int reg)
static int cas_phy_write(struct cas *cp, int reg, u16 val)
static void cas_phy_powerup(struct cas *cp)
static void cas_phy_powerdown(struct cas *cp)
static int cas_page_free(struct cas *cp, cas_page_t *page)
#define RX_USED_ADD(x, y)       ((x)->used += (y))
#define RX_USED_SET(x, y)       ((x)->used  = (y))
#define RX_USED_ADD(x, y)
#define RX_USED_SET(x, y)
static cas_page_t *cas_page_alloc(struct cas *cp, const gfp_t flags)
static void cas_spare_init(struct cas *cp)
static void cas_spare_free(struct cas *cp)
static void cas_spare_recover(struct cas *cp, const gfp_t flags)
static cas_page_t *cas_page_dequeue(struct cas *cp)
static void cas_mif_poll(struct cas *cp, const int enable)
static void cas_begin_auto_negotiation(struct cas *cp, struct ethtool_cmd *ep)
static int cas_reset_mii_phy(struct cas *cp)
static int cas_saturn_firmware_init(struct cas *cp)
static void cas_saturn_firmware_load(struct cas *cp)
static void cas_phy_init(struct cas *cp)
static int cas_pcs_link_check(struct cas *cp)
static int cas_pcs_interrupt(struct net_device *dev,
struct cas *cp, u32 status)
static int cas_txmac_interrupt(struct net_device *dev,
struct cas *cp, u32 status)
static void cas_load_firmware(struct cas *cp, cas_hp_inst_t *firmware)
static void cas_init_rx_dma(struct cas *cp)
static inline void cas_rxc_init(struct cas_rx_comp *rxc)
static inline cas_page_t *cas_page_spare(struct cas *cp, const int index)
static cas_page_t *cas_page_swap(struct cas *cp, const int ring,
const int index)
static void cas_clean_rxds(struct cas *cp)
static void cas_clean_rxcs(struct cas *cp)
static int cas_rxmac_interrupt(struct net_device *dev, struct cas *cp,
u32 status)
static int cas_mac_interrupt(struct net_device *dev, struct cas *cp,
u32 status)
static inline int cas_mdio_link_not_up(struct cas *cp)
static int cas_mii_link_check(struct cas *cp, const u16 bmsr)
static int cas_mif_interrupt(struct net_device *dev, struct cas *cp,
u32 status)
static int cas_pci_interrupt(struct net_device *dev, struct cas *cp,
u32 status)
static int cas_abnormal_irq(struct net_device *dev, struct cas *cp,
u32 status)
#define CAS_TABORT(x)      (((x)->cas_flags & CAS_FLAG_TARGET_ABORT) ? 2 : 1)
#define CAS_ROUND_PAGE(x)  (((x) + PAGE_SIZE - 1) & PAGE_MASK)
static inline int cas_calc_tabort(struct cas *cp, const unsigned long addr,
const int len)
static inline void cas_tx_ringN(struct cas *cp, int ring, int limit)
static void cas_tx(struct net_device *dev, struct cas *cp,
u32 status)
static int cas_rx_process_pkt(struct cas *cp, struct cas_rx_comp *rxc,
int entry, const u64 *words,
struct sk_buff **skbref)
static inline void cas_rx_flow_pkt(struct cas *cp, const u64 *words,
struct sk_buff *skb)
static void cas_post_page(struct cas *cp, const int ring, const int index)
static int cas_post_rxds_ringN(struct cas *cp, int ring, int num)
static int cas_rx_ringN(struct cas *cp, int ring, int budget)
static void cas_post_rxcs_ringN(struct net_device *dev,
struct cas *cp, int ring)
#if defined(USE_PCI_INTC) || defined(USE_PCI_INTD)
static inline void cas_handle_irqN(struct net_device *dev,
struct cas *cp, const u32 status,
const int ring)
static irqreturn_t cas_interruptN(int irq, void *dev_id)
static inline void cas_handle_irq1(struct cas *cp, const u32 status)
static irqreturn_t cas_interrupt1(int irq, void *dev_id)
static inline void cas_handle_irq(struct net_device *dev,
struct cas *cp, const u32 status)
static irqreturn_t cas_interrupt(int irq, void *dev_id)
static int cas_poll(struct napi_struct *napi, int budget)
static void cas_netpoll(struct net_device *dev)
static void cas_tx_timeout(struct net_device *dev)
static inline int cas_intme(int ring, int entry)
static void cas_write_txd(struct cas *cp, int ring, int entry,
dma_addr_t mapping, int len, u64 ctrl, int last)
static inline void *tx_tiny_buf(struct cas *cp, const int ring,
const int entry)
static inline dma_addr_t tx_tiny_map(struct cas *cp, const int ring,
const int entry, const int tentry)
static inline int cas_xmit_tx_ringN(struct cas *cp, int ring,
struct sk_buff *skb)
static netdev_tx_t cas_start_xmit(struct sk_buff *skb, struct net_device *dev)
static void cas_init_tx_dma(struct cas *cp)
static inline void cas_init_dma(struct cas *cp)
static void cas_process_mc_list(struct cas *cp)
static u32 cas_setup_multicast(struct cas *cp)
static void cas_clear_mac_err(struct cas *cp)
static void cas_mac_reset(struct cas *cp)
static void cas_init_mac(struct cas *cp)
static void cas_init_pause_thresholds(struct cas *cp)
static int cas_vpd_match(const void __iomem *p, const char *str)
static int cas_get_vpd_info(struct cas *cp, unsigned char *dev_addr,
const int offset)
static void cas_check_pci_invariants(struct cas *cp)
static int cas_check_invariants(struct cas *cp)
static inline void cas_start_dma(struct cas *cp)
static void cas_read_pcs_link_mode(struct cas *cp, int *fd, int *spd,
int *pause)
static void cas_read_mii_link_mode(struct cas *cp, int *fd, int *spd,
int *pause)
static void cas_set_link_modes(struct cas *cp)
static void cas_init_hw(struct cas *cp, int restart_link)
static void cas_hard_reset(struct cas *cp)
static void cas_global_reset(struct cas *cp, int blkflag)
static void cas_reset(struct cas *cp, int blkflag)
static void cas_shutdown(struct cas *cp)
static int cas_change_mtu(struct net_device *dev, int new_mtu)
static void cas_clean_txd(struct cas *cp, int ring)
static inline void cas_free_rx_desc(struct cas *cp, int ring)
static void cas_free_rxds(struct cas *cp)
static void cas_clean_rings(struct cas *cp)
static inline int cas_alloc_rx_desc(struct cas *cp, int ring)
static int cas_alloc_rxds(struct cas *cp)
static void cas_reset_task(struct work_struct *work)
static void cas_link_timer(unsigned long data)
static void cas_tx_tiny_free(struct cas *cp)
static int cas_tx_tiny_alloc(struct cas *cp)
static int cas_open(struct net_device *dev)
static int cas_close(struct net_device *dev)
static struct  ethtool_cassini_statnames[] = ;
#define CAS_NUM_STAT_KEYS ARRAY_SIZE(ethtool_cassini_statnames)
static struct  ethtool_register_table[] = ;
#define CAS_REG_LEN 	ARRAY_SIZE(ethtool_register_table)
#define CAS_MAX_REGS 	(sizeof (u32)*CAS_REG_LEN)
static void cas_read_regs(struct cas *cp, u8 *ptr, int len)
static struct net_device_stats *cas_get_stats(struct net_device *dev)
static void cas_set_multicast(struct net_device *dev)
static void cas_get_drvinfo(struct net_device *dev, struct ethtool_drvinfo *info)
static int cas_get_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static int cas_set_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static int cas_nway_reset(struct net_device *dev)
static u32 cas_get_link(struct net_device *dev)
static u32 cas_get_msglevel(struct net_device *dev)
static void cas_set_msglevel(struct net_device *dev, u32 value)
static int cas_get_regs_len(struct net_device *dev)
static void cas_get_regs(struct net_device *dev, struct ethtool_regs *regs,
void *p)
static int cas_get_sset_count(struct net_device *dev, int sset)
static void cas_get_strings(struct net_device *dev, u32 stringset, u8 *data)
static void cas_get_ethtool_stats(struct net_device *dev,
struct ethtool_stats *estats, u64 *data)
static const struct ethtool_ops cas_ethtool_ops = ;
static int cas_ioctl(struct net_device *dev, struct ifreq *ifr, int cmd)
static void __devinit cas_program_bridge(struct pci_dev *cas_pdev)
static const struct net_device_ops cas_netdev_ops = ;
static int __devinit cas_init_one(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit cas_remove_one(struct pci_dev *pdev)
static int cas_suspend(struct pci_dev *pdev, pm_message_t state)
static int cas_resume(struct pci_dev *pdev)
static struct pci_driver cas_driver = ;
static int __init cas_init(void)
static void __exit cas_cleanup(void)
module_init(cas_init);
module_exit(cas_cleanup);
