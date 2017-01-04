#define __JME_H_INCLUDED__
#define DRV_NAME	"jme"
#define DRV_VERSION	"1.0.8"
#define PFX		DRV_NAME ": "
#define PCI_DEVICE_ID_JMICRON_JMC250	0x0250
#define PCI_DEVICE_ID_JMICRON_JMC260	0x0260
#define JME_DEF_MSG_ENABLE \
(NETIF_MSG_PROBE | \
NETIF_MSG_LINK | \
NETIF_MSG_RX_ERR | \
NETIF_MSG_TX_ERR | \
NETIF_MSG_HW)
#define tx_dbg(priv, fmt, args...)					\
printk(KERN_DEBUG "%s: " fmt, (priv)->dev->name, ##args)
#define tx_dbg(priv, fmt, args...)					\
do  while (0)
#define PCI_DCSR_MRRS		0x59
#define PCI_DCSR_MRRS_MASK	0x70
enum pci_dcsr_mrrs_vals ;
#define PCI_SPI			0xB0
enum pci_spi_bits ;
struct jme_spi_op ;
enum jme_spi_op_bits ;
#define HALF_US 500
#define JMESPIIOCTL	SIOCDEVPRIVATE
#define PCI_PRIV_PE1		0xE4
enum pci_priv_pe1_bit_masks ;
enum pci_priv_pe1_values ;
enum dynamic_pcc_values ;
struct dynpcc_info ;
#define PCC_INTERVAL_US	100000
#define PCC_INTERVAL (HZ / (1000000 / PCC_INTERVAL_US))
#define PCC_P3_THRESHOLD (2 * 1024 * 1024)
#define PCC_P2_THRESHOLD 800
#define PCC_INTR_THRESHOLD 800
#define PCC_TX_TO 1000
#define PCC_TX_CNT 8
#define RING_DESC_ALIGN		16
#define TX_DESC_SIZE		16
#define TX_RING_NR		8
#define TX_RING_ALLOC_SIZE(s)	((s * TX_DESC_SIZE) + RING_DESC_ALIGN)
struct txdesc ;
enum jme_txdesc_flags_bits ;
#define TXDESC_MSS_SHIFT	2
enum jme_txwbdesc_flags_bits ;
#define RX_DESC_SIZE		16
#define RX_RING_NR		4
#define RX_RING_ALLOC_SIZE(s)	((s * RX_DESC_SIZE) + RING_DESC_ALIGN)
#define RX_BUF_DMA_ALIGN	8
#define RX_PREPAD_SIZE		10
#define ETH_CRC_LEN		2
#define RX_VLANHDR_LEN		2
#define RX_EXTRA_LEN		(RX_PREPAD_SIZE + \
ETH_HLEN + \
ETH_CRC_LEN + \
RX_VLANHDR_LEN + \
RX_BUF_DMA_ALIGN)
struct rxdesc ;
enum jme_rxdesc_flags_bits ;
enum jme_rxwbdesc_flags_bits ;
enum jme_rxwbdesc_desccnt_mask ;
enum jme_rxwbdesc_errstat_bits ;
struct jme_buffer_info ;
struct jme_ring ;
#define NET_STAT(priv) (priv->dev->stats)
#define NETDEV_GET_STATS(netdev, fun_ptr)
#define DECLARE_NET_DEVICE_STATS
#define DECLARE_NAPI_STRUCT struct napi_struct napi;
#define NETIF_NAPI_SET(dev, napis, pollfn, q) \
netif_napi_add(dev, napis, pollfn, q);
#define JME_NAPI_HOLDER(holder) struct napi_struct *holder
#define JME_NAPI_WEIGHT(w) int w
#define JME_NAPI_WEIGHT_VAL(w) w
#define JME_NAPI_WEIGHT_SET(w, r)
#define JME_RX_COMPLETE(dev, napis) napi_complete(napis)
#define JME_NAPI_ENABLE(priv) napi_enable(&priv->napi);
#define JME_NAPI_DISABLE(priv) \
if (!napi_disable_pending(&priv->napi)) \
napi_disable(&priv->napi);
#define JME_RX_SCHEDULE_PREP(priv) \
napi_schedule_prep(&priv->napi)
#define JME_RX_SCHEDULE(priv) \
__napi_schedule(&priv->napi);
struct jme_adapter ;
enum jme_flags_bits ;
#define TX_TIMEOUT		(5 * HZ)
#define JME_REG_LEN		0x500
#define MAX_ETHERNET_JUMBO_PACKET_SIZE 9216
static inline struct jme_adapter*
jme_napi_priv(struct napi_struct *napi)
enum jme_iomap_offsets ;
enum jme_iomap_lens ;
enum jme_iomap_regs ;
enum jme_txcs_bits ;
enum jme_txcs_value ;
#define JME_TX_DISABLE_TIMEOUT 10
enum jme_txmcs_bit_masks ;
enum jme_txmcs_values ;
enum jme_txpfc_bits_masks ;
enum jme_txtrhd_bits_masks ;
enum jme_txtrhd_shifts ;
enum jme_txtrhd_values ;
enum jme_rxcs_bit_masks ;
enum jme_rxcs_values ;
#define JME_RX_DISABLE_TIMEOUT 10
enum jme_rxmcs_bits ;
#define WAKEUP_FRAME_NR	8
#define WAKEUP_FRAME_MASK_DWNR	4
enum jme_wfoi_bit_masks ;
enum jme_wfoi_shifts ;
enum jme_smi_bit_mask ;
enum jme_smi_bit_shift ;
static inline u32 smi_reg_addr(int x)
static inline u32 smi_phy_addr(int x)
#define JME_PHY_TIMEOUT 100
#define JME_PHY_REG_NR 32
enum jme_ghc_bit_mask ;
enum jme_ghc_speed_val ;
enum jme_ghc_to_clk ;
enum jme_ghc_txmac_clk ;
enum jme_pmcs_bit_masks ;
enum jme_phy_pwr_bit_masks ;
enum jme_phy_link_bit_mask ;
enum jme_phy_link_speed_val ;
#define JME_SPDRSV_TIMEOUT	500
enum jme_smbcsr_bit_mask ;
enum jme_smbintf_bit_mask ;
enum jme_smbintf_vals ;
enum jme_smbintf_shifts ;
#define JME_EEPROM_RELOAD_TIMEOUT 2000
#define JME_SMB_BUSY_TIMEOUT 20
#define JME_SMB_LEN 256
#define JME_EEPROM_MAGIC 0x250
enum jme_tmcsr_bit_masks ;
enum jme_gpreg0_masks ;
enum jme_gpreg0_vals ;
enum jme_gpreg1_bit_masks ;
enum jme_gpreg1_vals ;
enum jme_interrupt_bits ;
static const u32 INTR_ENABLE = INTR_SWINTR |
INTR_TMINTR |
INTR_LINKCH |
INTR_PCCRX0TO |
INTR_PCCRX0 |
INTR_PCCTXTO |
INTR_PCCTX |
INTR_RX0EMP;
enum jme_pccrx_masks ;
enum jme_pcctx_masks ;
enum jme_pccrx_shifts ;
enum jme_pcctx_shifts ;
enum jme_pcctx_bits ;
enum jme_chipmode_bit_masks ;
enum jme_chipmode_shifts ;
enum jme_apmc_bits ;
enum jme_apmc_values ;
#define APMC_PHP_SHUTDOWN_DELAY	(10 * 1000 * 1000)
static char *MAC_REG_NAME[] = ;
static char *PE_REG_NAME[] = ;
static char *MISC_REG_NAME[] = ;
static inline void reg_dbg(const struct jme_adapter *jme,
const char *msg, u32 val, u32 reg)
static inline void reg_dbg(const struct jme_adapter *jme,
const char *msg, u32 val, u32 reg)
static inline u32 jread32(struct jme_adapter *jme, u32 reg)
static inline void jwrite32(struct jme_adapter *jme, u32 reg, u32 val)
static inline void jwrite32f(struct jme_adapter *jme, u32 reg, u32 val)
enum jme_phy_reg17_bit_masks ;
enum jme_phy_reg17_vals ;
#define BMSR_ANCOMP               0x0020
static inline int is_buggy250(unsigned short device, u8 chiprev)
static inline int new_phy_power_ctrl(u8 chip_main_rev)
static int jme_set_settings(struct net_device *netdev,
struct ethtool_cmd *ecmd);
static void jme_set_unicastaddr(struct net_device *netdev);
static void jme_set_multi(struct net_device *netdev);
