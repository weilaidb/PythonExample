static int sbp2_param_exclusive_login = 1;
module_param_named(exclusive_login, sbp2_param_exclusive_login, bool, 0644);
MODULE_PARM_DESC(exclusive_login, "Exclusive login to sbp2 device "
"(default = Y, use N for concurrent initiators)");
#define SBP2_WORKAROUND_128K_MAX_TRANS	0x1
#define SBP2_WORKAROUND_INQUIRY_36	0x2
#define SBP2_WORKAROUND_MODE_SENSE_8	0x4
#define SBP2_WORKAROUND_FIX_CAPACITY	0x8
#define SBP2_WORKAROUND_DELAY_INQUIRY	0x10
#define SBP2_INQUIRY_DELAY		12
#define SBP2_WORKAROUND_POWER_CONDITION	0x20
#define SBP2_WORKAROUND_OVERRIDE	0x100
static int sbp2_param_workarounds;
module_param_named(workarounds, sbp2_param_workarounds, int, 0644);
MODULE_PARM_DESC(workarounds, "Work around device bugs (default = 0"
", 128kB max transfer = " __stringify(SBP2_WORKAROUND_128K_MAX_TRANS)
", 36 byte inquiry = "    __stringify(SBP2_WORKAROUND_INQUIRY_36)
", skip mode page 8 = "   __stringify(SBP2_WORKAROUND_MODE_SENSE_8)
", fix capacity = "       __stringify(SBP2_WORKAROUND_FIX_CAPACITY)
", delay inquiry = "      __stringify(SBP2_WORKAROUND_DELAY_INQUIRY)
", set power condition in start stop unit = "
__stringify(SBP2_WORKAROUND_POWER_CONDITION)
", override internal blacklist = " __stringify(SBP2_WORKAROUND_OVERRIDE)
", or a combination)");
static const char sbp2_driver_name[] = "sbp2";
struct sbp2_logical_unit ;
struct sbp2_target ;
static struct fw_device *target_device(struct sbp2_target *tgt)
#define INVALID_LOGIN_ID 0x10000
#define SBP2_ORB_TIMEOUT		2000U
#define SBP2_ORB_NULL			0x80000000
#define SBP2_RETRY_LIMIT		0xf
#define SBP2_CYCLE_LIMIT		(0xc8 << 12)
#define SBP2_MAX_CDB_SIZE		16
#define SBP2_MAX_SEG_SIZE		0xfffc
#define SBP2_CSR_UNIT_CHARACTERISTICS	0x3a
#define SBP2_CSR_FIRMWARE_REVISION	0x3c
#define SBP2_CSR_LOGICAL_UNIT_NUMBER	0x14
#define SBP2_CSR_LOGICAL_UNIT_DIRECTORY	0xd4
#define SBP2_LOGIN_REQUEST		0x0
#define SBP2_QUERY_LOGINS_REQUEST	0x1
#define SBP2_RECONNECT_REQUEST		0x3
#define SBP2_SET_PASSWORD_REQUEST	0x4
#define SBP2_LOGOUT_REQUEST		0x7
#define SBP2_ABORT_TASK_REQUEST		0xb
#define SBP2_ABORT_TASK_SET		0xc
#define SBP2_LOGICAL_UNIT_RESET		0xe
#define SBP2_TARGET_RESET_REQUEST	0xf
#define SBP2_AGENT_STATE		0x00
#define SBP2_AGENT_RESET		0x04
#define SBP2_ORB_POINTER		0x08
#define SBP2_DOORBELL			0x10
#define SBP2_UNSOLICITED_STATUS_ENABLE	0x14
#define SBP2_STATUS_REQUEST_COMPLETE	0x0
#define SBP2_STATUS_TRANSPORT_FAILURE	0x1
#define SBP2_STATUS_ILLEGAL_REQUEST	0x2
#define SBP2_STATUS_VENDOR_DEPENDENT	0x3
#define STATUS_GET_ORB_HIGH(v)		((v).status & 0xffff)
#define STATUS_GET_SBP_STATUS(v)	(((v).status >> 16) & 0xff)
#define STATUS_GET_LEN(v)		(((v).status >> 24) & 0x07)
#define STATUS_GET_DEAD(v)		(((v).status >> 27) & 0x01)
#define STATUS_GET_RESPONSE(v)		(((v).status >> 28) & 0x03)
#define STATUS_GET_SOURCE(v)		(((v).status >> 30) & 0x03)
#define STATUS_GET_ORB_LOW(v)		((v).orb_low)
#define STATUS_GET_DATA(v)		((v).data)
struct sbp2_status ;
struct sbp2_pointer ;
struct sbp2_orb ;
#define MANAGEMENT_ORB_LUN(v)			((v))
#define MANAGEMENT_ORB_FUNCTION(v)		((v) << 16)
#define MANAGEMENT_ORB_RECONNECT(v)		((v) << 20)
#define MANAGEMENT_ORB_EXCLUSIVE(v)		((v) ? 1 << 28 : 0)
#define MANAGEMENT_ORB_REQUEST_FORMAT(v)	((v) << 29)
#define MANAGEMENT_ORB_NOTIFY			((1) << 31)
#define MANAGEMENT_ORB_RESPONSE_LENGTH(v)	((v))
#define MANAGEMENT_ORB_PASSWORD_LENGTH(v)	((v) << 16)
struct sbp2_management_orb ;
struct sbp2_login_response ;
#define COMMAND_ORB_DATA_SIZE(v)	((v))
#define COMMAND_ORB_PAGE_SIZE(v)	((v) << 16)
#define COMMAND_ORB_PAGE_TABLE_PRESENT	((1) << 19)
#define COMMAND_ORB_MAX_PAYLOAD(v)	((v) << 20)
#define COMMAND_ORB_SPEED(v)		((v) << 24)
#define COMMAND_ORB_DIRECTION		((1) << 27)
#define COMMAND_ORB_REQUEST_FORMAT(v)	((v) << 29)
#define COMMAND_ORB_NOTIFY		((1) << 31)
struct sbp2_command_orb ;
#define SBP2_ROM_VALUE_WILDCARD ~0
#define SBP2_ROM_VALUE_MISSING  0xff000000
static const struct  sbp2_workarounds_table[] = ;
static void free_orb(struct kref *kref)
static void sbp2_status_write(struct fw_card *card, struct fw_request *request,
int tcode, int destination, int source,
int generation, unsigned long long offset,
void *payload, size_t length, void *callback_data)
static void complete_transaction(struct fw_card *card, int rcode,
void *payload, size_t length, void *data)
static void sbp2_send_orb(struct sbp2_orb *orb, struct sbp2_logical_unit *lu,
int node_id, int generation, u64 offset)
static int sbp2_cancel_orbs(struct sbp2_logical_unit *lu)
static void complete_management_orb(struct sbp2_orb *base_orb,
struct sbp2_status *status)
static int sbp2_send_management_orb(struct sbp2_logical_unit *lu, int node_id,
int generation, int function,
int lun_or_login_id, void *response)
static void sbp2_agent_reset(struct sbp2_logical_unit *lu)
static void complete_agent_reset_write_no_wait(struct fw_card *card,
int rcode, void *payload, size_t length, void *data)
static void sbp2_agent_reset_no_wait(struct sbp2_logical_unit *lu)
static inline void sbp2_allow_block(struct sbp2_logical_unit *lu)
static void sbp2_conditionally_block(struct sbp2_logical_unit *lu)
static void sbp2_conditionally_unblock(struct sbp2_logical_unit *lu)
static void sbp2_unblock(struct sbp2_target *tgt)
static int sbp2_lun2int(u16 lun)
static void sbp2_release_target(struct kref *kref)
static void sbp2_target_get(struct sbp2_target *tgt)
static void sbp2_target_put(struct sbp2_target *tgt)
static void sbp2_queue_work(struct sbp2_logical_unit *lu, unsigned long delay)
static void sbp2_set_busy_timeout(struct sbp2_logical_unit *lu)
static void sbp2_reconnect(struct work_struct *work);
static void sbp2_login(struct work_struct *work)
static int sbp2_add_logical_unit(struct sbp2_target *tgt, int lun_entry)
static int sbp2_scan_logical_unit_dir(struct sbp2_target *tgt,
const u32 *directory)
static int sbp2_scan_unit_dir(struct sbp2_target *tgt, const u32 *directory,
u32 *model, u32 *firmware_revision)
static void sbp2_clamp_management_orb_timeout(struct sbp2_target *tgt)
static void sbp2_init_workarounds(struct sbp2_target *tgt, u32 model,
u32 firmware_revision)
static struct scsi_host_template scsi_driver_template;
static int sbp2_probe(struct device *dev)
static int sbp2_remove(struct device *dev)
static void sbp2_reconnect(struct work_struct *work)
static void sbp2_update(struct fw_unit *unit)
#define SBP2_UNIT_SPEC_ID_ENTRY	0x0000609e
#define SBP2_SW_VERSION_ENTRY	0x00010483
static const struct ieee1394_device_id sbp2_id_table[] = ;
static struct fw_driver sbp2_driver = ;
static void sbp2_unmap_scatterlist(struct device *card_device,
struct sbp2_command_orb *orb)
static unsigned int sbp2_status_to_sense_data(u8 *sbp2_status, u8 *sense_data)
static void complete_command_orb(struct sbp2_orb *base_orb,
struct sbp2_status *status)
static int sbp2_map_scatterlist(struct sbp2_command_orb *orb,
struct fw_device *device, struct sbp2_logical_unit *lu)
static int sbp2_scsi_queuecommand(struct Scsi_Host *shost,
struct scsi_cmnd *cmd)
static int sbp2_scsi_slave_alloc(struct scsi_device *sdev)
static int sbp2_scsi_slave_configure(struct scsi_device *sdev)
static int sbp2_scsi_abort(struct scsi_cmnd *cmd)
static ssize_t sbp2_sysfs_ieee1394_id_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(ieee1394_id, S_IRUGO, sbp2_sysfs_ieee1394_id_show, NULL);
static struct device_attribute *sbp2_scsi_sysfs_attrs[] = ;
static struct scsi_host_template scsi_driver_template = ;
MODULE_AUTHOR("Kristian Hoegsberg <krh@bitplanet.net>");
MODULE_DESCRIPTION("SCSI over IEEE1394");
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(ieee1394, sbp2_id_table);
MODULE_ALIAS("sbp2");
static int __init sbp2_init(void)
static void __exit sbp2_cleanup(void)
module_init(sbp2_init);
module_exit(sbp2_cleanup);
