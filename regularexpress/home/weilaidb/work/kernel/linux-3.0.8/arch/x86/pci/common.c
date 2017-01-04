unsigned int pci_probe = PCI_PROBE_BIOS | PCI_PROBE_CONF1 | PCI_PROBE_CONF2 |
PCI_PROBE_MMCONF;
unsigned int pci_early_dump_regs;
static int pci_bf_sort;
static int smbios_type_b1_flag;
int pci_routeirq;
int noioapicquirk;
int noioapicreroute = 0;
int noioapicreroute = 1;
int pcibios_last_bus = -1;
unsigned long pirq_table_addr;
struct pci_bus *pci_root_bus;
struct pci_raw_ops *raw_pci_ops;
struct pci_raw_ops *raw_pci_ext_ops;
int raw_pci_read(unsigned int domain, unsigned int bus, unsigned int devfn,
int reg, int len, u32 *val)
int raw_pci_write(unsigned int domain, unsigned int bus, unsigned int devfn,
int reg, int len, u32 val)
static int pci_read(struct pci_bus *bus, unsigned int devfn, int where, int size, u32 *value)
static int pci_write(struct pci_bus *bus, unsigned int devfn, int where, int size, u32 value)
struct pci_ops pci_root_ops = ;
DEFINE_RAW_SPINLOCK(pci_config_lock);
static int __devinit can_skip_ioresource_align(const struct dmi_system_id *d)
static const struct dmi_system_id can_skip_pciprobe_dmi_table[] __devinitconst = ;
void __init dmi_check_skip_isa_align(void)
static void __devinit pcibios_fixup_device_resources(struct pci_dev *dev)
void __devinit pcibios_fixup_bus(struct pci_bus *b)
static int __devinit set_bf_sort(const struct dmi_system_id *d)
static void __devinit read_dmi_type_b1(const struct dmi_header *dm,
void *private_data)
static int __devinit find_sort_method(const struct dmi_system_id *d)
static int __devinit assign_all_busses(const struct dmi_system_id *d)
static const struct dmi_system_id __devinitconst pciprobe_dmi_table[] = ;
void __init dmi_check_pciprobe(void)
struct pci_bus * __devinit pcibios_scan_root(int busnum)
void __init pcibios_set_cache_line_size(void)
int __init pcibios_init(void)
char * __devinit  pcibios_setup(char *str)
unsigned int pcibios_assign_all_busses(void)
int pcibios_enable_device(struct pci_dev *dev, int mask)
void pcibios_disable_device (struct pci_dev *dev)
int pci_ext_cfg_avail(struct pci_dev *dev)
struct pci_bus * __devinit pci_scan_bus_on_node(int busno, struct pci_ops *ops, int node)
struct pci_bus * __devinit pci_scan_bus_with_sysdata(int busno)
#define BUS_NR 256
static int mp_bus_to_node[BUS_NR] = ;
void set_mp_bus_to_node(int busnum, int node)
int get_mp_bus_to_node(int busnum)
static int mp_bus_to_node[BUS_NR] = ;
void set_mp_bus_to_node(int busnum, int node)
int get_mp_bus_to_node(int busnum)
