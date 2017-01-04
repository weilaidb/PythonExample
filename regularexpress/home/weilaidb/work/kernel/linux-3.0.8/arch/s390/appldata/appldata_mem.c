#define P2K(x) ((x) << (PAGE_SHIFT - 10))
static struct appldata_mem_data  __attribute__((packed)) appldata_mem_data;
static void appldata_get_mem_data(void *data)
static struct appldata_ops ops = ;
static int __init appldata_mem_init(void)
static void __exit appldata_mem_exit(void)
module_init(appldata_mem_init);
module_exit(appldata_mem_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Gerald Schaefer");
MODULE_DESCRIPTION("Linux-VM Monitor Stream, MEMORY statistics");
