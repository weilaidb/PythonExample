#undef SHOW_GATWICK_IRQS
int ppc_override_l2cr = 0;
int ppc_override_l2cr_value;
int has_l2cache = 0;
int pmac_newworld;
static int current_root_goodness = -1;
extern struct machdep_calls pmac_md;
#define DEFAULT_ROOT_DEVICE Root_SDA1
int sccdbg;
sys_ctrler_t sys_ctrler = SYS_CTRLER_UNKNOWN;
EXPORT_SYMBOL(sys_ctrler);
unsigned long smu_cmdbuf_abs;
EXPORT_SYMBOL(smu_cmdbuf_abs);
static void pmac_show_cpuinfo(struct seq_file *m)
int find_via_cuda(void)
int find_via_pmu(void)
int smu_init(void)
static volatile u32 *sysctrl_regs;
static void __init ohare_init(void)
static void __init l2cr_init(void)
static void __init pmac_setup_arch(void)
void note_scsi_host(struct device_node *node, void *host)
EXPORT_SYMBOL(note_scsi_host);
static int initializing = 1;
static int pmac_late_init(void)
machine_late_initcall(powermac, pmac_late_init);
void __init_refok note_bootable_part(dev_t dev, int part, int goodness)
static void cuda_restart(void)
static void cuda_shutdown(void)
#define cuda_restart()
#define cuda_shutdown()
#define pmu_restart()
#define pmu_shutdown()
#define smu_restart()
#define smu_shutdown()
static void pmac_restart(char *cmd)
static void pmac_power_off(void)
static void
pmac_halt(void)
static void __init pmac_init_early(void)
static int __init pmac_declare_of_platform_devices(void)
machine_device_initcall(powermac, pmac_declare_of_platform_devices);
static int __init check_pmac_serial_console(void)
console_initcall(check_pmac_serial_console);
static int __init pmac_probe(void)
static int pmac_pci_probe_mode(struct pci_bus *bus)
define_machine(powermac) ;
