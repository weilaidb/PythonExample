#define DRIVER_NAME	"pxa168-eth"
#define DRIVER_VERSION	"0.3"
#define PHY_ADDRESS		0x0000
#define SMI			0x0010
#define PORT_CONFIG		0x0400
#define PORT_CONFIG_EXT		0x0408
#define PORT_COMMAND		0x0410
#define PORT_STATUS		0x0418
#define HTPR			0x0428
#define SDMA_CONFIG		0x0440
#define SDMA_CMD		0x0448
#define INT_CAUSE		0x0450
#define INT_W_CLEAR		0x0454
#define INT_MASK		0x0458
#define ETH_F_RX_DESC_0		0x0480
#define ETH_C_RX_DESC_0		0x04A0
#define ETH_C_TX_DESC_1		0x04E4
#define SMI_BUSY		(1 << 28)
#define SMI_R_VALID		(1 << 27)
#define SMI_OP_W		(0 << 26)
#define SMI_OP_R		(1 << 26)
#define PHY_WAIT_ITERATIONS	10
#define PXA168_ETH_PHY_ADDR_DEFAULT	0
#define BUF_OWNED_BY_DMA	(1 << 31)
#define RX_EN_INT		(1 << 23)
#define RX_FIRST_DESC		(1 << 17)
#define RX_LAST_DESC		(1 << 16)
#define RX_ERROR		(1 << 15)
#define TX_EN_INT		(1 << 23)
#define TX_GEN_CRC		(1 << 22)
#define TX_ZERO_PADDING		(1 << 18)
#define TX_FIRST_DESC		(1 << 17)
#define TX_LAST_DESC		(1 << 16)
#define TX_ERROR		(1 << 15)
#define SDMA_CMD_AT		(1 << 31)
#define SDMA_CMD_TXDL		(1 << 24)
#define SDMA_CMD_TXDH		(1 << 23)
#define SDMA_CMD_AR		(1 << 15)
#define SDMA_CMD_ERD		(1 << 7)
#define PCR_HS			(1 << 12)
#define PCR_EN			(1 << 7)
#define PCR_PM			(1 << 0)
#define PCXR_2BSM		(1 << 28)
#define PCXR_DSCP_EN		(1 << 21)
#define PCXR_MFL_1518		(0 << 14)
#define PCXR_MFL_1536		(1 << 14)
#define PCXR_MFL_2048		(2 << 14)
#define PCXR_MFL_64K		(3 << 14)
#define PCXR_FLP		(1 << 11)
#define PCXR_PRIO_TX_OFF	3
#define PCXR_TX_HIGH_PRI	(7 << PCXR_PRIO_TX_OFF)
#define SDCR_BSZ_OFF		12
#define SDCR_BSZ8		(3 << SDCR_BSZ_OFF)
#define SDCR_BSZ4		(2 << SDCR_BSZ_OFF)
#define SDCR_BSZ2		(1 << SDCR_BSZ_OFF)
#define SDCR_BSZ1		(0 << SDCR_BSZ_OFF)
#define SDCR_BLMR		(1 << 6)
#define SDCR_BLMT		(1 << 7)
#define SDCR_RIFB		(1 << 9)
#define SDCR_RC_OFF		2
#define SDCR_RC_MAX_RETRANS	(0xf << SDCR_RC_OFF)
#define ICR_RXBUF		(1 << 0)
#define ICR_TXBUF_H		(1 << 2)
#define ICR_TXBUF_L		(1 << 3)
#define ICR_TXEND_H		(1 << 6)
#define ICR_TXEND_L		(1 << 7)
#define ICR_RXERR		(1 << 8)
#define ICR_TXERR_H		(1 << 10)
#define ICR_TXERR_L		(1 << 11)
#define ICR_TX_UDR		(1 << 13)
#define ICR_MII_CH		(1 << 28)
#define ALL_INTS (ICR_TXBUF_H  | ICR_TXBUF_L  | ICR_TX_UDR |\
ICR_TXERR_H  | ICR_TXERR_L |\
ICR_TXEND_H  | ICR_TXEND_L |\
ICR_RXBUF | ICR_RXERR  | ICR_MII_CH)
#define ETH_HW_IP_ALIGN		2
#define NUM_RX_DESCS		64
#define NUM_TX_DESCS		64
#define HASH_ADD		0
#define HASH_DELETE		1
#define HASH_ADDR_TABLE_SIZE	0x4000
#define HOP_NUMBER		12
#define PORT_SPEED_100		(1 << 0)
#define FULL_DUPLEX		(1 << 1)
#define FLOW_CONTROL_ENABLED	(1 << 2)
#define LINK_UP			(1 << 3)
#define WORK_LINK		(1 << 0)
#define WORK_TX_DONE		(1 << 1)
#define SKB_DMA_REALIGN		((PAGE_SIZE - NET_SKB_PAD) % SMP_CACHE_BYTES)
struct rx_desc ;
struct tx_desc ;
struct pxa168_eth_private ;
struct addr_table_entry ;
enum hash_table_entry ;
static int pxa168_get_settings(struct net_device *dev, struct ethtool_cmd *cmd);
static int pxa168_set_settings(struct net_device *dev, struct ethtool_cmd *cmd);
static int pxa168_init_hw(struct pxa168_eth_private *pep);
static void eth_port_reset(struct net_device *dev);
static void eth_port_start(struct net_device *dev);
static int pxa168_eth_open(struct net_device *dev);
static int pxa168_eth_stop(struct net_device *dev);
static int ethernet_phy_setup(struct net_device *dev);
static inline u32 rdl(struct pxa168_eth_private *pep, int offset)
static inline void wrl(struct pxa168_eth_private *pep, int offset, u32 data)
static void abort_dma(struct pxa168_eth_private *pep)
static int ethernet_phy_get(struct pxa168_eth_private *pep)
static void ethernet_phy_set_addr(struct pxa168_eth_private *pep, int phy_addr)
static void ethernet_phy_reset(struct pxa168_eth_private *pep)
static void rxq_refill(struct net_device *dev)
static inline void rxq_refill_timer_wrapper(unsigned long data)
static inline u8 flip_8_bits(u8 x)
static void nibble_swap_every_byte(unsigned char *mac_addr)
static void inverse_every_nibble(unsigned char *mac_addr)
static u32 hash_function(unsigned char *mac_addr_orig)
static int add_del_hash_entry(struct pxa168_eth_private *pep,
unsigned char *mac_addr,
u32 rd, u32 skip, int del)
static void update_hash_table_mac_address(struct pxa168_eth_private *pep,
unsigned char *oaddr,
unsigned char *addr)
static int init_hash_table(struct pxa168_eth_private *pep)
static void pxa168_eth_set_rx_mode(struct net_device *dev)
static int pxa168_eth_set_mac_address(struct net_device *dev, void *addr)
static void eth_port_start(struct net_device *dev)
static void eth_port_reset(struct net_device *dev)
static int txq_reclaim(struct net_device *dev, int force)
static void pxa168_eth_tx_timeout(struct net_device *dev)
static void pxa168_eth_tx_timeout_task(struct work_struct *work)
static int rxq_process(struct net_device *dev, int budget)
static int pxa168_eth_collect_events(struct pxa168_eth_private *pep,
struct net_device *dev)
static void handle_link_event(struct pxa168_eth_private *pep)
static irqreturn_t pxa168_eth_int_handler(int irq, void *dev_id)
static void pxa168_eth_recalc_skb_size(struct pxa168_eth_private *pep)
static int set_port_config_ext(struct pxa168_eth_private *pep)
static int pxa168_init_hw(struct pxa168_eth_private *pep)
static int rxq_init(struct net_device *dev)
static void rxq_deinit(struct net_device *dev)
static int txq_init(struct net_device *dev)
static void txq_deinit(struct net_device *dev)
static int pxa168_eth_open(struct net_device *dev)
static int pxa168_eth_stop(struct net_device *dev)
static int pxa168_eth_change_mtu(struct net_device *dev, int mtu)
static int eth_alloc_tx_desc_index(struct pxa168_eth_private *pep)
static int pxa168_rx_poll(struct napi_struct *napi, int budget)
static int pxa168_eth_start_xmit(struct sk_buff *skb, struct net_device *dev)
static int smi_wait_ready(struct pxa168_eth_private *pep)
static int pxa168_smi_read(struct mii_bus *bus, int phy_addr, int regnum)
static int pxa168_smi_write(struct mii_bus *bus, int phy_addr, int regnum,
u16 value)
static int pxa168_eth_do_ioctl(struct net_device *dev, struct ifreq *ifr,
int cmd)
static struct phy_device *phy_scan(struct pxa168_eth_private *pep, int phy_addr)
static void phy_init(struct pxa168_eth_private *pep, int speed, int duplex)
static int ethernet_phy_setup(struct net_device *dev)
static int pxa168_get_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static int pxa168_set_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static void pxa168_get_drvinfo(struct net_device *dev,
struct ethtool_drvinfo *info)
static const struct ethtool_ops pxa168_ethtool_ops = ;
static const struct net_device_ops pxa168_eth_netdev_ops = ;
static int pxa168_eth_probe(struct platform_device *pdev)
static int pxa168_eth_remove(struct platform_device *pdev)
static void pxa168_eth_shutdown(struct platform_device *pdev)
static int pxa168_eth_resume(struct platform_device *pdev)
static int pxa168_eth_suspend(struct platform_device *pdev, pm_message_t state)
#define pxa168_eth_resume NULL
#define pxa168_eth_suspend NULL
static struct platform_driver pxa168_eth_driver = ;
static int __init pxa168_init_module(void)
static void __exit pxa168_cleanup_module(void)
module_init(pxa168_init_module);
module_exit(pxa168_cleanup_module);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Ethernet driver for Marvell PXA168");
MODULE_ALIAS("platform:pxa168_eth");
