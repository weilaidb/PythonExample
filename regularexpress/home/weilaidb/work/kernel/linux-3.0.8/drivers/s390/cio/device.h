#define S390_DEVICE_H
enum dev_state ;
enum dev_event ;
struct ccw_device;
typedef void (fsm_func_t)(struct ccw_device *, enum dev_event);
extern fsm_func_t *dev_jumptable[NR_DEV_STATES][NR_DEV_EVENTS];
static inline void
dev_fsm_event(struct ccw_device *cdev, enum dev_event dev_event)
static inline int
dev_fsm_final_state(struct ccw_device *cdev)
extern wait_queue_head_t ccw_device_init_wq;
extern atomic_t ccw_device_init_count;
int __init io_subchannel_init(void);
void io_subchannel_recog_done(struct ccw_device *cdev);
void io_subchannel_init_config(struct subchannel *sch);
int ccw_device_cancel_halt_clear(struct ccw_device *);
int ccw_device_is_orphan(struct ccw_device *);
void ccw_device_recognition(struct ccw_device *);
int ccw_device_online(struct ccw_device *);
int ccw_device_offline(struct ccw_device *);
void ccw_device_update_sense_data(struct ccw_device *);
int ccw_device_test_sense_data(struct ccw_device *);
void ccw_device_schedule_sch_unregister(struct ccw_device *);
int ccw_purge_blacklisted(void);
void ccw_device_sched_todo(struct ccw_device *cdev, enum cdev_todo todo);
void ccw_device_accumulate_irb(struct ccw_device *, struct irb *);
void ccw_device_accumulate_basic_sense(struct ccw_device *, struct irb *);
int ccw_device_accumulate_and_sense(struct ccw_device *, struct irb *);
int ccw_device_do_sense(struct ccw_device *, struct irb *);
int lpm_adjust(int lpm, int mask);
void ccw_request_start(struct ccw_device *);
int ccw_request_cancel(struct ccw_device *cdev);
void ccw_request_handler(struct ccw_device *cdev);
void ccw_request_timeout(struct ccw_device *cdev);
void ccw_request_notoper(struct ccw_device *cdev);
void ccw_device_sense_id_start(struct ccw_device *);
void ccw_device_sense_id_done(struct ccw_device *, int);
void ccw_device_verify_start(struct ccw_device *);
void ccw_device_verify_done(struct ccw_device *, int);
void ccw_device_disband_start(struct ccw_device *);
void ccw_device_disband_done(struct ccw_device *, int);
void ccw_device_stlck_start(struct ccw_device *, void *, void *, void *);
void ccw_device_stlck_done(struct ccw_device *, void *, int);
int ccw_device_call_handler(struct ccw_device *);
int ccw_device_stlck(struct ccw_device *);
void ccw_device_trigger_reprobe(struct ccw_device *);
void ccw_device_kill_io(struct ccw_device *);
int ccw_device_notify(struct ccw_device *, int);
void ccw_device_set_disconnected(struct ccw_device *cdev);
void ccw_device_set_notoper(struct ccw_device *cdev);
void ccw_device_set_timeout(struct ccw_device *, int);
extern struct subchannel_id ccw_device_get_subchannel_id(struct ccw_device *);
void retry_set_schib(struct ccw_device *cdev);
void cmf_retry_copy_block(struct ccw_device *);
int cmf_reenable(struct ccw_device *);
int ccw_set_cmf(struct ccw_device *cdev, int enable);
extern struct device_attribute dev_attr_cmb_enable;
