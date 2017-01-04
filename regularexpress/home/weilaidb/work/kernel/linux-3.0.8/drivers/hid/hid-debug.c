#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
static struct dentry *hid_debug_root;
struct hid_usage_entry ;
static const struct hid_usage_entry hid_usage_table[] = ;
static char *resolv_usage_page(unsigned page, struct seq_file *f)
char *hid_resolv_usage(unsigned usage, struct seq_file *f)
EXPORT_SYMBOL_GPL(hid_resolv_usage);
static void tab(int n, struct seq_file *f)
void hid_dump_field(struct hid_field *field, int n, struct seq_file *f)
EXPORT_SYMBOL_GPL(hid_dump_field);
void hid_dump_device(struct hid_device *device, struct seq_file *f)
EXPORT_SYMBOL_GPL(hid_dump_device);
void hid_debug_event(struct hid_device *hdev, char *buf)
EXPORT_SYMBOL_GPL(hid_debug_event);
void hid_dump_input(struct hid_device *hdev, struct hid_usage *usage, __s32 value)
EXPORT_SYMBOL_GPL(hid_dump_input);
static const char *events[EV_MAX + 1] = ;
static const char *syncs[3] = ;
static const char *keys[KEY_MAX + 1] = ;
static const char *relatives[REL_MAX + 1] = ;
static const char *absolutes[ABS_CNT] = ;
static const char *misc[MSC_MAX + 1] = ;
static const char *leds[LED_MAX + 1] = ;
static const char *repeats[REP_MAX + 1] = ;
static const char *sounds[SND_MAX + 1] = ;
static const char **names[EV_MAX + 1] = ;
static void hid_resolv_event(__u8 type, __u16 code, struct seq_file *f)
static void hid_dump_input_mapping(struct hid_device *hid, struct seq_file *f)
static int hid_debug_rdesc_show(struct seq_file *f, void *p)
static int hid_debug_rdesc_open(struct inode *inode, struct file *file)
static int hid_debug_events_open(struct inode *inode, struct file *file)
static ssize_t hid_debug_events_read(struct file *file, char __user *buffer,
size_t count, loff_t *ppos)
static unsigned int hid_debug_events_poll(struct file *file, poll_table *wait)
static int hid_debug_events_release(struct inode *inode, struct file *file)
static const struct file_operations hid_debug_rdesc_fops = ;
static const struct file_operations hid_debug_events_fops = ;
void hid_debug_register(struct hid_device *hdev, const char *name)
void hid_debug_unregister(struct hid_device *hdev)
void hid_debug_init(void)
void hid_debug_exit(void)
