#define CREATE_TRACE_POINTS
static void scsi_done(struct scsi_cmnd *cmd);
#define MIN_RESET_DELAY (2*HZ)
#define MIN_RESET_PERIOD (15*HZ)
unsigned int scsi_logging_level;
#if defined(CONFIG_SCSI_LOGGING)
EXPORT_SYMBOL(scsi_logging_level);
static const char *const scsi_device_types[] = ;
const char * scsi_device_type(unsigned type)
EXPORT_SYMBOL(scsi_device_type);
struct scsi_host_cmd_pool ;
static struct scsi_host_cmd_pool scsi_cmd_pool = ;
static struct scsi_host_cmd_pool scsi_cmd_dma_pool = ;
static DEFINE_MUTEX(host_cmd_pool_mutex);
static struct scsi_cmnd *
scsi_pool_alloc_command(struct scsi_host_cmd_pool *pool, gfp_t gfp_mask)
static void
scsi_pool_free_command(struct scsi_host_cmd_pool *pool,
struct scsi_cmnd *cmd)
static struct scsi_cmnd *
scsi_host_alloc_command(struct Scsi_Host *shost, gfp_t gfp_mask)
struct scsi_cmnd *__scsi_get_command(struct Scsi_Host *shost, gfp_t gfp_mask)
EXPORT_SYMBOL_GPL(__scsi_get_command);
struct scsi_cmnd *scsi_get_command(struct scsi_device *dev, gfp_t gfp_mask)
EXPORT_SYMBOL(scsi_get_command);
void __scsi_put_command(struct Scsi_Host *shost, struct scsi_cmnd *cmd,
struct device *dev)
EXPORT_SYMBOL(__scsi_put_command);
void scsi_put_command(struct scsi_cmnd *cmd)
EXPORT_SYMBOL(scsi_put_command);
static struct scsi_host_cmd_pool *scsi_get_host_cmd_pool(gfp_t gfp_mask)
static void scsi_put_host_cmd_pool(gfp_t gfp_mask)
struct scsi_cmnd *scsi_allocate_command(gfp_t gfp_mask)
EXPORT_SYMBOL(scsi_allocate_command);
void scsi_free_command(gfp_t gfp_mask, struct scsi_cmnd *cmd)
EXPORT_SYMBOL(scsi_free_command);
int scsi_setup_command_freelist(struct Scsi_Host *shost)
void scsi_destroy_command_freelist(struct Scsi_Host *shost)
void scsi_log_send(struct scsi_cmnd *cmd)
void scsi_log_completion(struct scsi_cmnd *cmd, int disposition)
void scsi_cmd_get_serial(struct Scsi_Host *host, struct scsi_cmnd *cmd)
EXPORT_SYMBOL(scsi_cmd_get_serial);
int scsi_dispatch_cmd(struct scsi_cmnd *cmd)
static void scsi_done(struct scsi_cmnd *cmd)
static struct scsi_driver *scsi_cmd_to_driver(struct scsi_cmnd *cmd)
void scsi_finish_command(struct scsi_cmnd *cmd)
EXPORT_SYMBOL(scsi_finish_command);
void scsi_adjust_queue_depth(struct scsi_device *sdev, int tagged, int tags)
EXPORT_SYMBOL(scsi_adjust_queue_depth);
int scsi_track_queue_full(struct scsi_device *sdev, int depth)
EXPORT_SYMBOL(scsi_track_queue_full);
static int scsi_vpd_inquiry(struct scsi_device *sdev, unsigned char *buffer,
u8 page, unsigned len)
int scsi_get_vpd_page(struct scsi_device *sdev, u8 page, unsigned char *buf,
int buf_len)
EXPORT_SYMBOL_GPL(scsi_get_vpd_page);
int scsi_device_get(struct scsi_device *sdev)
EXPORT_SYMBOL(scsi_device_get);
void scsi_device_put(struct scsi_device *sdev)
EXPORT_SYMBOL(scsi_device_put);
struct scsi_device *__scsi_iterate_devices(struct Scsi_Host *shost,
struct scsi_device *prev)
EXPORT_SYMBOL(__scsi_iterate_devices);
void starget_for_each_device(struct scsi_target *starget, void *data,
void (*fn)(struct scsi_device *, void *))
EXPORT_SYMBOL(starget_for_each_device);
void __starget_for_each_device(struct scsi_target *starget, void *data,
void (*fn)(struct scsi_device *, void *))
EXPORT_SYMBOL(__starget_for_each_device);
struct scsi_device *__scsi_device_lookup_by_target(struct scsi_target *starget,
uint lun)
EXPORT_SYMBOL(__scsi_device_lookup_by_target);
struct scsi_device *scsi_device_lookup_by_target(struct scsi_target *starget,
uint lun)
EXPORT_SYMBOL(scsi_device_lookup_by_target);
struct scsi_device *__scsi_device_lookup(struct Scsi_Host *shost,
uint channel, uint id, uint lun)
EXPORT_SYMBOL(__scsi_device_lookup);
struct scsi_device *scsi_device_lookup(struct Scsi_Host *shost,
uint channel, uint id, uint lun)
EXPORT_SYMBOL(scsi_device_lookup);
MODULE_DESCRIPTION("SCSI core");
MODULE_LICENSE("GPL");
module_param(scsi_logging_level, int, S_IRUGO|S_IWUSR);
MODULE_PARM_DESC(scsi_logging_level, "a bit mask of logging levels");
static int __init init_scsi(void)
static void __exit exit_scsi(void)
subsys_initcall(init_scsi);
module_exit(exit_scsi);
