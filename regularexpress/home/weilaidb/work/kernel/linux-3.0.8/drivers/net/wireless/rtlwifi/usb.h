#define __RTL_USB_H__
#define RTL_RX_DESC_SIZE		24
#define RTL_USB_DEVICE(vend, prod, cfg) \
.match_flags = USB_DEVICE_ID_MATCH_DEVICE, \
.idVendor = (vend), \
.idProduct = (prod), \
.driver_info = (kernel_ulong_t)&(cfg)
#define USB_HIGH_SPEED_BULK_SIZE	512
#define USB_FULL_SPEED_BULK_SIZE	64
#define RTL_USB_MAX_TXQ_NUM		4
#define RTL_USB_MAX_EP_NUM		6
#define RTL_USB_MAX_TX_URBS_NUM		8
enum rtl_txq ;
struct rtl_ep_map ;
struct _trx_info ;
static inline void _rtl_install_trx_info(struct rtl_usb *rtlusb,
struct sk_buff *skb,
u32 ep_num)
enum rtl_usb_state ;
#define IS_USB_STOP(rtlusb_ptr) (USB_STATE_STOP == (rtlusb_ptr)->state)
#define IS_USB_START(rtlusb_ptr) (USB_STATE_START == (rtlusb_ptr)->state)
#define SET_USB_STOP(rtlusb_ptr) \
do  while (0)
#define SET_USB_START(rtlusb_ptr)				\
do  while (0)
struct rtl_usb ;
struct rtl_usb_priv ;
#define rtl_usbpriv(hw)	 (((struct rtl_usb_priv *)(rtl_priv(hw))->priv))
#define rtl_usbdev(usbpriv)	(&((usbpriv)->dev))
int __devinit rtl_usb_probe(struct usb_interface *intf,
const struct usb_device_id *id);
void rtl_usb_disconnect(struct usb_interface *intf);
int rtl_usb_suspend(struct usb_interface *pusb_intf, pm_message_t message);
int rtl_usb_resume(struct usb_interface *pusb_intf);
