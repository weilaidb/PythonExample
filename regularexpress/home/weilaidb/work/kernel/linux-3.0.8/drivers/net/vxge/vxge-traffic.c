enum vxge_hw_status vxge_hw_vpath_intr_enable(struct __vxge_hw_vpath_handle *vp)
enum vxge_hw_status vxge_hw_vpath_intr_disable(
struct __vxge_hw_vpath_handle *vp)
void vxge_hw_vpath_tti_ci_set(struct __vxge_hw_fifo *fifo)
void vxge_hw_vpath_dynamic_rti_ci_set(struct __vxge_hw_ring *ring)
void vxge_hw_vpath_dynamic_tti_rtimer_set(struct __vxge_hw_fifo *fifo)
void vxge_hw_vpath_dynamic_rti_rtimer_set(struct __vxge_hw_ring *ring)
void vxge_hw_channel_msix_mask(struct __vxge_hw_channel *channel, int msix_id)
void
vxge_hw_channel_msix_unmask(struct __vxge_hw_channel *channel, int msix_id)
void vxge_hw_channel_msix_clear(struct __vxge_hw_channel *channel, int msix_id)
u32 vxge_hw_device_set_intr_type(struct __vxge_hw_device *hldev, u32 intr_mode)
void vxge_hw_device_intr_enable(struct __vxge_hw_device *hldev)
void vxge_hw_device_intr_disable(struct __vxge_hw_device *hldev)
void vxge_hw_device_mask_all(struct __vxge_hw_device *hldev)
void vxge_hw_device_unmask_all(struct __vxge_hw_device *hldev)
void vxge_hw_device_flush_io(struct __vxge_hw_device *hldev)
static enum vxge_hw_status
__vxge_hw_device_handle_error(struct __vxge_hw_device *hldev, u32 vp_id,
enum vxge_hw_event type)
static enum vxge_hw_status
__vxge_hw_device_handle_link_down_ind(struct __vxge_hw_device *hldev)
static enum vxge_hw_status
__vxge_hw_device_handle_link_up_ind(struct __vxge_hw_device *hldev)
static enum vxge_hw_status
__vxge_hw_vpath_alarm_process(struct __vxge_hw_virtualpath *vpath,
u32 skip_alarms)
enum vxge_hw_status vxge_hw_device_begin_irq(struct __vxge_hw_device *hldev,
u32 skip_alarms, u64 *reason)
void vxge_hw_device_clear_tx_rx(struct __vxge_hw_device *hldev)
static enum vxge_hw_status
vxge_hw_channel_dtr_alloc(struct __vxge_hw_channel *channel, void **dtrh)
static void
vxge_hw_channel_dtr_post(struct __vxge_hw_channel *channel, void *dtrh)
void
vxge_hw_channel_dtr_try_complete(struct __vxge_hw_channel *channel, void **dtrh)
void vxge_hw_channel_dtr_complete(struct __vxge_hw_channel *channel)
void vxge_hw_channel_dtr_free(struct __vxge_hw_channel *channel, void *dtrh)
int vxge_hw_channel_dtr_count(struct __vxge_hw_channel *channel)
enum vxge_hw_status vxge_hw_ring_rxd_reserve(struct __vxge_hw_ring *ring,
void **rxdh)
void vxge_hw_ring_rxd_free(struct __vxge_hw_ring *ring, void *rxdh)
void vxge_hw_ring_rxd_pre_post(struct __vxge_hw_ring *ring, void *rxdh)
void vxge_hw_ring_rxd_post_post(struct __vxge_hw_ring *ring, void *rxdh)
void vxge_hw_ring_rxd_post(struct __vxge_hw_ring *ring, void *rxdh)
void vxge_hw_ring_rxd_post_post_wmb(struct __vxge_hw_ring *ring, void *rxdh)
enum vxge_hw_status vxge_hw_ring_rxd_next_completed(
struct __vxge_hw_ring *ring, void **rxdh, u8 *t_code)
enum vxge_hw_status vxge_hw_ring_handle_tcode(
struct __vxge_hw_ring *ring, void *rxdh, u8 t_code)
static void __vxge_hw_non_offload_db_post(struct __vxge_hw_fifo *fifo,
u64 txdl_ptr, u32 num_txds, u32 no_snoop)
u32 vxge_hw_fifo_free_txdl_count_get(struct __vxge_hw_fifo *fifoh)
enum vxge_hw_status vxge_hw_fifo_txdl_reserve(
struct __vxge_hw_fifo *fifo,
void **txdlh, void **txdl_priv)
void vxge_hw_fifo_txdl_buffer_set(struct __vxge_hw_fifo *fifo,
void *txdlh, u32 frag_idx,
dma_addr_t dma_pointer, u32 size)
void vxge_hw_fifo_txdl_post(struct __vxge_hw_fifo *fifo, void *txdlh)
enum vxge_hw_status vxge_hw_fifo_txdl_next_completed(
struct __vxge_hw_fifo *fifo, void **txdlh,
enum vxge_hw_fifo_tcode *t_code)
enum vxge_hw_status vxge_hw_fifo_handle_tcode(struct __vxge_hw_fifo *fifo,
void *txdlh,
enum vxge_hw_fifo_tcode t_code)
void vxge_hw_fifo_txdl_free(struct __vxge_hw_fifo *fifo, void *txdlh)
enum vxge_hw_status
vxge_hw_vpath_mac_addr_add(
struct __vxge_hw_vpath_handle *vp,
u8 (macaddr)[ETH_ALEN],
u8 (macaddr_mask)[ETH_ALEN],
enum vxge_hw_vpath_mac_addr_add_mode duplicate_mode)
enum vxge_hw_status
vxge_hw_vpath_mac_addr_get(
struct __vxge_hw_vpath_handle *vp,
u8 (macaddr)[ETH_ALEN],
u8 (macaddr_mask)[ETH_ALEN])
enum vxge_hw_status
vxge_hw_vpath_mac_addr_get_next(
struct __vxge_hw_vpath_handle *vp,
u8 (macaddr)[ETH_ALEN],
u8 (macaddr_mask)[ETH_ALEN])
enum vxge_hw_status
vxge_hw_vpath_mac_addr_delete(
struct __vxge_hw_vpath_handle *vp,
u8 (macaddr)[ETH_ALEN],
u8 (macaddr_mask)[ETH_ALEN])
enum vxge_hw_status
vxge_hw_vpath_vid_add(struct __vxge_hw_vpath_handle *vp, u64 vid)
enum vxge_hw_status
vxge_hw_vpath_vid_get(struct __vxge_hw_vpath_handle *vp, u64 *vid)
enum vxge_hw_status
vxge_hw_vpath_vid_delete(struct __vxge_hw_vpath_handle *vp, u64 vid)
enum vxge_hw_status vxge_hw_vpath_promisc_enable(
struct __vxge_hw_vpath_handle *vp)
enum vxge_hw_status vxge_hw_vpath_promisc_disable(
struct __vxge_hw_vpath_handle *vp)
enum vxge_hw_status vxge_hw_vpath_bcast_enable(
struct __vxge_hw_vpath_handle *vp)
enum vxge_hw_status vxge_hw_vpath_mcast_enable(
struct __vxge_hw_vpath_handle *vp)
enum vxge_hw_status
vxge_hw_vpath_mcast_disable(struct __vxge_hw_vpath_handle *vp)
enum vxge_hw_status vxge_hw_vpath_alarm_process(
struct __vxge_hw_vpath_handle *vp,
u32 skip_alarms)
void
vxge_hw_vpath_msix_set(struct __vxge_hw_vpath_handle *vp, int *tim_msix_id,
int alarm_msix_id)
void
vxge_hw_vpath_msix_mask(struct __vxge_hw_vpath_handle *vp, int msix_id)
void vxge_hw_vpath_msix_clear(struct __vxge_hw_vpath_handle *vp, int msix_id)
void
vxge_hw_vpath_msix_unmask(struct __vxge_hw_vpath_handle *vp, int msix_id)
void vxge_hw_vpath_inta_mask_tx_rx(struct __vxge_hw_vpath_handle *vp)
void vxge_hw_vpath_inta_unmask_tx_rx(struct __vxge_hw_vpath_handle *vp)
enum vxge_hw_status vxge_hw_vpath_poll_rx(struct __vxge_hw_ring *ring)
enum vxge_hw_status vxge_hw_vpath_poll_tx(struct __vxge_hw_fifo *fifo,
struct sk_buff ***skb_ptr, int nr_skb,
int *more)
