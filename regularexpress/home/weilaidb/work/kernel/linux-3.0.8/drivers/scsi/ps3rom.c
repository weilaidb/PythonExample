#define DEVICE_NAME			"ps3rom"
#define BOUNCE_SIZE			(64*1024)
#define PS3ROM_MAX_SECTORS		(BOUNCE_SIZE >> 9)
struct ps3rom_private ;
#define LV1_STORAGE_SEND_ATAPI_COMMAND	(1)
struct lv1_atapi_cmnd_block ;
enum lv1_atapi_proto ;
enum lv1_atapi_in_out ;
static int ps3rom_slave_configure(struct scsi_device *scsi_dev)
static int ps3rom_atapi_request(struct ps3_storage_device *dev,
struct scsi_cmnd *cmd)
static inline unsigned int srb10_lba(const struct scsi_cmnd *cmd)
static inline unsigned int srb10_len(const struct scsi_cmnd *cmd)
static int ps3rom_read_request(struct ps3_storage_device *dev,
struct scsi_cmnd *cmd, u32 start_sector,
u32 sectors)
static int ps3rom_write_request(struct ps3_storage_device *dev,
struct scsi_cmnd *cmd, u32 start_sector,
u32 sectors)
static int ps3rom_queuecommand_lck(struct scsi_cmnd *cmd,
void (*done)(struct scsi_cmnd *))
static DEF_SCSI_QCMD(ps3rom_queuecommand)
static int decode_lv1_status(u64 status, unsigned char *sense_key,
unsigned char *asc, unsigned char *ascq)
static irqreturn_t ps3rom_interrupt(int irq, void *data)
static struct scsi_host_template ps3rom_host_template = ;
static int __devinit ps3rom_probe(struct ps3_system_bus_device *_dev)
static int ps3rom_remove(struct ps3_system_bus_device *_dev)
static struct ps3_system_bus_driver ps3rom = ;
static int __init ps3rom_init(void)
static void __exit ps3rom_exit(void)
module_init(ps3rom_init);
module_exit(ps3rom_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("PS3 BD/DVD/CD-ROM Storage Driver");
MODULE_AUTHOR("Sony Corporation");
MODULE_ALIAS(PS3_MODULE_ALIAS_STOR_ROM);
