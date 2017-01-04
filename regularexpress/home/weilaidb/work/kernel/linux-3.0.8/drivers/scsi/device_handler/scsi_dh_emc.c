#define CLARIION_NAME			"emc"
#define CLARIION_TRESPASS_PAGE		0x22
#define CLARIION_BUFFER_SIZE		0xFC
#define CLARIION_TIMEOUT		(60 * HZ)
#define CLARIION_RETRIES		3
#define CLARIION_UNBOUND_LU		-1
#define CLARIION_SP_A			0
#define CLARIION_SP_B			1
#define CLARIION_SHORT_TRESPASS		1
#define CLARIION_HONOR_RESERVATIONS	2
#define CLARIION_LUN_UNINITIALIZED	-1
#define CLARIION_LUN_UNBOUND		0
#define CLARIION_LUN_BOUND		1
#define CLARIION_LUN_OWNED		2
static unsigned char long_trespass[] = ;
static unsigned char short_trespass[] = ;
static const char * lun_state[] =
;
struct clariion_dh_data ;
static inline struct clariion_dh_data
*get_clariion_data(struct scsi_device *sdev)
static int trespass_endio(struct scsi_device *sdev, char *sense)
static int parse_sp_info_reply(struct scsi_device *sdev,
struct clariion_dh_data *csdev)
#define emc_default_str "FC (Legacy)"
static char * parse_sp_model(struct scsi_device *sdev, unsigned char *buffer)
static struct request *get_req(struct scsi_device *sdev, int cmd,
unsigned char *buffer)
static int send_inquiry_cmd(struct scsi_device *sdev, int page,
struct clariion_dh_data *csdev)
static int send_trespass_cmd(struct scsi_device *sdev,
struct clariion_dh_data *csdev)
static int clariion_check_sense(struct scsi_device *sdev,
struct scsi_sense_hdr *sense_hdr)
static int clariion_prep_fn(struct scsi_device *sdev, struct request *req)
static int clariion_std_inquiry(struct scsi_device *sdev,
struct clariion_dh_data *csdev)
static int clariion_send_inquiry(struct scsi_device *sdev,
struct clariion_dh_data *csdev)
static int clariion_activate(struct scsi_device *sdev,
activate_complete fn, void *data)
static int clariion_set_params(struct scsi_device *sdev, const char *params)
static const struct scsi_dh_devlist clariion_dev_list[] = ;
static int clariion_bus_attach(struct scsi_device *sdev);
static void clariion_bus_detach(struct scsi_device *sdev);
static struct scsi_device_handler clariion_dh = ;
static int clariion_bus_attach(struct scsi_device *sdev)
static void clariion_bus_detach(struct scsi_device *sdev)
static int __init clariion_init(void)
static void __exit clariion_exit(void)
module_init(clariion_init);
module_exit(clariion_exit);
MODULE_DESCRIPTION("EMC CX/AX/FC-family driver");
MODULE_AUTHOR("Mike Christie <michaelc@cs.wisc.edu>, Chandra Seetharaman <sekharan@us.ibm.com>");
MODULE_LICENSE("GPL");
