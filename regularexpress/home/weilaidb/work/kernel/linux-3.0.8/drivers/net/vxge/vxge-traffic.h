#define VXGE_TRAFFIC_H
#define VXGE_HW_DTR_MAX_T_CODE		16
#define VXGE_HW_ALL_FOXES		0xFFFFFFFFFFFFFFFFULL
#define VXGE_HW_INTR_MASK_ALL		0xFFFFFFFFFFFFFFFFULL
#define	VXGE_HW_MAX_VIRTUAL_PATHS	17
#define VXGE_HW_MAC_MAX_MAC_PORT_ID	2
#define VXGE_HW_DEFAULT_32		0xffffffff
#define VXGE_HW_HEADER_802_2_SIZE	3
#define VXGE_HW_HEADER_SNAP_SIZE	5
#define VXGE_HW_HEADER_VLAN_SIZE	4
#define VXGE_HW_MAC_HEADER_MAX_SIZE \
(ETH_HLEN + \
VXGE_HW_HEADER_802_2_SIZE + \
VXGE_HW_HEADER_VLAN_SIZE + \
VXGE_HW_HEADER_SNAP_SIZE)
#define VXGE_HW_HEADER_ETHERNET_II_802_3_ALIGN		2
#define VXGE_HW_HEADER_802_2_SNAP_ALIGN			2
#define VXGE_HW_HEADER_802_2_ALIGN			3
#define VXGE_HW_HEADER_SNAP_ALIGN			1
#define VXGE_HW_L3_CKSUM_OK				0xFFFF
#define VXGE_HW_L4_CKSUM_OK				0xFFFF
struct __vxge_hw_device;
struct __vxge_hw_vpath_handle;
struct vxge_hw_vp_config;
struct __vxge_hw_virtualpath;
struct __vxge_hw_channel;
struct __vxge_hw_fifo;
struct __vxge_hw_ring;
struct vxge_hw_ring_attr;
struct vxge_hw_mempool;
#define TRUE 1
#define FALSE 0
#define VXGE_HW_EVENT_BASE			0
#define VXGE_LL_EVENT_BASE			100
enum vxge_hw_event ;
#define VXGE_HW_SET_LEVEL(a, b) (((a) > (b)) ? (a) : (b))
struct vxge_hw_mempool_dma ;
struct vxge_hw_mempool ;
#define	VXGE_HW_MAX_INTR_PER_VP				4
#define	VXGE_HW_VPATH_INTR_TX				0
#define	VXGE_HW_VPATH_INTR_RX				1
#define	VXGE_HW_VPATH_INTR_EINTA			2
#define	VXGE_HW_VPATH_INTR_BMAP				3
#define VXGE_HW_BLOCK_SIZE				4096
struct vxge_hw_tim_intr_config ;
#define	VXGE_HW_STATS_OP_READ					0
#define	VXGE_HW_STATS_OP_CLEAR_STAT				1
#define	VXGE_HW_STATS_OP_CLEAR_ALL_VPATH_STATS			2
#define	VXGE_HW_STATS_OP_CLEAR_ALL_STATS_OF_LOC			2
#define	VXGE_HW_STATS_OP_CLEAR_ALL_STATS			3
#define	VXGE_HW_STATS_LOC_AGGR					17
#define VXGE_HW_STATS_AGGRn_OFFSET				0x00720
#define VXGE_HW_STATS_VPATH_TX_OFFSET				0x0
#define VXGE_HW_STATS_VPATH_RX_OFFSET				0x00090
#define	VXGE_HW_STATS_VPATH_PROG_EVENT_VNUM0_OFFSET	   (0x001d0 >> 3)
#define	VXGE_HW_STATS_GET_VPATH_PROG_EVENT_VNUM0(bits) \
vxge_bVALn(bits, 0, 32)
#define	VXGE_HW_STATS_GET_VPATH_PROG_EVENT_VNUM1(bits) \
vxge_bVALn(bits, 32, 32)
#define	VXGE_HW_STATS_VPATH_PROG_EVENT_VNUM2_OFFSET	   (0x001d8 >> 3)
#define	VXGE_HW_STATS_GET_VPATH_PROG_EVENT_VNUM2(bits) \
vxge_bVALn(bits, 0, 32)
#define	VXGE_HW_STATS_GET_VPATH_PROG_EVENT_VNUM3(bits) \
vxge_bVALn(bits, 32, 32)
struct vxge_hw_xmac_aggr_stats  __packed;
struct vxge_hw_xmac_port_stats  __packed;
struct vxge_hw_xmac_vpath_tx_stats  __packed;
struct vxge_hw_xmac_vpath_rx_stats  __packed;
struct vxge_hw_xmac_stats ;
struct vxge_hw_vpath_stats_hw_info  __packed;
struct vxge_hw_device_stats_mrpcim_info  __packed;
struct vxge_hw_device_stats_hw_info ;
struct vxge_hw_vpath_stats_sw_common_info ;
struct vxge_hw_vpath_stats_sw_fifo_info ;
struct vxge_hw_vpath_stats_sw_ring_info ;
struct vxge_hw_vpath_stats_sw_err ;
struct vxge_hw_vpath_stats_sw_info ;
struct vxge_hw_device_stats_sw_info ;
struct vxge_hw_device_stats_sw_err ;
struct vxge_hw_device_stats ;
enum vxge_hw_status vxge_hw_device_hw_stats_enable(
struct __vxge_hw_device *devh);
enum vxge_hw_status vxge_hw_device_stats_get(
struct __vxge_hw_device *devh,
struct vxge_hw_device_stats_hw_info *hw_stats);
enum vxge_hw_status vxge_hw_driver_stats_get(
struct __vxge_hw_device *devh,
struct vxge_hw_device_stats_sw_info *sw_stats);
enum vxge_hw_status vxge_hw_mrpcim_stats_enable(struct __vxge_hw_device *devh);
enum vxge_hw_status vxge_hw_mrpcim_stats_disable(struct __vxge_hw_device *devh);
enum vxge_hw_status
vxge_hw_mrpcim_stats_access(
struct __vxge_hw_device *devh,
u32 operation,
u32 location,
u32 offset,
u64 *stat);
enum vxge_hw_status
vxge_hw_device_xmac_stats_get(struct __vxge_hw_device *devh,
struct vxge_hw_xmac_stats *xmac_stats);
enum vxge_hw_mgmt_reg_type ;
enum vxge_hw_status
vxge_hw_mgmt_reg_read(struct __vxge_hw_device *devh,
enum vxge_hw_mgmt_reg_type type,
u32 index,
u32 offset,
u64 *value);
enum vxge_hw_status
vxge_hw_mgmt_reg_write(struct __vxge_hw_device *devh,
enum vxge_hw_mgmt_reg_type type,
u32 index,
u32 offset,
u64 value);
enum vxge_hw_rxd_state ;
struct vxge_hw_ring_rxd_info ;
enum vxge_hw_ring_tcode ;
enum vxge_hw_status vxge_hw_ring_rxd_reserve(
struct __vxge_hw_ring *ring_handle,
void **rxdh);
void
vxge_hw_ring_rxd_pre_post(
struct __vxge_hw_ring *ring_handle,
void *rxdh);
void
vxge_hw_ring_rxd_post_post(
struct __vxge_hw_ring *ring_handle,
void *rxdh);
enum vxge_hw_status
vxge_hw_ring_replenish(struct __vxge_hw_ring *ring_handle);
void
vxge_hw_ring_rxd_post_post_wmb(
struct __vxge_hw_ring *ring_handle,
void *rxdh);
void vxge_hw_ring_rxd_post(
struct __vxge_hw_ring *ring_handle,
void *rxdh);
enum vxge_hw_status vxge_hw_ring_rxd_next_completed(
struct __vxge_hw_ring *ring_handle,
void **rxdh,
u8 *t_code);
enum vxge_hw_status vxge_hw_ring_handle_tcode(
struct __vxge_hw_ring *ring_handle,
void *rxdh,
u8 t_code);
void vxge_hw_ring_rxd_free(
struct __vxge_hw_ring *ring_handle,
void *rxdh);
enum vxge_hw_frame_proto ;
enum vxge_hw_fifo_gather_code ;
enum vxge_hw_fifo_tcode ;
enum vxge_hw_status vxge_hw_fifo_txdl_reserve(
struct __vxge_hw_fifo *fifoh,
void **txdlh,
void **txdl_priv);
void vxge_hw_fifo_txdl_buffer_set(
struct __vxge_hw_fifo *fifo_handle,
void *txdlh,
u32 frag_idx,
dma_addr_t dma_pointer,
u32 size);
void vxge_hw_fifo_txdl_post(
struct __vxge_hw_fifo *fifo_handle,
void *txdlh);
u32 vxge_hw_fifo_free_txdl_count_get(
struct __vxge_hw_fifo *fifo_handle);
enum vxge_hw_status vxge_hw_fifo_txdl_next_completed(
struct __vxge_hw_fifo *fifoh,
void **txdlh,
enum vxge_hw_fifo_tcode *t_code);
enum vxge_hw_status vxge_hw_fifo_handle_tcode(
struct __vxge_hw_fifo *fifoh,
void *txdlh,
enum vxge_hw_fifo_tcode t_code);
void vxge_hw_fifo_txdl_free(
struct __vxge_hw_fifo *fifoh,
void *txdlh);
#define VXGE_HW_RING_NEXT_BLOCK_POINTER_OFFSET	(VXGE_HW_BLOCK_SIZE-8)
#define VXGE_HW_RING_MEMBLOCK_IDX_OFFSET		(VXGE_HW_BLOCK_SIZE-16)
struct __vxge_hw_ring_rxd_priv ;
struct vxge_hw_mempool_cbs ;
#define VXGE_HW_VIRTUAL_PATH_HANDLE(vpath)				\
((struct __vxge_hw_vpath_handle *)(vpath)->vpath_handles.next)
enum vxge_hw_status
__vxge_hw_vpath_rts_table_get(
struct __vxge_hw_vpath_handle *vpath_handle,
u32			action,
u32			rts_table,
u32			offset,
u64			*data1,
u64			*data2);
enum vxge_hw_status
__vxge_hw_vpath_rts_table_set(
struct __vxge_hw_vpath_handle *vpath_handle,
u32			action,
u32			rts_table,
u32			offset,
u64			data1,
u64			data2);
enum vxge_hw_status
__vxge_hw_vpath_enable(
struct __vxge_hw_device *devh,
u32			vp_id);
void vxge_hw_device_intr_enable(
struct __vxge_hw_device *devh);
u32 vxge_hw_device_set_intr_type(struct __vxge_hw_device *devh, u32 intr_mode);
void vxge_hw_device_intr_disable(
struct __vxge_hw_device *devh);
void vxge_hw_device_mask_all(
struct __vxge_hw_device *devh);
void vxge_hw_device_unmask_all(
struct __vxge_hw_device *devh);
enum vxge_hw_status vxge_hw_device_begin_irq(
struct __vxge_hw_device *devh,
u32 skip_alarms,
u64 *reason);
void vxge_hw_device_clear_tx_rx(
struct __vxge_hw_device *devh);
void vxge_hw_vpath_dynamic_rti_rtimer_set(struct __vxge_hw_ring *ring);
void vxge_hw_vpath_dynamic_tti_rtimer_set(struct __vxge_hw_fifo *fifo);
u32 vxge_hw_vpath_id(
struct __vxge_hw_vpath_handle *vpath_handle);
enum vxge_hw_vpath_mac_addr_add_mode ;
enum vxge_hw_status
vxge_hw_vpath_mac_addr_add(
struct __vxge_hw_vpath_handle *vpath_handle,
u8 *macaddr,
u8 *macaddr_mask,
enum vxge_hw_vpath_mac_addr_add_mode duplicate_mode);
enum vxge_hw_status
vxge_hw_vpath_mac_addr_get(
struct __vxge_hw_vpath_handle *vpath_handle,
u8 *macaddr,
u8 *macaddr_mask);
enum vxge_hw_status
vxge_hw_vpath_mac_addr_get_next(
struct __vxge_hw_vpath_handle *vpath_handle,
u8 *macaddr,
u8 *macaddr_mask);
enum vxge_hw_status
vxge_hw_vpath_mac_addr_delete(
struct __vxge_hw_vpath_handle *vpath_handle,
u8 *macaddr,
u8 *macaddr_mask);
enum vxge_hw_status
vxge_hw_vpath_vid_add(
struct __vxge_hw_vpath_handle *vpath_handle,
u64			vid);
enum vxge_hw_status
vxge_hw_vpath_vid_get(
struct __vxge_hw_vpath_handle *vpath_handle,
u64			*vid);
enum vxge_hw_status
vxge_hw_vpath_vid_delete(
struct __vxge_hw_vpath_handle *vpath_handle,
u64			vid);
enum vxge_hw_status
vxge_hw_vpath_etype_add(
struct __vxge_hw_vpath_handle *vpath_handle,
u64			etype);
enum vxge_hw_status
vxge_hw_vpath_etype_get(
struct __vxge_hw_vpath_handle *vpath_handle,
u64			*etype);
enum vxge_hw_status
vxge_hw_vpath_etype_get_next(
struct __vxge_hw_vpath_handle *vpath_handle,
u64			*etype);
enum vxge_hw_status
vxge_hw_vpath_etype_delete(
struct __vxge_hw_vpath_handle *vpath_handle,
u64			etype);
enum vxge_hw_status vxge_hw_vpath_promisc_enable(
struct __vxge_hw_vpath_handle *vpath_handle);
enum vxge_hw_status vxge_hw_vpath_promisc_disable(
struct __vxge_hw_vpath_handle *vpath_handle);
enum vxge_hw_status vxge_hw_vpath_bcast_enable(
struct __vxge_hw_vpath_handle *vpath_handle);
enum vxge_hw_status vxge_hw_vpath_mcast_enable(
struct __vxge_hw_vpath_handle *vpath_handle);
enum vxge_hw_status vxge_hw_vpath_mcast_disable(
struct __vxge_hw_vpath_handle *vpath_handle);
enum vxge_hw_status vxge_hw_vpath_poll_rx(
struct __vxge_hw_ring *ringh);
enum vxge_hw_status vxge_hw_vpath_poll_tx(
struct __vxge_hw_fifo *fifoh,
struct sk_buff ***skb_ptr, int nr_skb, int *more);
enum vxge_hw_status vxge_hw_vpath_alarm_process(
struct __vxge_hw_vpath_handle *vpath_handle,
u32 skip_alarms);
void
vxge_hw_vpath_msix_set(struct __vxge_hw_vpath_handle *vpath_handle,
int *tim_msix_id, int alarm_msix_id);
void
vxge_hw_vpath_msix_mask(struct __vxge_hw_vpath_handle *vpath_handle,
int msix_id);
void vxge_hw_vpath_msix_clear(struct __vxge_hw_vpath_handle *vp, int msix_id);
void vxge_hw_device_flush_io(struct __vxge_hw_device *devh);
void
vxge_hw_vpath_msix_unmask(struct __vxge_hw_vpath_handle *vpath_handle,
int msix_id);
enum vxge_hw_status vxge_hw_vpath_intr_enable(
struct __vxge_hw_vpath_handle *vpath_handle);
enum vxge_hw_status vxge_hw_vpath_intr_disable(
struct __vxge_hw_vpath_handle *vpath_handle);
void vxge_hw_vpath_inta_mask_tx_rx(
struct __vxge_hw_vpath_handle *vpath_handle);
void vxge_hw_vpath_inta_unmask_tx_rx(
struct __vxge_hw_vpath_handle *vpath_handle);
void
vxge_hw_channel_msix_mask(struct __vxge_hw_channel *channelh, int msix_id);
void
vxge_hw_channel_msix_unmask(struct __vxge_hw_channel *channelh, int msix_id);
void
vxge_hw_channel_msix_clear(struct __vxge_hw_channel *channelh, int msix_id);
void
vxge_hw_channel_dtr_try_complete(struct __vxge_hw_channel *channel,
void **dtrh);
void
vxge_hw_channel_dtr_complete(struct __vxge_hw_channel *channel);
void
vxge_hw_channel_dtr_free(struct __vxge_hw_channel *channel, void *dtrh);
int
vxge_hw_channel_dtr_count(struct __vxge_hw_channel *channel);
void vxge_hw_vpath_tti_ci_set(struct __vxge_hw_fifo *fifo);
void vxge_hw_vpath_dynamic_rti_ci_set(struct __vxge_hw_ring *ring);
