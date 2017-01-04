static int handle_cmd_in_cmd_wait_list(struct xhci_hcd *xhci,
struct xhci_virt_device *virt_dev,
struct xhci_event_cmd *event);
dma_addr_t xhci_trb_virt_to_dma(struct xhci_segment *seg,
union xhci_trb *trb)
static bool last_trb_on_last_seg(struct xhci_hcd *xhci, struct xhci_ring *ring,
struct xhci_segment *seg, union xhci_trb *trb)
static int last_trb(struct xhci_hcd *xhci, struct xhci_ring *ring,
struct xhci_segment *seg, union xhci_trb *trb)
static int enqueue_is_link_trb(struct xhci_ring *ring)
static void next_trb(struct xhci_hcd *xhci,
struct xhci_ring *ring,
struct xhci_segment **seg,
union xhci_trb **trb)
static void inc_deq(struct xhci_hcd *xhci, struct xhci_ring *ring, bool consumer)
static void inc_enq(struct xhci_hcd *xhci, struct xhci_ring *ring,
bool consumer, bool more_trbs_coming)
static int room_on_ring(struct xhci_hcd *xhci, struct xhci_ring *ring,
unsigned int num_trbs)
void xhci_ring_cmd_db(struct xhci_hcd *xhci)
void xhci_ring_ep_doorbell(struct xhci_hcd *xhci,
unsigned int slot_id,
unsigned int ep_index,
unsigned int stream_id)
static void ring_doorbell_for_active_rings(struct xhci_hcd *xhci,
unsigned int slot_id,
unsigned int ep_index)
static struct xhci_segment *find_trb_seg(
struct xhci_segment *start_seg,
union xhci_trb	*trb, int *cycle_state)
static struct xhci_ring *xhci_triad_to_transfer_ring(struct xhci_hcd *xhci,
unsigned int slot_id, unsigned int ep_index,
unsigned int stream_id)
static struct xhci_ring *xhci_urb_to_transfer_ring(struct xhci_hcd *xhci,
struct urb *urb)
void xhci_find_new_dequeue_state(struct xhci_hcd *xhci,
unsigned int slot_id, unsigned int ep_index,
unsigned int stream_id, struct xhci_td *cur_td,
struct xhci_dequeue_state *state)
static void td_to_noop(struct xhci_hcd *xhci, struct xhci_ring *ep_ring,
struct xhci_td *cur_td, bool flip_cycle)
static int queue_set_tr_deq(struct xhci_hcd *xhci, int slot_id,
unsigned int ep_index, unsigned int stream_id,
struct xhci_segment *deq_seg,
union xhci_trb *deq_ptr, u32 cycle_state);
void xhci_queue_new_dequeue_state(struct xhci_hcd *xhci,
unsigned int slot_id, unsigned int ep_index,
unsigned int stream_id,
struct xhci_dequeue_state *deq_state)
static void xhci_stop_watchdog_timer_in_irq(struct xhci_hcd *xhci,
struct xhci_virt_ep *ep)
static void xhci_giveback_urb_in_irq(struct xhci_hcd *xhci,
struct xhci_td *cur_td, int status, char *adjective)
static void handle_stopped_endpoint(struct xhci_hcd *xhci,
union xhci_trb *trb, struct xhci_event_cmd *event)
void xhci_stop_endpoint_command_watchdog(unsigned long arg)
static void handle_set_deq_completion(struct xhci_hcd *xhci,
struct xhci_event_cmd *event,
union xhci_trb *trb)
static void handle_reset_ep_completion(struct xhci_hcd *xhci,
struct xhci_event_cmd *event,
union xhci_trb *trb)
static int handle_cmd_in_cmd_wait_list(struct xhci_hcd *xhci,
struct xhci_virt_device *virt_dev,
struct xhci_event_cmd *event)
static void handle_cmd_completion(struct xhci_hcd *xhci,
struct xhci_event_cmd *event)
static void handle_vendor_event(struct xhci_hcd *xhci,
union xhci_trb *event)
static unsigned int find_faked_portnum_from_hw_portnum(struct usb_hcd *hcd,
struct xhci_hcd *xhci, u32 port_id)
static void handle_port_status(struct xhci_hcd *xhci,
union xhci_trb *event)
struct xhci_segment *trb_in_td(struct xhci_segment *start_seg,
union xhci_trb	*start_trb,
union xhci_trb	*end_trb,
dma_addr_t	suspect_dma)
static void xhci_cleanup_halted_endpoint(struct xhci_hcd *xhci,
unsigned int slot_id, unsigned int ep_index,
unsigned int stream_id,
struct xhci_td *td, union xhci_trb *event_trb)
static int xhci_requires_manual_halt_cleanup(struct xhci_hcd *xhci,
struct xhci_ep_ctx *ep_ctx,
unsigned int trb_comp_code)
int xhci_is_vendor_info_code(struct xhci_hcd *xhci, unsigned int trb_comp_code)
static int finish_td(struct xhci_hcd *xhci, struct xhci_td *td,
union xhci_trb *event_trb, struct xhci_transfer_event *event,
struct xhci_virt_ep *ep, int *status, bool skip)
static int process_ctrl_td(struct xhci_hcd *xhci, struct xhci_td *td,
union xhci_trb *event_trb, struct xhci_transfer_event *event,
struct xhci_virt_ep *ep, int *status)
static int process_isoc_td(struct xhci_hcd *xhci, struct xhci_td *td,
union xhci_trb *event_trb, struct xhci_transfer_event *event,
struct xhci_virt_ep *ep, int *status)
static int skip_isoc_td(struct xhci_hcd *xhci, struct xhci_td *td,
struct xhci_transfer_event *event,
struct xhci_virt_ep *ep, int *status)
static int process_bulk_intr_td(struct xhci_hcd *xhci, struct xhci_td *td,
union xhci_trb *event_trb, struct xhci_transfer_event *event,
struct xhci_virt_ep *ep, int *status)
static int handle_tx_event(struct xhci_hcd *xhci,
struct xhci_transfer_event *event)
static int xhci_handle_event(struct xhci_hcd *xhci)
irqreturn_t xhci_irq(struct usb_hcd *hcd)
irqreturn_t xhci_msi_irq(int irq, struct usb_hcd *hcd)
static void queue_trb(struct xhci_hcd *xhci, struct xhci_ring *ring,
bool consumer, bool more_trbs_coming,
u32 field1, u32 field2, u32 field3, u32 field4)
static int prepare_ring(struct xhci_hcd *xhci, struct xhci_ring *ep_ring,
u32 ep_state, unsigned int num_trbs, gfp_t mem_flags)
static int prepare_transfer(struct xhci_hcd *xhci,
struct xhci_virt_device *xdev,
unsigned int ep_index,
unsigned int stream_id,
unsigned int num_trbs,
struct urb *urb,
unsigned int td_index,
gfp_t mem_flags)
static unsigned int count_sg_trbs_needed(struct xhci_hcd *xhci, struct urb *urb)
static void check_trb_math(struct urb *urb, int num_trbs, int running_total)
static void giveback_first_trb(struct xhci_hcd *xhci, int slot_id,
unsigned int ep_index, unsigned int stream_id, int start_cycle,
struct xhci_generic_trb *start_trb)
int xhci_queue_intr_tx(struct xhci_hcd *xhci, gfp_t mem_flags,
struct urb *urb, int slot_id, unsigned int ep_index)
static u32 xhci_td_remainder(unsigned int remainder)
static u32 xhci_v1_0_td_remainder(int running_total, int trb_buff_len,
unsigned int total_packet_count, struct urb *urb)
static int queue_bulk_sg_tx(struct xhci_hcd *xhci, gfp_t mem_flags,
struct urb *urb, int slot_id, unsigned int ep_index)
int xhci_queue_bulk_tx(struct xhci_hcd *xhci, gfp_t mem_flags,
struct urb *urb, int slot_id, unsigned int ep_index)
int xhci_queue_ctrl_tx(struct xhci_hcd *xhci, gfp_t mem_flags,
struct urb *urb, int slot_id, unsigned int ep_index)
static int count_isoc_trbs_needed(struct xhci_hcd *xhci,
struct urb *urb, int i)
static unsigned int xhci_get_burst_count(struct xhci_hcd *xhci,
struct usb_device *udev,
struct urb *urb, unsigned int total_packet_count)
static unsigned int xhci_get_last_burst_packet_count(struct xhci_hcd *xhci,
struct usb_device *udev,
struct urb *urb, unsigned int total_packet_count)
static int xhci_queue_isoc_tx(struct xhci_hcd *xhci, gfp_t mem_flags,
struct urb *urb, int slot_id, unsigned int ep_index)
int xhci_queue_isoc_tx_prepare(struct xhci_hcd *xhci, gfp_t mem_flags,
struct urb *urb, int slot_id, unsigned int ep_index)
static int queue_command(struct xhci_hcd *xhci, u32 field1, u32 field2,
u32 field3, u32 field4, bool command_must_succeed)
int xhci_queue_slot_control(struct xhci_hcd *xhci, u32 trb_type, u32 slot_id)
int xhci_queue_address_device(struct xhci_hcd *xhci, dma_addr_t in_ctx_ptr,
u32 slot_id)
int xhci_queue_vendor_command(struct xhci_hcd *xhci,
u32 field1, u32 field2, u32 field3, u32 field4)
int xhci_queue_reset_device(struct xhci_hcd *xhci, u32 slot_id)
int xhci_queue_configure_endpoint(struct xhci_hcd *xhci, dma_addr_t in_ctx_ptr,
u32 slot_id, bool command_must_succeed)
int xhci_queue_evaluate_context(struct xhci_hcd *xhci, dma_addr_t in_ctx_ptr,
u32 slot_id)
int xhci_queue_stop_endpoint(struct xhci_hcd *xhci, int slot_id,
unsigned int ep_index, int suspend)
static int queue_set_tr_deq(struct xhci_hcd *xhci, int slot_id,
unsigned int ep_index, unsigned int stream_id,
struct xhci_segment *deq_seg,
union xhci_trb *deq_ptr, u32 cycle_state)
int xhci_queue_reset_ep(struct xhci_hcd *xhci, int slot_id,
unsigned int ep_index)
