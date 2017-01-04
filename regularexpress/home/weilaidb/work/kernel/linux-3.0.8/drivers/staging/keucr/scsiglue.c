#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
static const char *host_info(struct Scsi_Host *host)
static int slave_alloc(struct scsi_device *sdev)
static int slave_configure(struct scsi_device *sdev)
static int queuecommand_lck(struct scsi_cmnd *srb,
void (*done)(struct scsi_cmnd *))
static DEF_SCSI_QCMD(queuecommand)
static int command_abort(struct scsi_cmnd *srb)
static int device_reset(struct scsi_cmnd *srb)
static int bus_reset(struct scsi_cmnd *srb)
void usb_stor_report_device_reset(struct us_data *us)
void usb_stor_report_bus_reset(struct us_data *us)
#undef SPRINTF
#define SPRINTF(args...) \
do  while (0)
static int proc_info(struct Scsi_Host *host, char *buffer, char **start,
off_t offset, int length, int inout)
static ssize_t show_max_sectors(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t store_max_sectors(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(max_sectors, S_IRUGO | S_IWUSR, show_max_sectors, store_max_sectors);
static struct device_attribute *sysfs_device_attr_list[] = ;
struct scsi_host_template usb_stor_host_template = ;
unsigned char usb_stor_sense_invalidCDB[18] = ;
unsigned int usb_stor_access_xfer_buf(struct us_data *us, unsigned char *buffer,
unsigned int buflen, struct scsi_cmnd *srb, struct scatterlist **sgptr,
unsigned int *offset, enum xfer_buf_dir dir)
void usb_stor_set_xfer_buf(struct us_data *us, unsigned char *buffer,
unsigned int buflen, struct scsi_cmnd *srb, unsigned int dir)
