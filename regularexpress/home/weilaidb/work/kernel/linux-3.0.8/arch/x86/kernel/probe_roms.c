static struct resource system_rom_resource = ;
static struct resource extension_rom_resource = ;
static struct resource adapter_rom_resources[] = ;
static struct resource video_rom_resource = ;
static bool match_id(struct pci_dev *pdev, unsigned short vendor, unsigned short device)
static bool probe_list(struct pci_dev *pdev, unsigned short vendor,
const unsigned char *rom_list)
static struct resource *find_oprom(struct pci_dev *pdev)
void *pci_map_biosrom(struct pci_dev *pdev)
EXPORT_SYMBOL(pci_map_biosrom);
void pci_unmap_biosrom(void __iomem *image)
EXPORT_SYMBOL(pci_unmap_biosrom);
size_t pci_biosrom_size(struct pci_dev *pdev)
EXPORT_SYMBOL(pci_biosrom_size);
#define ROMSIGNATURE 0xaa55
static int __init romsignature(const unsigned char *rom)
static int __init romchecksum(const unsigned char *rom, unsigned long length)
void __init probe_roms(void)
