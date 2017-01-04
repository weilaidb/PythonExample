#define EFIVARS_VERSION "0.08"
#define EFIVARS_DATE "2004-May-17"
MODULE_AUTHOR("Matt Domsch <Matt_Domsch@Dell.com>");
MODULE_DESCRIPTION("sysfs interface to EFI Variables");
MODULE_LICENSE("GPL");
MODULE_VERSION(EFIVARS_VERSION);
struct efi_variable  __attribute__((packed));
struct efivar_entry ;
struct efivar_attribute ;
#define EFIVAR_ATTR(_name, _mode, _show, _store) \
struct efivar_attribute efivar_attr_##_name = ;
#define to_efivar_attr(_attr) container_of(_attr, struct efivar_attribute, attr)
#define to_efivar_entry(obj)  container_of(obj, struct efivar_entry, kobj)
static int
efivar_create_sysfs_entry(struct efivars *efivars,
unsigned long variable_name_size,
efi_char16_t *variable_name,
efi_guid_t *vendor_guid);
static unsigned long
utf8_strlen(efi_char16_t *data, unsigned long maxlength)
static inline unsigned long
utf8_strsize(efi_char16_t *data, unsigned long maxlength)
static efi_status_t
get_var_data(struct efivars *efivars, struct efi_variable *var)
static ssize_t
efivar_guid_read(struct efivar_entry *entry, char *buf)
static ssize_t
efivar_attr_read(struct efivar_entry *entry, char *buf)
static ssize_t
efivar_size_read(struct efivar_entry *entry, char *buf)
static ssize_t
efivar_data_read(struct efivar_entry *entry, char *buf)
static ssize_t
efivar_store_raw(struct efivar_entry *entry, const char *buf, size_t count)
static ssize_t
efivar_show_raw(struct efivar_entry *entry, char *buf)
static ssize_t efivar_attr_show(struct kobject *kobj, struct attribute *attr,
char *buf)
static ssize_t efivar_attr_store(struct kobject *kobj, struct attribute *attr,
const char *buf, size_t count)
static const struct sysfs_ops efivar_attr_ops = ;
static void efivar_release(struct kobject *kobj)
static EFIVAR_ATTR(guid, 0400, efivar_guid_read, NULL);
static EFIVAR_ATTR(attributes, 0400, efivar_attr_read, NULL);
static EFIVAR_ATTR(size, 0400, efivar_size_read, NULL);
static EFIVAR_ATTR(data, 0400, efivar_data_read, NULL);
static EFIVAR_ATTR(raw_var, 0600, efivar_show_raw, efivar_store_raw);
static struct attribute *def_attrs[] = ;
static struct kobj_type efivar_ktype = ;
static inline void
efivar_unregister(struct efivar_entry *var)
static ssize_t efivar_create(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t pos, size_t count)
static ssize_t efivar_delete(struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t pos, size_t count)
static ssize_t systab_show(struct kobject *kobj,
struct kobj_attribute *attr, char *buf)
static struct kobj_attribute efi_attr_systab =
__ATTR(systab, 0400, systab_show, NULL);
static struct attribute *efi_subsys_attrs[] = ;
static struct attribute_group efi_subsys_attr_group = ;
static struct kobject *efi_kobj;
static int
efivar_create_sysfs_entry(struct efivars *efivars,
unsigned long variable_name_size,
efi_char16_t *variable_name,
efi_guid_t *vendor_guid)
static int
create_efivars_bin_attributes(struct efivars *efivars)
void unregister_efivars(struct efivars *efivars)
EXPORT_SYMBOL_GPL(unregister_efivars);
int register_efivars(struct efivars *efivars,
const struct efivar_operations *ops,
struct kobject *parent_kobj)
EXPORT_SYMBOL_GPL(register_efivars);
static struct efivars __efivars;
static struct efivar_operations ops;
static int __init
efivars_init(void)
static void __exit
efivars_exit(void)
module_init(efivars_init);
module_exit(efivars_exit);
