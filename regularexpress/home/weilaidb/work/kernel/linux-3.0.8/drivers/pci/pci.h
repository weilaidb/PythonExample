#define DRIVERS_PCI_H
#define PCI_CFG_SPACE_SIZE	256
#define PCI_CFG_SPACE_EXP_SIZE	4096
extern int pci_uevent(struct device *dev, struct kobj_uevent_env *env);
extern int pci_create_sysfs_dev_files(struct pci_dev *pdev);
extern void pci_remove_sysfs_dev_files(struct pci_dev *pdev);
#if !defined(CONFIG_DMI) && !defined(CONFIG_ACPI)
static inline void pci_create_firmware_label_files(struct pci_dev *pdev)
static inline void pci_remove_firmware_label_files(struct pci_dev *pdev)
extern void pci_create_firmware_label_files(struct pci_dev *pdev);
extern void pci_remove_firmware_label_files(struct pci_dev *pdev);
extern void pci_cleanup_rom(struct pci_dev *dev);
enum pci_mmap_api ;
extern int pci_mmap_fits(struct pci_dev *pdev, int resno,
struct vm_area_struct *vmai,
enum pci_mmap_api mmap_api);
int pci_probe_reset_function(struct pci_dev *dev);
struct pci_platform_pm_ops ;
extern int pci_set_platform_pm(struct pci_platform_pm_ops *ops);
extern void pci_update_current_state(struct pci_dev *dev, pci_power_t state);
extern void pci_disable_enabled_device(struct pci_dev *dev);
extern int pci_finish_runtime_suspend(struct pci_dev *dev);
extern int __pci_pme_wakeup(struct pci_dev *dev, void *ign);
extern void pci_pm_init(struct pci_dev *dev);
extern void platform_pci_wakeup_init(struct pci_dev *dev);
extern void pci_allocate_cap_save_buffers(struct pci_dev *dev);
static inline void pci_wakeup_event(struct pci_dev *dev)
static inline bool pci_is_bridge(struct pci_dev *pci_dev)
extern int pci_user_read_config_byte(struct pci_dev *dev, int where, u8 *val);
extern int pci_user_read_config_word(struct pci_dev *dev, int where, u16 *val);
extern int pci_user_read_config_dword(struct pci_dev *dev, int where, u32 *val);
extern int pci_user_write_config_byte(struct pci_dev *dev, int where, u8 val);
extern int pci_user_write_config_word(struct pci_dev *dev, int where, u16 val);
extern int pci_user_write_config_dword(struct pci_dev *dev, int where, u32 val);
struct pci_vpd_ops ;
struct pci_vpd ;
extern int pci_vpd_pci22_init(struct pci_dev *dev);
static inline void pci_vpd_release(struct pci_dev *dev)
extern int pci_proc_attach_device(struct pci_dev *dev);
extern int pci_proc_detach_device(struct pci_dev *dev);
extern int pci_proc_detach_bus(struct pci_bus *bus);
static inline int pci_proc_attach_device(struct pci_dev *dev)
static inline int pci_proc_detach_device(struct pci_dev *dev)
static inline int pci_proc_detach_bus(struct pci_bus *bus)
extern unsigned int pci_do_scan_bus(struct pci_bus *bus);
extern void pci_create_legacy_files(struct pci_bus *bus);
extern void pci_remove_legacy_files(struct pci_bus *bus);
static inline void pci_create_legacy_files(struct pci_bus *bus)
static inline void pci_remove_legacy_files(struct pci_bus *bus)
extern struct rw_semaphore pci_bus_sem;
extern unsigned int pci_pm_d3_delay;
void pci_no_msi(void);
extern void pci_msi_init_pci_dev(struct pci_dev *dev);
static inline void pci_no_msi(void)
static inline void pci_msi_init_pci_dev(struct pci_dev *dev)
extern void pci_realloc(void);
static inline int pci_no_d1d2(struct pci_dev *dev)
extern struct device_attribute pci_dev_attrs[];
extern struct device_attribute pcibus_dev_attrs[];
extern struct bus_attribute pci_bus_attrs[];
#define pci_bus_attrs	NULL
static inline const struct pci_device_id *
pci_match_one_device(const struct pci_device_id *id, const struct pci_dev *dev)
struct pci_dev *pci_find_upstream_pcie_bridge(struct pci_dev *pdev);
#define to_pci_slot(s) container_of(s, struct pci_slot, kobj)
extern struct kset *pci_slots_kset;
struct pci_slot_attribute ;
#define to_pci_slot_attr(s) container_of(s, struct pci_slot_attribute, attr)
enum pci_bar_type ;
extern int pci_setup_device(struct pci_dev *dev);
extern int __pci_read_base(struct pci_dev *dev, enum pci_bar_type type,
struct resource *res, unsigned int reg);
extern int pci_resource_bar(struct pci_dev *dev, int resno,
enum pci_bar_type *type);
extern int pci_bus_add_child(struct pci_bus *bus);
extern void pci_enable_ari(struct pci_dev *dev);
static inline int pci_ari_enabled(struct pci_bus *bus)
extern int pci_is_reassigndev(struct pci_dev *dev);
resource_size_t pci_specified_resource_alignment(struct pci_dev *dev);
extern void pci_disable_bridge_window(struct pci_dev *dev);
struct pci_sriov ;
extern int pci_iov_init(struct pci_dev *dev);
extern void pci_iov_release(struct pci_dev *dev);
extern int pci_iov_resource_bar(struct pci_dev *dev, int resno,
enum pci_bar_type *type);
extern resource_size_t pci_sriov_resource_alignment(struct pci_dev *dev,
int resno);
extern void pci_restore_iov_state(struct pci_dev *dev);
extern int pci_iov_bus_range(struct pci_bus *bus);
static inline int pci_iov_init(struct pci_dev *dev)
static inline void pci_iov_release(struct pci_dev *dev)
static inline int pci_iov_resource_bar(struct pci_dev *dev, int resno,
enum pci_bar_type *type)
static inline void pci_restore_iov_state(struct pci_dev *dev)
static inline int pci_iov_bus_range(struct pci_bus *bus)
static inline resource_size_t pci_resource_alignment(struct pci_dev *dev,
struct resource *res)
extern void pci_enable_acs(struct pci_dev *dev);
struct pci_dev_reset_methods ;
extern int pci_dev_specific_reset(struct pci_dev *dev, int probe);
static inline int pci_dev_specific_reset(struct pci_dev *dev, int probe)
