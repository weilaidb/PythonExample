#define ACPI_BUTTON_H
#if defined(CONFIG_ACPI_BUTTON) || defined(CONFIG_ACPI_BUTTON_MODULE)
extern int acpi_lid_notifier_register(struct notifier_block *nb);
extern int acpi_lid_notifier_unregister(struct notifier_block *nb);
extern int acpi_lid_open(void);
static inline int acpi_lid_notifier_register(struct notifier_block *nb)
static inline int acpi_lid_notifier_unregister(struct notifier_block *nb)
static inline int acpi_lid_open(void)
