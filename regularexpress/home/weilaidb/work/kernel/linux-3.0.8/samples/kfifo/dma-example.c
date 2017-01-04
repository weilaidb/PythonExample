#define FIFO_SIZE	32
static struct kfifo fifo;
static int __init example_init(void)
static void __exit example_exit(void)
module_init(example_init);
module_exit(example_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Stefani Seibold <stefani@seibold.net>");
