#define NTFY_
struct ntfy_object ;
struct ntfy_event ;
int dsp_notifier_event(struct notifier_block *this, unsigned long event,
void *data);
static inline void ntfy_init(struct ntfy_object *no)
static inline void ntfy_delete(struct ntfy_object *ntfy_obj)
static inline void ntfy_notify(struct ntfy_object *ntfy_obj, u32 event)
static inline struct ntfy_event *ntfy_event_create(u32 event, u32 type)
static  inline int ntfy_register(struct ntfy_object *ntfy_obj,
struct dsp_notification *noti,
u32 event, u32 type)
static  inline int ntfy_unregister(struct ntfy_object *ntfy_obj,
struct dsp_notification *noti)
