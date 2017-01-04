#define MAX_ENTRY_TYPE 255
struct dmi_sysfs_entry ;
static LIST_HEAD(entry_list);
static DEFINE_SPINLOCK(entry_list_lock);
struct dmi_sysfs_attribute ;
#define DMI_SYSFS_ATTR(_entry, _name) \
struct dmi_sysfs_attribute dmi_sysfs_attr_##_entry##_##_name =
struct dmi_sysfs_mapped_attribute ;
#define DMI_SYSFS_MAPPED_ATTR(_entry, _name) \
struct dmi_sysfs_mapped_attribute dmi_sysfs_attr_##_entry##_##_name =
static void dmi_entry_free(struct kobject *kobj)
static struct dmi_sysfs_entry *to_entry(struct kobject *kobj)
static struct dmi_sysfs_attribute *to_attr(struct attribute *attr)
static ssize_t dmi_sysfs_attr_show(struct kobject *kobj,
struct attribute *_attr, char *buf)
static const struct sysfs_ops dmi_sysfs_attr_ops = ;
typedef ssize_t (*dmi_callback)(struct dmi_sysfs_entry *,
const struct dmi_header *dh, void *);
struct find_dmi_data ;
static void find_dmi_entry_helper(const struct dmi_header *dh,
void *_data)
struct dmi_read_state ;
static ssize_t find_dmi_entry(struct dmi_sysfs_entry *entry,
dmi_callback callback, void *private)
static size_t dmi_entry_length(const struct dmi_header *dh)
struct dmi_entry_attr_show_data ;
static ssize_t dmi_entry_attr_show_helper(struct dmi_sysfs_entry *entry,
const struct dmi_header *dh,
void *_data)
static ssize_t dmi_entry_attr_show(struct kobject *kobj,
struct attribute *attr,
char *buf)
static const struct sysfs_ops dmi_sysfs_specialize_attr_ops = ;
#define DMI_SEL_ACCESS_METHOD_IO8	0x00
#define DMI_SEL_ACCESS_METHOD_IO2x8	0x01
#define DMI_SEL_ACCESS_METHOD_IO16	0x02
#define DMI_SEL_ACCESS_METHOD_PHYS32	0x03
#define DMI_SEL_ACCESS_METHOD_GPNV	0x04
struct dmi_system_event_log  __packed;
#define DMI_SYSFS_SEL_FIELD(_field) \
static ssize_t dmi_sysfs_sel_##_field(struct dmi_sysfs_entry *entry, \
const struct dmi_header *dh, \
char *buf) \
\
static DMI_SYSFS_MAPPED_ATTR(sel, _field)
DMI_SYSFS_SEL_FIELD(area_length);
DMI_SYSFS_SEL_FIELD(header_start_offset);
DMI_SYSFS_SEL_FIELD(data_start_offset);
DMI_SYSFS_SEL_FIELD(access_method);
DMI_SYSFS_SEL_FIELD(status);
DMI_SYSFS_SEL_FIELD(change_token);
DMI_SYSFS_SEL_FIELD(access_method_address);
DMI_SYSFS_SEL_FIELD(header_format);
DMI_SYSFS_SEL_FIELD(type_descriptors_supported_count);
DMI_SYSFS_SEL_FIELD(per_log_type_descriptor_length);
static struct attribute *dmi_sysfs_sel_attrs[] = ;
static struct kobj_type dmi_system_event_log_ktype = ;
typedef u8 (*sel_io_reader)(const struct dmi_system_event_log *sel,
loff_t offset);
static DEFINE_MUTEX(io_port_lock);
static u8 read_sel_8bit_indexed_io(const struct dmi_system_event_log *sel,
loff_t offset)
static u8 read_sel_2x8bit_indexed_io(const struct dmi_system_event_log *sel,
loff_t offset)
static u8 read_sel_16bit_indexed_io(const struct dmi_system_event_log *sel,
loff_t offset)
static sel_io_reader sel_io_readers[] = ;
static ssize_t dmi_sel_raw_read_io(struct dmi_sysfs_entry *entry,
const struct dmi_system_event_log *sel,
char *buf, loff_t pos, size_t count)
static ssize_t dmi_sel_raw_read_phys32(struct dmi_sysfs_entry *entry,
const struct dmi_system_event_log *sel,
char *buf, loff_t pos, size_t count)
static ssize_t dmi_sel_raw_read_helper(struct dmi_sysfs_entry *entry,
const struct dmi_header *dh,
void *_state)
static ssize_t dmi_sel_raw_read(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t pos, size_t count)
static struct bin_attribute dmi_sel_raw_attr = ;
static int dmi_system_event_log(struct dmi_sysfs_entry *entry)
static ssize_t dmi_sysfs_entry_length(struct dmi_sysfs_entry *entry, char *buf)
static ssize_t dmi_sysfs_entry_handle(struct dmi_sysfs_entry *entry, char *buf)
static ssize_t dmi_sysfs_entry_type(struct dmi_sysfs_entry *entry, char *buf)
static ssize_t dmi_sysfs_entry_instance(struct dmi_sysfs_entry *entry,
char *buf)
static ssize_t dmi_sysfs_entry_position(struct dmi_sysfs_entry *entry,
char *buf)
static DMI_SYSFS_ATTR(entry, length);
static DMI_SYSFS_ATTR(entry, handle);
static DMI_SYSFS_ATTR(entry, type);
static DMI_SYSFS_ATTR(entry, instance);
static DMI_SYSFS_ATTR(entry, position);
static struct attribute *dmi_sysfs_entry_attrs[] = ;
static ssize_t dmi_entry_raw_read_helper(struct dmi_sysfs_entry *entry,
const struct dmi_header *dh,
void *_state)
static ssize_t dmi_entry_raw_read(struct file *filp,
struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t pos, size_t count)
static const struct bin_attribute dmi_entry_raw_attr = ;
static void dmi_sysfs_entry_release(struct kobject *kobj)
static struct kobj_type dmi_sysfs_entry_ktype = ;
static struct kobject *dmi_kobj;
static struct kset *dmi_kset;
static int __initdata instance_counts[MAX_ENTRY_TYPE + 1];
static int __initdata position_count;
static void __init dmi_sysfs_register_handle(const struct dmi_header *dh,
void *_ret)
static void cleanup_entry_list(void)
static int __init dmi_sysfs_init(void)
static void __exit dmi_sysfs_exit(void)
module_init(dmi_sysfs_init);
module_exit(dmi_sysfs_exit);
MODULE_AUTHOR("Mike Waychison <mikew@google.com>");
MODULE_DESCRIPTION("DMI sysfs support");
MODULE_LICENSE("GPL");
