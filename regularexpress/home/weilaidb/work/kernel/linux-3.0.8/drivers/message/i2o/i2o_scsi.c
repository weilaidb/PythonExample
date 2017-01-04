#define OSM_NAME	"scsi-osm"
#define OSM_VERSION	"1.316"
#define OSM_DESCRIPTION	"I2O SCSI Peripheral OSM"
static struct i2o_driver i2o_scsi_driver;
static unsigned int i2o_scsi_max_id = 16;
static unsigned int i2o_scsi_max_lun = 255;
struct i2o_scsi_host ;
static struct scsi_host_template i2o_scsi_host_template;
#define I2O_SCSI_CAN_QUEUE	4
static struct i2o_class_id i2o_scsi_class_id[] = ;
static struct i2o_scsi_host *i2o_scsi_host_alloc(struct i2o_controller *c)
;
static struct i2o_scsi_host *i2o_scsi_get_host(struct i2o_controller *c)
;
static int i2o_scsi_remove(struct device *dev)
;
static int i2o_scsi_probe(struct device *dev)
;
static const char *i2o_scsi_info(struct Scsi_Host *SChost)
static int i2o_scsi_reply(struct i2o_controller *c, u32 m,
struct i2o_message *msg)
;
static void i2o_scsi_notify_device_add(struct i2o_device *i2o_dev)
;
static void i2o_scsi_notify_device_remove(struct i2o_device *i2o_dev)
;
static void i2o_scsi_notify_controller_add(struct i2o_controller *c)
;
static void i2o_scsi_notify_controller_remove(struct i2o_controller *c)
;
static struct i2o_driver i2o_scsi_driver = ;
static int i2o_scsi_queuecommand_lck(struct scsi_cmnd *SCpnt,
void (*done) (struct scsi_cmnd *))
static DEF_SCSI_QCMD(i2o_scsi_queuecommand)
static int i2o_scsi_abort(struct scsi_cmnd *SCpnt)
static int i2o_scsi_bios_param(struct scsi_device *sdev,
struct block_device *dev, sector_t capacity,
int *ip)
static struct scsi_host_template i2o_scsi_host_template = ;
static int __init i2o_scsi_init(void)
;
static void __exit i2o_scsi_exit(void)
;
MODULE_AUTHOR("Red Hat Software");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION(OSM_DESCRIPTION);
MODULE_VERSION(OSM_VERSION);
module_init(i2o_scsi_init);
module_exit(i2o_scsi_exit);
