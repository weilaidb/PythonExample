static struct rc_map_table tivo[] = ;
static struct rc_map_list tivo_map = ;
static int __init init_rc_map_tivo(void)
static void __exit exit_rc_map_tivo(void)
module_init(init_rc_map_tivo)
module_exit(exit_rc_map_tivo)
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Jarod Wilson <jarod@redhat.com>");
