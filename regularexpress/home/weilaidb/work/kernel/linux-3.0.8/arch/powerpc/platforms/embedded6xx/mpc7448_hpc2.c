#undef DEBUG
#define DBG(fmt...) do  while(0)
#define DBG(fmt...) do  while(0)
#define MPC7448HPC2_PCI_CFG_PHYS 0xfb000000
int mpc7448_hpc2_exclude_device(struct pci_controller *hose,
u_char bus, u_char devfn)
static void __init mpc7448_hpc2_setup_arch(void)
static void __init mpc7448_hpc2_init_IRQ(void)
void mpc7448_hpc2_show_cpuinfo(struct seq_file *m)
void mpc7448_hpc2_restart(char *cmd)
void mpc7448_hpc2_power_off(void)
void mpc7448_hpc2_halt(void)
static int __init mpc7448_hpc2_probe(void)
static int mpc7448_machine_check_exception(struct pt_regs *regs)
define_machine(mpc7448_hpc2);
