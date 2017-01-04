static struct rc_map_table manli[] = ;
static struct rc_map_list manli_map = ;
static int __init init_rc_map_manli(void)
static void __exit exit_rc_map_manli(void)
module_init(init_rc_map_manli)
module_exit(exit_rc_map_manli)
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Mauro Carvalho Chehab <mchehab@redhat.com>");
