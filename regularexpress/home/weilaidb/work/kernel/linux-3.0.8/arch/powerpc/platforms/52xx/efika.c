#define EFIKA_PLATFORM_NAME "Efika"
static int rtas_read_config(struct pci_bus *bus, unsigned int devfn, int offset,
int len, u32 * val)
static int rtas_write_config(struct pci_bus *bus, unsigned int devfn,
int offset, int len, u32 val)
static struct pci_ops rtas_pci_ops = ;
static void __init efika_pcisetup(void)
static void __init efika_pcisetup(void)
static void efika_show_cpuinfo(struct seq_file *m)
static void efika_suspend_prepare(void __iomem *mbar)
static void __init efika_setup_arch(void)
static int __init efika_probe(void)
define_machine(efika)
;
