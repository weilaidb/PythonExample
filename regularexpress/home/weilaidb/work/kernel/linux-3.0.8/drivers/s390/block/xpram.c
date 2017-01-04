#define KMSG_COMPONENT "xpram"
#define pr_fmt(fmt) KMSG_COMPONENT ": " fmt
#define XPRAM_NAME	"xpram"
#define XPRAM_DEVS	1
#define XPRAM_MAX_DEVS	32
typedef struct  xpram_device_t;
static xpram_device_t xpram_devices[XPRAM_MAX_DEVS];
static unsigned int xpram_sizes[XPRAM_MAX_DEVS];
static struct gendisk *xpram_disks[XPRAM_MAX_DEVS];
static struct request_queue *xpram_queues[XPRAM_MAX_DEVS];
static unsigned int xpram_pages;
static int xpram_devs;
static int devs = XPRAM_DEVS;
static char *sizes[XPRAM_MAX_DEVS];
module_param(devs, int, 0);
module_param_array(sizes, charp, NULL, 0);
MODULE_PARM_DESC(devs, "number of devices (\"partitions\"), " \
"the default is " __MODULE_STRING(XPRAM_DEVS) "\n");
MODULE_PARM_DESC(sizes, "list of device (partition) sizes " \
"the defaults are 0s \n" \
"All devices with size 0 equally partition the "
"remaining space on the expanded strorage not "
"claimed by explicit sizes\n");
MODULE_LICENSE("GPL");
static int xpram_page_in (unsigned long page_addr, unsigned int xpage_index)
static long xpram_page_out (unsigned long page_addr, unsigned int xpage_index)
static int xpram_present(void)
static unsigned long xpram_highest_page_index(void)
static int xpram_make_request(struct request_queue *q, struct bio *bio)
static int xpram_getgeo(struct block_device *bdev, struct hd_geometry *geo)
static const struct block_device_operations xpram_devops =
;
static int __init xpram_setup_sizes(unsigned long pages)
static int __init xpram_setup_blkdev(void)
static void xpram_resume_error(const char *message)
static int xpram_restore(struct device *dev)
static const struct dev_pm_ops xpram_pm_ops = ;
static struct platform_driver xpram_pdrv = ;
static struct platform_device *xpram_pdev;
static void __exit xpram_exit(void)
static int __init xpram_init(void)
module_init(xpram_init);
module_exit(xpram_exit);
