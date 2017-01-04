static int timeout_log_enabled;
static int __init ccw_timeout_log_setup(char *unused)
__setup("ccw_timeout_log", ccw_timeout_log_setup);
static void ccw_timeout_log(struct ccw_device *cdev)
static void
ccw_device_timeout(unsigned long data)
void
ccw_device_set_timeout(struct ccw_device *cdev, int expires)
int
ccw_device_cancel_halt_clear(struct ccw_device *cdev)
void ccw_device_update_sense_data(struct ccw_device *cdev)
int ccw_device_test_sense_data(struct ccw_device *cdev)
static void
__recover_lost_chpids(struct subchannel *sch, int old_lpm)
static void
ccw_device_recog_done(struct ccw_device *cdev, int state)
void
ccw_device_sense_id_done(struct ccw_device *cdev, int err)
int ccw_device_notify(struct ccw_device *cdev, int event)
static void ccw_device_oper_notify(struct ccw_device *cdev)
static void
ccw_device_done(struct ccw_device *cdev, int state)
void ccw_device_recognition(struct ccw_device *cdev)
static void ccw_device_request_event(struct ccw_device *cdev, enum dev_event e)
static void ccw_device_report_path_events(struct ccw_device *cdev)
static void ccw_device_reset_path_events(struct ccw_device *cdev)
void
ccw_device_verify_done(struct ccw_device *cdev, int err)
int
ccw_device_online(struct ccw_device *cdev)
void
ccw_device_disband_done(struct ccw_device *cdev, int err)
int
ccw_device_offline(struct ccw_device *cdev)
static void ccw_device_generic_notoper(struct ccw_device *cdev,
enum dev_event dev_event)
static void ccw_device_offline_verify(struct ccw_device *cdev,
enum dev_event dev_event)
static void
ccw_device_online_verify(struct ccw_device *cdev, enum dev_event dev_event)
static void ccw_device_boxed_verify(struct ccw_device *cdev,
enum dev_event dev_event)
static void
ccw_device_irq(struct ccw_device *cdev, enum dev_event dev_event)
static void
ccw_device_online_timeout(struct ccw_device *cdev, enum dev_event dev_event)
static void
ccw_device_w4sense(struct ccw_device *cdev, enum dev_event dev_event)
static void
ccw_device_killing_irq(struct ccw_device *cdev, enum dev_event dev_event)
static void
ccw_device_killing_timeout(struct ccw_device *cdev, enum dev_event dev_event)
void ccw_device_kill_io(struct ccw_device *cdev)
static void
ccw_device_delay_verify(struct ccw_device *cdev, enum dev_event dev_event)
static void
ccw_device_start_id(struct ccw_device *cdev, enum dev_event dev_event)
void ccw_device_trigger_reprobe(struct ccw_device *cdev)
static void ccw_device_disabled_irq(struct ccw_device *cdev,
enum dev_event dev_event)
static void
ccw_device_change_cmfstate(struct ccw_device *cdev, enum dev_event dev_event)
static void ccw_device_update_cmfblock(struct ccw_device *cdev,
enum dev_event dev_event)
static void
ccw_device_quiesce_done(struct ccw_device *cdev, enum dev_event dev_event)
static void
ccw_device_quiesce_timeout(struct ccw_device *cdev, enum dev_event dev_event)
static void
ccw_device_nop(struct ccw_device *cdev, enum dev_event dev_event)
fsm_func_t *dev_jumptable[NR_DEV_STATES][NR_DEV_EVENTS] = ;
EXPORT_SYMBOL_GPL(ccw_device_set_timeout);
