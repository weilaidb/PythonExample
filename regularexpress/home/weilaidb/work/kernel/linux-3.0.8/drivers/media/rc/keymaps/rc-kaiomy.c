static struct rc_map_table kaiomy[] = ;
static struct rc_map_list kaiomy_map = ;
static int __init init_rc_map_kaiomy(void)
static void __exit exit_rc_map_kaiomy(void)
module_init(init_rc_map_kaiomy)
module_exit(exit_rc_map_kaiomy)
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Mauro Carvalho Chehab <mchehab@redhat.com>");
