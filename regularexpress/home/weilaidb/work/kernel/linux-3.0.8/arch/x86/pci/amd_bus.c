struct pci_hostbridge_probe ;
static struct pci_hostbridge_probe pci_probes[] __initdata = ;
static u64 __initdata fam10h_mmconf_start;
static u64 __initdata fam10h_mmconf_end;
static void __init get_pci_mmcfg_amd_fam10h_range(void)
#define RANGE_NUM 16
static int __init early_fill_mp_bus_info(void)
#define ENABLE_CF8_EXT_CFG      (1ULL << 46)
static void __cpuinit enable_pci_io_ecs(void *unused)
static int __cpuinit amd_cpu_notify(struct notifier_block *self,
unsigned long action, void *hcpu)
static struct notifier_block __cpuinitdata amd_cpu_notifier = ;
static void __init pci_enable_pci_io_ecs(void)
static int __init pci_io_ecs_init(void)
static int __init amd_postcore_init(void)
postcore_initcall(amd_postcore_init);
