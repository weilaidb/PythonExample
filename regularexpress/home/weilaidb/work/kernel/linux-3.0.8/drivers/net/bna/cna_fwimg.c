const struct firmware *bfi_fw;
static u32 *bfi_image_ct_cna;
static u32 bfi_image_ct_cna_size;
static u32 *
cna_read_firmware(struct pci_dev *pdev, u32 **bfi_image,
u32 *bfi_image_size, char *fw_name)
u32 *
cna_get_firmware_buf(struct pci_dev *pdev)
u32 *
bfa_cb_image_get_chunk(int type, u32 off)
u32
bfa_cb_image_get_size(int type)
