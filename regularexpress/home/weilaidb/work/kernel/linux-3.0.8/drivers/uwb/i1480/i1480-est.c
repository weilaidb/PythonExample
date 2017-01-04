static struct uwb_est_entry i1480_est_fd00[] = ;
static struct uwb_est_entry i1480_est_fd01[] = ;
static int __init i1480_est_init(void)
module_init(i1480_est_init);
static void __exit i1480_est_exit(void)
module_exit(i1480_est_exit);
MODULE_AUTHOR("Inaky Perez-Gonzalez <inaky.perez-gonzalez@intel.com>");
MODULE_DESCRIPTION("i1480's Vendor Specific Event Size Tables");
MODULE_LICENSE("GPL");
static struct usb_device_id __used i1480_est_id_table[] = ;
MODULE_DEVICE_TABLE(usb, i1480_est_id_table);
