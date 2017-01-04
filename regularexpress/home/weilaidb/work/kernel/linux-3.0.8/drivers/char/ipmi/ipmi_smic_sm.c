#define SMIC_DEBUG_STATES	4
#define SMIC_DEBUG_MSG		2
#define	SMIC_DEBUG_ENABLE	1
static int smic_debug = 1;
module_param(smic_debug, int, 0644);
MODULE_PARM_DESC(smic_debug, "debug bitmask, 1=enable, 2=messages, 4=states");
enum smic_states ;
#define MAX_SMIC_READ_SIZE 80
#define MAX_SMIC_WRITE_SIZE 80
#define SMIC_MAX_ERROR_RETRIES 3
#define SMIC_RETRY_TIMEOUT 2000000
#define SMIC_RX_DATA_READY	0x80
#define SMIC_TX_DATA_READY	0x40
#define SMIC_SMI		0x10
#define SMIC_EVM_DATA_AVAIL	0x08
#define SMIC_SMS_DATA_AVAIL	0x04
#define SMIC_FLAG_BSY		0x01
#define	EC_NO_ERROR		0x00
#define	EC_ABORTED		0x01
#define	EC_ILLEGAL_CONTROL	0x02
#define	EC_NO_RESPONSE		0x03
#define	EC_ILLEGAL_COMMAND	0x04
#define	EC_BUFFER_FULL		0x05
struct si_sm_data ;
static unsigned int init_smic_data(struct si_sm_data *smic,
struct si_sm_io *io)
static int start_smic_transaction(struct si_sm_data *smic,
unsigned char *data, unsigned int size)
static int smic_get_result(struct si_sm_data *smic,
unsigned char *data, unsigned int length)
static inline unsigned char read_smic_flags(struct si_sm_data *smic)
static inline unsigned char read_smic_status(struct si_sm_data *smic)
static inline unsigned char read_smic_data(struct si_sm_data *smic)
static inline void write_smic_flags(struct si_sm_data *smic,
unsigned char   flags)
static inline void write_smic_control(struct si_sm_data *smic,
unsigned char   control)
static inline void write_si_sm_data(struct si_sm_data *smic,
unsigned char   data)
static inline void start_error_recovery(struct si_sm_data *smic, char *reason)
static inline void write_next_byte(struct si_sm_data *smic)
static inline void read_next_byte(struct si_sm_data *smic)
#define	SMIC_GET_STATUS		0x00
#define	SMIC_READY		0x00
#define	SMIC_WR_START		0x01
#define	SMIC_WR_NEXT		0x02
#define	SMIC_WR_END		0x03
#define	SMIC_RD_START		0x04
#define	SMIC_RD_NEXT		0x05
#define	SMIC_RD_END		0x06
#define	SMIC_CODE_MASK		0x0f
#define	SMIC_CONTROL		0x00
#define	SMIC_STATUS		0x80
#define	SMIC_CS_MASK		0x80
#define	SMIC_SMS		0x40
#define	SMIC_SMM		0x60
#define	SMIC_STREAM_MASK	0x60
#define	SMIC_CC_SMS_GET_STATUS	(SMIC_CONTROL|SMIC_SMS|SMIC_GET_STATUS)
#define	SMIC_CC_SMS_WR_START	(SMIC_CONTROL|SMIC_SMS|SMIC_WR_START)
#define	SMIC_CC_SMS_WR_NEXT	(SMIC_CONTROL|SMIC_SMS|SMIC_WR_NEXT)
#define	SMIC_CC_SMS_WR_END	(SMIC_CONTROL|SMIC_SMS|SMIC_WR_END)
#define	SMIC_CC_SMS_RD_START	(SMIC_CONTROL|SMIC_SMS|SMIC_RD_START)
#define	SMIC_CC_SMS_RD_NEXT	(SMIC_CONTROL|SMIC_SMS|SMIC_RD_NEXT)
#define	SMIC_CC_SMS_RD_END	(SMIC_CONTROL|SMIC_SMS|SMIC_RD_END)
#define	SMIC_CC_SMM_GET_STATUS	(SMIC_CONTROL|SMIC_SMM|SMIC_GET_STATUS)
#define	SMIC_CC_SMM_WR_START	(SMIC_CONTROL|SMIC_SMM|SMIC_WR_START)
#define	SMIC_CC_SMM_WR_NEXT	(SMIC_CONTROL|SMIC_SMM|SMIC_WR_NEXT)
#define	SMIC_CC_SMM_WR_END	(SMIC_CONTROL|SMIC_SMM|SMIC_WR_END)
#define	SMIC_CC_SMM_RD_START	(SMIC_CONTROL|SMIC_SMM|SMIC_RD_START)
#define	SMIC_CC_SMM_RD_NEXT	(SMIC_CONTROL|SMIC_SMM|SMIC_RD_NEXT)
#define	SMIC_CC_SMM_RD_END	(SMIC_CONTROL|SMIC_SMM|SMIC_RD_END)
#define	SMIC_SC_SMS_READY	(SMIC_STATUS|SMIC_SMS|SMIC_READY)
#define	SMIC_SC_SMS_WR_START	(SMIC_STATUS|SMIC_SMS|SMIC_WR_START)
#define	SMIC_SC_SMS_WR_NEXT	(SMIC_STATUS|SMIC_SMS|SMIC_WR_NEXT)
#define	SMIC_SC_SMS_WR_END	(SMIC_STATUS|SMIC_SMS|SMIC_WR_END)
#define	SMIC_SC_SMS_RD_START	(SMIC_STATUS|SMIC_SMS|SMIC_RD_START)
#define	SMIC_SC_SMS_RD_NEXT	(SMIC_STATUS|SMIC_SMS|SMIC_RD_NEXT)
#define	SMIC_SC_SMS_RD_END	(SMIC_STATUS|SMIC_SMS|SMIC_RD_END)
#define	SMIC_SC_SMM_READY	(SMIC_STATUS|SMIC_SMM|SMIC_READY)
#define	SMIC_SC_SMM_WR_START	(SMIC_STATUS|SMIC_SMM|SMIC_WR_START)
#define	SMIC_SC_SMM_WR_NEXT	(SMIC_STATUS|SMIC_SMM|SMIC_WR_NEXT)
#define	SMIC_SC_SMM_WR_END	(SMIC_STATUS|SMIC_SMM|SMIC_WR_END)
#define	SMIC_SC_SMM_RD_START	(SMIC_STATUS|SMIC_SMM|SMIC_RD_START)
#define	SMIC_SC_SMM_RD_NEXT	(SMIC_STATUS|SMIC_SMM|SMIC_RD_NEXT)
#define	SMIC_SC_SMM_RD_END	(SMIC_STATUS|SMIC_SMM|SMIC_RD_END)
static enum si_sm_result smic_event(struct si_sm_data *smic, long time)
static int smic_detect(struct si_sm_data *smic)
static void smic_cleanup(struct si_sm_data *kcs)
static int smic_size(void)
struct si_sm_handlers smic_smi_handlers = ;
