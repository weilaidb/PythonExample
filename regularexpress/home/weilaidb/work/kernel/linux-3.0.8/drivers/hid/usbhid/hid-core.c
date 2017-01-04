#define DRIVER_DESC "USB HID core driver"
#define DRIVER_LICENSE "GPL"
static unsigned int hid_mousepoll_interval;
module_param_named(mousepoll, hid_mousepoll_interval, uint, 0644);
MODULE_PARM_DESC(mousepoll, "Polling interval of mice");
static unsigned int ignoreled;
module_param_named(ignoreled, ignoreled, uint, 0644);
MODULE_PARM_DESC(ignoreled, "Autosuspend with active leds");
static char *quirks_param[MAX_USBHID_BOOT_QUIRKS] = ;
module_param_array_named(quirks, quirks_param, charp, NULL, 0444);
MODULE_PARM_DESC(quirks, "Add/modify USB HID quirks by specifying "
" quirks=vendorID:productID:quirks"
" where vendorID, productID, and quirks are all in"
" 0x-prefixed hex");
static DEFINE_MUTEX(hid_open_mut);
static void hid_io_error(struct hid_device *hid);
static int hid_submit_out(struct hid_device *hid);
static int hid_submit_ctrl(struct hid_device *hid);
static void hid_cancel_delayed_stuff(struct usbhid_device *usbhid);
static int hid_start_in(struct hid_device *hid)
static void hid_retry_timeout(unsigned long _hid)
static void hid_reset(struct work_struct *work)
static void hid_io_error(struct hid_device *hid)
static void usbhid_mark_busy(struct usbhid_device *usbhid)
static int usbhid_restart_out_queue(struct usbhid_device *usbhid)
static int usbhid_restart_ctrl_queue(struct usbhid_device *usbhid)
static void hid_irq_in(struct urb *urb)
static int hid_submit_out(struct hid_device *hid)
static int hid_submit_ctrl(struct hid_device *hid)
static void hid_irq_out(struct urb *urb)
static void hid_ctrl(struct urb *urb)
static void __usbhid_submit_report(struct hid_device *hid, struct hid_report *report,
unsigned char dir)
void usbhid_submit_report(struct hid_device *hid, struct hid_report *report, unsigned char dir)
EXPORT_SYMBOL_GPL(usbhid_submit_report);
static int usb_hidinput_input_event(struct input_dev *dev, unsigned int type, unsigned int code, int value)
int usbhid_wait_io(struct hid_device *hid)
EXPORT_SYMBOL_GPL(usbhid_wait_io);
static int hid_set_idle(struct usb_device *dev, int ifnum, int report, int idle)
static int hid_get_class_descriptor(struct usb_device *dev, int ifnum,
unsigned char type, void *buf, int size)
int usbhid_open(struct hid_device *hid)
void usbhid_close(struct hid_device *hid)
void usbhid_init_reports(struct hid_device *hid)
static int hid_find_field_early(struct hid_device *hid, unsigned int page,
unsigned int hid_code, struct hid_field **pfield)
void usbhid_set_leds(struct hid_device *hid)
EXPORT_SYMBOL_GPL(usbhid_set_leds);
static void hid_find_max_report(struct hid_device *hid, unsigned int type,
unsigned int *max)
static int hid_alloc_buffers(struct usb_device *dev, struct hid_device *hid)
static int usbhid_get_raw_report(struct hid_device *hid,
unsigned char report_number, __u8 *buf, size_t count,
unsigned char report_type)
static int usbhid_output_raw_report(struct hid_device *hid, __u8 *buf, size_t count,
unsigned char report_type)
static void usbhid_restart_queues(struct usbhid_device *usbhid)
static void hid_free_buffers(struct usb_device *dev, struct hid_device *hid)
static int usbhid_parse(struct hid_device *hid)
static int usbhid_start(struct hid_device *hid)
static void usbhid_stop(struct hid_device *hid)
static int usbhid_power(struct hid_device *hid, int lvl)
static struct hid_ll_driver usb_hid_driver = ;
static int usbhid_probe(struct usb_interface *intf, const struct usb_device_id *id)
static void usbhid_disconnect(struct usb_interface *intf)
static void hid_cancel_delayed_stuff(struct usbhid_device *usbhid)
static void hid_cease_io(struct usbhid_device *usbhid)
static int hid_pre_reset(struct usb_interface *intf)
static int hid_post_reset(struct usb_interface *intf)
int usbhid_get_power(struct hid_device *hid)
void usbhid_put_power(struct hid_device *hid)
static int hid_suspend(struct usb_interface *intf, pm_message_t message)
static int hid_resume(struct usb_interface *intf)
static int hid_reset_resume(struct usb_interface *intf)
static const struct usb_device_id hid_usb_ids[] = ;
MODULE_DEVICE_TABLE (usb, hid_usb_ids);
static struct usb_driver hid_driver = ;
static const struct hid_device_id hid_usb_table[] = ;
struct usb_interface *usbhid_find_interface(int minor)
static struct hid_driver hid_usb_driver = ;
static int __init hid_init(void)
static void __exit hid_exit(void)
module_init(hid_init);
module_exit(hid_exit);
MODULE_AUTHOR("Andreas Gal");
MODULE_AUTHOR("Vojtech Pavlik");
MODULE_AUTHOR("Jiri Kosina");
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE(DRIVER_LICENSE);
