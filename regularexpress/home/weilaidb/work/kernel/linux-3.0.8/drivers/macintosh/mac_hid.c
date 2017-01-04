MODULE_LICENSE("GPL");
static int mouse_emulate_buttons;
static int mouse_button2_keycode = KEY_RIGHTCTRL;
static int mouse_button3_keycode = KEY_RIGHTALT;
static struct input_dev *mac_hid_emumouse_dev;
static DEFINE_MUTEX(mac_hid_emumouse_mutex);
static int mac_hid_create_emumouse(void)
static void mac_hid_destroy_emumouse(void)
static bool mac_hid_emumouse_filter(struct input_handle *handle,
unsigned int type, unsigned int code,
int value)
static int mac_hid_emumouse_connect(struct input_handler *handler,
struct input_dev *dev,
const struct input_device_id *id)
static void mac_hid_emumouse_disconnect(struct input_handle *handle)
static const struct input_device_id mac_hid_emumouse_ids[] = ;
MODULE_DEVICE_TABLE(input, mac_hid_emumouse_ids);
static struct input_handler mac_hid_emumouse_handler = ;
static int mac_hid_start_emulation(void)
static void mac_hid_stop_emulation(void)
static int mac_hid_toggle_emumouse(ctl_table *table, int write,
void __user *buffer, size_t *lenp,
loff_t *ppos)
static ctl_table mac_hid_files[] = ;
static ctl_table mac_hid_dir[] = ;
static ctl_table mac_hid_root_dir[] = ;
static struct ctl_table_header *mac_hid_sysctl_header;
static int __init mac_hid_init(void)
module_init(mac_hid_init);
static void __exit mac_hid_exit(void)
module_exit(mac_hid_exit);
