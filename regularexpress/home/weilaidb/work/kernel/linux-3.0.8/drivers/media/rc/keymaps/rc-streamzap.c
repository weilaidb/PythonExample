static struct rc_map_table streamzap[] = ;
static struct rc_map_list streamzap_map = ;
static int __init init_rc_map_streamzap(void)
static void __exit exit_rc_map_streamzap(void)
module_init(init_rc_map_streamzap)
module_exit(exit_rc_map_streamzap)
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Jarod Wilson <jarod@redhat.com>");
