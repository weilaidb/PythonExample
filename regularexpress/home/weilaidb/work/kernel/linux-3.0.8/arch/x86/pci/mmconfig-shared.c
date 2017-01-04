#define PREFIX "PCI: "
static int __initdata pci_mmcfg_resources_inserted;
LIST_HEAD(pci_mmcfg_list);
static __init void pci_mmconfig_remove(struct pci_mmcfg_region *cfg)
static __init void free_all_mmcfg(void)
static __init void list_add_sorted(struct pci_mmcfg_region *new)
static __init struct pci_mmcfg_region *pci_mmconfig_add(int segment, int start,
int end, u64 addr)
struct pci_mmcfg_region *pci_mmconfig_lookup(int segment, int bus)
static const char __init *pci_mmcfg_e7520(void)
static const char __init *pci_mmcfg_intel_945(void)
static const char __init *pci_mmcfg_amd_fam10h(void)
static bool __initdata mcp55_checked;
static const char __init *pci_mmcfg_nvidia_mcp55(void)
struct pci_mmcfg_hostbridge_probe ;
static struct pci_mmcfg_hostbridge_probe pci_mmcfg_probes[] __initdata = ;
static void __init pci_mmcfg_check_end_bus_number(void)
static int __init pci_mmcfg_check_hostbridge(void)
static void __init pci_mmcfg_insert_resources(void)
static acpi_status __init check_mcfg_resource(struct acpi_resource *res,
void *data)
static acpi_status __init find_mboard_resource(acpi_handle handle, u32 lvl,
void *context, void **rv)
static int __init is_acpi_reserved(u64 start, u64 end, unsigned not_used)
typedef int (*check_reserved_t)(u64 start, u64 end, unsigned type);
static int __init is_mmconf_reserved(check_reserved_t is_reserved,
struct pci_mmcfg_region *cfg, int with_e820)
static void __init pci_mmcfg_reject_broken(int early)
static int __initdata known_bridge;
static int __init acpi_mcfg_check_entry(struct acpi_table_mcfg *mcfg,
struct acpi_mcfg_allocation *cfg)
static int __init pci_parse_mcfg(struct acpi_table_header *header)
static void __init __pci_mmcfg_init(int early)
void __init pci_mmcfg_early_init(void)
void __init pci_mmcfg_late_init(void)
static int __init pci_mmcfg_late_insert_resources(void)
late_initcall(pci_mmcfg_late_insert_resources);
