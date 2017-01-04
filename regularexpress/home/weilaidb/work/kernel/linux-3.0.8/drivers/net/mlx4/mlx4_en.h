#define _MLX4_EN_H_
#define DRV_NAME	"mlx4_en"
#define DRV_VERSION	"1.5.4.1"
#define DRV_RELDATE	"March 2011"
#define MLX4_EN_MSG_LEVEL	(NETIF_MSG_LINK | NETIF_MSG_IFDOWN)
#define MLX4_EN_PAGE_SHIFT	12
#define MLX4_EN_PAGE_SIZE	(1 << MLX4_EN_PAGE_SHIFT)
#define MAX_RX_RINGS		16
#define MIN_RX_RINGS		4
#define TXBB_SIZE		64
#define HEADROOM		(2048 / TXBB_SIZE + 1)
#define STAMP_STRIDE		64
#define STAMP_DWORDS		(STAMP_STRIDE / 4)
#define STAMP_SHIFT		31
#define STAMP_VAL		0x7fffffff
#define STATS_DELAY		(HZ / 4)
#define MAX_DESC_SIZE		512
#define MAX_DESC_TXBBS		(MAX_DESC_SIZE / TXBB_SIZE)
#define MLX4_EN_WATCHDOG_TIMEOUT	(15 * HZ)
#define MLX4_EN_ALLOC_ORDER	2
#define MLX4_EN_ALLOC_SIZE	(PAGE_SIZE << MLX4_EN_ALLOC_ORDER)
#define MLX4_EN_MAX_LRO_DESCRIPTORS	32
enum ;
#define MLX4_EN_MAX_RX_FRAGS	4
#define MLX4_EN_MAX_TX_SIZE	8192
#define MLX4_EN_MAX_RX_SIZE	8192
#define MLX4_EN_MIN_RX_SIZE	(MLX4_EN_ALLOC_SIZE / SMP_CACHE_BYTES)
#define MLX4_EN_MIN_TX_SIZE	(4096 / TXBB_SIZE)
#define MLX4_EN_SMALL_PKT_SIZE		64
#define MLX4_EN_NUM_TX_RINGS		8
#define MLX4_EN_NUM_PPP_RINGS		8
#define MAX_TX_RINGS			(MLX4_EN_NUM_TX_RINGS + MLX4_EN_NUM_PPP_RINGS)
#define MLX4_EN_DEF_TX_RING_SIZE	512
#define MLX4_EN_DEF_RX_RING_SIZE  	1024
#define MLX4_EN_RX_COAL_TARGET	44
#define MLX4_EN_RX_COAL_TIME	0x10
#define MLX4_EN_TX_COAL_PKTS	5
#define MLX4_EN_TX_COAL_TIME	0x80
#define MLX4_EN_RX_RATE_LOW		400000
#define MLX4_EN_RX_COAL_TIME_LOW	0
#define MLX4_EN_RX_RATE_HIGH		450000
#define MLX4_EN_RX_COAL_TIME_HIGH	128
#define MLX4_EN_RX_SIZE_THRESH		1024
#define MLX4_EN_RX_RATE_THRESH		(1000000 / MLX4_EN_RX_COAL_TIME_HIGH)
#define MLX4_EN_SAMPLE_INTERVAL		0
#define MLX4_EN_AVG_PKT_SMALL		256
#define MLX4_EN_AUTO_CONF	0xffff
#define MLX4_EN_DEF_RX_PAUSE	1
#define MLX4_EN_DEF_TX_PAUSE	1
#define MLX4_EN_TX_POLL_MODER	16
#define MLX4_EN_TX_POLL_TIMEOUT	(HZ / 4)
#define ETH_LLC_SNAP_SIZE	8
#define SMALL_PACKET_SIZE      (256 - NET_IP_ALIGN)
#define HEADER_COPY_SIZE       (128 - NET_IP_ALIGN)
#define MLX4_LOOPBACK_TEST_PAYLOAD (HEADER_COPY_SIZE - ETH_HLEN)
#define MLX4_EN_MIN_MTU		46
#define ETH_BCAST		0xffffffffffffULL
#define MLX4_EN_LOOPBACK_RETRIES	5
#define MLX4_EN_LOOPBACK_TIMEOUT	100
#define AVG_SIZE			128
#define AVG_FACTOR			1024
#define NUM_PERF_STATS			NUM_PERF_COUNTERS
#define INC_PERF_COUNTER(cnt)		(++(cnt))
#define ADD_PERF_COUNTER(cnt, add)	((cnt) += (add))
#define AVG_PERF_COUNTER(cnt, sample) \
((cnt) = ((cnt) * (AVG_SIZE - 1) + (sample) * AVG_FACTOR) / AVG_SIZE)
#define GET_PERF_COUNTER(cnt)		(cnt)
#define GET_AVG_PERF_COUNTER(cnt)	((cnt) / AVG_FACTOR)
#define NUM_PERF_STATS			0
#define INC_PERF_COUNTER(cnt)		do  while (0)
#define ADD_PERF_COUNTER(cnt, add)	do  while (0)
#define AVG_PERF_COUNTER(cnt, sample)	do  while (0)
#define GET_PERF_COUNTER(cnt)		(0)
#define GET_AVG_PERF_COUNTER(cnt)	(0)
enum cq_type ;
#define ROUNDUP_LOG2(x)		ilog2(roundup_pow_of_two(x))
#define XNOR(x, y)		(!(x) == !(y))
#define ILLEGAL_MAC(addr)	(addr == 0xffffffffffffULL || addr == 0x0)
struct mlx4_en_tx_info ;
#define MLX4_EN_BIT_DESC_OWN	0x80000000
#define CTRL_SIZE	sizeof(struct mlx4_wqe_ctrl_seg)
#define MLX4_EN_MEMTYPE_PAD	0x100
#define DS_SIZE		sizeof(struct mlx4_wqe_data_seg)
struct mlx4_en_tx_desc ;
#define MLX4_EN_USE_SRQ		0x01000000
#define MLX4_EN_CX3_LOW_ID	0x1000
#define MLX4_EN_CX3_HIGH_ID	0x1005
struct mlx4_en_rx_alloc ;
struct mlx4_en_tx_ring ;
struct mlx4_en_rx_desc ;
struct mlx4_en_rx_ring ;
static inline int mlx4_en_can_lro(__be16 status)
struct mlx4_en_cq ;
struct mlx4_en_port_profile ;
struct mlx4_en_profile ;
struct mlx4_en_dev ;
struct mlx4_en_rss_map ;
struct mlx4_en_rss_context ;
struct mlx4_en_port_state ;
struct mlx4_en_pkt_stats ;
struct mlx4_en_port_stats ;
struct mlx4_en_perf_stats ;
struct mlx4_en_frag_info ;
struct mlx4_en_priv ;
enum mlx4_en_wol ;
void mlx4_en_destroy_netdev(struct net_device *dev);
int mlx4_en_init_netdev(struct mlx4_en_dev *mdev, int port,
struct mlx4_en_port_profile *prof);
int mlx4_en_start_port(struct net_device *dev);
void mlx4_en_stop_port(struct net_device *dev);
void mlx4_en_free_resources(struct mlx4_en_priv *priv, bool reserve_vectors);
int mlx4_en_alloc_resources(struct mlx4_en_priv *priv);
int mlx4_en_create_cq(struct mlx4_en_priv *priv, struct mlx4_en_cq *cq,
int entries, int ring, enum cq_type mode);
void mlx4_en_destroy_cq(struct mlx4_en_priv *priv, struct mlx4_en_cq *cq,
bool reserve_vectors);
int mlx4_en_activate_cq(struct mlx4_en_priv *priv, struct mlx4_en_cq *cq);
void mlx4_en_deactivate_cq(struct mlx4_en_priv *priv, struct mlx4_en_cq *cq);
int mlx4_en_set_cq_moder(struct mlx4_en_priv *priv, struct mlx4_en_cq *cq);
int mlx4_en_arm_cq(struct mlx4_en_priv *priv, struct mlx4_en_cq *cq);
void mlx4_en_poll_tx_cq(unsigned long data);
void mlx4_en_tx_irq(struct mlx4_cq *mcq);
u16 mlx4_en_select_queue(struct net_device *dev, struct sk_buff *skb);
netdev_tx_t mlx4_en_xmit(struct sk_buff *skb, struct net_device *dev);
int mlx4_en_create_tx_ring(struct mlx4_en_priv *priv, struct mlx4_en_tx_ring *ring,
int qpn, u32 size, u16 stride);
void mlx4_en_destroy_tx_ring(struct mlx4_en_priv *priv, struct mlx4_en_tx_ring *ring);
int mlx4_en_activate_tx_ring(struct mlx4_en_priv *priv,
struct mlx4_en_tx_ring *ring,
int cq);
void mlx4_en_deactivate_tx_ring(struct mlx4_en_priv *priv,
struct mlx4_en_tx_ring *ring);
int mlx4_en_create_rx_ring(struct mlx4_en_priv *priv,
struct mlx4_en_rx_ring *ring,
u32 size, u16 stride);
void mlx4_en_destroy_rx_ring(struct mlx4_en_priv *priv,
struct mlx4_en_rx_ring *ring);
int mlx4_en_activate_rx_rings(struct mlx4_en_priv *priv);
void mlx4_en_deactivate_rx_ring(struct mlx4_en_priv *priv,
struct mlx4_en_rx_ring *ring);
int mlx4_en_process_rx_cq(struct net_device *dev,
struct mlx4_en_cq *cq,
int budget);
int mlx4_en_poll_rx_cq(struct napi_struct *napi, int budget);
void mlx4_en_fill_qp_context(struct mlx4_en_priv *priv, int size, int stride,
int is_tx, int rss, int qpn, int cqn,
struct mlx4_qp_context *context);
void mlx4_en_sqp_event(struct mlx4_qp *qp, enum mlx4_event event);
int mlx4_en_map_buffer(struct mlx4_buf *buf);
void mlx4_en_unmap_buffer(struct mlx4_buf *buf);
void mlx4_en_calc_rx_buf(struct net_device *dev);
int mlx4_en_config_rss_steer(struct mlx4_en_priv *priv);
void mlx4_en_release_rss_steer(struct mlx4_en_priv *priv);
int mlx4_en_free_tx_buf(struct net_device *dev, struct mlx4_en_tx_ring *ring);
void mlx4_en_rx_irq(struct mlx4_cq *mcq);
int mlx4_SET_MCAST_FLTR(struct mlx4_dev *dev, u8 port, u64 mac, u64 clear, u8 mode);
int mlx4_SET_VLAN_FLTR(struct mlx4_dev *dev, u8 port, struct vlan_group *grp);
int mlx4_SET_PORT_general(struct mlx4_dev *dev, u8 port, int mtu,
u8 pptx, u8 pfctx, u8 pprx, u8 pfcrx);
int mlx4_SET_PORT_qpn_calc(struct mlx4_dev *dev, u8 port, u32 base_qpn,
u8 promisc);
int mlx4_en_DUMP_ETH_STATS(struct mlx4_en_dev *mdev, u8 port, u8 reset);
int mlx4_en_QUERY_PORT(struct mlx4_en_dev *mdev, u8 port);
#define MLX4_EN_NUM_SELF_TEST	5
void mlx4_en_ex_selftest(struct net_device *dev, u32 *flags, u64 *buf);
u64 mlx4_en_mac_to_u64(u8 *addr);
extern const struct ethtool_ops mlx4_en_ethtool_ops;
int en_print(const char *level, const struct mlx4_en_priv *priv,
const char *format, ...) __attribute__ ((format (printf, 3, 4)));
#define en_dbg(mlevel, priv, format, arg...)			\
do  while (0)
#define en_warn(priv, format, arg...)			\
en_print(KERN_WARNING, priv, format, ##arg)
#define en_err(priv, format, arg...)			\
en_print(KERN_ERR, priv, format, ##arg)
#define en_info(priv, format, arg...)			\
en_print(KERN_INFO, priv, format, ## arg)
#define mlx4_err(mdev, format, arg...)			\
pr_err("%s %s: " format, DRV_NAME,		\
dev_name(&mdev->pdev->dev), ##arg)
#define mlx4_info(mdev, format, arg...)			\
pr_info("%s %s: " format, DRV_NAME,		\
dev_name(&mdev->pdev->dev), ##arg)
#define mlx4_warn(mdev, format, arg...)			\
pr_warning("%s %s: " format, DRV_NAME,		\
dev_name(&mdev->pdev->dev), ##arg)
