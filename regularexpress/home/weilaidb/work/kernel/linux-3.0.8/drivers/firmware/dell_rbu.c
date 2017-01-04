MODULE_AUTHOR("Abhay Salunke <abhay_salunke@dell.com>");
MODULE_DESCRIPTION("Driver for updating BIOS image on DELL systems");
MODULE_LICENSE("GPL");
MODULE_VERSION("3.2");
#define BIOS_SCAN_LIMIT 0xffffffff
#define MAX_IMAGE_LENGTH 16
static struct _rbu_data  rbu_data;
static char image_type[MAX_IMAGE_LENGTH + 1] = "mono";
module_param_string(image_type, image_type, sizeof (image_type), 0);
MODULE_PARM_DESC(image_type,
"BIOS image type. choose- mono or packet or init");
static unsigned long allocation_floor = 0x100000;
module_param(allocation_floor, ulong, 0644);
MODULE_PARM_DESC(allocation_floor,
"Minimum address for allocations when using Packet mode");
struct packet_data ;
static struct packet_data packet_data_head;
static struct platform_device *rbu_device;
static int context;
static dma_addr_t dell_rbu_dmaaddr;
static void init_packet_head(void)
static int create_packet(void *data, size_t length)
static int packetize_data(const u8 *data, size_t length)
static int do_packet_read(char *data, struct list_head *ptemp_list,
int length, int bytes_read, int *list_read_count)
static int packet_read_list(char *data, size_t * pread_length)
static void packet_empty_list(void)
static void img_update_free(void)
static int img_update_realloc(unsigned long size)
static ssize_t read_packet_data(char *buffer, loff_t pos, size_t count)
static ssize_t read_rbu_mono_data(char *buffer, loff_t pos, size_t count)
static ssize_t read_rbu_data(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buffer, loff_t pos, size_t count)
static void callbackfn_rbu(const struct firmware *fw, void *context)
static ssize_t read_rbu_image_type(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buffer, loff_t pos, size_t count)
static ssize_t write_rbu_image_type(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buffer, loff_t pos, size_t count)
static ssize_t read_rbu_packet_size(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buffer, loff_t pos, size_t count)
static ssize_t write_rbu_packet_size(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buffer, loff_t pos, size_t count)
static struct bin_attribute rbu_data_attr = ;
static struct bin_attribute rbu_image_type_attr = ;
static struct bin_attribute rbu_packet_size_attr = ;
static int __init dcdrbu_init(void)
static __exit void dcdrbu_exit(void)
module_exit(dcdrbu_exit);
module_init(dcdrbu_init);
