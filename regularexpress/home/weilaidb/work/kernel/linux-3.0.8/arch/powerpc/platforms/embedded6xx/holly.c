#undef DEBUG
#define HOLLY_PCI_CFG_PHYS 0x7c000000
int holly_exclude_device(struct pci_controller *hose, u_char bus, u_char devfn)
static void holly_remap_bridge(void)
static void __init holly_setup_arch(void)
static void __init holly_init_IRQ(void)
void holly_show_cpuinfo(struct seq_file *m)
void holly_restart(char *cmd)
void holly_power_off(void)
void holly_halt(void)
static int __init holly_probe(void)
static int ppc750_machine_check_exception(struct pt_regs *regs)
define_machine(holly);
