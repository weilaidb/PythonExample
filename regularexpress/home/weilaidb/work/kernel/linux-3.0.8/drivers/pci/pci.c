const char *pci_power_names[] = ;
EXPORT_SYMBOL_GPL(pci_power_names);
int isa_dma_bridge_buggy;
EXPORT_SYMBOL(isa_dma_bridge_buggy);
int pci_pci_problems;
EXPORT_SYMBOL(pci_pci_problems);
unsigned int pci_pm_d3_delay;
static void pci_pme_list_scan(struct work_struct *work);
static LIST_HEAD(pci_pme_list);
static DEFINE_MUTEX(pci_pme_list_mutex);
static DECLARE_DELAYED_WORK(pci_pme_work, pci_pme_list_scan);
struct pci_pme_device ;
#define PME_TIMEOUT 1000
static void pci_dev_d3_sleep(struct pci_dev *dev)
int pci_domains_supported = 1;
#define DEFAULT_CARDBUS_IO_SIZE		(256)
#define DEFAULT_CARDBUS_MEM_SIZE	(64*1024*1024)
unsigned long pci_cardbus_io_size = DEFAULT_CARDBUS_IO_SIZE;
unsigned long pci_cardbus_mem_size = DEFAULT_CARDBUS_MEM_SIZE;
#define DEFAULT_HOTPLUG_IO_SIZE		(256)
#define DEFAULT_HOTPLUG_MEM_SIZE	(2*1024*1024)
unsigned long pci_hotplug_io_size  = DEFAULT_HOTPLUG_IO_SIZE;
unsigned long pci_hotplug_mem_size = DEFAULT_HOTPLUG_MEM_SIZE;
u8 pci_dfl_cache_line_size __devinitdata = L1_CACHE_BYTES >> 2;
u8 pci_cache_line_size;
unsigned char pci_bus_max_busnr(struct pci_bus* bus)
EXPORT_SYMBOL_GPL(pci_bus_max_busnr);
void __iomem *pci_ioremap_bar(struct pci_dev *pdev, int bar)
EXPORT_SYMBOL_GPL(pci_ioremap_bar);
#define PCI_FIND_CAP_TTL	48
static int __pci_find_next_cap_ttl(struct pci_bus *bus, unsigned int devfn,
u8 pos, int cap, int *ttl)
static int __pci_find_next_cap(struct pci_bus *bus, unsigned int devfn,
u8 pos, int cap)
int pci_find_next_capability(struct pci_dev *dev, u8 pos, int cap)
EXPORT_SYMBOL_GPL(pci_find_next_capability);
static int __pci_bus_find_cap_start(struct pci_bus *bus,
unsigned int devfn, u8 hdr_type)
int pci_find_capability(struct pci_dev *dev, int cap)
int pci_bus_find_capability(struct pci_bus *bus, unsigned int devfn, int cap)
int pci_find_ext_capability(struct pci_dev *dev, int cap)
EXPORT_SYMBOL_GPL(pci_find_ext_capability);
int pci_bus_find_ext_capability(struct pci_bus *bus, unsigned int devfn,
int cap)
static int __pci_find_next_ht_cap(struct pci_dev *dev, int pos, int ht_cap)
int pci_find_next_ht_capability(struct pci_dev *dev, int pos, int ht_cap)
EXPORT_SYMBOL_GPL(pci_find_next_ht_capability);
int pci_find_ht_capability(struct pci_dev *dev, int ht_cap)
EXPORT_SYMBOL_GPL(pci_find_ht_capability);
struct resource *
pci_find_parent_resource(const struct pci_dev *dev, struct resource *res)
static void
pci_restore_bars(struct pci_dev *dev)
static struct pci_platform_pm_ops *pci_platform_pm;
int pci_set_platform_pm(struct pci_platform_pm_ops *ops)
static inline bool platform_pci_power_manageable(struct pci_dev *dev)
static inline int platform_pci_set_power_state(struct pci_dev *dev,
pci_power_t t)
static inline pci_power_t platform_pci_choose_state(struct pci_dev *dev)
static inline bool platform_pci_can_wakeup(struct pci_dev *dev)
static inline int platform_pci_sleep_wake(struct pci_dev *dev, bool enable)
static inline int platform_pci_run_wake(struct pci_dev *dev, bool enable)
static int pci_raw_set_power_state(struct pci_dev *dev, pci_power_t state)
void pci_update_current_state(struct pci_dev *dev, pci_power_t state)
static int pci_platform_power_transition(struct pci_dev *dev, pci_power_t state)
static void __pci_start_power_transition(struct pci_dev *dev, pci_power_t state)
int __pci_complete_power_transition(struct pci_dev *dev, pci_power_t state)
EXPORT_SYMBOL_GPL(__pci_complete_power_transition);
int pci_set_power_state(struct pci_dev *dev, pci_power_t state)
pci_power_t pci_choose_state(struct pci_dev *dev, pm_message_t state)
EXPORT_SYMBOL(pci_choose_state);
#define PCI_EXP_SAVE_REGS	7
#define pcie_cap_has_devctl(type, flags)	1
#define pcie_cap_has_lnkctl(type, flags)		\
((flags & PCI_EXP_FLAGS_VERS) > 1 ||	\
(type == PCI_EXP_TYPE_ROOT_PORT ||	\
type == PCI_EXP_TYPE_ENDPOINT ||	\
type == PCI_EXP_TYPE_LEG_END))
#define pcie_cap_has_sltctl(type, flags)		\
((flags & PCI_EXP_FLAGS_VERS) > 1 ||	\
((type == PCI_EXP_TYPE_ROOT_PORT) ||	\
(type == PCI_EXP_TYPE_DOWNSTREAM &&	\
(flags & PCI_EXP_FLAGS_SLOT))))
#define pcie_cap_has_rtctl(type, flags)			\
((flags & PCI_EXP_FLAGS_VERS) > 1 ||	\
(type == PCI_EXP_TYPE_ROOT_PORT ||	\
type == PCI_EXP_TYPE_RC_EC))
#define pcie_cap_has_devctl2(type, flags)		\
((flags & PCI_EXP_FLAGS_VERS) > 1)
#define pcie_cap_has_lnkctl2(type, flags)		\
((flags & PCI_EXP_FLAGS_VERS) > 1)
#define pcie_cap_has_sltctl2(type, flags)		\
((flags & PCI_EXP_FLAGS_VERS) > 1)
static int pci_save_pcie_state(struct pci_dev *dev)
static void pci_restore_pcie_state(struct pci_dev *dev)
static int pci_save_pcix_state(struct pci_dev *dev)
static void pci_restore_pcix_state(struct pci_dev *dev)
int
pci_save_state(struct pci_dev *dev)
void pci_restore_state(struct pci_dev *dev)
struct pci_saved_state ;
struct pci_saved_state *pci_store_saved_state(struct pci_dev *dev)
EXPORT_SYMBOL_GPL(pci_store_saved_state);
int pci_load_saved_state(struct pci_dev *dev, struct pci_saved_state *state)
EXPORT_SYMBOL_GPL(pci_load_saved_state);
int pci_load_and_free_saved_state(struct pci_dev *dev,
struct pci_saved_state **state)
EXPORT_SYMBOL_GPL(pci_load_and_free_saved_state);
static int do_pci_enable_device(struct pci_dev *dev, int bars)
int pci_reenable_device(struct pci_dev *dev)
static int __pci_enable_device_flags(struct pci_dev *dev,
resource_size_t flags)
int pci_enable_device_io(struct pci_dev *dev)
int pci_enable_device_mem(struct pci_dev *dev)
int pci_enable_device(struct pci_dev *dev)
struct pci_devres ;
static void pcim_release(struct device *gendev, void *res)
static struct pci_devres * get_pci_dr(struct pci_dev *pdev)
static struct pci_devres * find_pci_dr(struct pci_dev *pdev)
int pcim_enable_device(struct pci_dev *pdev)
void pcim_pin_device(struct pci_dev *pdev)
void __attribute__ ((weak)) pcibios_disable_device (struct pci_dev *dev)
static void do_pci_disable_device(struct pci_dev *dev)
void pci_disable_enabled_device(struct pci_dev *dev)
void
pci_disable_device(struct pci_dev *dev)
int __attribute__ ((weak)) pcibios_set_pcie_reset_state(struct pci_dev *dev,
enum pcie_reset_state state)
int pci_set_pcie_reset_state(struct pci_dev *dev, enum pcie_reset_state state)
bool pci_check_pme_status(struct pci_dev *dev)
static int pci_pme_wakeup(struct pci_dev *dev, void *ign)
void pci_pme_wakeup_bus(struct pci_bus *bus)
bool pci_pme_capable(struct pci_dev *dev, pci_power_t state)
static void pci_pme_list_scan(struct work_struct *work)
static bool pci_external_pme(struct pci_dev *dev)
void pci_pme_active(struct pci_dev *dev, bool enable)
int __pci_enable_wake(struct pci_dev *dev, pci_power_t state,
bool runtime, bool enable)
EXPORT_SYMBOL(__pci_enable_wake);
int pci_wake_from_d3(struct pci_dev *dev, bool enable)
pci_power_t pci_target_state(struct pci_dev *dev)
int pci_prepare_to_sleep(struct pci_dev *dev)
int pci_back_from_sleep(struct pci_dev *dev)
int pci_finish_runtime_suspend(struct pci_dev *dev)
bool pci_dev_run_wake(struct pci_dev *dev)
EXPORT_SYMBOL_GPL(pci_dev_run_wake);
void pci_pm_init(struct pci_dev *dev)
void platform_pci_wakeup_init(struct pci_dev *dev)
static int pci_add_cap_save_buffer(
struct pci_dev *dev, char cap, unsigned int size)
void pci_allocate_cap_save_buffers(struct pci_dev *dev)
void pci_enable_ari(struct pci_dev *dev)
void pci_enable_ido(struct pci_dev *dev, unsigned long type)
EXPORT_SYMBOL(pci_enable_ido);
void pci_disable_ido(struct pci_dev *dev, unsigned long type)
EXPORT_SYMBOL(pci_disable_ido);
int pci_enable_obff(struct pci_dev *dev, enum pci_obff_signal_type type)
EXPORT_SYMBOL(pci_enable_obff);
void pci_disable_obff(struct pci_dev *dev)
EXPORT_SYMBOL(pci_disable_obff);
bool pci_ltr_supported(struct pci_dev *dev)
EXPORT_SYMBOL(pci_ltr_supported);
int pci_enable_ltr(struct pci_dev *dev)
EXPORT_SYMBOL(pci_enable_ltr);
void pci_disable_ltr(struct pci_dev *dev)
EXPORT_SYMBOL(pci_disable_ltr);
static int __pci_ltr_scale(int *val)
int pci_set_ltr(struct pci_dev *dev, int snoop_lat_ns, int nosnoop_lat_ns)
EXPORT_SYMBOL(pci_set_ltr);
static int pci_acs_enable;
void pci_request_acs(void)
void pci_enable_acs(struct pci_dev *dev)
u8 pci_swizzle_interrupt_pin(struct pci_dev *dev, u8 pin)
int
pci_get_interrupt_pin(struct pci_dev *dev, struct pci_dev **bridge)
u8 pci_common_swizzle(struct pci_dev *dev, u8 *pinp)
void pci_release_region(struct pci_dev *pdev, int bar)
static int __pci_request_region(struct pci_dev *pdev, int bar, const char *res_name,
int exclusive)
int pci_request_region(struct pci_dev *pdev, int bar, const char *res_name)
int pci_request_region_exclusive(struct pci_dev *pdev, int bar, const char *res_name)
void pci_release_selected_regions(struct pci_dev *pdev, int bars)
int __pci_request_selected_regions(struct pci_dev *pdev, int bars,
const char *res_name, int excl)
int pci_request_selected_regions(struct pci_dev *pdev, int bars,
const char *res_name)
int pci_request_selected_regions_exclusive(struct pci_dev *pdev,
int bars, const char *res_name)
void pci_release_regions(struct pci_dev *pdev)
int pci_request_regions(struct pci_dev *pdev, const char *res_name)
int pci_request_regions_exclusive(struct pci_dev *pdev, const char *res_name)
static void __pci_set_master(struct pci_dev *dev, bool enable)
void pci_set_master(struct pci_dev *dev)
void pci_clear_master(struct pci_dev *dev)
int pci_set_cacheline_size(struct pci_dev *dev)
EXPORT_SYMBOL_GPL(pci_set_cacheline_size);
int pci_set_mwi(struct pci_dev *dev)
int pci_try_set_mwi(struct pci_dev *dev)
void pci_clear_mwi(struct pci_dev *dev)
int
pci_set_mwi(struct pci_dev *dev)
int pci_try_set_mwi(struct pci_dev *dev)
void
pci_clear_mwi(struct pci_dev *dev)
void
pci_intx(struct pci_dev *pdev, int enable)
void pci_msi_off(struct pci_dev *dev)
EXPORT_SYMBOL_GPL(pci_msi_off);
int pci_set_dma_max_seg_size(struct pci_dev *dev, unsigned int size)
EXPORT_SYMBOL(pci_set_dma_max_seg_size);
int pci_set_dma_seg_boundary(struct pci_dev *dev, unsigned long mask)
EXPORT_SYMBOL(pci_set_dma_seg_boundary);
static int pcie_flr(struct pci_dev *dev, int probe)
static int pci_af_flr(struct pci_dev *dev, int probe)
static int pci_pm_reset(struct pci_dev *dev, int probe)
static int pci_parent_bus_reset(struct pci_dev *dev, int probe)
static int pci_dev_reset(struct pci_dev *dev, int probe)
int __pci_reset_function(struct pci_dev *dev)
EXPORT_SYMBOL_GPL(__pci_reset_function);
int pci_probe_reset_function(struct pci_dev *dev)
int pci_reset_function(struct pci_dev *dev)
EXPORT_SYMBOL_GPL(pci_reset_function);
int pcix_get_max_mmrbc(struct pci_dev *dev)
EXPORT_SYMBOL(pcix_get_max_mmrbc);
int pcix_get_mmrbc(struct pci_dev *dev)
EXPORT_SYMBOL(pcix_get_mmrbc);
int pcix_set_mmrbc(struct pci_dev *dev, int mmrbc)
EXPORT_SYMBOL(pcix_set_mmrbc);
int pcie_get_readrq(struct pci_dev *dev)
EXPORT_SYMBOL(pcie_get_readrq);
int pcie_set_readrq(struct pci_dev *dev, int rq)
EXPORT_SYMBOL(pcie_set_readrq);
int pci_select_bars(struct pci_dev *dev, unsigned long flags)
int pci_resource_bar(struct pci_dev *dev, int resno, enum pci_bar_type *type)
static arch_set_vga_state_t arch_set_vga_state;
void __init pci_register_set_vga_state(arch_set_vga_state_t func)
static int pci_set_vga_state_arch(struct pci_dev *dev, bool decode,
unsigned int command_bits, u32 flags)
int pci_set_vga_state(struct pci_dev *dev, bool decode,
unsigned int command_bits, u32 flags)
#define RESOURCE_ALIGNMENT_PARAM_SIZE COMMAND_LINE_SIZE
static char resource_alignment_param[RESOURCE_ALIGNMENT_PARAM_SIZE] = ;
static DEFINE_SPINLOCK(resource_alignment_lock);
resource_size_t pci_specified_resource_alignment(struct pci_dev *dev)
int pci_is_reassigndev(struct pci_dev *dev)
ssize_t pci_set_resource_alignment_param(const char *buf, size_t count)
ssize_t pci_get_resource_alignment_param(char *buf, size_t size)
static ssize_t pci_resource_alignment_show(struct bus_type *bus, char *buf)
static ssize_t pci_resource_alignment_store(struct bus_type *bus,
const char *buf, size_t count)
BUS_ATTR(resource_alignment, 0644, pci_resource_alignment_show,
pci_resource_alignment_store);
static int __init pci_resource_alignment_sysfs_init(void)
late_initcall(pci_resource_alignment_sysfs_init);
static void __devinit pci_no_domains(void)
int __attribute__ ((weak)) pci_ext_cfg_avail(struct pci_dev *dev)
void __weak pci_fixup_cardbus(struct pci_bus *bus)
EXPORT_SYMBOL(pci_fixup_cardbus);
static int __init pci_setup(char *str)
early_param("pci", pci_setup);
EXPORT_SYMBOL(pci_reenable_device);
EXPORT_SYMBOL(pci_enable_device_io);
EXPORT_SYMBOL(pci_enable_device_mem);
EXPORT_SYMBOL(pci_enable_device);
EXPORT_SYMBOL(pcim_enable_device);
EXPORT_SYMBOL(pcim_pin_device);
EXPORT_SYMBOL(pci_disable_device);
EXPORT_SYMBOL(pci_find_capability);
EXPORT_SYMBOL(pci_bus_find_capability);
EXPORT_SYMBOL(pci_release_regions);
EXPORT_SYMBOL(pci_request_regions);
EXPORT_SYMBOL(pci_request_regions_exclusive);
EXPORT_SYMBOL(pci_release_region);
EXPORT_SYMBOL(pci_request_region);
EXPORT_SYMBOL(pci_request_region_exclusive);
EXPORT_SYMBOL(pci_release_selected_regions);
EXPORT_SYMBOL(pci_request_selected_regions);
EXPORT_SYMBOL(pci_request_selected_regions_exclusive);
EXPORT_SYMBOL(pci_set_master);
EXPORT_SYMBOL(pci_clear_master);
EXPORT_SYMBOL(pci_set_mwi);
EXPORT_SYMBOL(pci_try_set_mwi);
EXPORT_SYMBOL(pci_clear_mwi);
EXPORT_SYMBOL_GPL(pci_intx);
EXPORT_SYMBOL(pci_assign_resource);
EXPORT_SYMBOL(pci_find_parent_resource);
EXPORT_SYMBOL(pci_select_bars);
EXPORT_SYMBOL(pci_set_power_state);
EXPORT_SYMBOL(pci_save_state);
EXPORT_SYMBOL(pci_restore_state);
EXPORT_SYMBOL(pci_pme_capable);
EXPORT_SYMBOL(pci_pme_active);
EXPORT_SYMBOL(pci_wake_from_d3);
EXPORT_SYMBOL(pci_target_state);
EXPORT_SYMBOL(pci_prepare_to_sleep);
EXPORT_SYMBOL(pci_back_from_sleep);
EXPORT_SYMBOL_GPL(pci_set_pcie_reset_state);
