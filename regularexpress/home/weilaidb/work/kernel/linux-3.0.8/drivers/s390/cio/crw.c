static DEFINE_MUTEX(crw_handler_mutex);
static crw_handler_t crw_handlers[NR_RSCS];
static atomic_t crw_nr_req = ATOMIC_INIT(0);
static DECLARE_WAIT_QUEUE_HEAD(crw_handler_wait_q);
int crw_register_handler(int rsc, crw_handler_t handler)
void crw_unregister_handler(int rsc)
static int crw_collect_info(void *unused)
void crw_handle_channel_report(void)
void crw_wait_for_channel_report(void)
static int __init crw_machine_check_init(void)
device_initcall(crw_machine_check_init);
