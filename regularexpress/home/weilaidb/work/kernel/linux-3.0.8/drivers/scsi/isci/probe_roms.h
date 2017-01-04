#define _ISCI_PROBE_ROMS_H_
#define SCIC_SDS_PARM_NO_SPEED   0
#define SCIC_SDS_PARM_GEN1_SPEED 1
#define SCIC_SDS_PARM_GEN2_SPEED 2
#define SCIC_SDS_PARM_GEN3_SPEED 3
#define SCIC_SDS_PARM_MAX_SPEED SCIC_SDS_PARM_GEN3_SPEED
struct sci_user_parameters ;
#define SCIC_SDS_PARM_PHY_MASK_MIN 0x0
#define SCIC_SDS_PARM_PHY_MASK_MAX 0xF
#define MAX_CONCURRENT_DEVICE_SPIN_UP_COUNT 4
struct sci_oem_params;
int sci_oem_parameters_validate(struct sci_oem_params *oem);
struct isci_orom;
struct isci_orom *isci_request_oprom(struct pci_dev *pdev);
enum sci_status isci_parse_oem_parameters(struct sci_oem_params *oem,
struct isci_orom *orom, int scu_index);
struct isci_orom *isci_request_firmware(struct pci_dev *pdev, const struct firmware *fw);
struct isci_orom *isci_get_efi_var(struct pci_dev *pdev);
struct isci_oem_hdr  __attribute__ ((packed));
#define SCI_MAX_PORTS 4
#define SCI_MAX_PHYS 4
#define SCI_MAX_CONTROLLERS 2
#define ISCI_FW_NAME		"isci/isci_firmware.bin"
#define ROMSIGNATURE		0xaa55
#define ISCI_OEM_SIG		"$OEM"
#define ISCI_OEM_SIG_SIZE	4
#define ISCI_ROM_SIG		"ISCUOEMB"
#define ISCI_ROM_SIG_SIZE	8
#define ISCI_EFI_VENDOR_GUID	\
EFI_GUID(0x193dfefa, 0xa445, 0x4302, 0x99, 0xd8, 0xef, 0x3a, 0xad, \
0x1a, 0x04, 0xc6)
#define ISCI_EFI_VAR_NAME	"RstScuO"
enum sci_port_configuration_mode ;
struct sci_bios_oem_param_block_hdr  __attribute__ ((packed));
struct sci_oem_params  __attribute__ ((packed));
struct isci_orom  __attribute__ ((packed));
