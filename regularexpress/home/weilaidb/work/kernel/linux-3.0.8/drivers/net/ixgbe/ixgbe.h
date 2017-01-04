#define _IXGBE_H_
#if defined(CONFIG_FCOE) || defined(CONFIG_FCOE_MODULE)
#define IXGBE_FCOE
#undef pr_fmt
#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define IXGBE_DEFAULT_TXD		    512
#define IXGBE_MAX_TXD			   4096
#define IXGBE_MIN_TXD			     64
#define IXGBE_DEFAULT_RXD		    512
#define IXGBE_MAX_RXD			   4096
#define IXGBE_MIN_RXD			     64
#define IXGBE_MIN_FCRTL			   0x40
#define IXGBE_MAX_FCRTL			0x7FF80
#define IXGBE_MIN_FCRTH			  0x600
#define IXGBE_MAX_FCRTH			0x7FFF0
#define IXGBE_DEFAULT_FCPAUSE		 0xFFFF
#define IXGBE_MIN_FCPAUSE		      0
#define IXGBE_MAX_FCPAUSE		 0xFFFF
#define IXGBE_RXBUFFER_512   512
#define IXGBE_RXBUFFER_2048  2048
#define IXGBE_RXBUFFER_4096  4096
#define IXGBE_RXBUFFER_8192  8192
#define IXGBE_MAX_RXBUFFER   16384
#define IXGBE_RX_HDR_SIZE IXGBE_RXBUFFER_512
#define MAXIMUM_ETHERNET_VLAN_SIZE (ETH_FRAME_LEN + ETH_FCS_LEN + VLAN_HLEN)
#define IXGBE_RX_BUFFER_WRITE	16
#define IXGBE_TX_FLAGS_CSUM		(u32)(1)
#define IXGBE_TX_FLAGS_VLAN		(u32)(1 << 1)
#define IXGBE_TX_FLAGS_TSO		(u32)(1 << 2)
#define IXGBE_TX_FLAGS_IPV4		(u32)(1 << 3)
#define IXGBE_TX_FLAGS_FCOE		(u32)(1 << 4)
#define IXGBE_TX_FLAGS_FSO		(u32)(1 << 5)
#define IXGBE_TX_FLAGS_VLAN_MASK	0xffff0000
#define IXGBE_TX_FLAGS_VLAN_PRIO_MASK   0x0000e000
#define IXGBE_TX_FLAGS_VLAN_SHIFT	16
#define IXGBE_MAX_RSC_INT_RATE          162760
#define IXGBE_MAX_VF_MC_ENTRIES         30
#define IXGBE_MAX_VF_FUNCTIONS          64
#define IXGBE_MAX_VFTA_ENTRIES          128
#define MAX_EMULATION_MAC_ADDRS         16
#define IXGBE_MAX_PF_MACVLANS           15
#define VMDQ_P(p)   ((p) + adapter->num_vfs)
struct vf_data_storage ;
struct vf_macvlans ;
struct ixgbe_tx_buffer ;
struct ixgbe_rx_buffer ;
struct ixgbe_queue_stats ;
struct ixgbe_tx_queue_stats ;
struct ixgbe_rx_queue_stats ;
enum ixbge_ring_state_t ;
#define ring_is_ps_enabled(ring) \
test_bit(__IXGBE_RX_PS_ENABLED, &(ring)->state)
#define set_ring_ps_enabled(ring) \
set_bit(__IXGBE_RX_PS_ENABLED, &(ring)->state)
#define clear_ring_ps_enabled(ring) \
clear_bit(__IXGBE_RX_PS_ENABLED, &(ring)->state)
#define check_for_tx_hang(ring) \
test_bit(__IXGBE_TX_DETECT_HANG, &(ring)->state)
#define set_check_for_tx_hang(ring) \
set_bit(__IXGBE_TX_DETECT_HANG, &(ring)->state)
#define clear_check_for_tx_hang(ring) \
clear_bit(__IXGBE_TX_DETECT_HANG, &(ring)->state)
#define ring_is_rsc_enabled(ring) \
test_bit(__IXGBE_RX_RSC_ENABLED, &(ring)->state)
#define set_ring_rsc_enabled(ring) \
set_bit(__IXGBE_RX_RSC_ENABLED, &(ring)->state)
#define clear_ring_rsc_enabled(ring) \
clear_bit(__IXGBE_RX_RSC_ENABLED, &(ring)->state)
struct ixgbe_ring  ____cacheline_internodealigned_in_smp;
enum ixgbe_ring_f_enum ;
#define IXGBE_MAX_DCB_INDICES  64
#define IXGBE_MAX_RSS_INDICES  16
#define IXGBE_MAX_VMDQ_INDICES 64
#define IXGBE_MAX_FDIR_INDICES 64
#define IXGBE_MAX_FCOE_INDICES  8
#define MAX_RX_QUEUES (IXGBE_MAX_FDIR_INDICES + IXGBE_MAX_FCOE_INDICES)
#define MAX_TX_QUEUES (IXGBE_MAX_FDIR_INDICES + IXGBE_MAX_FCOE_INDICES)
#define MAX_RX_QUEUES IXGBE_MAX_FDIR_INDICES
#define MAX_TX_QUEUES IXGBE_MAX_FDIR_INDICES
struct ixgbe_ring_feature  ____cacheline_internodealigned_in_smp;
#define MAX_RX_PACKET_BUFFERS ((adapter->flags & IXGBE_FLAG_DCB_ENABLED) \
? 8 : 1)
#define MAX_TX_PACKET_BUFFERS MAX_RX_PACKET_BUFFERS
struct ixgbe_q_vector ;
#define EITR_INTS_PER_SEC_TO_REG(_eitr) \
((_eitr) ? (1000000000 / ((_eitr) * 256)) : 8)
#define EITR_REG_TO_INTS_PER_SEC EITR_INTS_PER_SEC_TO_REG
#define IXGBE_DESC_UNUSED(R) \
((((R)->next_to_clean > (R)->next_to_use) ? 0 : (R)->count) + \
(R)->next_to_clean - (R)->next_to_use - 1)
#define IXGBE_RX_DESC_ADV(R, i)	    \
(&(((union ixgbe_adv_rx_desc *)((R)->desc))[i]))
#define IXGBE_TX_DESC_ADV(R, i)	    \
(&(((union ixgbe_adv_tx_desc *)((R)->desc))[i]))
#define IXGBE_TX_CTXTDESC_ADV(R, i)	    \
(&(((struct ixgbe_adv_tx_context_desc *)((R)->desc))[i]))
#define IXGBE_MAX_JUMBO_FRAME_SIZE        16128
#define IXGBE_FCOE_JUMBO_FRAME_SIZE       3072
#define OTHER_VECTOR 1
#define NON_Q_VECTORS (OTHER_VECTOR)
#define MAX_MSIX_VECTORS_82599 64
#define MAX_MSIX_Q_VECTORS_82599 64
#define MAX_MSIX_VECTORS_82598 18
#define MAX_MSIX_Q_VECTORS_82598 16
#define MAX_MSIX_Q_VECTORS MAX_MSIX_Q_VECTORS_82599
#define MAX_MSIX_COUNT MAX_MSIX_VECTORS_82599
#define MIN_MSIX_Q_VECTORS 2
#define MIN_MSIX_COUNT (MIN_MSIX_Q_VECTORS + NON_Q_VECTORS)
struct ixgbe_adapter ;
enum ixbge_state_t ;
struct ixgbe_rsc_cb ;
#define IXGBE_RSC_CB(skb) ((struct ixgbe_rsc_cb *)(skb)->cb)
enum ixgbe_boards ;
extern struct ixgbe_info ixgbe_82598_info;
extern struct ixgbe_info ixgbe_82599_info;
extern struct ixgbe_info ixgbe_X540_info;
extern const struct dcbnl_rtnl_ops dcbnl_ops;
extern int ixgbe_copy_dcb_cfg(struct ixgbe_dcb_config *src_dcb_cfg,
struct ixgbe_dcb_config *dst_dcb_cfg,
int tc_max);
extern char ixgbe_driver_name[];
extern const char ixgbe_driver_version[];
extern int ixgbe_up(struct ixgbe_adapter *adapter);
extern void ixgbe_down(struct ixgbe_adapter *adapter);
extern void ixgbe_reinit_locked(struct ixgbe_adapter *adapter);
extern void ixgbe_reset(struct ixgbe_adapter *adapter);
extern void ixgbe_set_ethtool_ops(struct net_device *netdev);
extern int ixgbe_setup_rx_resources(struct ixgbe_ring *);
extern int ixgbe_setup_tx_resources(struct ixgbe_ring *);
extern void ixgbe_free_rx_resources(struct ixgbe_ring *);
extern void ixgbe_free_tx_resources(struct ixgbe_ring *);
extern void ixgbe_configure_rx_ring(struct ixgbe_adapter *,struct ixgbe_ring *);
extern void ixgbe_configure_tx_ring(struct ixgbe_adapter *,struct ixgbe_ring *);
extern void ixgbe_disable_rx_queue(struct ixgbe_adapter *adapter,
struct ixgbe_ring *);
extern void ixgbe_update_stats(struct ixgbe_adapter *adapter);
extern int ixgbe_init_interrupt_scheme(struct ixgbe_adapter *adapter);
extern void ixgbe_clear_interrupt_scheme(struct ixgbe_adapter *adapter);
extern netdev_tx_t ixgbe_xmit_frame_ring(struct sk_buff *,
struct ixgbe_adapter *,
struct ixgbe_ring *);
extern void ixgbe_unmap_and_free_tx_resource(struct ixgbe_ring *,
struct ixgbe_tx_buffer *);
extern void ixgbe_alloc_rx_buffers(struct ixgbe_ring *, u16);
extern void ixgbe_write_eitr(struct ixgbe_q_vector *);
extern int ethtool_ioctl(struct ifreq *ifr);
extern s32 ixgbe_reinit_fdir_tables_82599(struct ixgbe_hw *hw);
extern s32 ixgbe_init_fdir_signature_82599(struct ixgbe_hw *hw, u32 pballoc);
extern s32 ixgbe_init_fdir_perfect_82599(struct ixgbe_hw *hw, u32 pballoc);
extern s32 ixgbe_fdir_add_signature_filter_82599(struct ixgbe_hw *hw,
union ixgbe_atr_hash_dword input,
union ixgbe_atr_hash_dword common,
u8 queue);
extern s32 ixgbe_fdir_add_perfect_filter_82599(struct ixgbe_hw *hw,
union ixgbe_atr_input *input,
struct ixgbe_atr_input_masks *input_masks,
u16 soft_id, u8 queue);
extern void ixgbe_configure_rscctl(struct ixgbe_adapter *adapter,
struct ixgbe_ring *ring);
extern void ixgbe_clear_rscctl(struct ixgbe_adapter *adapter,
struct ixgbe_ring *ring);
extern void ixgbe_set_rx_mode(struct net_device *netdev);
extern int ixgbe_setup_tc(struct net_device *dev, u8 tc);
extern void ixgbe_configure_fcoe(struct ixgbe_adapter *adapter);
extern int ixgbe_fso(struct ixgbe_adapter *adapter,
struct ixgbe_ring *tx_ring, struct sk_buff *skb,
u32 tx_flags, u8 *hdr_len);
extern void ixgbe_cleanup_fcoe(struct ixgbe_adapter *adapter);
extern int ixgbe_fcoe_ddp(struct ixgbe_adapter *adapter,
union ixgbe_adv_rx_desc *rx_desc,
struct sk_buff *skb);
extern int ixgbe_fcoe_ddp_get(struct net_device *netdev, u16 xid,
struct scatterlist *sgl, unsigned int sgc);
extern int ixgbe_fcoe_ddp_target(struct net_device *netdev, u16 xid,
struct scatterlist *sgl, unsigned int sgc);
extern int ixgbe_fcoe_ddp_put(struct net_device *netdev, u16 xid);
extern int ixgbe_fcoe_enable(struct net_device *netdev);
extern int ixgbe_fcoe_disable(struct net_device *netdev);
extern u8 ixgbe_fcoe_getapp(struct ixgbe_adapter *adapter);
extern u8 ixgbe_fcoe_setapp(struct ixgbe_adapter *adapter, u8 up);
extern int ixgbe_fcoe_get_wwn(struct net_device *netdev, u64 *wwn, int type);
