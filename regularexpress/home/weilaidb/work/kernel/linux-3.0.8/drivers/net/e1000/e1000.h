#define _E1000_H_
#define BAR_0		0
#define BAR_1		1
#define BAR_5		5
#define INTEL_E1000_ETHERNET_DEVICE(device_id)
struct e1000_adapter;
#define E1000_MAX_INTR 10
#define E1000_DEFAULT_TXD                  256
#define E1000_MAX_TXD                      256
#define E1000_MIN_TXD                       48
#define E1000_MAX_82544_TXD               4096
#define E1000_DEFAULT_RXD                  256
#define E1000_MAX_RXD                      256
#define E1000_MIN_RXD                       48
#define E1000_MAX_82544_RXD               4096
#define E1000_MIN_ITR_USECS		10
#define E1000_MAX_ITR_USECS		10000
#define MAXIMUM_ETHERNET_VLAN_SIZE 1522
#define E1000_RXBUFFER_128   128
#define E1000_RXBUFFER_256   256
#define E1000_RXBUFFER_512   512
#define E1000_RXBUFFER_1024  1024
#define E1000_RXBUFFER_2048  2048
#define E1000_RXBUFFER_4096  4096
#define E1000_RXBUFFER_8192  8192
#define E1000_RXBUFFER_16384 16384
#define E1000_SMARTSPEED_DOWNSHIFT 3
#define E1000_SMARTSPEED_MAX       15
#define E1000_PBA_BYTES_SHIFT 0xA
#define E1000_TX_HEAD_ADDR_SHIFT 7
#define E1000_PBA_TX_MASK 0xFFFF0000
#define E1000_FC_HIGH_DIFF 0x1638
#define E1000_FC_LOW_DIFF 0x1640
#define E1000_FC_PAUSE_TIME 0xFFFF
#define E1000_TX_QUEUE_WAKE	16
#define E1000_RX_BUFFER_WRITE	16
#define AUTO_ALL_MODES            0
#define E1000_EEPROM_82544_APM    0x0004
#define E1000_EEPROM_APME         0x0400
#define E1000_MASTER_SLAVE	e1000_ms_hw_default
#define E1000_MNG_VLAN_NONE (-1)
struct e1000_buffer ;
struct e1000_tx_ring ;
struct e1000_rx_ring ;
#define E1000_DESC_UNUSED(R)						\
((((R)->next_to_clean > (R)->next_to_use)			\
? 0 : (R)->count) + (R)->next_to_clean - (R)->next_to_use - 1)
#define E1000_RX_DESC_EXT(R, i)						\
(&(((union e1000_rx_desc_extended *)((R).desc))[i]))
#define E1000_GET_DESC(R, i, type)	(&(((struct type *)((R).desc))[i]))
#define E1000_RX_DESC(R, i)		E1000_GET_DESC(R, i, e1000_rx_desc)
#define E1000_TX_DESC(R, i)		E1000_GET_DESC(R, i, e1000_tx_desc)
#define E1000_CONTEXT_DESC(R, i)	E1000_GET_DESC(R, i, e1000_context_desc)
struct e1000_adapter ;
enum e1000_state_t ;
#undef pr_fmt
#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
extern struct net_device *e1000_get_hw_dev(struct e1000_hw *hw);
#define e_dbg(format, arg...) \
netdev_dbg(e1000_get_hw_dev(hw), format, ## arg)
#define e_err(msglvl, format, arg...) \
netif_err(adapter, msglvl, adapter->netdev, format, ## arg)
#define e_info(msglvl, format, arg...) \
netif_info(adapter, msglvl, adapter->netdev, format, ## arg)
#define e_warn(msglvl, format, arg...) \
netif_warn(adapter, msglvl, adapter->netdev, format, ## arg)
#define e_notice(msglvl, format, arg...) \
netif_notice(adapter, msglvl, adapter->netdev, format, ## arg)
#define e_dev_info(format, arg...) \
dev_info(&adapter->pdev->dev, format, ## arg)
#define e_dev_warn(format, arg...) \
dev_warn(&adapter->pdev->dev, format, ## arg)
#define e_dev_err(format, arg...) \
dev_err(&adapter->pdev->dev, format, ## arg)
extern char e1000_driver_name[];
extern const char e1000_driver_version[];
extern int e1000_up(struct e1000_adapter *adapter);
extern void e1000_down(struct e1000_adapter *adapter);
extern void e1000_reinit_locked(struct e1000_adapter *adapter);
extern void e1000_reset(struct e1000_adapter *adapter);
extern int e1000_set_spd_dplx(struct e1000_adapter *adapter, u32 spd, u8 dplx);
extern int e1000_setup_all_rx_resources(struct e1000_adapter *adapter);
extern int e1000_setup_all_tx_resources(struct e1000_adapter *adapter);
extern void e1000_free_all_rx_resources(struct e1000_adapter *adapter);
extern void e1000_free_all_tx_resources(struct e1000_adapter *adapter);
extern void e1000_update_stats(struct e1000_adapter *adapter);
extern bool e1000_has_link(struct e1000_adapter *adapter);
extern void e1000_power_up_phy(struct e1000_adapter *);
extern void e1000_set_ethtool_ops(struct net_device *netdev);
extern void e1000_check_options(struct e1000_adapter *adapter);
extern char *e1000_get_hw_dev_name(struct e1000_hw *hw);
