static u32 *flush_words;
const struct pci_device_id amd_nb_misc_ids[] = ;
EXPORT_SYMBOL(amd_nb_misc_ids);
static struct pci_device_id amd_nb_link_ids[] = ;
const struct amd_nb_bus_dev_range amd_nb_bus_dev_ranges[] __initconst = ;
struct amd_northbridge_info amd_northbridges;
EXPORT_SYMBOL(amd_northbridges);
static struct pci_dev *next_northbridge(struct pci_dev *dev,
const struct pci_device_id *ids)
int amd_cache_northbridges(void)
EXPORT_SYMBOL_GPL(amd_cache_northbridges);
bool __init early_is_amd_nb(u32 device)
int amd_get_subcaches(int cpu)
int amd_set_subcaches(int cpu, int mask)
static int amd_cache_gart(void)
void amd_flush_garts(void)
EXPORT_SYMBOL_GPL(amd_flush_garts);
static __init int init_amd_nbs(void)
fs_initcall(init_amd_nbs);
