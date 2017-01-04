static efi_char16_t isci_efivar_name[] = ;
struct isci_orom *isci_request_oprom(struct pci_dev *pdev)
enum sci_status isci_parse_oem_parameters(struct sci_oem_params *oem,
struct isci_orom *orom, int scu_index)
struct isci_orom *isci_request_firmware(struct pci_dev *pdev, const struct firmware *fw)
static struct efi *get_efi(void)
struct isci_orom *isci_get_efi_var(struct pci_dev *pdev)
