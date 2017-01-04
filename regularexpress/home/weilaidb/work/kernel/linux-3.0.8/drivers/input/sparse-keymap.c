MODULE_AUTHOR("Dmitry Torokhov <dtor@mail.ru>");
MODULE_DESCRIPTION("Generic support for sparse keymaps");
MODULE_LICENSE("GPL v2");
MODULE_VERSION("0.1");
static unsigned int sparse_keymap_get_key_index(struct input_dev *dev,
const struct key_entry *k)
static struct key_entry *sparse_keymap_entry_by_index(struct input_dev *dev,
unsigned int index)
struct key_entry *sparse_keymap_entry_from_scancode(struct input_dev *dev,
unsigned int code)
EXPORT_SYMBOL(sparse_keymap_entry_from_scancode);
struct key_entry *sparse_keymap_entry_from_keycode(struct input_dev *dev,
unsigned int keycode)
EXPORT_SYMBOL(sparse_keymap_entry_from_keycode);
static struct key_entry *sparse_keymap_locate(struct input_dev *dev,
const struct input_keymap_entry *ke)
static int sparse_keymap_getkeycode(struct input_dev *dev,
struct input_keymap_entry *ke)
static int sparse_keymap_setkeycode(struct input_dev *dev,
const struct input_keymap_entry *ke,
unsigned int *old_keycode)
int sparse_keymap_setup(struct input_dev *dev,
const struct key_entry *keymap,
int (*setup)(struct input_dev *, struct key_entry *))
EXPORT_SYMBOL(sparse_keymap_setup);
void sparse_keymap_free(struct input_dev *dev)
EXPORT_SYMBOL(sparse_keymap_free);
void sparse_keymap_report_entry(struct input_dev *dev, const struct key_entry *ke,
unsigned int value, bool autorelease)
EXPORT_SYMBOL(sparse_keymap_report_entry);
bool sparse_keymap_report_event(struct input_dev *dev, unsigned int code,
unsigned int value, bool autorelease)
EXPORT_SYMBOL(sparse_keymap_report_event);
