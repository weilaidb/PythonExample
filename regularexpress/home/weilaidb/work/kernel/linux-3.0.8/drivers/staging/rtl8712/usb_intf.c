#define _HCI_INTF_C_
#define DRVER  "v7_0.20100831"
static struct usb_interface *pintf;
static int r871xu_drv_init(struct usb_interface *pusb_intf,
const struct usb_device_id *pdid);
static void r871xu_dev_remove(struct usb_interface *pusb_intf);
static struct usb_device_id rtl871x_usb_id_tbl[] = ;
MODULE_DEVICE_TABLE(usb, rtl871x_usb_id_tbl);
static struct specific_device_id specific_device_id_tbl[] = ;
struct drv_priv ;
static int r871x_suspend(struct usb_interface *pusb_intf, pm_message_t state)
static int r871x_resume(struct usb_interface *pusb_intf)
static int r871x_reset_resume(struct usb_interface *pusb_intf)
static struct drv_priv drvpriv = ;
static uint r8712_usb_dvobj_init(struct _adapter *padapter)
static void r8712_usb_dvobj_deinit(struct _adapter *padapter)
void rtl871x_intf_stop(struct _adapter *padapter)
void r871x_dev_unload(struct _adapter *padapter)
static void disable_ht_for_spec_devid(const struct usb_device_id *pdid,
struct _adapter *padapter)
static u8 key_2char2num(u8 hch, u8 lch)
static int r871xu_drv_init(struct usb_interface *pusb_intf,
const struct usb_device_id *pdid)
static void r871xu_dev_remove(struct usb_interface *pusb_intf)
static int __init r8712u_drv_entry(void)
static void __exit r8712u_drv_halt(void)
module_init(r8712u_drv_entry);
module_exit(r8712u_drv_halt);
