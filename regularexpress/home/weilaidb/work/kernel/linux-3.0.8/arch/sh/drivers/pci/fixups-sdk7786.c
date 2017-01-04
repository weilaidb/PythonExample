#define pr_fmt(fmt) "PCI: " fmt
static unsigned int slot4en __devinitdata;
char *__devinit pcibios_setup(char *str)
static int __init sdk7786_pci_init(void)
postcore_initcall(sdk7786_pci_init);
