#define	DEVICE_LABEL_DSM	0x07
static inline int
pci_create_smbiosname_file(struct pci_dev *pdev)
static inline void
pci_remove_smbiosname_file(struct pci_dev *pdev)
enum smbios_attr_enum ;
static mode_t
find_smbios_instance_string(struct pci_dev *pdev, char *buf,
enum smbios_attr_enum attribute)
static mode_t
smbios_instance_string_exist(struct kobject *kobj, struct attribute *attr,
int n)
static ssize_t
smbioslabel_show(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
smbiosinstance_show(struct device *dev,
struct device_attribute *attr, char *buf)
static struct device_attribute smbios_attr_label = ;
static struct device_attribute smbios_attr_instance = ;
static struct attribute *smbios_attributes[] = ;
static struct attribute_group smbios_attr_group = ;
static int
pci_create_smbiosname_file(struct pci_dev *pdev)
static void
pci_remove_smbiosname_file(struct pci_dev *pdev)
static inline int
pci_create_acpi_index_label_files(struct pci_dev *pdev)
static inline int
pci_remove_acpi_index_label_files(struct pci_dev *pdev)
static inline bool
device_has_dsm(struct device *dev)
static const char device_label_dsm_uuid[] = ;
enum acpi_attr_enum ;
static void dsm_label_utf16s_to_utf8s(union acpi_object *obj, char *buf)
static int
dsm_get_label(acpi_handle handle, int func,
struct acpi_buffer *output,
char *buf, enum acpi_attr_enum attribute)
static bool
device_has_dsm(struct device *dev)
static mode_t
acpi_index_string_exist(struct kobject *kobj, struct attribute *attr, int n)
static ssize_t
acpilabel_show(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
acpiindex_show(struct device *dev, struct device_attribute *attr, char *buf)
static struct device_attribute acpi_attr_label = ;
static struct device_attribute acpi_attr_index = ;
static struct attribute *acpi_attributes[] = ;
static struct attribute_group acpi_attr_group = ;
static int
pci_create_acpi_index_label_files(struct pci_dev *pdev)
static int
pci_remove_acpi_index_label_files(struct pci_dev *pdev)
void pci_create_firmware_label_files(struct pci_dev *pdev)
void pci_remove_firmware_label_files(struct pci_dev *pdev)
