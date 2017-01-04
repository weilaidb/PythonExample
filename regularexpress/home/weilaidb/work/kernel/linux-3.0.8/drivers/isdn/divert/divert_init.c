MODULE_DESCRIPTION("ISDN4Linux: Call diversion support");
MODULE_AUTHOR("Werner Cornelius");
MODULE_LICENSE("GPL");
isdn_divert_if divert_if =
;
static int __init divert_init(void)
static void __exit divert_exit(void)
module_init(divert_init);
module_exit(divert_exit);
