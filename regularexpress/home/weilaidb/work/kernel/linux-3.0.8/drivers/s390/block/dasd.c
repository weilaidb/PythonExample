#define KMSG_COMPONENT "dasd"
#define pr_fmt(fmt) KMSG_COMPONENT ": " fmt
#define PRINTK_HEADER "dasd:"
#define DASD_CHANQ_MAX_SIZE 4
#define DASD_SLEEPON_START_TAG	(void *) 1
#define DASD_SLEEPON_END_TAG	(void *) 2
debug_info_t *dasd_debug_area;
struct dasd_discipline *dasd_diag_discipline_pointer;
void dasd_int_handler(struct ccw_device *, unsigned long, struct irb *);
MODULE_AUTHOR("Holger Smolinski <Holger.Smolinski@de.ibm.com>");
MODULE_DESCRIPTION("Linux on S/390 DASD device driver,"
" Copyright 2000 IBM Corporation");
MODULE_SUPPORTED_DEVICE("dasd");
MODULE_LICENSE("GPL");
static int  dasd_alloc_queue(struct dasd_block *);
static void dasd_setup_queue(struct dasd_block *);
static void dasd_free_queue(struct dasd_block *);
static void dasd_flush_request_queue(struct dasd_block *);
static int dasd_flush_block_queue(struct dasd_block *);
static void dasd_device_tasklet(struct dasd_device *);
static void dasd_block_tasklet(struct dasd_block *);
static void do_kick_device(struct work_struct *);
static void do_restore_device(struct work_struct *);
static void do_reload_device(struct work_struct *);
static void dasd_return_cqr_cb(struct dasd_ccw_req *, void *);
static void dasd_device_timeout(unsigned long);
static void dasd_block_timeout(unsigned long);
static void __dasd_process_erp(struct dasd_device *, struct dasd_ccw_req *);
static wait_queue_head_t dasd_init_waitq;
static wait_queue_head_t dasd_flush_wq;
static wait_queue_head_t generic_waitq;
struct dasd_device *dasd_alloc_device(void)
void dasd_free_device(struct dasd_device *device)
struct dasd_block *dasd_alloc_block(void)
void dasd_free_block(struct dasd_block *block)
static int dasd_state_new_to_known(struct dasd_device *device)
static int dasd_state_known_to_new(struct dasd_device *device)
static int dasd_state_known_to_basic(struct dasd_device *device)
static int dasd_state_basic_to_known(struct dasd_device *device)
static int dasd_state_basic_to_ready(struct dasd_device *device)
static int dasd_state_ready_to_basic(struct dasd_device *device)
static int dasd_state_unfmt_to_basic(struct dasd_device *device)
static int
dasd_state_ready_to_online(struct dasd_device * device)
static int dasd_state_online_to_ready(struct dasd_device *device)
static int dasd_increase_state(struct dasd_device *device)
static int dasd_decrease_state(struct dasd_device *device)
static void dasd_change_state(struct dasd_device *device)
static void do_kick_device(struct work_struct *work)
void dasd_kick_device(struct dasd_device *device)
static void do_reload_device(struct work_struct *work)
void dasd_reload_device(struct dasd_device *device)
EXPORT_SYMBOL(dasd_reload_device);
static void do_restore_device(struct work_struct *work)
void dasd_restore_device(struct dasd_device *device)
void dasd_set_target_state(struct dasd_device *device, int target)
static inline int _wait_for_device(struct dasd_device *device)
void dasd_enable_device(struct dasd_device *device)
struct dasd_profile_info_t dasd_global_profile;
unsigned int dasd_profile_level = DASD_PROFILE_OFF;
#define dasd_profile_counter(value, counter, block) \
static void dasd_profile_start(struct dasd_block *block,
struct dasd_ccw_req *cqr,
struct request *req)
static void dasd_profile_end(struct dasd_block *block,
struct dasd_ccw_req *cqr,
struct request *req)
#define dasd_profile_start(block, cqr, req) do  while (0)
#define dasd_profile_end(block, cqr, req) do  while (0)
struct dasd_ccw_req *dasd_kmalloc_request(int magic, int cplength,
int datasize,
struct dasd_device *device)
struct dasd_ccw_req *dasd_smalloc_request(int magic, int cplength,
int datasize,
struct dasd_device *device)
void dasd_kfree_request(struct dasd_ccw_req *cqr, struct dasd_device *device)
void dasd_sfree_request(struct dasd_ccw_req *cqr, struct dasd_device *device)
static inline int dasd_check_cqr(struct dasd_ccw_req *cqr)
int dasd_term_IO(struct dasd_ccw_req *cqr)
int dasd_start_IO(struct dasd_ccw_req *cqr)
static void dasd_device_timeout(unsigned long ptr)
void dasd_device_set_timer(struct dasd_device *device, int expires)
void dasd_device_clear_timer(struct dasd_device *device)
static void dasd_handle_killed_request(struct ccw_device *cdev,
unsigned long intparm)
void dasd_generic_handle_state_change(struct dasd_device *device)
void dasd_int_handler(struct ccw_device *cdev, unsigned long intparm,
struct irb *irb)
enum uc_todo dasd_generic_uc_handler(struct ccw_device *cdev, struct irb *irb)
EXPORT_SYMBOL_GPL(dasd_generic_uc_handler);
static void __dasd_device_recovery(struct dasd_device *device,
struct dasd_ccw_req *ref_cqr)
;
static void __dasd_device_process_ccw_queue(struct dasd_device *device,
struct list_head *final_queue)
static void __dasd_device_process_final_queue(struct dasd_device *device,
struct list_head *final_queue)
static void __dasd_device_check_expire(struct dasd_device *device)
static void __dasd_device_start_head(struct dasd_device *device)
static void __dasd_device_check_path_events(struct dasd_device *device)
;
int dasd_flush_device_queue(struct dasd_device *device)
static void dasd_device_tasklet(struct dasd_device *device)
void dasd_schedule_device_bh(struct dasd_device *device)
void dasd_device_set_stop_bits(struct dasd_device *device, int bits)
EXPORT_SYMBOL_GPL(dasd_device_set_stop_bits);
void dasd_device_remove_stop_bits(struct dasd_device *device, int bits)
EXPORT_SYMBOL_GPL(dasd_device_remove_stop_bits);
void dasd_add_request_head(struct dasd_ccw_req *cqr)
void dasd_add_request_tail(struct dasd_ccw_req *cqr)
static void dasd_wakeup_cb(struct dasd_ccw_req *cqr, void *data)
static inline int _wait_for_wakeup(struct dasd_ccw_req *cqr)
static int __dasd_sleep_on_erp(struct dasd_ccw_req *cqr)
static int __dasd_sleep_on_loop_condition(struct dasd_ccw_req *cqr)
static int _dasd_sleep_on(struct dasd_ccw_req *maincqr, int interruptible)
int dasd_sleep_on(struct dasd_ccw_req *cqr)
int dasd_sleep_on_interruptible(struct dasd_ccw_req *cqr)
static inline int _dasd_term_running_cqr(struct dasd_device *device)
int dasd_sleep_on_immediatly(struct dasd_ccw_req *cqr)
int dasd_cancel_req(struct dasd_ccw_req *cqr)
static void dasd_block_timeout(unsigned long ptr)
void dasd_block_set_timer(struct dasd_block *block, int expires)
void dasd_block_clear_timer(struct dasd_block *block)
static void __dasd_process_erp(struct dasd_device *device,
struct dasd_ccw_req *cqr)
static void __dasd_process_request_queue(struct dasd_block *block)
static void __dasd_cleanup_cqr(struct dasd_ccw_req *cqr)
static void __dasd_process_block_ccw_queue(struct dasd_block *block,
struct list_head *final_queue)
static void dasd_return_cqr_cb(struct dasd_ccw_req *cqr, void *data)
static void __dasd_block_start_head(struct dasd_block *block)
static void dasd_block_tasklet(struct dasd_block *block)
static void _dasd_wake_block_flush_cb(struct dasd_ccw_req *cqr, void *data)
static int dasd_flush_block_queue(struct dasd_block *block)
void dasd_schedule_block_bh(struct dasd_block *block)
static void do_dasd_request(struct request_queue *queue)
static int dasd_alloc_queue(struct dasd_block *block)
static void dasd_setup_queue(struct dasd_block *block)
static void dasd_free_queue(struct dasd_block *block)
static void dasd_flush_request_queue(struct dasd_block *block)
static int dasd_open(struct block_device *bdev, fmode_t mode)
static int dasd_release(struct gendisk *disk, fmode_t mode)
static int dasd_getgeo(struct block_device *bdev, struct hd_geometry *geo)
const struct block_device_operations
dasd_device_operations = ;
static void
dasd_exit(void)
int dasd_device_is_ro(struct dasd_device *device)
EXPORT_SYMBOL_GPL(dasd_device_is_ro);
static void dasd_generic_auto_online(void *data, async_cookie_t cookie)
int dasd_generic_probe(struct ccw_device *cdev,
struct dasd_discipline *discipline)
void dasd_generic_remove(struct ccw_device *cdev)
int dasd_generic_set_online(struct ccw_device *cdev,
struct dasd_discipline *base_discipline)
int dasd_generic_set_offline(struct ccw_device *cdev)
int dasd_generic_last_path_gone(struct dasd_device *device)
EXPORT_SYMBOL_GPL(dasd_generic_last_path_gone);
int dasd_generic_path_operational(struct dasd_device *device)
EXPORT_SYMBOL_GPL(dasd_generic_path_operational);
int dasd_generic_notify(struct ccw_device *cdev, int event)
void dasd_generic_path_event(struct ccw_device *cdev, int *path_event)
EXPORT_SYMBOL_GPL(dasd_generic_path_event);
int dasd_generic_verify_path(struct dasd_device *device, __u8 lpm)
EXPORT_SYMBOL_GPL(dasd_generic_verify_path);
int dasd_generic_pm_freeze(struct ccw_device *cdev)
EXPORT_SYMBOL_GPL(dasd_generic_pm_freeze);
int dasd_generic_restore_device(struct ccw_device *cdev)
EXPORT_SYMBOL_GPL(dasd_generic_restore_device);
static struct dasd_ccw_req *dasd_generic_build_rdc(struct dasd_device *device,
void *rdc_buffer,
int rdc_buffer_size,
int magic)
int dasd_generic_read_dev_chars(struct dasd_device *device, int magic,
void *rdc_buffer, int rdc_buffer_size)
EXPORT_SYMBOL_GPL(dasd_generic_read_dev_chars);
char *dasd_get_sense(struct irb *irb)
EXPORT_SYMBOL_GPL(dasd_get_sense);
static int __init dasd_init(void)
module_init(dasd_init);
module_exit(dasd_exit);
EXPORT_SYMBOL(dasd_debug_area);
EXPORT_SYMBOL(dasd_diag_discipline_pointer);
EXPORT_SYMBOL(dasd_add_request_head);
EXPORT_SYMBOL(dasd_add_request_tail);
EXPORT_SYMBOL(dasd_cancel_req);
EXPORT_SYMBOL(dasd_device_clear_timer);
EXPORT_SYMBOL(dasd_block_clear_timer);
EXPORT_SYMBOL(dasd_enable_device);
EXPORT_SYMBOL(dasd_int_handler);
EXPORT_SYMBOL(dasd_kfree_request);
EXPORT_SYMBOL(dasd_kick_device);
EXPORT_SYMBOL(dasd_kmalloc_request);
EXPORT_SYMBOL(dasd_schedule_device_bh);
EXPORT_SYMBOL(dasd_schedule_block_bh);
EXPORT_SYMBOL(dasd_set_target_state);
EXPORT_SYMBOL(dasd_device_set_timer);
EXPORT_SYMBOL(dasd_block_set_timer);
EXPORT_SYMBOL(dasd_sfree_request);
EXPORT_SYMBOL(dasd_sleep_on);
EXPORT_SYMBOL(dasd_sleep_on_immediatly);
EXPORT_SYMBOL(dasd_sleep_on_interruptible);
EXPORT_SYMBOL(dasd_smalloc_request);
EXPORT_SYMBOL(dasd_start_IO);
EXPORT_SYMBOL(dasd_term_IO);
EXPORT_SYMBOL_GPL(dasd_generic_probe);
EXPORT_SYMBOL_GPL(dasd_generic_remove);
EXPORT_SYMBOL_GPL(dasd_generic_notify);
EXPORT_SYMBOL_GPL(dasd_generic_set_online);
EXPORT_SYMBOL_GPL(dasd_generic_set_offline);
EXPORT_SYMBOL_GPL(dasd_generic_handle_state_change);
EXPORT_SYMBOL_GPL(dasd_flush_device_queue);
EXPORT_SYMBOL_GPL(dasd_alloc_block);
EXPORT_SYMBOL_GPL(dasd_free_block);
