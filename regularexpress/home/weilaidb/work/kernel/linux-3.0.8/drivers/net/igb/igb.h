#define _IGB_H_
struct igb_adapter;
#define IGB_START_ITR 648
#define IGB_DEFAULT_TXD                  256
#define IGB_MIN_TXD                       80
#define IGB_MAX_TXD                     4096
#define IGB_DEFAULT_RXD                  256
#define IGB_MIN_RXD                       80
#define IGB_MAX_RXD                     4096
#define IGB_DEFAULT_ITR                    3
#define IGB_MAX_ITR_USECS              10000
#define IGB_MIN_ITR_USECS                 10
#define NON_Q_VECTORS                      1
#define MAX_Q_VECTORS                      8
#define IGB_MAX_RX_QUEUES                  (adapter->vfs_allocated_count ? 2 : \
(hw->mac.type > e1000_82575 ? 8 : 4))
#define IGB_ABS_MAX_TX_QUEUES              8
#define IGB_MAX_TX_QUEUES                  IGB_MAX_RX_QUEUES
#define IGB_MAX_VF_MC_ENTRIES              30
#define IGB_MAX_VF_FUNCTIONS               8
#define IGB_MAX_VFTA_ENTRIES               128
struct vf_data_storage ;
#define IGB_VF_FLAG_CTS            0x00000001
#define IGB_VF_FLAG_UNI_PROMISC    0x00000002
#define IGB_VF_FLAG_MULTI_PROMISC  0x00000004
#define IGB_VF_FLAG_PF_SET_MAC     0x00000008
#define IGB_RX_PTHRESH                     8
#define IGB_RX_HTHRESH                     8
#define IGB_RX_WTHRESH                     1
#define IGB_TX_PTHRESH                     8
#define IGB_TX_HTHRESH                     1
#define IGB_TX_WTHRESH                     ((hw->mac.type == e1000_82576 && \
adapter->msix_entries) ? 1 : 16)
#define MAXIMUM_ETHERNET_VLAN_SIZE 1522
#define IGB_RXBUFFER_64    64
#define IGB_RXBUFFER_128   128
#define IGB_RXBUFFER_1024  1024
#define IGB_RXBUFFER_2048  2048
#define IGB_RXBUFFER_16384 16384
#define MAX_STD_JUMBO_FRAME_SIZE 9234
#define IGB_TX_QUEUE_WAKE	16
#define IGB_RX_BUFFER_WRITE	16
#define AUTO_ALL_MODES            0
#define IGB_EEPROM_APME         0x0400
#define IGB_MASTER_SLAVE	e1000_ms_hw_default
#define IGB_MNG_VLAN_NONE -1
struct igb_buffer ;
struct igb_tx_queue_stats ;
struct igb_rx_queue_stats ;
struct igb_q_vector ;
struct igb_ring ;
#define IGB_RING_FLAG_RX_CSUM        0x00000001
#define IGB_RING_FLAG_RX_SCTP_CSUM   0x00000002
#define IGB_RING_FLAG_TX_CTX_IDX     0x00000001
#define IGB_ADVTXD_DCMD (E1000_TXD_CMD_EOP | E1000_TXD_CMD_RS)
#define E1000_RX_DESC_ADV(R, i)	    \
(&(((union e1000_adv_rx_desc *)((R).desc))[i]))
#define E1000_TX_DESC_ADV(R, i)	    \
(&(((union e1000_adv_tx_desc *)((R).desc))[i]))
#define E1000_TX_CTXTDESC_ADV(R, i)	    \
(&(((struct e1000_adv_tx_context_desc *)((R).desc))[i]))
static inline int igb_desc_unused(struct igb_ring *ring)
struct igb_adapter ;
#define IGB_FLAG_HAS_MSI           (1 << 0)
#define IGB_FLAG_DCA_ENABLED       (1 << 1)
#define IGB_FLAG_QUAD_PORT_A       (1 << 2)
#define IGB_FLAG_QUEUE_PAIRS       (1 << 3)
#define IGB_FLAG_DMAC              (1 << 4)
#define IGB_MIN_TXPBSIZE           20408
#define IGB_TX_BUF_4096            4096
#define IGB_DMCTLX_DCFLUSH_DIS     0x80000000
#define IGB_82576_TSYNC_SHIFT 19
#define IGB_82580_TSYNC_SHIFT 24
#define IGB_TS_HDR_LEN        16
enum e1000_state_t ;
enum igb_boards ;
extern char igb_driver_name[];
extern char igb_driver_version[];
extern int igb_up(struct igb_adapter *);
extern void igb_down(struct igb_adapter *);
extern void igb_reinit_locked(struct igb_adapter *);
extern void igb_reset(struct igb_adapter *);
extern int igb_set_spd_dplx(struct igb_adapter *, u32, u8);
extern int igb_setup_tx_resources(struct igb_ring *);
extern int igb_setup_rx_resources(struct igb_ring *);
extern void igb_free_tx_resources(struct igb_ring *);
extern void igb_free_rx_resources(struct igb_ring *);
extern void igb_configure_tx_ring(struct igb_adapter *, struct igb_ring *);
extern void igb_configure_rx_ring(struct igb_adapter *, struct igb_ring *);
extern void igb_setup_tctl(struct igb_adapter *);
extern void igb_setup_rctl(struct igb_adapter *);
extern netdev_tx_t igb_xmit_frame_ring_adv(struct sk_buff *, struct igb_ring *);
extern void igb_unmap_and_free_tx_resource(struct igb_ring *,
struct igb_buffer *);
extern void igb_alloc_rx_buffers_adv(struct igb_ring *, int);
extern void igb_update_stats(struct igb_adapter *, struct rtnl_link_stats64 *);
extern bool igb_has_link(struct igb_adapter *adapter);
extern void igb_set_ethtool_ops(struct net_device *);
extern void igb_power_up_link(struct igb_adapter *);
static inline s32 igb_reset_phy(struct e1000_hw *hw)
static inline s32 igb_read_phy_reg(struct e1000_hw *hw, u32 offset, u16 *data)
static inline s32 igb_write_phy_reg(struct e1000_hw *hw, u32 offset, u16 data)
static inline s32 igb_get_phy_info(struct e1000_hw *hw)
