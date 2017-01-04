#define ALUA_DH_NAME "alua"
#define ALUA_DH_VER "1.3"
#define TPGS_STATE_OPTIMIZED		0x0
#define TPGS_STATE_NONOPTIMIZED		0x1
#define TPGS_STATE_STANDBY		0x2
#define TPGS_STATE_UNAVAILABLE		0x3
#define TPGS_STATE_LBA_DEPENDENT	0x4
#define TPGS_STATE_OFFLINE		0xe
#define TPGS_STATE_TRANSITIONING	0xf
#define TPGS_SUPPORT_NONE		0x00
#define TPGS_SUPPORT_OPTIMIZED		0x01
#define TPGS_SUPPORT_NONOPTIMIZED	0x02
#define TPGS_SUPPORT_STANDBY		0x04
#define TPGS_SUPPORT_UNAVAILABLE	0x08
#define TPGS_SUPPORT_LBA_DEPENDENT	0x10
#define TPGS_SUPPORT_OFFLINE		0x40
#define TPGS_SUPPORT_TRANSITION		0x80
#define TPGS_MODE_UNINITIALIZED		 -1
#define TPGS_MODE_NONE			0x0
#define TPGS_MODE_IMPLICIT		0x1
#define TPGS_MODE_EXPLICIT		0x2
#define ALUA_INQUIRY_SIZE		36
#define ALUA_FAILOVER_TIMEOUT		(60 * HZ)
#define ALUA_FAILOVER_RETRIES		5
struct alua_dh_data ;
#define ALUA_POLICY_SWITCH_CURRENT	0
#define ALUA_POLICY_SWITCH_ALL		1
static char print_alua_state(int);
static int alua_check_sense(struct scsi_device *, struct scsi_sense_hdr *);
static inline struct alua_dh_data *get_alua_data(struct scsi_device *sdev)
static int realloc_buffer(struct alua_dh_data *h, unsigned len)
static struct request *get_alua_req(struct scsi_device *sdev,
void *buffer, unsigned buflen, int rw)
static int submit_std_inquiry(struct scsi_device *sdev, struct alua_dh_data *h)
static int submit_vpd_inquiry(struct scsi_device *sdev, struct alua_dh_data *h)
static unsigned submit_rtpg(struct scsi_device *sdev, struct alua_dh_data *h)
static void stpg_endio(struct request *req, int error)
static unsigned submit_stpg(struct alua_dh_data *h)
static int alua_std_inquiry(struct scsi_device *sdev, struct alua_dh_data *h)
static int alua_vpd_inquiry(struct scsi_device *sdev, struct alua_dh_data *h)
static char print_alua_state(int state)
static int alua_check_sense(struct scsi_device *sdev,
struct scsi_sense_hdr *sense_hdr)
static int alua_rtpg(struct scsi_device *sdev, struct alua_dh_data *h)
static int alua_initialize(struct scsi_device *sdev, struct alua_dh_data *h)
static int alua_activate(struct scsi_device *sdev,
activate_complete fn, void *data)
static int alua_prep_fn(struct scsi_device *sdev, struct request *req)
static const struct scsi_dh_devlist alua_dev_list[] = ;
static int alua_bus_attach(struct scsi_device *sdev);
static void alua_bus_detach(struct scsi_device *sdev);
static struct scsi_device_handler alua_dh = ;
static int alua_bus_attach(struct scsi_device *sdev)
static void alua_bus_detach(struct scsi_device *sdev)
static int __init alua_init(void)
static void __exit alua_exit(void)
module_init(alua_init);
module_exit(alua_exit);
MODULE_DESCRIPTION("DM Multipath ALUA support");
MODULE_AUTHOR("Hannes Reinecke <hare@suse.de>");
MODULE_LICENSE("GPL");
MODULE_VERSION(ALUA_DH_VER);
