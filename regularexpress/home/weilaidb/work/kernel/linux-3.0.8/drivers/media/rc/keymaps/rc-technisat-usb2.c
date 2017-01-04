static struct rc_map_table technisat_usb2[] = ;
static struct rc_map_list technisat_usb2_map = ;
static int __init init_rc_map(void)
static void __exit exit_rc_map(void)
module_init(init_rc_map)
module_exit(exit_rc_map)
MODULE_AUTHOR("Patrick Boettcher <pboettcher@kernellabs.com>");
MODULE_LICENSE("GPL");
