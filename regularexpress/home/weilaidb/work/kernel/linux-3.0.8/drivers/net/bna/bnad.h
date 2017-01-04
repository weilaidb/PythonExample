#define __BNAD_H__
#define BNAD_TXQ_DEPTH		2048
#define BNAD_RXQ_DEPTH		2048
#define BNAD_MAX_TXS		1
#define BNAD_MAX_TXQ_PER_TX	8
#define BNAD_TXQ_NUM		1
#define BNAD_MAX_RXS		1
#define BNAD_MAX_RXPS_PER_RX	16
struct bnad_rx_ctrl ;
#define BNAD_RXMODE_PROMISC_DEFAULT	BNA_RXMODE_PROMISC
#define BNAD_GET_TX_ID(_skb)	(0)
#define BNAD_NAME			"bna"
#define BNAD_NAME_LEN			64
#define BNAD_VERSION			"2.3.2.3"
#define BNAD_MAILBOX_MSIX_VECTORS	1
#define BNAD_STATS_TIMER_FREQ		1000
#define BNAD_DIM_TIMER_FREQ		1000
#define BNAD_MAX_Q_DEPTH		0x10000
#define BNAD_MIN_Q_DEPTH		0x200
#define BNAD_JUMBO_MTU			9000
#define BNAD_NETIF_WAKE_THRESHOLD	8
#define BNAD_RXQ_REFILL_THRESHOLD_SHIFT	3
#define BNAD_TXQ_FREE_SENT		0
#define BNAD_TXQ_TX_STARTED		1
#define BNAD_RXQ_REFILL			0
#define BNAD_RXQ_STARTED		1
enum bnad_intr_source ;
enum bnad_link_state ;
struct bnad_completion ;
struct bnad_drv_stats ;
struct bnad_stats ;
struct bnad_tx_res_info ;
struct bnad_rx_res_info ;
struct bnad_tx_info  ____cacheline_aligned;
struct bnad_rx_info  ____cacheline_aligned;
struct bnad_skb_unmap ;
struct bnad_unmap_q ;
#define	BNAD_CF_DIM_ENABLED		0x01
#define	BNAD_CF_PROMISC			0x02
#define BNAD_CF_ALLMULTI		0x04
#define	BNAD_CF_MSIX			0x08
#define	BNAD_RF_CEE_RUNNING		1
#define BNAD_RF_MBOX_IRQ_DISABLED	2
#define BNAD_RF_RX_STARTED		3
#define BNAD_RF_DIM_TIMER_RUNNING	4
#define BNAD_RF_STATS_TIMER_RUNNING	5
#define BNAD_RF_TX_SHUTDOWN_DELAYED	6
#define BNAD_RF_RX_SHUTDOWN_DELAYED	7
struct bnad ;
extern struct firmware *bfi_fw;
extern u32 		bnad_rxqs_per_cq;
extern u32 *cna_get_firmware_buf(struct pci_dev *pdev);
extern void bnad_set_ethtool_ops(struct net_device *netdev);
extern void bnad_tx_coalescing_timeo_set(struct bnad *bnad);
extern void bnad_rx_coalescing_timeo_set(struct bnad *bnad);
extern int bnad_setup_rx(struct bnad *bnad, uint rx_id);
extern int bnad_setup_tx(struct bnad *bnad, uint tx_id);
extern void bnad_cleanup_tx(struct bnad *bnad, uint tx_id);
extern void bnad_cleanup_rx(struct bnad *bnad, uint rx_id);
extern void bnad_dim_timer_start(struct bnad *bnad);
extern void bnad_netdev_qstats_fill(struct bnad *bnad,
struct rtnl_link_stats64 *stats);
extern void bnad_netdev_hwstats_fill(struct bnad *bnad,
struct rtnl_link_stats64 *stats);
#define BNAD_UPDATE_CTR(_bnad, _ctr)				\
(((_bnad)->stats.drv_stats._ctr)++)
#define BNAD_GET_CTR(_bnad, _ctr) ((_bnad)->stats.drv_stats._ctr)
#define bnad_enable_rx_irq_unsafe(_ccb)			\
#define bnad_dim_timer_running(_bnad)				\
(((_bnad)->cfg_flags & BNAD_CF_DIM_ENABLED) && 		\
(test_bit(BNAD_RF_DIM_TIMER_RUNNING, &((_bnad)->run_flags))))
