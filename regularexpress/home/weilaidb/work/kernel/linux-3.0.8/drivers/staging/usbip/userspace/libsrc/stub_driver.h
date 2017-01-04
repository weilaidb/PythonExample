#define _USBIP_STUB_DRIVER_H
struct usbip_stub_driver ;
struct usbip_exported_device ;
extern struct usbip_stub_driver *stub_driver;
int usbip_stub_driver_open(void);
void usbip_stub_driver_close(void);
int usbip_stub_refresh_device_list(void);
int usbip_stub_export_device(struct usbip_exported_device *edev, int sockfd);
struct usbip_exported_device *usbip_stub_get_device(int num);
