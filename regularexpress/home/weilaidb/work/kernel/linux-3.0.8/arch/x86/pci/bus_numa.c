int pci_root_num;
struct pci_root_info pci_root_info[PCI_ROOT_NR];
void x86_pci_root_bus_res_quirks(struct pci_bus *b)
void __devinit update_res(struct pci_root_info *info, resource_size_t start,
resource_size_t end, unsigned long flags, int merge)
