static struct rc_map_table imon_mce[] = ;
static struct rc_map_list imon_mce_map = ;
static int __init init_rc_map_imon_mce(void)
static void __exit exit_rc_map_imon_mce(void)
module_init(init_rc_map_imon_mce)
module_exit(exit_rc_map_imon_mce)
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Jarod Wilson <jarod@redhat.com>");
