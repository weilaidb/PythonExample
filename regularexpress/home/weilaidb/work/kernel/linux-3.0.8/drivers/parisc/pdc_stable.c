#undef PDCS_DEBUG
#define DPRINTK(fmt, args...)	printk(KERN_DEBUG fmt, ## args)
#define DPRINTK(fmt, args...)
#define PDCS_VERSION	"0.30"
#define PDCS_PREFIX	"PDC Stable Storage"
#define PDCS_ADDR_PPRI	0x00
#define PDCS_ADDR_OSID	0x40
#define PDCS_ADDR_OSD1	0x48
#define PDCS_ADDR_DIAG	0x58
#define PDCS_ADDR_FSIZ	0x5C
#define PDCS_ADDR_PCON	0x60
#define PDCS_ADDR_PALT	0x80
#define PDCS_ADDR_PKBD	0xA0
#define PDCS_ADDR_OSD2	0xE0
MODULE_AUTHOR("Thibaut VARENE <varenet@parisc-linux.org>");
MODULE_DESCRIPTION("sysfs interface to HP PDC Stable Storage data");
MODULE_LICENSE("GPL");
MODULE_VERSION(PDCS_VERSION);
static unsigned long pdcs_size __read_mostly;
static u16 pdcs_osid __read_mostly;
struct pdcspath_entry ;
struct pdcspath_attribute ;
#define PDCSPATH_ENTRY(_addr, _name) \
struct pdcspath_entry pdcspath_entry_##_name = ;
#define PDCS_ATTR(_name, _mode, _show, _store) \
struct kobj_attribute pdcs_attr_##_name = ;
#define PATHS_ATTR(_name, _mode, _show, _store) \
struct pdcspath_attribute paths_attr_##_name = ;
#define to_pdcspath_attribute(_attr) container_of(_attr, struct pdcspath_attribute, attr)
#define to_pdcspath_entry(obj)  container_of(obj, struct pdcspath_entry, kobj)
static int
pdcspath_fetch(struct pdcspath_entry *entry)
static void
pdcspath_store(struct pdcspath_entry *entry)
static ssize_t
pdcspath_hwpath_read(struct pdcspath_entry *entry, char *buf)
static ssize_t
pdcspath_hwpath_write(struct pdcspath_entry *entry, const char *buf, size_t count)
static ssize_t
pdcspath_layer_read(struct pdcspath_entry *entry, char *buf)
static ssize_t
pdcspath_layer_write(struct pdcspath_entry *entry, const char *buf, size_t count)
static ssize_t
pdcspath_attr_show(struct kobject *kobj, struct attribute *attr, char *buf)
static ssize_t
pdcspath_attr_store(struct kobject *kobj, struct attribute *attr,
const char *buf, size_t count)
static const struct sysfs_ops pdcspath_attr_ops = ;
static PATHS_ATTR(hwpath, 0644, pdcspath_hwpath_read, pdcspath_hwpath_write);
static PATHS_ATTR(layer, 0644, pdcspath_layer_read, pdcspath_layer_write);
static struct attribute *paths_subsys_attrs[] = ;
static struct kobj_type ktype_pdcspath = ;
static PDCSPATH_ENTRY(PDCS_ADDR_PPRI, primary);
static PDCSPATH_ENTRY(PDCS_ADDR_PCON, console);
static PDCSPATH_ENTRY(PDCS_ADDR_PALT, alternative);
static PDCSPATH_ENTRY(PDCS_ADDR_PKBD, keyboard);
static struct pdcspath_entry *pdcspath_entries[] = ;
static ssize_t pdcs_size_read(struct kobject *kobj,
struct kobj_attribute *attr,
char *buf)
static ssize_t pdcs_auto_read(struct kobject *kobj,
struct kobj_attribute *attr,
char *buf, int knob)
static ssize_t pdcs_autoboot_read(struct kobject *kobj,
struct kobj_attribute *attr, char *buf)
static ssize_t pdcs_autosearch_read(struct kobject *kobj,
struct kobj_attribute *attr, char *buf)
static ssize_t pdcs_timer_read(struct kobject *kobj,
struct kobj_attribute *attr, char *buf)
static ssize_t pdcs_osid_read(struct kobject *kobj,
struct kobj_attribute *attr, char *buf)
static ssize_t pdcs_osdep1_read(struct kobject *kobj,
struct kobj_attribute *attr, char *buf)
static ssize_t pdcs_diagnostic_read(struct kobject *kobj,
struct kobj_attribute *attr, char *buf)
static ssize_t pdcs_fastsize_read(struct kobject *kobj,
struct kobj_attribute *attr, char *buf)
static ssize_t pdcs_osdep2_read(struct kobject *kobj,
struct kobj_attribute *attr, char *buf)
static ssize_t pdcs_auto_write(struct kobject *kobj,
struct kobj_attribute *attr, const char *buf,
size_t count, int knob)
static ssize_t pdcs_autoboot_write(struct kobject *kobj,
struct kobj_attribute *attr,
const char *buf, size_t count)
static ssize_t pdcs_autosearch_write(struct kobject *kobj,
struct kobj_attribute *attr,
const char *buf, size_t count)
static ssize_t pdcs_osdep1_write(struct kobject *kobj,
struct kobj_attribute *attr,
const char *buf, size_t count)
static ssize_t pdcs_osdep2_write(struct kobject *kobj,
struct kobj_attribute *attr,
const char *buf, size_t count)
static PDCS_ATTR(size, 0444, pdcs_size_read, NULL);
static PDCS_ATTR(autoboot, 0644, pdcs_autoboot_read, pdcs_autoboot_write);
static PDCS_ATTR(autosearch, 0644, pdcs_autosearch_read, pdcs_autosearch_write);
static PDCS_ATTR(timer, 0444, pdcs_timer_read, NULL);
static PDCS_ATTR(osid, 0444, pdcs_osid_read, NULL);
static PDCS_ATTR(osdep1, 0600, pdcs_osdep1_read, pdcs_osdep1_write);
static PDCS_ATTR(diagnostic, 0400, pdcs_diagnostic_read, NULL);
static PDCS_ATTR(fastsize, 0400, pdcs_fastsize_read, NULL);
static PDCS_ATTR(osdep2, 0600, pdcs_osdep2_read, pdcs_osdep2_write);
static struct attribute *pdcs_subsys_attrs[] = ;
static struct attribute_group pdcs_attr_group = ;
static struct kobject *stable_kobj;
static struct kset *paths_kset;
static inline int __init
pdcs_register_pathentries(void)
static inline void
pdcs_unregister_pathentries(void)
static int __init
pdc_stable_init(void)
static void __exit
pdc_stable_exit(void)
module_init(pdc_stable_init);
module_exit(pdc_stable_exit);
