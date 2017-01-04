#define __U_PHONET_H
int gphonet_setup(struct usb_gadget *gadget);
int phonet_bind_config(struct usb_configuration *c);
void gphonet_cleanup(void);
