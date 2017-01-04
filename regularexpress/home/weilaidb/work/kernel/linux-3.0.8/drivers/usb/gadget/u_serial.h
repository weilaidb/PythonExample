#define __U_SERIAL_H
struct gserial ;
struct usb_request *gs_alloc_req(struct usb_ep *ep, unsigned len, gfp_t flags);
void gs_free_req(struct usb_ep *, struct usb_request *req);
int gserial_setup(struct usb_gadget *g, unsigned n_ports);
void gserial_cleanup(void);
int gserial_connect(struct gserial *, u8 port_num);
void gserial_disconnect(struct gserial *);
int acm_bind_config(struct usb_configuration *c, u8 port_num);
int gser_bind_config(struct usb_configuration *c, u8 port_num);
int obex_bind_config(struct usb_configuration *c, u8 port_num);
