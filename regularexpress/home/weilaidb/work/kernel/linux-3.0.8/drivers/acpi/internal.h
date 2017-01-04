#define _ACPI_INTERNAL_H_
#define PREFIX "ACPI: "
int init_acpi_device_notify(void);
int acpi_scan_init(void);
int acpi_sysfs_init(void);
extern struct dentry *acpi_debugfs_dir;
int acpi_debugfs_init(void);
static inline void acpi_debugfs_init(void)
int acpi_power_init(void);
int acpi_device_sleep_wake(struct acpi_device *dev,
int enable, int sleep_state, int dev_state);
int acpi_power_get_inferred_state(struct acpi_device *device, int *state);
int acpi_power_on_resources(struct acpi_device *device, int state);
int acpi_power_transition(struct acpi_device *device, int state);
int acpi_bus_init_power(struct acpi_device *device);
int acpi_wakeup_device_init(void);
void acpi_early_processor_set_pdc(void);
struct acpi_ec ;
extern struct acpi_ec *first_ec;
int acpi_ec_init(void);
int acpi_ec_ecdt_probe(void);
int acpi_boot_ec_enable(void);
void acpi_ec_block_transactions(void);
void acpi_ec_unblock_transactions(void);
void acpi_ec_unblock_transactions_early(void);
extern int acpi_sleep_init(void);
int acpi_sleep_proc_init(void);
int suspend_nvs_alloc(void);
void suspend_nvs_free(void);
int suspend_nvs_save(void);
void suspend_nvs_restore(void);
static inline int acpi_sleep_proc_init(void)
static inline int suspend_nvs_alloc(void)
static inline void suspend_nvs_free(void)
static inline int suspend_nvs_save(void)
static inline void suspend_nvs_restore(void)
