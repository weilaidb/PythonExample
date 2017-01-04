#undef pr
#define pr(fmt, args...) pr_info("raid6test: " fmt, ##args)
#define NDISKS 16
static struct page *dataptrs[NDISKS];
static addr_conv_t addr_conv[NDISKS];
static struct page *data[NDISKS+3];
static struct page *spare;
static struct page *recovi;
static struct page *recovj;
static void callback(void *param)
static void makedata(int disks)
static char disk_type(int d, int disks)
static void raid6_dual_recov(int disks, size_t bytes, int faila, int failb, struct page **ptrs)
static int test_disks(int i, int j, int disks)
static int test(int disks, int *tests)
static int raid6_test(void)
static void raid6_test_exit(void)
late_initcall(raid6_test);
module_exit(raid6_test_exit);
MODULE_AUTHOR("Dan Williams <dan.j.williams@intel.com>");
MODULE_DESCRIPTION("asynchronous RAID-6 recovery self tests");
MODULE_LICENSE("GPL");
