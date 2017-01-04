#define EEH_SHOW_ATTR(_name,_memb,_format)               \
static ssize_t eeh_show_##_name(struct device *dev,      \
struct device_attribute *attr, char *buf)          \
\
static DEVICE_ATTR(_name, S_IRUGO, eeh_show_##_name, NULL);
EEH_SHOW_ATTR(eeh_mode, eeh_mode, "0x%x");
EEH_SHOW_ATTR(eeh_config_addr, eeh_config_addr, "0x%x");
EEH_SHOW_ATTR(eeh_pe_config_addr, eeh_pe_config_addr, "0x%x");
EEH_SHOW_ATTR(eeh_check_count, eeh_check_count, "%d");
EEH_SHOW_ATTR(eeh_freeze_count, eeh_freeze_count, "%d");
EEH_SHOW_ATTR(eeh_false_positives, eeh_false_positives, "%d");
void eeh_sysfs_add_device(struct pci_dev *pdev)
void eeh_sysfs_remove_device(struct pci_dev *pdev)
