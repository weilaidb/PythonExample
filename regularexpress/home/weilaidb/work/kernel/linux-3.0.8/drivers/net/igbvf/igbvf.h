#define _IGBVF_H_
struct igbvf_info;
struct igbvf_adapter;
#define IGBVF_START_ITR                 648
#define IGBVF_INT_MODE_LEGACY           0
#define IGBVF_INT_MODE_MSI              1
#define IGBVF_INT_MODE_MSIX             2
#define IGBVF_DEFAULT_TXD               256
#define IGBVF_MAX_TXD                   4096
#define IGBVF_MIN_TXD                   80
#define IGBVF_DEFAULT_RXD               256
#define IGBVF_MAX_RXD                   4096
#define IGBVF_MIN_RXD                   80
#define IGBVF_MIN_ITR_USECS             10
#define IGBVF_MAX_ITR_USECS             10000
#define IGBVF_RX_PTHRESH                16
#define IGBVF_RX_HTHRESH                8
#define IGBVF_RX_WTHRESH                1
#define MAXIMUM_ETHERNET_VLAN_SIZE      1522
#define IGBVF_FC_PAUSE_TIME             0x0680
#define IGBVF_TX_QUEUE_WAKE             32
#define IGBVF_RX_BUFFER_WRITE           16
#define AUTO_ALL_MODES                  0
#define IGBVF_EEPROM_APME               0x0400
#define IGBVF_MNG_VLAN_NONE             (-1)
#define PS_PAGE_BUFFERS                 (MAX_PS_BUFFERS - 1)
enum igbvf_boards ;
struct igbvf_queue_stats ;
struct igbvf_buffer ;
union igbvf_desc ;
struct igbvf_ring ;
struct igbvf_adapter ;
struct igbvf_info ;
#define IGBVF_FLAG_RX_CSUM_DISABLED             (1 << 0)
#define IGBVF_RX_DESC_ADV(R, i)     \
(&((((R).desc))[i].rx_desc))
#define IGBVF_TX_DESC_ADV(R, i)     \
(&((((R).desc))[i].tx_desc))
#define IGBVF_TX_CTXTDESC_ADV(R, i) \
(&((((R).desc))[i].tx_context_desc))
enum igbvf_state_t ;
enum latency_range ;
extern char igbvf_driver_name[];
extern const char igbvf_driver_version[];
extern void igbvf_check_options(struct igbvf_adapter *);
extern void igbvf_set_ethtool_ops(struct net_device *);
extern int igbvf_up(struct igbvf_adapter *);
extern void igbvf_down(struct igbvf_adapter *);
extern void igbvf_reinit_locked(struct igbvf_adapter *);
extern int igbvf_setup_rx_resources(struct igbvf_adapter *, struct igbvf_ring *);
extern int igbvf_setup_tx_resources(struct igbvf_adapter *, struct igbvf_ring *);
extern void igbvf_free_rx_resources(struct igbvf_ring *);
extern void igbvf_free_tx_resources(struct igbvf_ring *);
extern void igbvf_update_stats(struct igbvf_adapter *);
extern unsigned int copybreak;
