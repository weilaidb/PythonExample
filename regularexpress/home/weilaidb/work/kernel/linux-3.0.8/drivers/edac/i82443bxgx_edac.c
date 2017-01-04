#define I82443_REVISION	"0.1"
#define EDAC_MOD_STR    "i82443bxgx_edac"
#define I82443BXGX_NR_CSROWS 8
#define I82443BXGX_NR_CHANS  1
#define I82443BXGX_NR_DIMMS  4
#define I82443BXGX_NBXCFG 0x50
#define I82443BXGX_NBXCFG_OFFSET_NON_ECCROW 24
#define I82443BXGX_NBXCFG_OFFSET_DRAM_FREQ 12
#define I82443BXGX_NBXCFG_OFFSET_DRAM_INTEGRITY 7
#define I82443BXGX_NBXCFG_INTEGRITY_NONE   0x0
#define I82443BXGX_NBXCFG_INTEGRITY_EC     0x1
#define I82443BXGX_NBXCFG_INTEGRITY_ECC    0x2
#define I82443BXGX_NBXCFG_INTEGRITY_SCRUB  0x3
#define I82443BXGX_NBXCFG_OFFSET_ECC_DIAG_ENABLE  6
#define I82443BXGX_EAP   0x80
#define I82443BXGX_EAP_OFFSET_EAP  12
#define I82443BXGX_EAP_OFFSET_MBE  BIT(1)
#define I82443BXGX_EAP_OFFSET_SBE  BIT(0)
#define I82443BXGX_ERRCMD  0x90
#define I82443BXGX_ERRCMD_OFFSET_SERR_ON_MBE BIT(1)
#define I82443BXGX_ERRCMD_OFFSET_SERR_ON_SBE BIT(0)
#define I82443BXGX_ERRSTS  0x91
#define I82443BXGX_ERRSTS_OFFSET_MBFRE 5
#define I82443BXGX_ERRSTS_OFFSET_MEF   BIT(4)
#define I82443BXGX_ERRSTS_OFFSET_SBFRE 1
#define I82443BXGX_ERRSTS_OFFSET_SEF   BIT(0)
#define I82443BXGX_DRAMC 0x57
#define I82443BXGX_DRAMC_OFFSET_DT 3
#define I82443BXGX_DRAMC_DRAM_IS_EDO 0
#define I82443BXGX_DRAMC_DRAM_IS_SDRAM 1
#define I82443BXGX_DRAMC_DRAM_IS_RSDRAM 2
#define I82443BXGX_DRB 0x60
struct i82443bxgx_edacmc_error_info ;
static struct edac_pci_ctl_info *i82443bxgx_pci;
static struct pci_dev *mci_pdev;
static int i82443bxgx_registered = 1;
static void i82443bxgx_edacmc_get_error_info(struct mem_ctl_info *mci,
struct i82443bxgx_edacmc_error_info
*info)
static int i82443bxgx_edacmc_process_error_info(struct mem_ctl_info *mci,
struct
i82443bxgx_edacmc_error_info
*info, int handle_errors)
static void i82443bxgx_edacmc_check(struct mem_ctl_info *mci)
static void i82443bxgx_init_csrows(struct mem_ctl_info *mci,
struct pci_dev *pdev,
enum edac_type edac_mode,
enum mem_type mtype)
static int i82443bxgx_edacmc_probe1(struct pci_dev *pdev, int dev_idx)
EXPORT_SYMBOL_GPL(i82443bxgx_edacmc_probe1);
static int __devinit i82443bxgx_edacmc_init_one(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit i82443bxgx_edacmc_remove_one(struct pci_dev *pdev)
EXPORT_SYMBOL_GPL(i82443bxgx_edacmc_remove_one);
static const struct pci_device_id i82443bxgx_pci_tbl[] __devinitdata = ;
MODULE_DEVICE_TABLE(pci, i82443bxgx_pci_tbl);
static struct pci_driver i82443bxgx_edacmc_driver = ;
static int __init i82443bxgx_edacmc_init(void)
static void __exit i82443bxgx_edacmc_exit(void)
module_init(i82443bxgx_edacmc_init);
module_exit(i82443bxgx_edacmc_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Tim Small <tim@buttersideup.com> - WPAD");
MODULE_DESCRIPTION("EDAC MC support for Intel 82443BX/GX memory controllers");
module_param(edac_op_state, int, 0444);
MODULE_PARM_DESC(edac_op_state, "EDAC Error Reporting state: 0=Poll,1=NMI");
