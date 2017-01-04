#define RMR_CSRE 0x00000001
void pq2_restart(char *cmd)
static int pq2_pci_exclude_device(struct pci_controller *hose,
u_char bus, u8 devfn)
static void __init pq2_pci_add_bridge(struct device_node *np)
void __init pq2_init_pci(void)
