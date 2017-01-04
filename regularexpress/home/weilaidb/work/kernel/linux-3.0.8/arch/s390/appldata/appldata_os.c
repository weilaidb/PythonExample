#define KMSG_COMPONENT	"appldata"
#define pr_fmt(fmt) KMSG_COMPONENT ": " fmt
#define LOAD_INT(x) ((x) >> FSHIFT)
#define LOAD_FRAC(x) LOAD_INT(((x) & (FIXED_1-1)) * 100)
struct appldata_os_per_cpu  __attribute__((packed));
struct appldata_os_data  __attribute__((packed));
static struct appldata_os_data *appldata_os_data;
static struct appldata_ops ops = ;
static void appldata_get_os_data(void *data)
static int __init appldata_os_init(void)
static void __exit appldata_os_exit(void)
module_init(appldata_os_init);
module_exit(appldata_os_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Gerald Schaefer");
MODULE_DESCRIPTION("Linux-VM Monitor Stream, OS statistics");
