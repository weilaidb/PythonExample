#define POLL_INTERVAL		(5 * HZ)
#define RFKILL_BLOCK_HW		BIT(0)
#define RFKILL_BLOCK_SW		BIT(1)
#define RFKILL_BLOCK_SW_PREV	BIT(2)
#define RFKILL_BLOCK_ANY	(RFKILL_BLOCK_HW |\
RFKILL_BLOCK_SW |\
RFKILL_BLOCK_SW_PREV)
#define RFKILL_BLOCK_SW_SETCALL	BIT(31)
struct rfkill ;
#define to_rfkill(d)	container_of(d, struct rfkill, dev)
struct rfkill_int_event ;
struct rfkill_data ;
MODULE_AUTHOR("Ivo van Doorn <IvDoorn@gmail.com>");
MODULE_AUTHOR("Johannes Berg <johannes@sipsolutions.net>");
MODULE_DESCRIPTION("RF switch support");
MODULE_LICENSE("GPL");
static LIST_HEAD(rfkill_list);
static DEFINE_MUTEX(rfkill_global_mutex);
static LIST_HEAD(rfkill_fds);
static unsigned int rfkill_default_state = 1;
module_param_named(default_state, rfkill_default_state, uint, 0444);
MODULE_PARM_DESC(default_state,
"Default initial state for all radio types, 0 = radio off");
static struct  rfkill_global_states[NUM_RFKILL_TYPES];
static bool rfkill_epo_lock_active;
static void rfkill_led_trigger_event(struct rfkill *rfkill)
static void rfkill_led_trigger_activate(struct led_classdev *led)
static int rfkill_led_trigger_register(struct rfkill *rfkill)
static void rfkill_led_trigger_unregister(struct rfkill *rfkill)
static void rfkill_led_trigger_event(struct rfkill *rfkill)
static inline int rfkill_led_trigger_register(struct rfkill *rfkill)
static inline void rfkill_led_trigger_unregister(struct rfkill *rfkill)
static void rfkill_fill_event(struct rfkill_event *ev, struct rfkill *rfkill,
enum rfkill_operation op)
static void rfkill_send_events(struct rfkill *rfkill, enum rfkill_operation op)
static void rfkill_event(struct rfkill *rfkill)
static bool __rfkill_set_hw_state(struct rfkill *rfkill,
bool blocked, bool *change)
static void rfkill_set_block(struct rfkill *rfkill, bool blocked)
static atomic_t rfkill_input_disabled = ATOMIC_INIT(0);
static void __rfkill_switch_all(const enum rfkill_type type, bool blocked)
void rfkill_switch_all(enum rfkill_type type, bool blocked)
void rfkill_epo(void)
void rfkill_restore_states(void)
void rfkill_remove_epo_lock(void)
bool rfkill_is_epo_lock_active(void)
bool rfkill_get_global_sw_state(const enum rfkill_type type)
bool rfkill_set_hw_state(struct rfkill *rfkill, bool blocked)
EXPORT_SYMBOL(rfkill_set_hw_state);
static void __rfkill_set_sw_state(struct rfkill *rfkill, bool blocked)
bool rfkill_set_sw_state(struct rfkill *rfkill, bool blocked)
EXPORT_SYMBOL(rfkill_set_sw_state);
void rfkill_init_sw_state(struct rfkill *rfkill, bool blocked)
EXPORT_SYMBOL(rfkill_init_sw_state);
void rfkill_set_states(struct rfkill *rfkill, bool sw, bool hw)
EXPORT_SYMBOL(rfkill_set_states);
static ssize_t rfkill_name_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static const char *rfkill_get_type_str(enum rfkill_type type)
static ssize_t rfkill_type_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t rfkill_idx_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t rfkill_persistent_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t rfkill_hard_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t rfkill_soft_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t rfkill_soft_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static u8 user_state_from_blocked(unsigned long state)
static ssize_t rfkill_state_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t rfkill_state_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t rfkill_claim_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t rfkill_claim_store(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static struct device_attribute rfkill_dev_attrs[] = ;
static void rfkill_release(struct device *dev)
static int rfkill_dev_uevent(struct device *dev, struct kobj_uevent_env *env)
void rfkill_pause_polling(struct rfkill *rfkill)
EXPORT_SYMBOL(rfkill_pause_polling);
void rfkill_resume_polling(struct rfkill *rfkill)
EXPORT_SYMBOL(rfkill_resume_polling);
static int rfkill_suspend(struct device *dev, pm_message_t state)
static int rfkill_resume(struct device *dev)
static struct class rfkill_class = ;
bool rfkill_blocked(struct rfkill *rfkill)
EXPORT_SYMBOL(rfkill_blocked);
struct rfkill * __must_check rfkill_alloc(const char *name,
struct device *parent,
const enum rfkill_type type,
const struct rfkill_ops *ops,
void *ops_data)
EXPORT_SYMBOL(rfkill_alloc);
static void rfkill_poll(struct work_struct *work)
static void rfkill_uevent_work(struct work_struct *work)
static void rfkill_sync_work(struct work_struct *work)
int __must_check rfkill_register(struct rfkill *rfkill)
EXPORT_SYMBOL(rfkill_register);
void rfkill_unregister(struct rfkill *rfkill)
EXPORT_SYMBOL(rfkill_unregister);
void rfkill_destroy(struct rfkill *rfkill)
EXPORT_SYMBOL(rfkill_destroy);
static int rfkill_fop_open(struct inode *inode, struct file *file)
static unsigned int rfkill_fop_poll(struct file *file, poll_table *wait)
static bool rfkill_readable(struct rfkill_data *data)
static ssize_t rfkill_fop_read(struct file *file, char __user *buf,
size_t count, loff_t *pos)
static ssize_t rfkill_fop_write(struct file *file, const char __user *buf,
size_t count, loff_t *pos)
static int rfkill_fop_release(struct inode *inode, struct file *file)
static long rfkill_fop_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static const struct file_operations rfkill_fops = ;
static struct miscdevice rfkill_miscdev = ;
static int __init rfkill_init(void)
subsys_initcall(rfkill_init);
static void __exit rfkill_exit(void)
module_exit(rfkill_exit);
