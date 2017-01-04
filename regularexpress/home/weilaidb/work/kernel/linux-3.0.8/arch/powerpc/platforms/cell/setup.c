#undef DEBUG
#define DBG(fmt...) udbg_printf(fmt)
#define DBG(fmt...)
static void cell_show_cpuinfo(struct seq_file *m)
static void cell_progress(char *s, unsigned short hex)
static void cell_fixup_pcie_rootcomplex(struct pci_dev *dev)
DECLARE_PCI_FIXUP_HEADER(PCI_ANY_ID, PCI_ANY_ID, cell_fixup_pcie_rootcomplex);
static int __devinit cell_setup_phb(struct pci_controller *phb)
static const struct of_device_id cell_bus_ids[] __initdata = ;
static int __init cell_publish_devices(void)
machine_subsys_initcall(cell, cell_publish_devices);
static void cell_mpic_cascade(unsigned int irq, struct irq_desc *desc)
static void __init mpic_init_IRQ(void)
static void __init cell_init_irq(void)
static void __init cell_set_dabrx(void)
static void __init cell_setup_arch(void)
static int __init cell_probe(void)
define_machine(cell) ;
