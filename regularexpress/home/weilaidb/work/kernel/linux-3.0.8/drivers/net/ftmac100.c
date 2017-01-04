#define pr_fmt(fmt)	KBUILD_MODNAME ": " fmt
#define DRV_NAME	"ftmac100"
#define DRV_VERSION	"0.2"
#define RX_QUEUE_ENTRIES	128
#define TX_QUEUE_ENTRIES	16
#define MAX_PKT_SIZE		1518
#define RX_BUF_SIZE		2044
#if MAX_PKT_SIZE > 0x7ff
#error invalid MAX_PKT_SIZE
#if RX_BUF_SIZE > 0x7ff || RX_BUF_SIZE > PAGE_SIZE
#error invalid RX_BUF_SIZE
struct ftmac100_descs ;
struct ftmac100 ;
static int ftmac100_alloc_rx_page(struct ftmac100 *priv,
struct ftmac100_rxdes *rxdes, gfp_t gfp);
#define INT_MASK_ALL_ENABLED	(FTMAC100_INT_RPKT_FINISH	| \
FTMAC100_INT_NORXBUF		| \
FTMAC100_INT_XPKT_OK		| \
FTMAC100_INT_XPKT_LOST		| \
FTMAC100_INT_RPKT_LOST		| \
FTMAC100_INT_AHB_ERR		| \
FTMAC100_INT_PHYSTS_CHG)
#define INT_MASK_ALL_DISABLED	0
static void ftmac100_enable_all_int(struct ftmac100 *priv)
static void ftmac100_disable_all_int(struct ftmac100 *priv)
static void ftmac100_set_rx_ring_base(struct ftmac100 *priv, dma_addr_t addr)
static void ftmac100_set_tx_ring_base(struct ftmac100 *priv, dma_addr_t addr)
static void ftmac100_txdma_start_polling(struct ftmac100 *priv)
static int ftmac100_reset(struct ftmac100 *priv)
static void ftmac100_set_mac(struct ftmac100 *priv, const unsigned char *mac)
#define MACCR_ENABLE_ALL	(FTMAC100_MACCR_XMT_EN	| \
FTMAC100_MACCR_RCV_EN	| \
FTMAC100_MACCR_XDMA_EN	| \
FTMAC100_MACCR_RDMA_EN	| \
FTMAC100_MACCR_CRC_APD	| \
FTMAC100_MACCR_FULLDUP	| \
FTMAC100_MACCR_RX_RUNT	| \
FTMAC100_MACCR_RX_BROADPKT)
static int ftmac100_start_hw(struct ftmac100 *priv)
static void ftmac100_stop_hw(struct ftmac100 *priv)
static bool ftmac100_rxdes_first_segment(struct ftmac100_rxdes *rxdes)
static bool ftmac100_rxdes_last_segment(struct ftmac100_rxdes *rxdes)
static bool ftmac100_rxdes_owned_by_dma(struct ftmac100_rxdes *rxdes)
static void ftmac100_rxdes_set_dma_own(struct ftmac100_rxdes *rxdes)
static bool ftmac100_rxdes_rx_error(struct ftmac100_rxdes *rxdes)
static bool ftmac100_rxdes_crc_error(struct ftmac100_rxdes *rxdes)
static bool ftmac100_rxdes_frame_too_long(struct ftmac100_rxdes *rxdes)
static bool ftmac100_rxdes_runt(struct ftmac100_rxdes *rxdes)
static bool ftmac100_rxdes_odd_nibble(struct ftmac100_rxdes *rxdes)
static unsigned int ftmac100_rxdes_frame_length(struct ftmac100_rxdes *rxdes)
static bool ftmac100_rxdes_multicast(struct ftmac100_rxdes *rxdes)
static void ftmac100_rxdes_set_buffer_size(struct ftmac100_rxdes *rxdes,
unsigned int size)
static void ftmac100_rxdes_set_end_of_ring(struct ftmac100_rxdes *rxdes)
static void ftmac100_rxdes_set_dma_addr(struct ftmac100_rxdes *rxdes,
dma_addr_t addr)
static dma_addr_t ftmac100_rxdes_get_dma_addr(struct ftmac100_rxdes *rxdes)
static void ftmac100_rxdes_set_page(struct ftmac100_rxdes *rxdes, struct page *page)
static struct page *ftmac100_rxdes_get_page(struct ftmac100_rxdes *rxdes)
static int ftmac100_next_rx_pointer(int pointer)
static void ftmac100_rx_pointer_advance(struct ftmac100 *priv)
static struct ftmac100_rxdes *ftmac100_current_rxdes(struct ftmac100 *priv)
static struct ftmac100_rxdes *
ftmac100_rx_locate_first_segment(struct ftmac100 *priv)
static bool ftmac100_rx_packet_error(struct ftmac100 *priv,
struct ftmac100_rxdes *rxdes)
static void ftmac100_rx_drop_packet(struct ftmac100 *priv)
static bool ftmac100_rx_packet(struct ftmac100 *priv, int *processed)
static void ftmac100_txdes_reset(struct ftmac100_txdes *txdes)
static bool ftmac100_txdes_owned_by_dma(struct ftmac100_txdes *txdes)
static void ftmac100_txdes_set_dma_own(struct ftmac100_txdes *txdes)
static bool ftmac100_txdes_excessive_collision(struct ftmac100_txdes *txdes)
static bool ftmac100_txdes_late_collision(struct ftmac100_txdes *txdes)
static void ftmac100_txdes_set_end_of_ring(struct ftmac100_txdes *txdes)
static void ftmac100_txdes_set_first_segment(struct ftmac100_txdes *txdes)
static void ftmac100_txdes_set_last_segment(struct ftmac100_txdes *txdes)
static void ftmac100_txdes_set_txint(struct ftmac100_txdes *txdes)
static void ftmac100_txdes_set_buffer_size(struct ftmac100_txdes *txdes,
unsigned int len)
static void ftmac100_txdes_set_dma_addr(struct ftmac100_txdes *txdes,
dma_addr_t addr)
static dma_addr_t ftmac100_txdes_get_dma_addr(struct ftmac100_txdes *txdes)
static void ftmac100_txdes_set_skb(struct ftmac100_txdes *txdes, struct sk_buff *skb)
static struct sk_buff *ftmac100_txdes_get_skb(struct ftmac100_txdes *txdes)
static int ftmac100_next_tx_pointer(int pointer)
static void ftmac100_tx_pointer_advance(struct ftmac100 *priv)
static void ftmac100_tx_clean_pointer_advance(struct ftmac100 *priv)
static struct ftmac100_txdes *ftmac100_current_txdes(struct ftmac100 *priv)
static struct ftmac100_txdes *ftmac100_current_clean_txdes(struct ftmac100 *priv)
static bool ftmac100_tx_complete_packet(struct ftmac100 *priv)
static void ftmac100_tx_complete(struct ftmac100 *priv)
static int ftmac100_xmit(struct ftmac100 *priv, struct sk_buff *skb,
dma_addr_t map)
static int ftmac100_alloc_rx_page(struct ftmac100 *priv,
struct ftmac100_rxdes *rxdes, gfp_t gfp)
static void ftmac100_free_buffers(struct ftmac100 *priv)
static int ftmac100_alloc_buffers(struct ftmac100 *priv)
static int ftmac100_mdio_read(struct net_device *netdev, int phy_id, int reg)
static void ftmac100_mdio_write(struct net_device *netdev, int phy_id, int reg,
int data)
static void ftmac100_get_drvinfo(struct net_device *netdev,
struct ethtool_drvinfo *info)
static int ftmac100_get_settings(struct net_device *netdev, struct ethtool_cmd *cmd)
static int ftmac100_set_settings(struct net_device *netdev, struct ethtool_cmd *cmd)
static int ftmac100_nway_reset(struct net_device *netdev)
static u32 ftmac100_get_link(struct net_device *netdev)
static const struct ethtool_ops ftmac100_ethtool_ops = ;
static irqreturn_t ftmac100_interrupt(int irq, void *dev_id)
static int ftmac100_poll(struct napi_struct *napi, int budget)
static int ftmac100_open(struct net_device *netdev)
static int ftmac100_stop(struct net_device *netdev)
static int ftmac100_hard_start_xmit(struct sk_buff *skb, struct net_device *netdev)
static int ftmac100_do_ioctl(struct net_device *netdev, struct ifreq *ifr, int cmd)
static const struct net_device_ops ftmac100_netdev_ops = ;
static int ftmac100_probe(struct platform_device *pdev)
static int __exit ftmac100_remove(struct platform_device *pdev)
static struct platform_driver ftmac100_driver = ;
static int __init ftmac100_init(void)
static void __exit ftmac100_exit(void)
module_init(ftmac100_init);
module_exit(ftmac100_exit);
MODULE_AUTHOR("Po-Yu Chuang <ratbert@faraday-tech.com>");
MODULE_DESCRIPTION("FTMAC100 driver");
MODULE_LICENSE("GPL");
