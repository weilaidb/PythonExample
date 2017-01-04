#define _CELLEB_PCI_H
struct iowa_bus;
struct celleb_phb_spec ;
extern int celleb_setup_phb(struct pci_controller *);
extern int celleb_pci_probe_mode(struct pci_bus *);
extern struct celleb_phb_spec celleb_epci_spec;
extern struct celleb_phb_spec celleb_pciex_spec;
