static struct rc_map_table nebula[] = ;
static struct rc_map_list nebula_map = ;
static int __init init_rc_map_nebula(void)
static void __exit exit_rc_map_nebula(void)
module_init(init_rc_map_nebula)
module_exit(exit_rc_map_nebula)
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Mauro Carvalho Chehab <mchehab@redhat.com>");
