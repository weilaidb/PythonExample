#define _RC_CORE
extern int rc_core_debug;
#define IR_dprintk(level, fmt, arg...)	if (rc_core_debug >= level) \
printk(KERN_DEBUG "%s: " fmt , __func__, ## arg)
enum rc_driver_type ;
struct rc_dev ;
#define to_rc_dev(d) container_of(d, struct rc_dev, dev)
struct rc_dev *rc_allocate_device(void);
void rc_free_device(struct rc_dev *dev);
int rc_register_device(struct rc_dev *dev);
void rc_unregister_device(struct rc_dev *dev);
void rc_repeat(struct rc_dev *dev);
void rc_keydown(struct rc_dev *dev, int scancode, u8 toggle);
void rc_keydown_notimeout(struct rc_dev *dev, int scancode, u8 toggle);
void rc_keyup(struct rc_dev *dev);
u32 rc_g_keycode_from_table(struct rc_dev *dev, u32 scancode);
enum raw_event_type ;
struct ir_raw_event ;
#define DEFINE_IR_RAW_EVENT(event) \
struct ir_raw_event event =
static inline void init_ir_raw_event(struct ir_raw_event *ev)
#define IR_MAX_DURATION         0xFFFFFFFF
#define US_TO_NS(usec)		((usec) * 1000)
#define MS_TO_US(msec)		((msec) * 1000)
#define MS_TO_NS(msec)		((msec) * 1000 * 1000)
void ir_raw_event_handle(struct rc_dev *dev);
int ir_raw_event_store(struct rc_dev *dev, struct ir_raw_event *ev);
int ir_raw_event_store_edge(struct rc_dev *dev, enum raw_event_type type);
int ir_raw_event_store_with_filter(struct rc_dev *dev,
struct ir_raw_event *ev);
void ir_raw_event_set_idle(struct rc_dev *dev, bool idle);
static inline void ir_raw_event_reset(struct rc_dev *dev)
static inline u32 ir_extract_bits(u32 data, u32 mask)
