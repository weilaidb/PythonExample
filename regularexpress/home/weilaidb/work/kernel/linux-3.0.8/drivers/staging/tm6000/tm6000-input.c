static unsigned int ir_debug;
module_param(ir_debug, int, 0644);
MODULE_PARM_DESC(ir_debug, "enable debug message [IR]");
static unsigned int enable_ir = 1;
module_param(enable_ir, int, 0644);
MODULE_PARM_DESC(enable_ir, "enable ir (default is enable)");
#define PWLED_OFF 2
#undef dprintk
#define dprintk(fmt, arg...) \
if (ir_debug)
struct tm6000_ir_poll_result ;
struct tm6000_IR ;
void tm6000_ir_wait(struct tm6000_core *dev, u8 state)
static int tm6000_ir_config(struct tm6000_IR *ir)
static void tm6000_ir_urb_received(struct urb *urb)
static int default_polling_getkey(struct tm6000_IR *ir,
struct tm6000_ir_poll_result *poll_result)
static void tm6000_ir_handle_key(struct tm6000_IR *ir)
static void tm6000_ir_work(struct work_struct *work)
static int tm6000_ir_start(struct rc_dev *rc)
static void tm6000_ir_stop(struct rc_dev *rc)
int tm6000_ir_change_protocol(struct rc_dev *rc, u64 rc_type)
int tm6000_ir_int_start(struct tm6000_core *dev)
void tm6000_ir_int_stop(struct tm6000_core *dev)
int tm6000_ir_init(struct tm6000_core *dev)
int tm6000_ir_fini(struct tm6000_core *dev)
