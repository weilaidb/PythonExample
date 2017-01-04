static const struct usb_device_id id_table[] = ;
MODULE_DEVICE_TABLE(usb, id_table);
static struct usb_driver moto_driver = ;
static struct usb_serial_driver moto_device = ;
static int __init moto_init(void)
static void __exit moto_exit(void)
module_init(moto_init);
module_exit(moto_exit);
MODULE_LICENSE("GPL");
