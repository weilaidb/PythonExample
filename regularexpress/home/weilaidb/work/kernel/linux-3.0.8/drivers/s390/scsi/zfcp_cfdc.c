#define KMSG_COMPONENT "zfcp"
#define pr_fmt(fmt) KMSG_COMPONENT ": " fmt
#define ZFCP_CFDC_CMND_DOWNLOAD_NORMAL		0x00010001
#define ZFCP_CFDC_CMND_DOWNLOAD_FORCE		0x00010101
#define ZFCP_CFDC_CMND_FULL_ACCESS		0x00000201
#define ZFCP_CFDC_CMND_RESTRICTED_ACCESS	0x00000401
#define ZFCP_CFDC_CMND_UPLOAD			0x00010002
#define ZFCP_CFDC_DOWNLOAD			0x00000001
#define ZFCP_CFDC_UPLOAD			0x00000002
#define ZFCP_CFDC_WITH_CONTROL_FILE		0x00010000
#define ZFCP_CFDC_IOC_MAGIC                     0xDD
#define ZFCP_CFDC_IOC \
_IOWR(ZFCP_CFDC_IOC_MAGIC, 0, struct zfcp_cfdc_data)
struct zfcp_cfdc_data ;
static int zfcp_cfdc_copy_from_user(struct scatterlist *sg,
void __user *user_buffer)
static int zfcp_cfdc_copy_to_user(void __user  *user_buffer,
struct scatterlist *sg)
static struct zfcp_adapter *zfcp_cfdc_get_adapter(u32 devno)
static int zfcp_cfdc_set_fsf(struct zfcp_fsf_cfdc *fsf_cfdc, int command)
static int zfcp_cfdc_sg_setup(int command, struct scatterlist *sg,
u8 __user *control_file)
static void zfcp_cfdc_req_to_sense(struct zfcp_cfdc_data *data,
struct zfcp_fsf_req *req)
static long zfcp_cfdc_dev_ioctl(struct file *file, unsigned int command,
unsigned long arg)
static const struct file_operations zfcp_cfdc_fops = ;
struct miscdevice zfcp_cfdc_misc = ;
void zfcp_cfdc_adapter_access_changed(struct zfcp_adapter *adapter)
static void zfcp_act_eval_err(struct zfcp_adapter *adapter, u32 table)
void zfcp_cfdc_port_denied(struct zfcp_port *port,
union fsf_status_qual *qual)
void zfcp_cfdc_lun_denied(struct scsi_device *sdev,
union fsf_status_qual *qual)
void zfcp_cfdc_lun_shrng_vltn(struct scsi_device *sdev,
union fsf_status_qual *qual)
int zfcp_cfdc_open_lun_eval(struct scsi_device *sdev,
struct fsf_qtcb_bottom_support *bottom)
