static char cmdline[256];
static size_t len;
static int num1 __attribute__((l1_data));
void kgdb_l1_test(void) __attribute__((l1_text));
void kgdb_l1_test(void)
#if L2_LENGTH
static int num2 __attribute__((l2));
void kgdb_l2_test(void) __attribute__((l2));
void kgdb_l2_test(void)
int kgdb_test(char *name, int len, int count, int z)
static ssize_t
kgdb_test_proc_read(struct file *file, char __user *buf,
size_t count, loff_t *ppos)
static ssize_t
kgdb_test_proc_write(struct file *file, const char __user *buffer,
size_t count, loff_t *pos)
static const struct file_operations kgdb_test_proc_fops = ;
static int __init kgdbtest_init(void)
static void __exit kgdbtest_exit(void)
module_init(kgdbtest_init);
module_exit(kgdbtest_exit);
MODULE_LICENSE("GPL");
