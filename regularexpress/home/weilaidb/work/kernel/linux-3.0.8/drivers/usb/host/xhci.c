#define DRIVER_AUTHOR "Sarah Sharp"
#define DRIVER_DESC "'eXtensible' Host Controller (xHC) Driver"
static int link_quirk;
module_param(link_quirk, int, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(link_quirk, "Don't clear the chain bit on a link TRB");
static int handshake(struct xhci_hcd *xhci, void __iomem *ptr,
u32 mask, u32 done, int usec)
void xhci_quiesce(struct xhci_hcd *xhci)
int xhci_halt(struct xhci_hcd *xhci)
static int xhci_start(struct xhci_hcd *xhci)
int xhci_reset(struct xhci_hcd *xhci)
static void xhci_free_irq(struct xhci_hcd *xhci)
static int xhci_setup_msi(struct xhci_hcd *xhci)
static int xhci_setup_msix(struct xhci_hcd *xhci)
static void xhci_cleanup_msix(struct xhci_hcd *xhci)
int xhci_init(struct usb_hcd *hcd)
static void xhci_event_ring_work(unsigned long arg)
static int xhci_run_finished(struct xhci_hcd *xhci)
int xhci_run(struct usb_hcd *hcd)
static void xhci_only_stop_hcd(struct usb_hcd *hcd)
void xhci_stop(struct usb_hcd *hcd)
void xhci_shutdown(struct usb_hcd *hcd)
static void xhci_save_registers(struct xhci_hcd *xhci)
static void xhci_restore_registers(struct xhci_hcd *xhci)
static void xhci_set_cmd_ring_deq(struct xhci_hcd *xhci)
static void xhci_clear_command_ring(struct xhci_hcd *xhci)
int xhci_suspend(struct xhci_hcd *xhci)
int xhci_resume(struct xhci_hcd *xhci, bool hibernated)
unsigned int xhci_get_endpoint_index(struct usb_endpoint_descriptor *desc)
unsigned int xhci_get_endpoint_flag(struct usb_endpoint_descriptor *desc)
unsigned int xhci_get_endpoint_flag_from_index(unsigned int ep_index)
unsigned int xhci_last_valid_endpoint(u32 added_ctxs)
static int xhci_check_args(struct usb_hcd *hcd, struct usb_device *udev,
struct usb_host_endpoint *ep, int check_ep, bool check_virt_dev,
const char *func)
static int xhci_configure_endpoint(struct xhci_hcd *xhci,
struct usb_device *udev, struct xhci_command *command,
bool ctx_change, bool must_succeed);
static int xhci_check_maxpacket(struct xhci_hcd *xhci, unsigned int slot_id,
unsigned int ep_index, struct urb *urb)
int xhci_urb_enqueue(struct usb_hcd *hcd, struct urb *urb, gfp_t mem_flags)
static struct xhci_ring *xhci_urb_to_transfer_ring(struct xhci_hcd *xhci,
struct urb *urb)
int xhci_urb_dequeue(struct usb_hcd *hcd, struct urb *urb, int status)
int xhci_drop_endpoint(struct usb_hcd *hcd, struct usb_device *udev,
struct usb_host_endpoint *ep)
int xhci_add_endpoint(struct usb_hcd *hcd, struct usb_device *udev,
struct usb_host_endpoint *ep)
static void xhci_zero_in_ctx(struct xhci_hcd *xhci, struct xhci_virt_device *virt_dev)
static int xhci_configure_endpoint_result(struct xhci_hcd *xhci,
struct usb_device *udev, u32 *cmd_status)
static int xhci_evaluate_context_result(struct xhci_hcd *xhci,
struct usb_device *udev, u32 *cmd_status)
static u32 xhci_count_num_new_endpoints(struct xhci_hcd *xhci,
struct xhci_container_ctx *in_ctx)
static unsigned int xhci_count_num_dropped_endpoints(struct xhci_hcd *xhci,
struct xhci_container_ctx *in_ctx)
static int xhci_reserve_host_resources(struct xhci_hcd *xhci,
struct xhci_container_ctx *in_ctx)
static void xhci_free_host_resources(struct xhci_hcd *xhci,
struct xhci_container_ctx *in_ctx)
static void xhci_finish_resource_reservation(struct xhci_hcd *xhci,
struct xhci_container_ctx *in_ctx)
static int xhci_configure_endpoint(struct xhci_hcd *xhci,
struct usb_device *udev,
struct xhci_command *command,
bool ctx_change, bool must_succeed)
int xhci_check_bandwidth(struct usb_hcd *hcd, struct usb_device *udev)
void xhci_reset_bandwidth(struct usb_hcd *hcd, struct usb_device *udev)
static void xhci_setup_input_ctx_for_config_ep(struct xhci_hcd *xhci,
struct xhci_container_ctx *in_ctx,
struct xhci_container_ctx *out_ctx,
u32 add_flags, u32 drop_flags)
static void xhci_setup_input_ctx_for_quirk(struct xhci_hcd *xhci,
unsigned int slot_id, unsigned int ep_index,
struct xhci_dequeue_state *deq_state)
void xhci_cleanup_stalled_ring(struct xhci_hcd *xhci,
struct usb_device *udev, unsigned int ep_index)
void xhci_endpoint_reset(struct usb_hcd *hcd,
struct usb_host_endpoint *ep)
static int xhci_check_streams_endpoint(struct xhci_hcd *xhci,
struct usb_device *udev, struct usb_host_endpoint *ep,
unsigned int slot_id)
static void xhci_calculate_streams_entries(struct xhci_hcd *xhci,
unsigned int *num_streams, unsigned int *num_stream_ctxs)
static int xhci_calculate_streams_and_bitmask(struct xhci_hcd *xhci,
struct usb_device *udev,
struct usb_host_endpoint **eps, unsigned int num_eps,
unsigned int *num_streams, u32 *changed_ep_bitmask)
static u32 xhci_calculate_no_streams_bitmask(struct xhci_hcd *xhci,
struct usb_device *udev,
struct usb_host_endpoint **eps, unsigned int num_eps)
int xhci_alloc_streams(struct usb_hcd *hcd, struct usb_device *udev,
struct usb_host_endpoint **eps, unsigned int num_eps,
unsigned int num_streams, gfp_t mem_flags)
int xhci_free_streams(struct usb_hcd *hcd, struct usb_device *udev,
struct usb_host_endpoint **eps, unsigned int num_eps,
gfp_t mem_flags)
void xhci_free_device_endpoint_resources(struct xhci_hcd *xhci,
struct xhci_virt_device *virt_dev, bool drop_control_ep)
int xhci_discover_or_reset_device(struct usb_hcd *hcd, struct usb_device *udev)
void xhci_free_dev(struct usb_hcd *hcd, struct usb_device *udev)
static int xhci_reserve_host_control_ep_resources(struct xhci_hcd *xhci)
int xhci_alloc_dev(struct usb_hcd *hcd, struct usb_device *udev)
int xhci_address_device(struct usb_hcd *hcd, struct usb_device *udev)
int xhci_update_hub_device(struct usb_hcd *hcd, struct usb_device *hdev,
struct usb_tt *tt, gfp_t mem_flags)
int xhci_get_frame(struct usb_hcd *hcd)
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_LICENSE("GPL");
static int __init xhci_hcd_init(void)
module_init(xhci_hcd_init);
static void __exit xhci_hcd_cleanup(void)
module_exit(xhci_hcd_cleanup);
