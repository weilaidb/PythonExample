#define _IXGB_H_
#define BAR_0		0
#define BAR_1		1
#define BAR_5		5
struct ixgb_adapter;
#define PFX "ixgb: "
#define IXGB_DBG(fmt, args...) printk(KERN_DEBUG PFX fmt, ##args)
#define IXGB_DBG(fmt, args...)				\
do  while (0)
#define DEFAULT_TXD      256
#define MAX_TXD         4096
#define MIN_TXD           64
#define DEFAULT_RXD      512
#define MAX_RXD          512
#define MIN_RXD           64
#define IXGB_RXBUFFER_2048  2048
#define IXGB_RXBUFFER_4096  4096
#define IXGB_RXBUFFER_8192  8192
#define IXGB_RXBUFFER_16384 16384
#define IXGB_RX_BUFFER_WRITE	8
struct ixgb_buffer ;
struct ixgb_desc_ring ;
#define IXGB_DESC_UNUSED(R) \
((((R)->next_to_clean > (R)->next_to_use) ? 0 : (R)->count) + \
(R)->next_to_clean - (R)->next_to_use - 1)
#define IXGB_GET_DESC(R, i, type)	(&(((struct type *)((R).desc))[i]))
#define IXGB_RX_DESC(R, i)		IXGB_GET_DESC(R, i, ixgb_rx_desc)
#define IXGB_TX_DESC(R, i)		IXGB_GET_DESC(R, i, ixgb_tx_desc)
#define IXGB_CONTEXT_DESC(R, i)	IXGB_GET_DESC(R, i, ixgb_context_desc)
struct ixgb_adapter ;
enum ixgb_state_t ;
extern void ixgb_check_options(struct ixgb_adapter *adapter);
extern void ixgb_set_ethtool_ops(struct net_device *netdev);
extern char ixgb_driver_name[];
extern const char ixgb_driver_version[];
extern int ixgb_up(struct ixgb_adapter *adapter);
extern void ixgb_down(struct ixgb_adapter *adapter, bool kill_watchdog);
extern void ixgb_reset(struct ixgb_adapter *adapter);
extern int ixgb_setup_rx_resources(struct ixgb_adapter *adapter);
extern int ixgb_setup_tx_resources(struct ixgb_adapter *adapter);
extern void ixgb_free_rx_resources(struct ixgb_adapter *adapter);
extern void ixgb_free_tx_resources(struct ixgb_adapter *adapter);
extern void ixgb_update_stats(struct ixgb_adapter *adapter);
