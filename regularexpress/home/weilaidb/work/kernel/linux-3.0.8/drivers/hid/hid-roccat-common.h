#define __HID_ROCCAT_COMMON_H
int roccat_common_receive(struct usb_device *usb_dev, uint usb_command,
void *data, uint size);
int roccat_common_send(struct usb_device *usb_dev, uint usb_command,
void const *data, uint size);
