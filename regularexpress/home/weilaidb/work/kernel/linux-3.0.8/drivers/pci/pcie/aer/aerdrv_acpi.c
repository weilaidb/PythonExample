static inline int hest_match_pci(struct acpi_hest_aer_common *p,
struct pci_dev *pci)
struct aer_hest_parse_info ;
static int aer_hest_parse(struct acpi_hest_header *hest_hdr, void *data)
static void aer_set_firmware_first(struct pci_dev *pci_dev)
int pcie_aer_get_firmware_first(struct pci_dev *dev)
static bool aer_firmware_first;
static int aer_hest_parse_aff(struct acpi_hest_header *hest_hdr, void *data)
bool aer_acpi_firmware_first(void)
