#define pr_fmt(fmt) KBUILD_BASENAME ": " fmt
MODULE_AUTHOR("Vojtech Pavlik <vojtech@suse.cz>");
MODULE_DESCRIPTION("Input core");
MODULE_LICENSE("GPL");
#define INPUT_DEVICES	256
static LIST_HEAD(input_dev_list);
static LIST_HEAD(input_handler_list);
static DEFINE_MUTEX(input_mutex);
static struct input_handler *input_table[8];
static inline int is_event_supported(unsigned int code,
unsigned long *bm, unsigned int max)
static int input_defuzz_abs_event(int value, int old_val, int fuzz)
static void input_pass_event(struct input_dev *dev,
unsigned int type, unsigned int code, int value)
static void input_repeat_key(unsigned long data)
static void input_start_autorepeat(struct input_dev *dev, int code)
static void input_stop_autorepeat(struct input_dev *dev)
#define INPUT_IGNORE_EVENT	0
#define INPUT_PASS_TO_HANDLERS	1
#define INPUT_PASS_TO_DEVICE	2
#define INPUT_PASS_TO_ALL	(INPUT_PASS_TO_HANDLERS | INPUT_PASS_TO_DEVICE)
static int input_handle_abs_event(struct input_dev *dev,
unsigned int code, int *pval)
static void input_handle_event(struct input_dev *dev,
unsigned int type, unsigned int code, int value)
void input_event(struct input_dev *dev,
unsigned int type, unsigned int code, int value)
EXPORT_SYMBOL(input_event);
void input_inject_event(struct input_handle *handle,
unsigned int type, unsigned int code, int value)
EXPORT_SYMBOL(input_inject_event);
void input_alloc_absinfo(struct input_dev *dev)
EXPORT_SYMBOL(input_alloc_absinfo);
void input_set_abs_params(struct input_dev *dev, unsigned int axis,
int min, int max, int fuzz, int flat)
EXPORT_SYMBOL(input_set_abs_params);
int input_grab_device(struct input_handle *handle)
EXPORT_SYMBOL(input_grab_device);
static void __input_release_device(struct input_handle *handle)
void input_release_device(struct input_handle *handle)
EXPORT_SYMBOL(input_release_device);
int input_open_device(struct input_handle *handle)
EXPORT_SYMBOL(input_open_device);
int input_flush_device(struct input_handle *handle, struct file *file)
EXPORT_SYMBOL(input_flush_device);
void input_close_device(struct input_handle *handle)
EXPORT_SYMBOL(input_close_device);
static void input_dev_release_keys(struct input_dev *dev)
static void input_disconnect_device(struct input_dev *dev)
int input_scancode_to_scalar(const struct input_keymap_entry *ke,
unsigned int *scancode)
EXPORT_SYMBOL(input_scancode_to_scalar);
static unsigned int input_fetch_keycode(struct input_dev *dev,
unsigned int index)
static int input_default_getkeycode(struct input_dev *dev,
struct input_keymap_entry *ke)
static int input_default_setkeycode(struct input_dev *dev,
const struct input_keymap_entry *ke,
unsigned int *old_keycode)
int input_get_keycode(struct input_dev *dev, struct input_keymap_entry *ke)
EXPORT_SYMBOL(input_get_keycode);
int input_set_keycode(struct input_dev *dev,
const struct input_keymap_entry *ke)
EXPORT_SYMBOL(input_set_keycode);
#define MATCH_BIT(bit, max) \
for (i = 0; i < BITS_TO_LONGS(max); i++) \
if ((id->bit[i] & dev->bit[i]) != id->bit[i]) \
break; \
if (i != BITS_TO_LONGS(max)) \
continue;
static const struct input_device_id *input_match_device(struct input_handler *handler,
struct input_dev *dev)
static int input_attach_handler(struct input_dev *dev, struct input_handler *handler)
static int input_bits_to_string(char *buf, int buf_size,
unsigned long bits, bool skip_empty)
static int input_bits_to_string(char *buf, int buf_size,
unsigned long bits, bool skip_empty)
static struct proc_dir_entry *proc_bus_input_dir;
static DECLARE_WAIT_QUEUE_HEAD(input_devices_poll_wait);
static int input_devices_state;
static inline void input_wakeup_procfs_readers(void)
static unsigned int input_proc_devices_poll(struct file *file, poll_table *wait)
union input_seq_state ;
static void *input_devices_seq_start(struct seq_file *seq, loff_t *pos)
static void *input_devices_seq_next(struct seq_file *seq, void *v, loff_t *pos)
static void input_seq_stop(struct seq_file *seq, void *v)
static void input_seq_print_bitmap(struct seq_file *seq, const char *name,
unsigned long *bitmap, int max)
static int input_devices_seq_show(struct seq_file *seq, void *v)
static const struct seq_operations input_devices_seq_ops = ;
static int input_proc_devices_open(struct inode *inode, struct file *file)
static const struct file_operations input_devices_fileops = ;
static void *input_handlers_seq_start(struct seq_file *seq, loff_t *pos)
static void *input_handlers_seq_next(struct seq_file *seq, void *v, loff_t *pos)
static int input_handlers_seq_show(struct seq_file *seq, void *v)
static const struct seq_operations input_handlers_seq_ops = ;
static int input_proc_handlers_open(struct inode *inode, struct file *file)
static const struct file_operations input_handlers_fileops = ;
static int __init input_proc_init(void)
static void input_proc_exit(void)
static inline void input_wakeup_procfs_readers(void)
static inline int input_proc_init(void)
static inline void input_proc_exit(void)
#define INPUT_DEV_STRING_ATTR_SHOW(name)				\
static ssize_t input_dev_show_##name(struct device *dev,		\
struct device_attribute *attr,	\
char *buf)				\
\
static DEVICE_ATTR(name, S_IRUGO, input_dev_show_##name, NULL)
INPUT_DEV_STRING_ATTR_SHOW(name);
INPUT_DEV_STRING_ATTR_SHOW(phys);
INPUT_DEV_STRING_ATTR_SHOW(uniq);
static int input_print_modalias_bits(char *buf, int size,
char name, unsigned long *bm,
unsigned int min_bit, unsigned int max_bit)
static int input_print_modalias(char *buf, int size, struct input_dev *id,
int add_cr)
static ssize_t input_dev_show_modalias(struct device *dev,
struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(modalias, S_IRUGO, input_dev_show_modalias, NULL);
static int input_print_bitmap(char *buf, int buf_size, unsigned long *bitmap,
int max, int add_cr);
static ssize_t input_dev_show_properties(struct device *dev,
struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(properties, S_IRUGO, input_dev_show_properties, NULL);
static struct attribute *input_dev_attrs[] = ;
static struct attribute_group input_dev_attr_group = ;
#define INPUT_DEV_ID_ATTR(name)						\
static ssize_t input_dev_show_id_##name(struct device *dev,		\
struct device_attribute *attr,	\
char *buf)			\
\
static DEVICE_ATTR(name, S_IRUGO, input_dev_show_id_##name, NULL)
INPUT_DEV_ID_ATTR(bustype);
INPUT_DEV_ID_ATTR(vendor);
INPUT_DEV_ID_ATTR(product);
INPUT_DEV_ID_ATTR(version);
static struct attribute *input_dev_id_attrs[] = ;
static struct attribute_group input_dev_id_attr_group = ;
static int input_print_bitmap(char *buf, int buf_size, unsigned long *bitmap,
int max, int add_cr)
#define INPUT_DEV_CAP_ATTR(ev, bm)					\
static ssize_t input_dev_show_cap_##bm(struct device *dev,		\
struct device_attribute *attr,	\
char *buf)			\
\
static DEVICE_ATTR(bm, S_IRUGO, input_dev_show_cap_##bm, NULL)
INPUT_DEV_CAP_ATTR(EV, ev);
INPUT_DEV_CAP_ATTR(KEY, key);
INPUT_DEV_CAP_ATTR(REL, rel);
INPUT_DEV_CAP_ATTR(ABS, abs);
INPUT_DEV_CAP_ATTR(MSC, msc);
INPUT_DEV_CAP_ATTR(LED, led);
INPUT_DEV_CAP_ATTR(SND, snd);
INPUT_DEV_CAP_ATTR(FF, ff);
INPUT_DEV_CAP_ATTR(SW, sw);
static struct attribute *input_dev_caps_attrs[] = ;
static struct attribute_group input_dev_caps_attr_group = ;
static const struct attribute_group *input_dev_attr_groups[] = ;
static void input_dev_release(struct device *device)
static int input_add_uevent_bm_var(struct kobj_uevent_env *env,
const char *name, unsigned long *bitmap, int max)
static int input_add_uevent_modalias_var(struct kobj_uevent_env *env,
struct input_dev *dev)
#define INPUT_ADD_HOTPLUG_VAR(fmt, val...)				\
do  while (0)
#define INPUT_ADD_HOTPLUG_BM_VAR(name, bm, max)				\
do  while (0)
#define INPUT_ADD_HOTPLUG_MODALIAS_VAR(dev)				\
do  while (0)
static int input_dev_uevent(struct device *device, struct kobj_uevent_env *env)
#define INPUT_DO_TOGGLE(dev, type, bits, on)				\
do  while (0)
static void input_dev_toggle(struct input_dev *dev, bool activate)
void input_reset_device(struct input_dev *dev)
EXPORT_SYMBOL(input_reset_device);
static int input_dev_suspend(struct device *dev)
static int input_dev_resume(struct device *dev)
static const struct dev_pm_ops input_dev_pm_ops = ;
static struct device_type input_dev_type = ;
static char *input_devnode(struct device *dev, mode_t *mode)
struct class input_class = ;
EXPORT_SYMBOL_GPL(input_class);
struct input_dev *input_allocate_device(void)
EXPORT_SYMBOL(input_allocate_device);
void input_free_device(struct input_dev *dev)
EXPORT_SYMBOL(input_free_device);
void input_set_capability(struct input_dev *dev, unsigned int type, unsigned int code)
EXPORT_SYMBOL(input_set_capability);
static unsigned int input_estimate_events_per_packet(struct input_dev *dev)
#define INPUT_CLEANSE_BITMASK(dev, type, bits)				\
do  while (0)
static void input_cleanse_bitmasks(struct input_dev *dev)
int input_register_device(struct input_dev *dev)
EXPORT_SYMBOL(input_register_device);
void input_unregister_device(struct input_dev *dev)
EXPORT_SYMBOL(input_unregister_device);
int input_register_handler(struct input_handler *handler)
EXPORT_SYMBOL(input_register_handler);
void input_unregister_handler(struct input_handler *handler)
EXPORT_SYMBOL(input_unregister_handler);
int input_handler_for_each_handle(struct input_handler *handler, void *data,
int (*fn)(struct input_handle *, void *))
EXPORT_SYMBOL(input_handler_for_each_handle);
int input_register_handle(struct input_handle *handle)
EXPORT_SYMBOL(input_register_handle);
void input_unregister_handle(struct input_handle *handle)
EXPORT_SYMBOL(input_unregister_handle);
static int input_open_file(struct inode *inode, struct file *file)
static const struct file_operations input_fops = ;
static int __init input_init(void)
static void __exit input_exit(void)
subsys_initcall(input_init);
module_exit(input_exit);
