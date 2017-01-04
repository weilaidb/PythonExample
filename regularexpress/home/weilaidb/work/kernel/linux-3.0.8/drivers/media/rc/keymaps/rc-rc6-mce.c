static struct rc_map_table rc6_mce[] = ;
static struct rc_map_list rc6_mce_map = ;
static int __init init_rc_map_rc6_mce(void)
static void __exit exit_rc_map_rc6_mce(void)
module_init(init_rc_map_rc6_mce)
module_exit(exit_rc_map_rc6_mce)
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Jarod Wilson <jarod@redhat.com>");
