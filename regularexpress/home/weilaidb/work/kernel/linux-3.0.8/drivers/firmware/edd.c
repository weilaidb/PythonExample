#define EDD_VERSION "0.16"
#define EDD_DATE    "2004-Jun-25"
MODULE_AUTHOR("Matt Domsch <Matt_Domsch@Dell.com>");
MODULE_DESCRIPTION("sysfs interface to BIOS EDD information");
MODULE_LICENSE("GPL");
MODULE_VERSION(EDD_VERSION);
#define left (PAGE_SIZE - (p - buf) - 1)
struct edd_device ;
struct edd_attribute ;
static int edd_dev_is_type(struct edd_device *edev, const char *type);
static struct pci_dev *edd_get_pci_dev(struct edd_device *edev);
static struct edd_device *edd_devices[EDD_MBR_SIG_MAX];
#define EDD_DEVICE_ATTR(_name,_mode,_show,_test) \
struct edd_attribute edd_attr_##_name = ;
static int
edd_has_mbr_signature(struct edd_device *edev)
static int
edd_has_edd_info(struct edd_device *edev)
static inline struct edd_info *
edd_dev_get_info(struct edd_device *edev)
static inline void
edd_dev_set_info(struct edd_device *edev, int i)
#define to_edd_attr(_attr) container_of(_attr,struct edd_attribute,attr)
#define to_edd_device(obj) container_of(obj,struct edd_device,kobj)
static ssize_t
edd_attr_show(struct kobject * kobj, struct attribute *attr, char *buf)
static const struct sysfs_ops edd_attr_ops = ;
static ssize_t
edd_show_host_bus(struct edd_device *edev, char *buf)
static ssize_t
edd_show_interface(struct edd_device *edev, char *buf)
static ssize_t
edd_show_raw_data(struct edd_device *edev, char *buf)
static ssize_t
edd_show_version(struct edd_device *edev, char *buf)
static ssize_t
edd_show_mbr_signature(struct edd_device *edev, char *buf)
static ssize_t
edd_show_extensions(struct edd_device *edev, char *buf)
static ssize_t
edd_show_info_flags(struct edd_device *edev, char *buf)
static ssize_t
edd_show_legacy_max_cylinder(struct edd_device *edev, char *buf)
static ssize_t
edd_show_legacy_max_head(struct edd_device *edev, char *buf)
static ssize_t
edd_show_legacy_sectors_per_track(struct edd_device *edev, char *buf)
static ssize_t
edd_show_default_cylinders(struct edd_device *edev, char *buf)
static ssize_t
edd_show_default_heads(struct edd_device *edev, char *buf)
static ssize_t
edd_show_default_sectors_per_track(struct edd_device *edev, char *buf)
static ssize_t
edd_show_sectors(struct edd_device *edev, char *buf)
static int
edd_has_legacy_max_cylinder(struct edd_device *edev)
static int
edd_has_legacy_max_head(struct edd_device *edev)
static int
edd_has_legacy_sectors_per_track(struct edd_device *edev)
static int
edd_has_default_cylinders(struct edd_device *edev)
static int
edd_has_default_heads(struct edd_device *edev)
static int
edd_has_default_sectors_per_track(struct edd_device *edev)
static int
edd_has_edd30(struct edd_device *edev)
static EDD_DEVICE_ATTR(raw_data, 0444, edd_show_raw_data, edd_has_edd_info);
static EDD_DEVICE_ATTR(version, 0444, edd_show_version, edd_has_edd_info);
static EDD_DEVICE_ATTR(extensions, 0444, edd_show_extensions, edd_has_edd_info);
static EDD_DEVICE_ATTR(info_flags, 0444, edd_show_info_flags, edd_has_edd_info);
static EDD_DEVICE_ATTR(sectors, 0444, edd_show_sectors, edd_has_edd_info);
static EDD_DEVICE_ATTR(legacy_max_cylinder, 0444,
edd_show_legacy_max_cylinder,
edd_has_legacy_max_cylinder);
static EDD_DEVICE_ATTR(legacy_max_head, 0444, edd_show_legacy_max_head,
edd_has_legacy_max_head);
static EDD_DEVICE_ATTR(legacy_sectors_per_track, 0444,
edd_show_legacy_sectors_per_track,
edd_has_legacy_sectors_per_track);
static EDD_DEVICE_ATTR(default_cylinders, 0444, edd_show_default_cylinders,
edd_has_default_cylinders);
static EDD_DEVICE_ATTR(default_heads, 0444, edd_show_default_heads,
edd_has_default_heads);
static EDD_DEVICE_ATTR(default_sectors_per_track, 0444,
edd_show_default_sectors_per_track,
edd_has_default_sectors_per_track);
static EDD_DEVICE_ATTR(interface, 0444, edd_show_interface, edd_has_edd30);
static EDD_DEVICE_ATTR(host_bus, 0444, edd_show_host_bus, edd_has_edd30);
static EDD_DEVICE_ATTR(mbr_signature, 0444, edd_show_mbr_signature, edd_has_mbr_signature);
static struct attribute * def_attrs[] = ;
static struct edd_attribute * edd_attrs[] = ;
static void edd_release(struct kobject * kobj)
static struct kobj_type edd_ktype = ;
static struct kset *edd_kset;
static int
edd_dev_is_type(struct edd_device *edev, const char *type)
static struct pci_dev *
edd_get_pci_dev(struct edd_device *edev)
static int
edd_create_symlink_to_pcidev(struct edd_device *edev)
static inline void
edd_device_unregister(struct edd_device *edev)
static void edd_populate_dir(struct edd_device * edev)
static int
edd_device_register(struct edd_device *edev, int i)
static inline int edd_num_devices(void)
static int __init
edd_init(void)
static void __exit
edd_exit(void)
late_initcall(edd_init);
module_exit(edd_exit);
