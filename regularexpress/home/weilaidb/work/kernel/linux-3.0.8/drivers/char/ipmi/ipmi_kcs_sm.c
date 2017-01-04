#define KCS_DEBUG_STATES	4
#define KCS_DEBUG_MSG		2
#define	KCS_DEBUG_ENABLE	1
static int kcs_debug;
module_param(kcs_debug, int, 0644);
MODULE_PARM_DESC(kcs_debug, "debug bitmask, 1=enable, 2=messages, 4=states");
enum kcs_states ;
#define MAX_KCS_READ_SIZE IPMI_MAX_MSG_LENGTH
#define MAX_KCS_WRITE_SIZE IPMI_MAX_MSG_LENGTH
#define IBF_RETRY_TIMEOUT 1000000
#define OBF_RETRY_TIMEOUT 1000000
#define MAX_ERROR_RETRIES 10
#define ERROR0_OBF_WAIT_JIFFIES (2*HZ)
struct si_sm_data ;
static unsigned int init_kcs_data(struct si_sm_data *kcs,
struct si_sm_io *io)
static inline unsigned char read_status(struct si_sm_data *kcs)
static inline unsigned char read_data(struct si_sm_data *kcs)
static inline void write_cmd(struct si_sm_data *kcs, unsigned char data)
static inline void write_data(struct si_sm_data *kcs, unsigned char data)
#define KCS_GET_STATUS_ABORT	0x60
#define KCS_WRITE_START		0x61
#define KCS_WRITE_END		0x62
#define KCS_READ_BYTE		0x68
#define GET_STATUS_STATE(status) (((status) >> 6) & 0x03)
#define KCS_IDLE_STATE	0
#define KCS_READ_STATE	1
#define KCS_WRITE_STATE	2
#define KCS_ERROR_STATE	3
#define GET_STATUS_ATN(status) ((status) & 0x04)
#define GET_STATUS_IBF(status) ((status) & 0x02)
#define GET_STATUS_OBF(status) ((status) & 0x01)
static inline void write_next_byte(struct si_sm_data *kcs)
static inline void start_error_recovery(struct si_sm_data *kcs, char *reason)
static inline void read_next_byte(struct si_sm_data *kcs)
static inline int check_ibf(struct si_sm_data *kcs, unsigned char status,
long time)
static inline int check_obf(struct si_sm_data *kcs, unsigned char status,
long time)
static void clear_obf(struct si_sm_data *kcs, unsigned char status)
static void restart_kcs_transaction(struct si_sm_data *kcs)
static int start_kcs_transaction(struct si_sm_data *kcs, unsigned char *data,
unsigned int size)
static int get_kcs_result(struct si_sm_data *kcs, unsigned char *data,
unsigned int length)
static enum si_sm_result kcs_event(struct si_sm_data *kcs, long time)
static int kcs_size(void)
static int kcs_detect(struct si_sm_data *kcs)
static void kcs_cleanup(struct si_sm_data *kcs)
struct si_sm_handlers kcs_smi_handlers = ;
