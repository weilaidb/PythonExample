MODULE_AUTHOR("Domao");
MODULE_DESCRIPTION("ENE USB Mass Storage driver for Linux");
MODULE_LICENSE("GPL");
static unsigned int delay_use = 1;
static struct usb_device_id eucr_usb_ids [] = ;
MODULE_DEVICE_TABLE (usb, eucr_usb_ids);
static int eucr_suspend(struct usb_interface *iface, pm_message_t message)
static int eucr_resume(struct usb_interface *iface)
static int eucr_reset_resume(struct usb_interface *iface)
#define eucr_suspend		NULL
#define eucr_resume		NULL
#define eucr_reset_resume	NULL
static int eucr_pre_reset(struct usb_interface *iface)
static int eucr_post_reset(struct usb_interface *iface)
void fill_inquiry_response(struct us_data *us, unsigned char *data, unsigned int data_len)
static int usb_stor_control_thread(void * __us)
static int associate_dev(struct us_data *us, struct usb_interface *intf)
static int get_device_info(struct us_data *us, const struct usb_device_id *id)
static int get_transport(struct us_data *us)
static int get_protocol(struct us_data *us)
static int get_pipes(struct us_data *us)
static int usb_stor_acquire_resources(struct us_data *us)
static void usb_stor_release_resources(struct us_data *us)
static void dissociate_dev(struct us_data *us)
static void quiesce_and_remove_host(struct us_data *us)
static void release_everything(struct us_data *us)
static int usb_stor_scan_thread(void * __us)
static int eucr_probe(struct usb_interface *intf, const struct usb_device_id *id)
static void eucr_disconnect(struct usb_interface *intf)
static struct usb_driver usb_storage_driver = ;
static int __init usb_stor_init(void)
static void __exit usb_stor_exit(void)
module_init(usb_stor_init);
module_exit(usb_stor_exit);
