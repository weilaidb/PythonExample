struct pci_hostbridge_probe ;
static u64 __cpuinitdata fam10h_pci_mmconf_base;
static struct pci_hostbridge_probe pci_probes[] __cpuinitdata = ;
static int __cpuinit cmp_range(const void *x1, const void *x2)
#define MMCONF_UNIT (1ULL << FAM10H_MMIO_CONF_BASE_SHIFT)
#define MMCONF_MASK (~(MMCONF_UNIT - 1))
#define MMCONF_SIZE (MMCONF_UNIT << 8)
#define FAM10H_PCI_MMCONF_BASE (0xfcULL<<32)
#define BASE_VALID(b) ((b) + MMCONF_SIZE <= (0xfdULL<<32) || (b) >= (1ULL<<40))
static void __cpuinit get_fam10h_pci_mmconf_base(void)
void __cpuinit fam10h_check_enable_mmcfg(void)
static int __init set_check_enable_amd_mmconf(const struct dmi_system_id *d)
static const struct dmi_system_id __initconst mmconf_dmi_table[] = ;
void __ref check_enable_amd_mmconf_dmi(void)
