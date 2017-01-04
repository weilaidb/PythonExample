#define FCP_COMMAND_REGISTER		0xfffff0000b00ULL
#define AVC_CTYPE_CONTROL		0x0
#define AVC_CTYPE_STATUS		0x1
#define AVC_CTYPE_NOTIFY		0x3
#define AVC_RESPONSE_ACCEPTED		0x9
#define AVC_RESPONSE_STABLE		0xc
#define AVC_RESPONSE_CHANGED		0xd
#define AVC_RESPONSE_INTERIM		0xf
#define AVC_SUBUNIT_TYPE_TUNER		(0x05 << 3)
#define AVC_SUBUNIT_TYPE_UNIT		(0x1f << 3)
#define AVC_OPCODE_VENDOR		0x00
#define AVC_OPCODE_READ_DESCRIPTOR	0x09
#define AVC_OPCODE_DSIT			0xc8
#define AVC_OPCODE_DSD			0xcb
#define DESCRIPTOR_TUNER_STATUS 	0x80
#define DESCRIPTOR_SUBUNIT_IDENTIFIER	0x00
#define SFE_VENDOR_DE_COMPANYID_0	0x00
#define SFE_VENDOR_DE_COMPANYID_1	0x12
#define SFE_VENDOR_DE_COMPANYID_2	0x87
#define SFE_VENDOR_OPCODE_REGISTER_REMOTE_CONTROL 0x0a
#define SFE_VENDOR_OPCODE_LNB_CONTROL		0x52
#define SFE_VENDOR_OPCODE_TUNE_QPSK		0x58
#define SFE_VENDOR_OPCODE_GET_FIRMWARE_VERSION	0x00
#define SFE_VENDOR_OPCODE_HOST2CA		0x56
#define SFE_VENDOR_OPCODE_CA2HOST		0x57
#define SFE_VENDOR_OPCODE_CISTATUS		0x59
#define SFE_VENDOR_OPCODE_TUNE_QPSK2		0x60
#define SFE_VENDOR_TAG_CA_RESET			0x00
#define SFE_VENDOR_TAG_CA_APPLICATION_INFO	0x01
#define SFE_VENDOR_TAG_CA_PMT			0x02
#define SFE_VENDOR_TAG_CA_DATE_TIME		0x04
#define SFE_VENDOR_TAG_CA_MMI			0x05
#define SFE_VENDOR_TAG_CA_ENTER_MENU		0x07
#define EN50221_LIST_MANAGEMENT_ONLY	0x03
#define EN50221_TAG_APP_INFO		0x9f8021
#define EN50221_TAG_CA_INFO		0x9f8031
struct avc_command_frame ;
struct avc_response_frame ;
#define LAST_OPERAND (509 - 1)
static inline void clear_operands(struct avc_command_frame *c, int from, int to)
static void pad_operands(struct avc_command_frame *c, int from)
#define AVC_DEBUG_READ_DESCRIPTOR              0x0001
#define AVC_DEBUG_DSIT                         0x0002
#define AVC_DEBUG_DSD                          0x0004
#define AVC_DEBUG_REGISTER_REMOTE_CONTROL      0x0008
#define AVC_DEBUG_LNB_CONTROL                  0x0010
#define AVC_DEBUG_TUNE_QPSK                    0x0020
#define AVC_DEBUG_TUNE_QPSK2                   0x0040
#define AVC_DEBUG_HOST2CA                      0x0080
#define AVC_DEBUG_CA2HOST                      0x0100
#define AVC_DEBUG_APPLICATION_PMT              0x4000
#define AVC_DEBUG_FCP_PAYLOADS                 0x8000
static int avc_debug;
module_param_named(debug, avc_debug, int, 0644);
MODULE_PARM_DESC(debug, "Verbose logging (none = 0"
", FCP subactions"
": READ DESCRIPTOR = "		__stringify(AVC_DEBUG_READ_DESCRIPTOR)
", DSIT = "			__stringify(AVC_DEBUG_DSIT)
", REGISTER_REMOTE_CONTROL = "	__stringify(AVC_DEBUG_REGISTER_REMOTE_CONTROL)
", LNB CONTROL = "		__stringify(AVC_DEBUG_LNB_CONTROL)
", TUNE QPSK = "		__stringify(AVC_DEBUG_TUNE_QPSK)
", TUNE QPSK2 = "		__stringify(AVC_DEBUG_TUNE_QPSK2)
", HOST2CA = "			__stringify(AVC_DEBUG_HOST2CA)
", CA2HOST = "			__stringify(AVC_DEBUG_CA2HOST)
"; Application sent PMT = "	__stringify(AVC_DEBUG_APPLICATION_PMT)
", FCP payloads = "		__stringify(AVC_DEBUG_FCP_PAYLOADS)
", or a combination, or all = -1)");
static unsigned int num_fake_ca_system_ids;
static int fake_ca_system_ids[4] = ;
module_param_array(fake_ca_system_ids, int, &num_fake_ca_system_ids, 0644);
MODULE_PARM_DESC(fake_ca_system_ids, "If your CAM application manufacturer "
"does not have the same ca_system_id as your CAS, you can "
"override what ca_system_ids are presented to the "
"application by setting this field to an array of ids.");
static const char *debug_fcp_ctype(unsigned int ctype)
static const char *debug_fcp_opcode(unsigned int opcode,
const u8 *data, int length)
static void debug_fcp(const u8 *data, int length)
static void debug_pmt(char *msg, int length)
static int avc_write(struct firedtv *fdtv)
static bool is_register_rc(struct avc_response_frame *r)
int avc_recv(struct firedtv *fdtv, void *data, size_t length)
static int add_pid_filter(struct firedtv *fdtv, u8 *operand)
static int avc_tuner_tuneqpsk(struct firedtv *fdtv,
struct dvb_frontend_parameters *params)
static int avc_tuner_dsd_dvb_c(struct firedtv *fdtv,
struct dvb_frontend_parameters *params)
static int avc_tuner_dsd_dvb_t(struct firedtv *fdtv,
struct dvb_frontend_parameters *params)
int avc_tuner_dsd(struct firedtv *fdtv,
struct dvb_frontend_parameters *params)
int avc_tuner_set_pids(struct firedtv *fdtv, unsigned char pidc, u16 pid[])
int avc_tuner_get_ts(struct firedtv *fdtv)
int avc_identify_subunit(struct firedtv *fdtv)
#define SIZEOF_ANTENNA_INPUT_INFO 22
int avc_tuner_status(struct firedtv *fdtv, struct firedtv_tuner_status *stat)
int avc_lnb_control(struct firedtv *fdtv, char voltage, char burst,
char conttone, char nrdiseq,
struct dvb_diseqc_master_cmd *diseqcmd)
int avc_register_remote_control(struct firedtv *fdtv)
void avc_remote_ctrl_work(struct work_struct *work)
static int get_ca_object_pos(struct avc_response_frame *r)
static int get_ca_object_length(struct avc_response_frame *r)
int avc_ca_app_info(struct firedtv *fdtv, char *app_info, unsigned int *len)
int avc_ca_info(struct firedtv *fdtv, char *app_info, unsigned int *len)
int avc_ca_reset(struct firedtv *fdtv)
int avc_ca_pmt(struct firedtv *fdtv, char *msg, int length)
int avc_ca_get_time_date(struct firedtv *fdtv, int *interval)
int avc_ca_enter_menu(struct firedtv *fdtv)
int avc_ca_get_mmi(struct firedtv *fdtv, char *mmi_object, unsigned int *len)
#define CMP_OUTPUT_PLUG_CONTROL_REG_0	0xfffff0000904ULL
static int cmp_read(struct firedtv *fdtv, u64 addr, __be32 *data)
static int cmp_lock(struct firedtv *fdtv, u64 addr, __be32 data[])
static inline u32 get_opcr(__be32 opcr, u32 mask, u32 shift)
static inline void set_opcr(__be32 *opcr, u32 value, u32 mask, u32 shift)
#define get_opcr_online(v)		get_opcr((v), 0x1, 31)
#define get_opcr_p2p_connections(v)	get_opcr((v), 0x3f, 24)
#define get_opcr_channel(v)		get_opcr((v), 0x3f, 16)
#define set_opcr_p2p_connections(p, v)	set_opcr((p), (v), 0x3f, 24)
#define set_opcr_channel(p, v)		set_opcr((p), (v), 0x3f, 16)
#define set_opcr_data_rate(p, v)	set_opcr((p), (v), 0x3, 14)
#define set_opcr_overhead_id(p, v)	set_opcr((p), (v), 0xf, 10)
int cmp_establish_pp_connection(struct firedtv *fdtv, int plug, int channel)
void cmp_break_pp_connection(struct firedtv *fdtv, int plug, int channel)
