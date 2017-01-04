#define DEVICE_NAME		"ps3disk"
#define BOUNCE_SIZE		(64*1024)
#define PS3DISK_MAX_DISKS	16
#define PS3DISK_MINORS		16
#define PS3DISK_NAME		"ps3d%c"
struct ps3disk_private ;
#define LV1_STORAGE_SEND_ATA_COMMAND	(2)
#define LV1_STORAGE_ATA_HDDOUT		(0x23)
struct lv1_ata_cmnd_block ;
enum lv1_ata_proto ;
enum lv1_ata_in_out ;
static int ps3disk_major;
static const struct block_device_operations ps3disk_fops = ;
static void ps3disk_scatter_gather(struct ps3_storage_device *dev,
struct request *req, int gather)
static int ps3disk_submit_request_sg(struct ps3_storage_device *dev,
struct request *req)
static int ps3disk_submit_flush_request(struct ps3_storage_device *dev,
struct request *req)
static void ps3disk_do_request(struct ps3_storage_device *dev,
struct request_queue *q)
static void ps3disk_request(struct request_queue *q)
static irqreturn_t ps3disk_interrupt(int irq, void *data)
static int ps3disk_sync_cache(struct ps3_storage_device *dev)
static void swap_buf_le16(u16 *buf, unsigned int buf_words)
static u64 ata_id_n_sectors(const u16 *id)
static void ata_id_string(const u16 *id, unsigned char *s, unsigned int ofs,
unsigned int len)
static void ata_id_c_string(const u16 *id, unsigned char *s, unsigned int ofs,
unsigned int len)
static int ps3disk_identify(struct ps3_storage_device *dev)
static unsigned long ps3disk_mask;
static DEFINE_MUTEX(ps3disk_mask_mutex);
static int __devinit ps3disk_probe(struct ps3_system_bus_device *_dev)
static int ps3disk_remove(struct ps3_system_bus_device *_dev)
static struct ps3_system_bus_driver ps3disk = ;
static int __init ps3disk_init(void)
static void __exit ps3disk_exit(void)
module_init(ps3disk_init);
module_exit(ps3disk_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("PS3 Disk Storage Driver");
MODULE_AUTHOR("Sony Corporation");
MODULE_ALIAS(PS3_MODULE_ALIAS_STOR_DISK);
