static struct rc_map_table flyvideo[] = ;
static struct rc_map_list flyvideo_map = ;
static int __init init_rc_map_flyvideo(void)
static void __exit exit_rc_map_flyvideo(void)
module_init(init_rc_map_flyvideo)
module_exit(exit_rc_map_flyvideo)
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Mauro Carvalho Chehab <mchehab@redhat.com>");
