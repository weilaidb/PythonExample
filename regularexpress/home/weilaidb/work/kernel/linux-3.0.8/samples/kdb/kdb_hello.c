static int kdb_hello_cmd(int argc, const char **argv)
static int __init kdb_hello_cmd_init(void)
static void __exit kdb_hello_cmd_exit(void)
module_init(kdb_hello_cmd_init);
module_exit(kdb_hello_cmd_exit);
MODULE_AUTHOR("WindRiver");
MODULE_DESCRIPTION("KDB example to add a hello command");
MODULE_LICENSE("GPL");
