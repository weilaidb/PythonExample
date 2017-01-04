static int suspend_heartbeats = 0;
static int panic_happened(struct notifier_block *n, unsigned long val, void *v)
static struct notifier_block panic_notifier = ;
void ibmasm_register_panic_notifier(void)
void ibmasm_unregister_panic_notifier(void)
int ibmasm_heartbeat_init(struct service_processor *sp)
void ibmasm_heartbeat_exit(struct service_processor *sp)
void ibmasm_receive_heartbeat(struct service_processor *sp,  void *message, size_t size)
