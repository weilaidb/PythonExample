#define RENESAS_USB_H
enum ;
struct renesas_usbhs_driver_callback ;
struct renesas_usbhs_platform_callback ;
struct renesas_usbhs_driver_param ;
struct renesas_usbhs_platform_info ;
#define renesas_usbhs_get_info(pdev)\
((struct renesas_usbhs_platform_info *)(pdev)->dev.platform_data)
#define renesas_usbhs_call_notify_hotplug(pdev)				\
()
