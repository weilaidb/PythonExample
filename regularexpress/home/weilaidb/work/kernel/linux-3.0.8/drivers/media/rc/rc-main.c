#define IR_TAB_MIN_SIZE	256
#define IR_TAB_MAX_SIZE	8192
#define IR_KEYPRESS_TIMEOUT 250
static LIST_HEAD(rc_map_list);
static DEFINE_SPINLOCK(rc_map_lock);
static struct rc_map_list *seek_rc_map(const char *name)
struct rc_map *rc_map_get(const char *name)
EXPORT_SYMBOL_GPL(rc_map_get);
int rc_map_register(struct rc_map_list *map)
EXPORT_SYMBOL_GPL(rc_map_register);
void rc_map_unregister(struct rc_map_list *map)
EXPORT_SYMBOL_GPL(rc_map_unregister);
static struct rc_map_table empty[] = ;
static struct rc_map_list empty_map = ;
static int ir_create_table(struct rc_map *rc_map,
const char *name, u64 rc_type, size_t size)
static void ir_free_table(struct rc_map *rc_map)
static int ir_resize_table(struct rc_map *rc_map, gfp_t gfp_flags)
static unsigned int ir_update_mapping(struct rc_dev *dev,
struct rc_map *rc_map,
unsigned int index,
unsigned int new_keycode)
static unsigned int ir_establish_scancode(struct rc_dev *dev,
struct rc_map *rc_map,
unsigned int scancode,
bool resize)
static int ir_setkeycode(struct input_dev *idev,
const struct input_keymap_entry *ke,
unsigned int *old_keycode)
static int ir_setkeytable(struct rc_dev *dev,
const struct rc_map *from)
static unsigned int ir_lookup_by_scancode(const struct rc_map *rc_map,
unsigned int scancode)
static int ir_getkeycode(struct input_dev *idev,
struct input_keymap_entry *ke)
u32 rc_g_keycode_from_table(struct rc_dev *dev, u32 scancode)
EXPORT_SYMBOL_GPL(rc_g_keycode_from_table);
static void ir_do_keyup(struct rc_dev *dev, bool sync)
void rc_keyup(struct rc_dev *dev)
EXPORT_SYMBOL_GPL(rc_keyup);
static void ir_timer_keyup(unsigned long cookie)
void rc_repeat(struct rc_dev *dev)
EXPORT_SYMBOL_GPL(rc_repeat);
static void ir_do_keydown(struct rc_dev *dev, int scancode,
u32 keycode, u8 toggle)
void rc_keydown(struct rc_dev *dev, int scancode, u8 toggle)
EXPORT_SYMBOL_GPL(rc_keydown);
void rc_keydown_notimeout(struct rc_dev *dev, int scancode, u8 toggle)
EXPORT_SYMBOL_GPL(rc_keydown_notimeout);
static int ir_open(struct input_dev *idev)
static void ir_close(struct input_dev *idev)
static char *ir_devnode(struct device *dev, mode_t *mode)
static struct class ir_input_class = ;
static struct  proto_names[] = ;
#define PROTO_NONE	"none"
static ssize_t show_protocols(struct device *device,
struct device_attribute *mattr, char *buf)
static ssize_t store_protocols(struct device *device,
struct device_attribute *mattr,
const char *data,
size_t len)
static void rc_dev_release(struct device *device)
#define ADD_HOTPLUG_VAR(fmt, val...)					\
do  while (0)
static int rc_dev_uevent(struct device *device, struct kobj_uevent_env *env)
static DEVICE_ATTR(protocols, S_IRUGO | S_IWUSR,
show_protocols, store_protocols);
static struct attribute *rc_dev_attrs[] = ;
static struct attribute_group rc_dev_attr_grp = ;
static const struct attribute_group *rc_dev_attr_groups[] = ;
static struct device_type rc_dev_type = ;
struct rc_dev *rc_allocate_device(void)
EXPORT_SYMBOL_GPL(rc_allocate_device);
void rc_free_device(struct rc_dev *dev)
EXPORT_SYMBOL_GPL(rc_free_device);
int rc_register_device(struct rc_dev *dev)
EXPORT_SYMBOL_GPL(rc_register_device);
void rc_unregister_device(struct rc_dev *dev)
EXPORT_SYMBOL_GPL(rc_unregister_device);
static int __init rc_core_init(void)
static void __exit rc_core_exit(void)
module_init(rc_core_init);
module_exit(rc_core_exit);
int rc_core_debug;
EXPORT_SYMBOL_GPL(rc_core_debug);
module_param_named(debug, rc_core_debug, int, 0644);
MODULE_AUTHOR("Mauro Carvalho Chehab <mchehab@redhat.com>");
MODULE_LICENSE("GPL");
