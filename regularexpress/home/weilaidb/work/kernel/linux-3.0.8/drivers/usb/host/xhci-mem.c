static struct xhci_segment *xhci_segment_alloc(struct xhci_hcd *xhci, gfp_t flags)
static void xhci_segment_free(struct xhci_hcd *xhci, struct xhci_segment *seg)
static void xhci_link_segments(struct xhci_hcd *xhci, struct xhci_segment *prev,
struct xhci_segment *next, bool link_trbs)
void xhci_ring_free(struct xhci_hcd *xhci, struct xhci_ring *ring)
static void xhci_initialize_ring_info(struct xhci_ring *ring)
static struct xhci_ring *xhci_ring_alloc(struct xhci_hcd *xhci,
unsigned int num_segs, bool link_trbs, gfp_t flags)
void xhci_free_or_cache_endpoint_ring(struct xhci_hcd *xhci,
struct xhci_virt_device *virt_dev,
unsigned int ep_index)
static void xhci_reinit_cached_ring(struct xhci_hcd *xhci,
struct xhci_ring *ring)
#define CTX_SIZE(_hcc) (HCC_64BYTE_CONTEXT(_hcc) ? 64 : 32)
static struct xhci_container_ctx *xhci_alloc_container_ctx(struct xhci_hcd *xhci,
int type, gfp_t flags)
static void xhci_free_container_ctx(struct xhci_hcd *xhci,
struct xhci_container_ctx *ctx)
struct xhci_input_control_ctx *xhci_get_input_control_ctx(struct xhci_hcd *xhci,
struct xhci_container_ctx *ctx)
struct xhci_slot_ctx *xhci_get_slot_ctx(struct xhci_hcd *xhci,
struct xhci_container_ctx *ctx)
struct xhci_ep_ctx *xhci_get_ep_ctx(struct xhci_hcd *xhci,
struct xhci_container_ctx *ctx,
unsigned int ep_index)
static void xhci_free_stream_ctx(struct xhci_hcd *xhci,
unsigned int num_stream_ctxs,
struct xhci_stream_ctx *stream_ctx, dma_addr_t dma)
static struct xhci_stream_ctx *xhci_alloc_stream_ctx(struct xhci_hcd *xhci,
unsigned int num_stream_ctxs, dma_addr_t *dma,
gfp_t mem_flags)
struct xhci_ring *xhci_dma_to_transfer_ring(
struct xhci_virt_ep *ep,
u64 address)
static struct xhci_ring *dma_to_stream_ring(
struct xhci_stream_info *stream_info,
u64 address)
struct xhci_ring *xhci_stream_id_to_ring(
struct xhci_virt_device *dev,
unsigned int ep_index,
unsigned int stream_id)
static int xhci_test_radix_tree(struct xhci_hcd *xhci,
unsigned int num_streams,
struct xhci_stream_info *stream_info)
struct xhci_stream_info *xhci_alloc_stream_info(struct xhci_hcd *xhci,
unsigned int num_stream_ctxs,
unsigned int num_streams, gfp_t mem_flags)
void xhci_setup_streams_ep_input_ctx(struct xhci_hcd *xhci,
struct xhci_ep_ctx *ep_ctx,
struct xhci_stream_info *stream_info)
void xhci_setup_no_streams_ep_input_ctx(struct xhci_hcd *xhci,
struct xhci_ep_ctx *ep_ctx,
struct xhci_virt_ep *ep)
void xhci_free_stream_info(struct xhci_hcd *xhci,
struct xhci_stream_info *stream_info)
static void xhci_init_endpoint_timer(struct xhci_hcd *xhci,
struct xhci_virt_ep *ep)
void xhci_free_virt_device(struct xhci_hcd *xhci, int slot_id)
int xhci_alloc_virt_device(struct xhci_hcd *xhci, int slot_id,
struct usb_device *udev, gfp_t flags)
void xhci_copy_ep0_dequeue_into_input_ctx(struct xhci_hcd *xhci,
struct usb_device *udev)
static u32 xhci_find_real_port_number(struct xhci_hcd *xhci,
struct usb_device *udev)
int xhci_setup_addressable_virt_dev(struct xhci_hcd *xhci, struct usb_device *udev)
static unsigned int xhci_parse_exponent_interval(struct usb_device *udev,
struct usb_host_endpoint *ep)
static unsigned int xhci_parse_frame_interval(struct usb_device *udev,
struct usb_host_endpoint *ep)
static unsigned int xhci_get_endpoint_interval(struct usb_device *udev,
struct usb_host_endpoint *ep)
static u32 xhci_get_endpoint_mult(struct usb_device *udev,
struct usb_host_endpoint *ep)
static u32 xhci_get_endpoint_type(struct usb_device *udev,
struct usb_host_endpoint *ep)
static u32 xhci_get_max_esit_payload(struct xhci_hcd *xhci,
struct usb_device *udev,
struct usb_host_endpoint *ep)
int xhci_endpoint_init(struct xhci_hcd *xhci,
struct xhci_virt_device *virt_dev,
struct usb_device *udev,
struct usb_host_endpoint *ep,
gfp_t mem_flags)
void xhci_endpoint_zero(struct xhci_hcd *xhci,
struct xhci_virt_device *virt_dev,
struct usb_host_endpoint *ep)
void xhci_endpoint_copy(struct xhci_hcd *xhci,
struct xhci_container_ctx *in_ctx,
struct xhci_container_ctx *out_ctx,
unsigned int ep_index)
void xhci_slot_copy(struct xhci_hcd *xhci,
struct xhci_container_ctx *in_ctx,
struct xhci_container_ctx *out_ctx)
static int scratchpad_alloc(struct xhci_hcd *xhci, gfp_t flags)
static void scratchpad_free(struct xhci_hcd *xhci)
struct xhci_command *xhci_alloc_command(struct xhci_hcd *xhci,
bool allocate_in_ctx, bool allocate_completion,
gfp_t mem_flags)
void xhci_urb_free_priv(struct xhci_hcd *xhci, struct urb_priv *urb_priv)
void xhci_free_command(struct xhci_hcd *xhci,
struct xhci_command *command)
void xhci_mem_cleanup(struct xhci_hcd *xhci)
static int xhci_test_trb_in_td(struct xhci_hcd *xhci,
struct xhci_segment *input_seg,
union xhci_trb *start_trb,
union xhci_trb *end_trb,
dma_addr_t input_dma,
struct xhci_segment *result_seg,
char *test_name, int test_number)
static int xhci_check_trb_in_td_math(struct xhci_hcd *xhci, gfp_t mem_flags)
static void xhci_set_hc_event_deq(struct xhci_hcd *xhci)
static void xhci_add_in_port(struct xhci_hcd *xhci, unsigned int num_ports,
__le32 __iomem *addr, u8 major_revision)
static int xhci_setup_port_arrays(struct xhci_hcd *xhci, gfp_t flags)
int xhci_mem_init(struct xhci_hcd *xhci, gfp_t flags)
