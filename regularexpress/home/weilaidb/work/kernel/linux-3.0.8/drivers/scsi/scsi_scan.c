#define ALLOC_FAILURE_MSG	KERN_ERR "%s: Allocation failure during" \
" SCSI scanning, some SCSI devices might not be configured\n"
#define SCSI_TIMEOUT (2*HZ)
#define SCSI_UID_SER_NUM 'S'
#define SCSI_UID_UNKNOWN 'Z'
#define SCSI_SCAN_NO_RESPONSE		0
#define SCSI_SCAN_TARGET_PRESENT	1
#define SCSI_SCAN_LUN_PRESENT		2
static const char *scsi_null_device_strs = "nullnullnullnull";
#define MAX_SCSI_LUNS	512
static unsigned int max_scsi_luns = MAX_SCSI_LUNS;
static unsigned int max_scsi_luns = 1;
module_param_named(max_luns, max_scsi_luns, uint, S_IRUGO|S_IWUSR);
MODULE_PARM_DESC(max_luns,
"last scsi LUN (should be between 1 and 2^32-1)");
#define SCSI_SCAN_TYPE_DEFAULT "async"
#define SCSI_SCAN_TYPE_DEFAULT "sync"
static char scsi_scan_type[6] = SCSI_SCAN_TYPE_DEFAULT;
module_param_string(scan, scsi_scan_type, sizeof(scsi_scan_type), S_IRUGO);
MODULE_PARM_DESC(scan, "sync, async or none");
static unsigned int max_scsi_report_luns = 511;
module_param_named(max_report_luns, max_scsi_report_luns, uint, S_IRUGO|S_IWUSR);
MODULE_PARM_DESC(max_report_luns,
"REPORT LUNS maximum number of LUNS received (should be"
" between 1 and 16384)");
static unsigned int scsi_inq_timeout = SCSI_TIMEOUT/HZ + 18;
module_param_named(inq_timeout, scsi_inq_timeout, uint, S_IRUGO|S_IWUSR);
MODULE_PARM_DESC(inq_timeout,
"Timeout (in seconds) waiting for devices to answer INQUIRY."
" Default is 20. Some devices may need more; most need less.");
static DEFINE_SPINLOCK(async_scan_lock);
static LIST_HEAD(scanning_hosts);
struct async_scan_data ;
int scsi_complete_async_scans(void)
EXPORT_SYMBOL_GPL(scsi_complete_async_scans);
late_initcall(scsi_complete_async_scans);
static void scsi_unlock_floptical(struct scsi_device *sdev,
unsigned char *result)
static struct scsi_device *scsi_alloc_sdev(struct scsi_target *starget,
unsigned int lun, void *hostdata)
static void scsi_target_destroy(struct scsi_target *starget)
static void scsi_target_dev_release(struct device *dev)
static struct device_type scsi_target_type = ;
int scsi_is_target_device(const struct device *dev)
EXPORT_SYMBOL(scsi_is_target_device);
static struct scsi_target *__scsi_find_target(struct device *parent,
int channel, uint id)
static struct scsi_target *scsi_alloc_target(struct device *parent,
int channel, uint id)
static void scsi_target_reap_usercontext(struct work_struct *work)
void scsi_target_reap(struct scsi_target *starget)
static void sanitize_inquiry_string(unsigned char *s, int len)
static int scsi_probe_lun(struct scsi_device *sdev, unsigned char *inq_result,
int result_len, int *bflags)
static int scsi_add_lun(struct scsi_device *sdev, unsigned char *inq_result,
int *bflags, int async)
static unsigned char *scsi_inq_str(unsigned char *buf, unsigned char *inq,
unsigned first, unsigned end)
static int scsi_probe_and_add_lun(struct scsi_target *starget,
uint lun, int *bflagsp,
struct scsi_device **sdevp, int rescan,
void *hostdata)
static void scsi_sequential_lun_scan(struct scsi_target *starget,
int bflags, int scsi_level, int rescan)
int scsilun_to_int(struct scsi_lun *scsilun)
EXPORT_SYMBOL(scsilun_to_int);
void int_to_scsilun(unsigned int lun, struct scsi_lun *scsilun)
EXPORT_SYMBOL(int_to_scsilun);
static int scsi_report_lun_scan(struct scsi_target *starget, int bflags,
int rescan)
struct scsi_device *__scsi_add_device(struct Scsi_Host *shost, uint channel,
uint id, uint lun, void *hostdata)
EXPORT_SYMBOL(__scsi_add_device);
int scsi_add_device(struct Scsi_Host *host, uint channel,
uint target, uint lun)
EXPORT_SYMBOL(scsi_add_device);
void scsi_rescan_device(struct device *dev)
EXPORT_SYMBOL(scsi_rescan_device);
static void __scsi_scan_target(struct device *parent, unsigned int channel,
unsigned int id, unsigned int lun, int rescan)
void scsi_scan_target(struct device *parent, unsigned int channel,
unsigned int id, unsigned int lun, int rescan)
EXPORT_SYMBOL(scsi_scan_target);
static void scsi_scan_channel(struct Scsi_Host *shost, unsigned int channel,
unsigned int id, unsigned int lun, int rescan)
int scsi_scan_host_selected(struct Scsi_Host *shost, unsigned int channel,
unsigned int id, unsigned int lun, int rescan)
static void scsi_sysfs_add_devices(struct Scsi_Host *shost)
static struct async_scan_data *scsi_prep_async_scan(struct Scsi_Host *shost)
static void scsi_finish_async_scan(struct async_scan_data *data)
static void do_scsi_scan_host(struct Scsi_Host *shost)
static int do_scan_async(void *_data)
void scsi_scan_host(struct Scsi_Host *shost)
EXPORT_SYMBOL(scsi_scan_host);
void scsi_forget_host(struct Scsi_Host *shost)
struct scsi_device *scsi_get_host_dev(struct Scsi_Host *shost)
EXPORT_SYMBOL(scsi_get_host_dev);
void scsi_free_host_dev(struct scsi_device *sdev)
EXPORT_SYMBOL(scsi_free_host_dev);
