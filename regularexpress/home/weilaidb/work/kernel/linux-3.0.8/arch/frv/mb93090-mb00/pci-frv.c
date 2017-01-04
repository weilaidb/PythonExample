resource_size_t
pcibios_align_resource(void *data, const struct resource *res,
resource_size_t size, resource_size_t align)
static void __init pcibios_allocate_bus_resources(struct list_head *bus_list)
static void __init pcibios_allocate_resources(int pass)
static void __init pcibios_assign_resources(void)
void __init pcibios_resource_survey(void)
unsigned int pcibios_max_latency = 255;
void pcibios_set_master(struct pci_dev *dev)
