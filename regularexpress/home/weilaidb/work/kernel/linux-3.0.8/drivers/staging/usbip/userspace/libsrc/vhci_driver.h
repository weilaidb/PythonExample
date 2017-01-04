#define _VHCI_DRIVER_H
#define MAXNPORT 128
struct class_device ;
struct usbip_imported_device ;
struct usbip_vhci_driver ;
extern struct usbip_vhci_driver *vhci_driver;
int usbip_vhci_driver_open(void);
void usbip_vhci_driver_close(void);
int  usbip_vhci_refresh_device_list(void);
int usbip_vhci_get_free_port(void);
int usbip_vhci_attach_device2(uint8_t port, int sockfd, uint32_t devid,
uint32_t speed);
int usbip_vhci_attach_device(uint8_t port, int sockfd, uint8_t busnum,
uint8_t devnum, uint32_t speed);
int usbip_vhci_detach_device(uint8_t port);
