#define BT_DEBUG_OFF	0
#define BT_DEBUG_ENABLE	1
#define BT_DEBUG_MSG	2
#define BT_DEBUG_STATES	4
static int bt_debug;
module_param(bt_debug, int, 0644);
MODULE_PARM_DESC(bt_debug, "debug bitmask, 1=enable, 2=messages, 4=states");
#define BT_NORMAL_TIMEOUT	5
#define BT_NORMAL_RETRY_LIMIT	2
#define BT_RESET_DELAY		6
enum bt_states ;
#define BT_STATE_CHANGE(X, Y)
#define BT_SI_SM_RETURN(Y)
struct si_sm_data ;
#define BT_CLR_WR_PTR	0x01
#define BT_CLR_RD_PTR	0x02
#define BT_H2B_ATN	0x04
#define BT_B2H_ATN	0x08
#define BT_SMS_ATN	0x10
#define BT_OEM0		0x20
#define BT_H_BUSY	0x40
#define BT_B_BUSY	0x80
#define BT_STATUS	bt->io->inputb(bt->io, 0)
#define BT_CONTROL(x)	bt->io->outputb(bt->io, 0, x)
#define BMC2HOST	bt->io->inputb(bt->io, 1)
#define HOST2BMC(x)	bt->io->outputb(bt->io, 1, x)
#define BT_INTMASK_R	bt->io->inputb(bt->io, 2)
#define BT_INTMASK_W(x)	bt->io->outputb(bt->io, 2, x)
static char *state2txt(unsigned char state)
#define STATE2TXT state2txt(bt->state)
static char *status2txt(unsigned char status)
#define STATUS2TXT status2txt(status)
static unsigned int bt_init_data(struct si_sm_data *bt, struct si_sm_io *io)
static void force_result(struct si_sm_data *bt, unsigned char completion_code)
static int bt_start_transaction(struct si_sm_data *bt,
unsigned char *data,
unsigned int size)
static int bt_get_result(struct si_sm_data *bt,
unsigned char *data,
unsigned int length)
#define BT_BMC_HWRST	0x80
static void reset_flags(struct si_sm_data *bt)
static void drain_BMC2HOST(struct si_sm_data *bt)
static inline void write_all_bytes(struct si_sm_data *bt)
static inline int read_all_bytes(struct si_sm_data *bt)
static enum si_sm_result error_recovery(struct si_sm_data *bt,
unsigned char status,
unsigned char cCode)
static enum si_sm_result bt_event(struct si_sm_data *bt, long time)
static int bt_detect(struct si_sm_data *bt)
static void bt_cleanup(struct si_sm_data *bt)
static int bt_size(void)
struct si_sm_handlers bt_smi_handlers = ;
