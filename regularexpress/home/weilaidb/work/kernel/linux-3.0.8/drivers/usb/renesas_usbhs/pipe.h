#define RENESAS_USB_PIPE_H
struct usbhs_pipe ;
struct usbhs_pipe_info ;
#define __usbhs_for_each_pipe(start, pos, info, i)	\
for (i = start, pos = (info)->pipe;		\
i < (info)->size;				\
i++, pos = (info)->pipe + i)
#define usbhs_for_each_pipe(pos, priv, i)			\
__usbhs_for_each_pipe(1, pos, &((priv)->pipe_info), i)
#define usbhs_for_each_pipe_with_dcp(pos, priv, i)		\
__usbhs_for_each_pipe(0, pos, &((priv)->pipe_info), i)
int usbhs_pipe_probe(struct usbhs_priv *priv);
void usbhs_pipe_remove(struct usbhs_priv *priv);
int usbhs_fifo_write(struct usbhs_pipe *pipe, u8 *buf, int len);
int usbhs_fifo_read(struct usbhs_pipe *pipe, u8 *buf, int len);
int usbhs_fifo_prepare_write(struct usbhs_pipe *pipe);
int usbhs_fifo_prepare_read(struct usbhs_pipe *pipe);
void usbhs_fifo_enable(struct usbhs_pipe *pipe);
void usbhs_fifo_disable(struct usbhs_pipe *pipe);
void usbhs_fifo_stall(struct usbhs_pipe *pipe);
void usbhs_fifo_send_terminator(struct usbhs_pipe *pipe);
void usbhs_usbreq_get_val(struct usbhs_priv *priv, struct usb_ctrlrequest *req);
void usbhs_usbreq_set_val(struct usbhs_priv *priv, struct usb_ctrlrequest *req);
struct usbhs_pipe
*usbhs_pipe_malloc(struct usbhs_priv *priv,
const struct usb_endpoint_descriptor *desc);
int usbhs_pipe_is_dir_in(struct usbhs_pipe *pipe);
void usbhs_pipe_init(struct usbhs_priv *priv);
int usbhs_pipe_get_maxpacket(struct usbhs_pipe *pipe);
void usbhs_pipe_clear_sequence(struct usbhs_pipe *pipe);
#define usbhs_pipe_number(p)	(int)((p) - (p)->priv->pipe_info.pipe)
struct usbhs_pipe *usbhs_dcp_malloc(struct usbhs_priv *priv);
void usbhs_dcp_control_transfer_done(struct usbhs_pipe *pipe);
