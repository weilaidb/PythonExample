static int dvb_frontend_debug;
static int dvb_shutdown_timeout;
static int dvb_force_auto_inversion;
static int dvb_override_tune_delay;
static int dvb_powerdown_on_sleep = 1;
static int dvb_mfe_wait_time = 5;
module_param_named(frontend_debug, dvb_frontend_debug, int, 0644);
MODULE_PARM_DESC(frontend_debug, "Turn on/off frontend core debugging (default:off).");
module_param(dvb_shutdown_timeout, int, 0644);
MODULE_PARM_DESC(dvb_shutdown_timeout, "wait <shutdown_timeout> seconds after close() before suspending hardware");
module_param(dvb_force_auto_inversion, int, 0644);
MODULE_PARM_DESC(dvb_force_auto_inversion, "0: normal (default), 1: INVERSION_AUTO forced always");
module_param(dvb_override_tune_delay, int, 0644);
MODULE_PARM_DESC(dvb_override_tune_delay, "0: normal (default), >0 => delay in milliseconds to wait for lock after a tune attempt");
module_param(dvb_powerdown_on_sleep, int, 0644);
MODULE_PARM_DESC(dvb_powerdown_on_sleep, "0: do not power down, 1: turn LNB voltage off on sleep (default)");
module_param(dvb_mfe_wait_time, int, 0644);
MODULE_PARM_DESC(dvb_mfe_wait_time, "Wait up to <mfe_wait_time> seconds on open() for multi-frontend to become available (default:5 seconds)");
#define dprintk if (dvb_frontend_debug) printk
#define FESTATE_IDLE 1
#define FESTATE_RETUNE 2
#define FESTATE_TUNING_FAST 4
#define FESTATE_TUNING_SLOW 8
#define FESTATE_TUNED 16
#define FESTATE_ZIGZAG_FAST 32
#define FESTATE_ZIGZAG_SLOW 64
#define FESTATE_DISEQC 128
#define FESTATE_ERROR 256
#define FESTATE_WAITFORLOCK (FESTATE_TUNING_FAST | FESTATE_TUNING_SLOW | FESTATE_ZIGZAG_FAST | FESTATE_ZIGZAG_SLOW | FESTATE_DISEQC)
#define FESTATE_SEARCHING_FAST (FESTATE_TUNING_FAST | FESTATE_ZIGZAG_FAST)
#define FESTATE_SEARCHING_SLOW (FESTATE_TUNING_SLOW | FESTATE_ZIGZAG_SLOW)
#define FESTATE_LOSTLOCK (FESTATE_ZIGZAG_FAST | FESTATE_ZIGZAG_SLOW)
#define FE_ALGO_HW		1
#define DVB_FE_NO_EXIT	0
#define DVB_FE_NORMAL_EXIT	1
#define DVB_FE_DEVICE_REMOVED	2
static DEFINE_MUTEX(frontend_mutex);
struct dvb_frontend_private ;
static void dvb_frontend_wakeup(struct dvb_frontend *fe);
static void dvb_frontend_add_event(struct dvb_frontend *fe, fe_status_t status)
static int dvb_frontend_get_event(struct dvb_frontend *fe,
struct dvb_frontend_event *event, int flags)
static void dvb_frontend_init(struct dvb_frontend *fe)
void dvb_frontend_reinitialise(struct dvb_frontend *fe)
EXPORT_SYMBOL(dvb_frontend_reinitialise);
static void dvb_frontend_swzigzag_update_delay(struct dvb_frontend_private *fepriv, int locked)
static int dvb_frontend_swzigzag_autotune(struct dvb_frontend *fe, int check_wrapped)
static void dvb_frontend_swzigzag(struct dvb_frontend *fe)
static int dvb_frontend_is_exiting(struct dvb_frontend *fe)
static int dvb_frontend_should_wakeup(struct dvb_frontend *fe)
static void dvb_frontend_wakeup(struct dvb_frontend *fe)
static int dvb_frontend_thread(void *data)
static void dvb_frontend_stop(struct dvb_frontend *fe)
s32 timeval_usec_diff(struct timeval lasttime, struct timeval curtime)
EXPORT_SYMBOL(timeval_usec_diff);
static inline void timeval_usec_add(struct timeval *curtime, u32 add_usec)
void dvb_frontend_sleep_until(struct timeval *waketime, u32 add_usec)
EXPORT_SYMBOL(dvb_frontend_sleep_until);
static int dvb_frontend_start(struct dvb_frontend *fe)
static void dvb_frontend_get_frequency_limits(struct dvb_frontend *fe,
u32 *freq_min, u32 *freq_max)
static int dvb_frontend_check_parameters(struct dvb_frontend *fe,
struct dvb_frontend_parameters *parms)
static int dvb_frontend_clear_cache(struct dvb_frontend *fe)
#define _DTV_CMD(n, s, b) \
[n] =
static struct dtv_cmds_h dtv_cmds[] = ;
static void dtv_property_dump(struct dtv_property *tvp)
static int is_legacy_delivery_system(fe_delivery_system_t s)
static void dtv_property_cache_sync(struct dvb_frontend *fe,
struct dtv_frontend_properties *c,
const struct dvb_frontend_parameters *p)
static void dtv_property_legacy_params_sync(struct dvb_frontend *fe)
static void dtv_property_adv_params_sync(struct dvb_frontend *fe)
static void dtv_property_cache_submit(struct dvb_frontend *fe)
static int dvb_frontend_ioctl_legacy(struct file *file,
unsigned int cmd, void *parg);
static int dvb_frontend_ioctl_properties(struct file *file,
unsigned int cmd, void *parg);
static int dtv_property_process_get(struct dvb_frontend *fe,
struct dtv_property *tvp,
struct file *file)
static int dtv_property_process_set(struct dvb_frontend *fe,
struct dtv_property *tvp,
struct file *file)
static int dvb_frontend_ioctl(struct file *file,
unsigned int cmd, void *parg)
static int dvb_frontend_ioctl_properties(struct file *file,
unsigned int cmd, void *parg)
static int dvb_frontend_ioctl_legacy(struct file *file,
unsigned int cmd, void *parg)
static unsigned int dvb_frontend_poll(struct file *file, struct poll_table_struct *wait)
static int dvb_frontend_open(struct inode *inode, struct file *file)
static int dvb_frontend_release(struct inode *inode, struct file *file)
static const struct file_operations dvb_frontend_fops = ;
int dvb_register_frontend(struct dvb_adapter* dvb,
struct dvb_frontend* fe)
EXPORT_SYMBOL(dvb_register_frontend);
int dvb_unregister_frontend(struct dvb_frontend* fe)
EXPORT_SYMBOL(dvb_unregister_frontend);
void dvb_frontend_detach(struct dvb_frontend* fe)
void dvb_frontend_detach(struct dvb_frontend* fe)
EXPORT_SYMBOL(dvb_frontend_detach);
