#define MAX_IR_EVENT_SIZE      512
static LIST_HEAD(ir_raw_client_list);
static DEFINE_MUTEX(ir_raw_handler_lock);
static LIST_HEAD(ir_raw_handler_list);
static u64 available_protocols;
static struct work_struct wq_load;
static int ir_raw_event_thread(void *data)
int ir_raw_event_store(struct rc_dev *dev, struct ir_raw_event *ev)
EXPORT_SYMBOL_GPL(ir_raw_event_store);
int ir_raw_event_store_edge(struct rc_dev *dev, enum raw_event_type type)
EXPORT_SYMBOL_GPL(ir_raw_event_store_edge);
int ir_raw_event_store_with_filter(struct rc_dev *dev, struct ir_raw_event *ev)
EXPORT_SYMBOL_GPL(ir_raw_event_store_with_filter);
void ir_raw_event_set_idle(struct rc_dev *dev, bool idle)
EXPORT_SYMBOL_GPL(ir_raw_event_set_idle);
void ir_raw_event_handle(struct rc_dev *dev)
EXPORT_SYMBOL_GPL(ir_raw_event_handle);
u64
ir_raw_get_allowed_protocols(void)
int ir_raw_event_register(struct rc_dev *dev)
void ir_raw_event_unregister(struct rc_dev *dev)
int ir_raw_handler_register(struct ir_raw_handler *ir_raw_handler)
EXPORT_SYMBOL(ir_raw_handler_register);
void ir_raw_handler_unregister(struct ir_raw_handler *ir_raw_handler)
EXPORT_SYMBOL(ir_raw_handler_unregister);
static void init_decoders(struct work_struct *work)
void ir_raw_init(void)
