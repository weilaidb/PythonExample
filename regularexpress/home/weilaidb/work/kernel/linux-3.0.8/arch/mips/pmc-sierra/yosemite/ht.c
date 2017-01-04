static __inline__ int check_titan_htlink(void)
static int titan_ht_config_read_dword(struct pci_dev *device,
int offset, u32* val)
static int titan_ht_config_read_word(struct pci_dev *device,
int offset, u16* val)
u32 longswap(unsigned long l)
static int titan_ht_config_read_byte(struct pci_dev *device,
int offset, u8* val)
static int titan_ht_config_write_dword(struct pci_dev *device,
int offset, u8 val)
static int titan_ht_config_write_word(struct pci_dev *device,
int offset, u8 val)
static int titan_ht_config_write_byte(struct pci_dev *device,
int offset, u8 val)
static void titan_pcibios_set_master(struct pci_dev *dev)
int pcibios_enable_resources(struct pci_dev *dev)
int pcibios_enable_device(struct pci_dev *dev, int mask)
resource_size_t pcibios_align_resource(void *data, const struct resource *res,
resource_size_t size, resource_size_t align)
struct pci_ops titan_pci_ops = ;
void __init pcibios_fixup_bus(struct pci_bus *c)
void __init pcibios_init(void)
char *pcibios_setup(char *str)
unsigned __init int pcibios_assign_all_busses(void)
