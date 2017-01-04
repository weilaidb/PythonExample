static struct rc_map_table flydvb[] = ;
static struct rc_map_list flydvb_map = ;
static int __init init_rc_map_flydvb(void)
static void __exit exit_rc_map_flydvb(void)
module_init(init_rc_map_flydvb)
module_exit(exit_rc_map_flydvb)
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Mauro Carvalho Chehab <mchehab@redhat.com>");
