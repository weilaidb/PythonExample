#define _F_UVC_H_
extern int uvc_bind_config(struct usb_configuration *c,
const struct uvc_descriptor_header * const *control,
const struct uvc_descriptor_header * const *fs_streaming,
const struct uvc_descriptor_header * const *hs_streaming);
