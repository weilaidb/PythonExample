#define _GELIC_NET_H
#define GELIC_NET_RX_DESCRIPTORS        128
#define GELIC_NET_TX_DESCRIPTORS        128
#define GELIC_NET_MAX_MTU               VLAN_ETH_FRAME_LEN
#define GELIC_NET_MIN_MTU               VLAN_ETH_ZLEN
#define GELIC_NET_RXBUF_ALIGN           128
#define GELIC_CARD_RX_CSUM_DEFAULT      1
#define GELIC_NET_WATCHDOG_TIMEOUT      5*HZ
#define GELIC_NET_NAPI_WEIGHT           (GELIC_NET_RX_DESCRIPTORS)
#define GELIC_NET_BROADCAST_ADDR        0xffffffffffffL
#define GELIC_NET_MC_COUNT_MAX          32
#define GELIC_CARD_TX_RAM_FULL_ERR           0x0000000000000001L
#define GELIC_CARD_RX_RAM_FULL_ERR           0x0000000000000002L
#define GELIC_CARD_TX_SHORT_FRAME_ERR        0x0000000000000004L
#define GELIC_CARD_TX_INVALID_DESCR_ERR      0x0000000000000008L
#define GELIC_CARD_RX_FIFO_FULL_ERR          0x0000000000002000L
#define GELIC_CARD_RX_DESCR_CHAIN_END        0x0000000000004000L
#define GELIC_CARD_RX_INVALID_DESCR_ERR      0x0000000000008000L
#define GELIC_CARD_TX_RESPONCE_ERR           0x0000000000010000L
#define GELIC_CARD_RX_RESPONCE_ERR           0x0000000000100000L
#define GELIC_CARD_TX_PROTECTION_ERR         0x0000000000400000L
#define GELIC_CARD_RX_PROTECTION_ERR         0x0000000004000000L
#define GELIC_CARD_TX_TCP_UDP_CHECKSUM_ERR   0x0000000008000000L
#define GELIC_CARD_PORT_STATUS_CHANGED       0x0000000020000000L
#define GELIC_CARD_WLAN_EVENT_RECEIVED       0x0000000040000000L
#define GELIC_CARD_WLAN_COMMAND_COMPLETED    0x0000000080000000L
#define GELIC_CARD_TX_FLAGGED_DESCR          0x0004000000000000L
#define GELIC_CARD_RX_FLAGGED_DESCR          0x0040000000000000L
#define GELIC_CARD_TX_TRANSFER_END           0x0080000000000000L
#define GELIC_CARD_TX_DESCR_CHAIN_END        0x0100000000000000L
#define GELIC_CARD_NUMBER_OF_RX_FRAME        0x1000000000000000L
#define GELIC_CARD_ONE_TIME_COUNT_TIMER      0x4000000000000000L
#define GELIC_CARD_FREE_RUN_COUNT_TIMER      0x8000000000000000L
#define GELIC_CARD_TXINT	GELIC_CARD_TX_DESCR_CHAIN_END
#define GELIC_CARD_RXINT	(GELIC_CARD_RX_DESCR_CHAIN_END | \
GELIC_CARD_NUMBER_OF_RX_FRAME)
enum gelic_descr_rx_status ;
#define GELIC_DESCR_DATA_STATUS_CHK_MASK	\
(GELIC_DESCR_RXIPCHK | GELIC_DESCR_RXTCPCHK)
enum gelic_descr_tx_status ;
enum gelic_descr_rx_error ;
#define GELIC_DESCR_DATA_ERROR_CHK_MASK		\
(GELIC_DESCR_RXIPCHKERR | GELIC_DESCR_RXTCPCHKERR)
enum gelic_descr_dma_status ;
#define GELIC_DESCR_DMA_STAT_MASK	(0xf0000000)
enum gelic_descr_tx_dma_status ;
#define GELIC_DESCR_DMA_CMD_NO_CHKSUM	\
(GELIC_DESCR_DMA_CARDOWNED | GELIC_DESCR_TX_DMA_IKE | \
GELIC_DESCR_TX_DMA_NO_CHKSUM)
#define GELIC_DESCR_DMA_CMD_TCP_CHKSUM	\
(GELIC_DESCR_DMA_CARDOWNED | GELIC_DESCR_TX_DMA_IKE | \
GELIC_DESCR_TX_DMA_TCP_CHKSUM)
#define GELIC_DESCR_DMA_CMD_UDP_CHKSUM	\
(GELIC_DESCR_DMA_CARDOWNED | GELIC_DESCR_TX_DMA_IKE | \
GELIC_DESCR_TX_DMA_UDP_CHKSUM)
enum gelic_descr_rx_dma_status ;
enum gelic_lv1_net_control_code ;
enum gelic_lv1_wol_command ;
enum gelic_lv1_wol_mp_arg ;
enum gelic_lv1_wol_match_arg ;
enum gelic_lv1_ether_port_status ;
enum gelic_lv1_vlan_index ;
enum gelic_lv1_phy ;
#define GELIC_DESCR_SIZE	(32)
enum gelic_port_type ;
struct gelic_descr  __attribute__((aligned(32)));
struct gelic_descr_chain ;
struct gelic_vlan_id ;
struct gelic_card ;
struct gelic_port ;
static inline struct gelic_card *port_to_card(struct gelic_port *p)
static inline struct net_device *port_to_netdev(struct gelic_port *p)
static inline struct gelic_card *netdev_card(struct net_device *d)
static inline struct gelic_port *netdev_port(struct net_device *d)
static inline struct device *ctodev(struct gelic_card *card)
static inline u64 bus_id(struct gelic_card *card)
static inline u64 dev_id(struct gelic_card *card)
static inline void *port_priv(struct gelic_port *port)
extern int gelic_card_set_irq_mask(struct gelic_card *card, u64 mask);
extern void gelic_card_up(struct gelic_card *card);
extern void gelic_card_down(struct gelic_card *card);
extern int gelic_net_open(struct net_device *netdev);
extern int gelic_net_stop(struct net_device *netdev);
extern int gelic_net_xmit(struct sk_buff *skb, struct net_device *netdev);
extern void gelic_net_set_multi(struct net_device *netdev);
extern void gelic_net_tx_timeout(struct net_device *netdev);
extern int gelic_net_change_mtu(struct net_device *netdev, int new_mtu);
extern int gelic_net_setup_netdev(struct net_device *netdev,
struct gelic_card *card);
extern void gelic_net_get_drvinfo(struct net_device *netdev,
struct ethtool_drvinfo *info);
extern void gelic_net_poll_controller(struct net_device *netdev);
