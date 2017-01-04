static int read_pci_config;
static int write_pci_config;
static int ibm_read_pci_config;
static int ibm_write_pci_config;
static inline int config_access_valid(struct pci_dn *dn, int where)
int rtas_read_config(struct pci_dn *pdn, int where, int size, u32 *val)
static int rtas_pci_read_config(struct pci_bus *bus,
unsigned int devfn,
int where, int size, u32 *val)
int rtas_write_config(struct pci_dn *pdn, int where, int size, u32 val)
static int rtas_pci_write_config(struct pci_bus *bus,
unsigned int devfn,
int where, int size, u32 val)
static struct pci_ops rtas_pci_ops = ;
static int is_python(struct device_node *dev)
static void python_countermeasures(struct device_node *dev)
void __init init_pci_config_tokens (void)
unsigned long __devinit get_phb_buid (struct device_node *phb)
static int phb_set_bus_ranges(struct device_node *dev,
struct pci_controller *phb)
int __devinit rtas_setup_phb(struct pci_controller *phb)
void __init find_and_init_phbs(void)
