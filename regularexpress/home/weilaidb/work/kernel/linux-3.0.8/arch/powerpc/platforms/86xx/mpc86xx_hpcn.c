#undef DEBUG
#define DBG(fmt...) do  while(0)
#define DBG(fmt...) do  while(0)
extern int uli_exclude_device(struct pci_controller *hose,
u_char bus, u_char devfn);
static int mpc86xx_exclude_device(struct pci_controller *hose,
u_char bus, u_char devfn)
static void __init
mpc86xx_hpcn_setup_arch(void)
static void
mpc86xx_hpcn_show_cpuinfo(struct seq_file *m)
static int __init mpc86xx_hpcn_probe(void)
static long __init
mpc86xx_time_init(void)
static __initdata struct of_device_id of_bus_ids[] = ;
static int __init declare_of_platform_devices(void)
machine_device_initcall(mpc86xx_hpcn, declare_of_platform_devices);
machine_arch_initcall(mpc86xx_hpcn, swiotlb_setup_bus_notifier);
define_machine(mpc86xx_hpcn) ;
