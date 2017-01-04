#define _IXGBEVF_H_
struct ixgbevf_tx_buffer ;
struct ixgbevf_rx_buffer ;
struct ixgbevf_ring ;
enum ixgbevf_ring_f_enum ;
struct ixgbevf_ring_feature ;
#define IXGBEVF_RX_BUFFER_WRITE	16
#define MAX_RX_QUEUES 1
#define MAX_TX_QUEUES 1
#define IXGBEVF_DEFAULT_TXD   1024
#define IXGBEVF_DEFAULT_RXD   512
#define IXGBEVF_MAX_TXD       4096
#define IXGBEVF_MIN_TXD       64
#define IXGBEVF_MAX_RXD       4096
#define IXGBEVF_MIN_RXD       64
#define IXGBEVF_RXBUFFER_64    64
#define IXGBEVF_RXBUFFER_128   128
#define IXGBEVF_RXBUFFER_256   256
#define IXGBEVF_RXBUFFER_2048  2048
#define IXGBEVF_MAX_RXBUFFER   16384
#define IXGBEVF_RX_HDR_SIZE IXGBEVF_RXBUFFER_256
#define MAXIMUM_ETHERNET_VLAN_SIZE (VLAN_ETH_FRAME_LEN + ETH_FCS_LEN)
#define IXGBE_TX_FLAGS_CSUM		(u32)(1)
#define IXGBE_TX_FLAGS_VLAN		(u32)(1 << 1)
#define IXGBE_TX_FLAGS_TSO		(u32)(1 << 2)
#define IXGBE_TX_FLAGS_IPV4		(u32)(1 << 3)
#define IXGBE_TX_FLAGS_FCOE		(u32)(1 << 4)
#define IXGBE_TX_FLAGS_FSO		(u32)(1 << 5)
#define IXGBE_TX_FLAGS_VLAN_MASK	0xffff0000
#define IXGBE_TX_FLAGS_VLAN_PRIO_MASK	0x0000e000
#define IXGBE_TX_FLAGS_VLAN_SHIFT	16
struct ixgbevf_q_vector ;
#define EITR_INTS_PER_SEC_TO_REG(_eitr) \
((_eitr) ? (1000000000 / ((_eitr) * 256)) : 8)
#define EITR_REG_TO_INTS_PER_SEC EITR_INTS_PER_SEC_TO_REG
#define IXGBE_DESC_UNUSED(R) \
((((R)->next_to_clean > (R)->next_to_use) ? 0 : (R)->count) + \
(R)->next_to_clean - (R)->next_to_use - 1)
#define IXGBE_RX_DESC_ADV(R, i)	    \
(&(((union ixgbe_adv_rx_desc *)((R).desc))[i]))
#define IXGBE_TX_DESC_ADV(R, i)	    \
(&(((union ixgbe_adv_tx_desc *)((R).desc))[i]))
#define IXGBE_TX_CTXTDESC_ADV(R, i)	    \
(&(((struct ixgbe_adv_tx_context_desc *)((R).desc))[i]))
#define IXGBE_MAX_JUMBO_FRAME_SIZE        16128
#define OTHER_VECTOR 1
#define NON_Q_VECTORS (OTHER_VECTOR)
#define MAX_MSIX_Q_VECTORS 2
#define MAX_MSIX_COUNT 2
#define MIN_MSIX_Q_VECTORS 2
#define MIN_MSIX_COUNT (MIN_MSIX_Q_VECTORS + NON_Q_VECTORS)
struct ixgbevf_adapter ;
enum ixbgevf_state_t ;
enum ixgbevf_boards ;
extern struct ixgbevf_info ixgbevf_82599_vf_info;
extern struct ixgbevf_info ixgbevf_X540_vf_info;
extern struct ixgbe_mac_operations ixgbevf_mbx_ops;
extern char ixgbevf_driver_name[];
extern const char ixgbevf_driver_version[];
extern int ixgbevf_up(struct ixgbevf_adapter *adapter);
extern void ixgbevf_down(struct ixgbevf_adapter *adapter);
extern void ixgbevf_reinit_locked(struct ixgbevf_adapter *adapter);
extern void ixgbevf_reset(struct ixgbevf_adapter *adapter);
extern void ixgbevf_set_ethtool_ops(struct net_device *netdev);
extern int ixgbevf_setup_rx_resources(struct ixgbevf_adapter *,
struct ixgbevf_ring *);
extern int ixgbevf_setup_tx_resources(struct ixgbevf_adapter *,
struct ixgbevf_ring *);
extern void ixgbevf_free_rx_resources(struct ixgbevf_adapter *,
struct ixgbevf_ring *);
extern void ixgbevf_free_tx_resources(struct ixgbevf_adapter *,
struct ixgbevf_ring *);
extern void ixgbevf_update_stats(struct ixgbevf_adapter *adapter);
extern int ethtool_ioctl(struct ifreq *ifr);
extern void ixgbe_napi_add_all(struct ixgbevf_adapter *adapter);
extern void ixgbe_napi_del_all(struct ixgbevf_adapter *adapter);
extern char *ixgbevf_get_hw_dev_name(struct ixgbe_hw *hw);
#define hw_dbg(hw, format, arg...) \
printk(KERN_DEBUG "%s: " format, ixgbevf_get_hw_dev_name(hw), ##arg)
#define hw_dbg(hw, format, arg...) do  while (0)
