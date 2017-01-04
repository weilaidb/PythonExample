static struct rc_map_table pixelview[] = ;
static struct rc_map_list pixelview_map = ;
static int __init init_rc_map_pixelview(void)
static void __exit exit_rc_map_pixelview(void)
module_init(init_rc_map_pixelview)
module_exit(exit_rc_map_pixelview)
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Mauro Carvalho Chehab <mchehab@redhat.com>");
