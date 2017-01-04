static struct rc_map_table behold[] = ;
static struct rc_map_list behold_map = ;
static int __init init_rc_map_behold(void)
static void __exit exit_rc_map_behold(void)
module_init(init_rc_map_behold)
module_exit(exit_rc_map_behold)
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Mauro Carvalho Chehab <mchehab@redhat.com>");
