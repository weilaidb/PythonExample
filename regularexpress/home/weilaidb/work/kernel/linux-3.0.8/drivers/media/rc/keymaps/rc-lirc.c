static struct rc_map_table lirc[] = ;
static struct rc_map_list lirc_map = ;
static int __init init_rc_map_lirc(void)
static void __exit exit_rc_map_lirc(void)
module_init(init_rc_map_lirc)
module_exit(exit_rc_map_lirc)
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Jarod Wilson <jarod@redhat.com>");
