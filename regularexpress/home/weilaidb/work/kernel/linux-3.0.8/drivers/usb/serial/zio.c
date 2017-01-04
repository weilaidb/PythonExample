static const struct usb_device_id id_table[] = ;
MODULE_DEVICE_TABLE(usb, id_table);
static struct usb_driver zio_driver = ;
static struct usb_serial_driver zio_device = ;
static int __init zio_init(void)
static void __exit zio_exit(void)
module_init(zio_init);
module_exit(zio_exit);
MODULE_LICENSE("GPL");
