struct usb_cypress_controller ;
static struct usb_cypress_controller cypress[] = ;
static int usb_cypress_writemem(struct usb_device *udev,u16 addr,u8 *data, u8 len)
int usb_cypress_load_firmware(struct usb_device *udev, const struct firmware *fw, int type)
EXPORT_SYMBOL(usb_cypress_load_firmware);
int dvb_usb_download_firmware(struct usb_device *udev, struct dvb_usb_device_properties *props)
int dvb_usb_get_hexline(const struct firmware *fw, struct hexline *hx,
int *pos)
EXPORT_SYMBOL(dvb_usb_get_hexline);
