#undef DEBUG_NVRAM
#define NVRAM_HEADER_LEN	sizeof(struct nvram_header)
#define NVRAM_BLOCK_LEN		NVRAM_HEADER_LEN
struct nvram_header ;
struct nvram_partition ;
static LIST_HEAD(nvram_partitions);
static loff_t dev_nvram_llseek(struct file *file, loff_t offset, int origin)
static ssize_t dev_nvram_read(struct file *file, char __user *buf,
size_t count, loff_t *ppos)
static ssize_t dev_nvram_write(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
static long dev_nvram_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
const struct file_operations nvram_fops = ;
static struct miscdevice nvram_dev = ;
static void __init nvram_print_partitions(char * label)
static int __init nvram_write_header(struct nvram_partition * part)
static unsigned char __init nvram_checksum(struct nvram_header *p)
static int nvram_can_remove_partition(struct nvram_partition *part,
const char *name, int sig, const char *exceptions[])
int __init nvram_remove_partition(const char *name, int sig,
const char *exceptions[])
loff_t __init nvram_create_partition(const char *name, int sig,
int req_size, int min_size)
int nvram_get_partition_size(loff_t data_index)
loff_t nvram_find_partition(const char *name, int sig, int *out_size)
int __init nvram_scan_partitions(void)
static int __init nvram_init(void)
void __exit nvram_cleanup(void)
module_init(nvram_init);
module_exit(nvram_cleanup);
MODULE_LICENSE("GPL");
