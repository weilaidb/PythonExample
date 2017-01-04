static struct rc_map_table eztv[] = ;
static struct rc_map_list eztv_map = ;
static int __init init_rc_map_eztv(void)
static void __exit exit_rc_map_eztv(void)
module_init(init_rc_map_eztv)
module_exit(exit_rc_map_eztv)
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Mauro Carvalho Chehab <mchehab@redhat.com>");
