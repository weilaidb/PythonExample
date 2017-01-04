static struct rc_map_table imon_pad[] = ;
static struct rc_map_list imon_pad_map = ;
static int __init init_rc_map_imon_pad(void)
static void __exit exit_rc_map_imon_pad(void)
module_init(init_rc_map_imon_pad)
module_exit(exit_rc_map_imon_pad)
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Jarod Wilson <jarod@redhat.com>");
