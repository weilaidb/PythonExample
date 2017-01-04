#define MAGIC_START	"IKCFG_ST"
#define MAGIC_END	"IKCFG_ED"
#define MAGIC_SIZE (sizeof(MAGIC_START) - 1)
#define kernel_config_data_size \
(sizeof(kernel_config_data) - 1 - MAGIC_SIZE * 2)
static ssize_t
ikconfig_read_current(struct file *file, char __user *buf,
size_t len, loff_t * offset)
static const struct file_operations ikconfig_file_ops = ;
static int __init ikconfig_init(void)
static void __exit ikconfig_cleanup(void)
module_init(ikconfig_init);
module_exit(ikconfig_cleanup);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Randy Dunlap");
MODULE_DESCRIPTION("Echo the kernel .config file used to build the kernel");
