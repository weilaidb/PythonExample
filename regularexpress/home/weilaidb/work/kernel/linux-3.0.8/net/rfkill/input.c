enum rfkill_input_master_mode ;
#define RFKILL_OPS_DELAY 200
static enum rfkill_input_master_mode rfkill_master_switch_mode =
RFKILL_INPUT_MASTER_UNBLOCKALL;
module_param_named(master_switch_mode, rfkill_master_switch_mode, uint, 0);
MODULE_PARM_DESC(master_switch_mode,
"SW_RFKILL_ALL ON should: 0=do nothing (only unlock); 1=restore; 2=unblock all");
static spinlock_t rfkill_op_lock;
static bool rfkill_op_pending;
static unsigned long rfkill_sw_pending[BITS_TO_LONGS(NUM_RFKILL_TYPES)];
static unsigned long rfkill_sw_state[BITS_TO_LONGS(NUM_RFKILL_TYPES)];
enum rfkill_sched_op ;
static enum rfkill_sched_op rfkill_master_switch_op;
static enum rfkill_sched_op rfkill_op;
static void __rfkill_handle_global_op(enum rfkill_sched_op op)
static void __rfkill_handle_normal_op(const enum rfkill_type type,
const bool complement)
static void rfkill_op_handler(struct work_struct *work)
static DECLARE_DELAYED_WORK(rfkill_op_work, rfkill_op_handler);
static unsigned long rfkill_last_scheduled;
static unsigned long rfkill_ratelimit(const unsigned long last)
static void rfkill_schedule_ratelimited(void)
static void rfkill_schedule_global_op(enum rfkill_sched_op op)
static void rfkill_schedule_toggle(enum rfkill_type type)
static void rfkill_schedule_evsw_rfkillall(int state)
static void rfkill_event(struct input_handle *handle, unsigned int type,
unsigned int code, int data)
static int rfkill_connect(struct input_handler *handler, struct input_dev *dev,
const struct input_device_id *id)
static void rfkill_start(struct input_handle *handle)
static void rfkill_disconnect(struct input_handle *handle)
static const struct input_device_id rfkill_ids[] = ;
static struct input_handler rfkill_handler = ;
int __init rfkill_handler_init(void)
void __exit rfkill_handler_exit(void)
