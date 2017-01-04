struct usbhsg_request ;
#define EP_NAME_SIZE 8
struct usbhsg_gpriv;
struct usbhsg_pipe_handle;
struct usbhsg_uep ;
struct usbhsg_gpriv ;
struct usbhsg_pipe_handle ;
struct usbhsg_recip_handle ;
#define usbhsg_priv_to_gpriv(priv)			\
container_of(					\
usbhs_mod_get(priv, USBHS_GADGET),	\
struct usbhsg_gpriv, mod)
#define __usbhsg_for_each_uep(start, pos, g, i)	\
for (i = start, pos = (g)->uep;		\
i < (g)->uep_size;			\
i++, pos = (g)->uep + i)
#define usbhsg_for_each_uep(pos, gpriv, i)	\
__usbhsg_for_each_uep(1, pos, gpriv, i)
#define usbhsg_for_each_uep_with_dcp(pos, gpriv, i)	\
__usbhsg_for_each_uep(0, pos, gpriv, i)
#define usbhsg_gadget_to_gpriv(g)\
container_of(g, struct usbhsg_gpriv, gadget)
#define usbhsg_req_to_ureq(r)\
container_of(r, struct usbhsg_request, req)
#define usbhsg_ep_to_uep(e)		container_of(e, struct usbhsg_uep, ep)
#define usbhsg_gpriv_to_lock(gp)	usbhs_priv_to_lock((gp)->mod.priv)
#define usbhsg_gpriv_to_dev(gp)		usbhs_priv_to_dev((gp)->mod.priv)
#define usbhsg_gpriv_to_priv(gp)	((gp)->mod.priv)
#define usbhsg_gpriv_to_dcp(gp)		((gp)->uep)
#define usbhsg_gpriv_to_nth_uep(gp, i)	((gp)->uep + i)
#define usbhsg_uep_to_gpriv(u)		((u)->gpriv)
#define usbhsg_uep_to_pipe(u)		((u)->pipe)
#define usbhsg_pipe_to_uep(p)		((p)->mod_private)
#define usbhsg_is_dcp(u)		((u) == usbhsg_gpriv_to_dcp((u)->gpriv))
#define usbhsg_is_not_connected(gp) ((gp)->gadget.speed == USB_SPEED_UNKNOWN)
#define usbhsg_status_init(gp)   do  while (0)
#define usbhsg_status_set(gp, b) (gp->status |=  b)
#define usbhsg_status_clr(gp, b) (gp->status &= ~b)
#define usbhsg_status_has(gp, b) (gp->status &   b)
static spinlock_t *usbhsg_trylock(struct usbhsg_gpriv *gpriv,
unsigned long *flags)
static void usbhsg_unlock(spinlock_t *lock, unsigned long *flags)
static void usbhsg_queue_push(struct usbhsg_uep *uep,
struct usbhsg_request *ureq)
static struct usbhsg_request *usbhsg_queue_get(struct usbhsg_uep *uep)
#define usbhsg_queue_prepare(uep) __usbhsg_queue_handler(uep, 1);
#define usbhsg_queue_handle(uep)  __usbhsg_queue_handler(uep, 0);
static int __usbhsg_queue_handler(struct usbhsg_uep *uep, int prepare)
static void usbhsg_queue_pop(struct usbhsg_uep *uep,
struct usbhsg_request *ureq,
int status)
#define usbhsg_irq_callback_ctrl(uep, status, enable)			\
()
static void usbhsg_irq_empty_ctrl(struct usbhsg_uep *uep, int enable)
static void usbhsg_irq_ready_ctrl(struct usbhsg_uep *uep, int enable)
static int usbhsg_try_run_ctrl_stage_end(struct usbhsg_uep *uep,
struct usbhsg_request *ureq)
static int usbhsg_try_run_send_packet(struct usbhsg_uep *uep,
struct usbhsg_request *ureq)
static int usbhsg_prepare_send_packet(struct usbhsg_uep *uep,
struct usbhsg_request *ureq)
static int usbhsg_try_run_receive_packet(struct usbhsg_uep *uep,
struct usbhsg_request *ureq)
static int usbhsg_prepare_receive_packet(struct usbhsg_uep *uep,
struct usbhsg_request *ureq)
static struct usbhsg_pipe_handle usbhsg_handler_send_by_empty = ;
static struct usbhsg_pipe_handle usbhsg_handler_send_by_ready = ;
static struct usbhsg_pipe_handle usbhsg_handler_recv_by_ready = ;
static struct usbhsg_pipe_handle usbhsg_handler_ctrl_stage_end = ;
#define usbhsg_handler_send_ctrl	usbhsg_handler_send_by_empty
#define usbhsg_handler_recv_ctrl	usbhsg_handler_recv_by_ready
#define usbhsg_handler_send_packet	usbhsg_handler_send_by_ready
#define usbhsg_handler_recv_packet	usbhsg_handler_recv_by_ready
static int usbhsg_recip_handler_std_control_done(struct usbhs_priv *priv,
struct usbhsg_uep *uep,
struct usb_ctrlrequest *ctrl)
static int usbhsg_recip_handler_std_clear_endpoint(struct usbhs_priv *priv,
struct usbhsg_uep *uep,
struct usb_ctrlrequest *ctrl)
struct usbhsg_recip_handle req_clear_feature = ;
static int usbhsg_recip_run_handle(struct usbhs_priv *priv,
struct usbhsg_recip_handle *handler,
struct usb_ctrlrequest *ctrl)
static int usbhsg_irq_dev_state(struct usbhs_priv *priv,
struct usbhs_irq_state *irq_state)
static int usbhsg_irq_ctrl_stage(struct usbhs_priv *priv,
struct usbhs_irq_state *irq_state)
static int usbhsg_irq_empty(struct usbhs_priv *priv,
struct usbhs_irq_state *irq_state)
static int usbhsg_irq_ready(struct usbhs_priv *priv,
struct usbhs_irq_state *irq_state)
static int usbhsg_dcp_enable(struct usbhsg_uep *uep)
#define usbhsg_dcp_disable usbhsg_pipe_disable
static int usbhsg_pipe_disable(struct usbhsg_uep *uep)
static void usbhsg_uep_init(struct usbhsg_gpriv *gpriv)
static int usbhsg_ep_enable(struct usb_ep *ep,
const struct usb_endpoint_descriptor *desc)
static int usbhsg_ep_disable(struct usb_ep *ep)
static struct usb_request *usbhsg_ep_alloc_request(struct usb_ep *ep,
gfp_t gfp_flags)
static void usbhsg_ep_free_request(struct usb_ep *ep,
struct usb_request *req)
static int usbhsg_ep_queue(struct usb_ep *ep, struct usb_request *req,
gfp_t gfp_flags)
static int usbhsg_ep_dequeue(struct usb_ep *ep, struct usb_request *req)
static int __usbhsg_ep_set_halt_wedge(struct usb_ep *ep, int halt, int wedge)
static int usbhsg_ep_set_halt(struct usb_ep *ep, int value)
static int usbhsg_ep_set_wedge(struct usb_ep *ep)
static struct usb_ep_ops usbhsg_ep_ops = ;
static int usbhsg_try_start(struct usbhs_priv *priv, u32 status)
static int usbhsg_try_stop(struct usbhs_priv *priv, u32 status)
struct usbhsg_gpriv *the_controller;
int usb_gadget_probe_driver(struct usb_gadget_driver *driver,
int (*bind)(struct usb_gadget *))
EXPORT_SYMBOL(usb_gadget_probe_driver);
int usb_gadget_unregister_driver(struct usb_gadget_driver *driver)
EXPORT_SYMBOL(usb_gadget_unregister_driver);
static int usbhsg_get_frame(struct usb_gadget *gadget)
static struct usb_gadget_ops usbhsg_gadget_ops = ;
static int usbhsg_start(struct usbhs_priv *priv)
static int usbhsg_stop(struct usbhs_priv *priv)
int __devinit usbhs_mod_gadget_probe(struct usbhs_priv *priv)
void __devexit usbhs_mod_gadget_remove(struct usbhs_priv *priv)
