struct firmware_map_entry ;
static ssize_t memmap_attr_show(struct kobject *kobj,
struct attribute *attr, char *buf);
static ssize_t start_show(struct firmware_map_entry *entry, char *buf);
static ssize_t end_show(struct firmware_map_entry *entry, char *buf);
static ssize_t type_show(struct firmware_map_entry *entry, char *buf);
struct memmap_attribute ;
static struct memmap_attribute memmap_start_attr = __ATTR_RO(start);
static struct memmap_attribute memmap_end_attr   = __ATTR_RO(end);
static struct memmap_attribute memmap_type_attr  = __ATTR_RO(type);
static struct attribute *def_attrs[] = ;
static const struct sysfs_ops memmap_attr_ops = ;
static struct kobj_type memmap_ktype = ;
static LIST_HEAD(map_entries);
static int firmware_map_add_entry(u64 start, u64 end,
const char *type,
struct firmware_map_entry *entry)
static int add_sysfs_fw_map_entry(struct firmware_map_entry *entry)
int __meminit firmware_map_add_hotplug(u64 start, u64 end, const char *type)
int __init firmware_map_add_early(u64 start, u64 end, const char *type)
static ssize_t start_show(struct firmware_map_entry *entry, char *buf)
static ssize_t end_show(struct firmware_map_entry *entry, char *buf)
static ssize_t type_show(struct firmware_map_entry *entry, char *buf)
#define to_memmap_attr(_attr) container_of(_attr, struct memmap_attribute, attr)
#define to_memmap_entry(obj) container_of(obj, struct firmware_map_entry, kobj)
static ssize_t memmap_attr_show(struct kobject *kobj,
struct attribute *attr, char *buf)
static int __init memmap_init(void)
late_initcall(memmap_init);
