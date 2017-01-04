MODULE_LICENSE("GPL");
MODULE_AUTHOR("Jan Glauber <jan.glauber@de.ibm.com>");
MODULE_DESCRIPTION("s390 PRNG interface");
static int prng_chunk_size = 256;
module_param(prng_chunk_size, int, S_IRUSR | S_IRGRP | S_IROTH);
MODULE_PARM_DESC(prng_chunk_size, "PRNG read chunk size in bytes");
static int prng_entropy_limit = 4096;
module_param(prng_entropy_limit, int, S_IRUSR | S_IRGRP | S_IROTH | S_IWUSR);
MODULE_PARM_DESC(prng_entropy_limit,
"PRNG add entropy after that much bytes were produced");
struct s390_prng_data ;
static struct s390_prng_data *p;
static unsigned char parm_block[32] = ;
static int prng_open(struct inode *inode, struct file *file)
static void prng_add_entropy(void)
static void prng_seed(int nbytes)
static ssize_t prng_read(struct file *file, char __user *ubuf, size_t nbytes,
loff_t *ppos)
static const struct file_operations prng_fops = ;
static struct miscdevice prng_dev = ;
static int __init prng_init(void)
static void __exit prng_exit(void)
module_init(prng_init);
module_exit(prng_exit);
