static struct rc_map_table dib0700_rc5_table[] = ;
static struct rc_map_list dib0700_rc5_map = ;
static int __init init_rc_map(void)
static void __exit exit_rc_map(void)
module_init(init_rc_map)
module_exit(exit_rc_map)
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Mauro Carvalho Chehab <mchehab@redhat.com>");
