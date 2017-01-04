#define MODULE_NAME "pasemi_edac"
#define MCCFG_MCEN				0x300
#define   MCCFG_MCEN_MMC_EN			0x00000001
#define MCCFG_ERRCOR				0x388
#define   MCCFG_ERRCOR_RNK_FAIL_DET_EN		0x00000100
#define   MCCFG_ERRCOR_ECC_GEN_EN		0x00000010
#define   MCCFG_ERRCOR_ECC_CRR_EN		0x00000001
#define MCCFG_SCRUB				0x384
#define   MCCFG_SCRUB_RGLR_SCRB_EN		0x00000001
#define MCDEBUG_ERRCTL1				0x728
#define   MCDEBUG_ERRCTL1_RFL_LOG_EN		0x00080000
#define   MCDEBUG_ERRCTL1_MBE_LOG_EN		0x00040000
#define   MCDEBUG_ERRCTL1_SBE_LOG_EN		0x00020000
#define MCDEBUG_ERRSTA				0x730
#define   MCDEBUG_ERRSTA_RFL_STATUS		0x00000004
#define   MCDEBUG_ERRSTA_MBE_STATUS		0x00000002
#define   MCDEBUG_ERRSTA_SBE_STATUS		0x00000001
#define MCDEBUG_ERRCNT1				0x734
#define   MCDEBUG_ERRCNT1_SBE_CNT_OVRFLO	0x00000080
#define MCDEBUG_ERRLOG1A			0x738
#define   MCDEBUG_ERRLOG1A_MERR_TYPE_M		0x30000000
#define   MCDEBUG_ERRLOG1A_MERR_TYPE_NONE	0x00000000
#define   MCDEBUG_ERRLOG1A_MERR_TYPE_SBE	0x10000000
#define   MCDEBUG_ERRLOG1A_MERR_TYPE_MBE	0x20000000
#define   MCDEBUG_ERRLOG1A_MERR_TYPE_RFL	0x30000000
#define   MCDEBUG_ERRLOG1A_MERR_BA_M		0x00700000
#define   MCDEBUG_ERRLOG1A_MERR_BA_S		20
#define   MCDEBUG_ERRLOG1A_MERR_CS_M		0x00070000
#define   MCDEBUG_ERRLOG1A_MERR_CS_S		16
#define   MCDEBUG_ERRLOG1A_SYNDROME_M		0x0000ffff
#define MCDRAM_RANKCFG				0x114
#define   MCDRAM_RANKCFG_EN			0x00000001
#define   MCDRAM_RANKCFG_TYPE_SIZE_M		0x000001c0
#define   MCDRAM_RANKCFG_TYPE_SIZE_S		6
#define PASEMI_EDAC_NR_CSROWS			8
#define PASEMI_EDAC_NR_CHANS			1
#define PASEMI_EDAC_ERROR_GRAIN			64
static int last_page_in_mmc;
static int system_mmc_id;
static u32 pasemi_edac_get_error_info(struct mem_ctl_info *mci)
static void pasemi_edac_process_error_info(struct mem_ctl_info *mci, u32 errsta)
static void pasemi_edac_check(struct mem_ctl_info *mci)
static int pasemi_edac_init_csrows(struct mem_ctl_info *mci,
struct pci_dev *pdev,
enum edac_type edac_mode)
static int __devinit pasemi_edac_probe(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit pasemi_edac_remove(struct pci_dev *pdev)
static const struct pci_device_id pasemi_edac_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, pasemi_edac_pci_tbl);
static struct pci_driver pasemi_edac_driver = ;
static int __init pasemi_edac_init(void)
static void __exit pasemi_edac_exit(void)
module_init(pasemi_edac_init);
module_exit(pasemi_edac_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Egor Martovetsky <egor@pasemi.com>");
MODULE_DESCRIPTION("MC support for PA Semi PWRficient memory controller");
module_param(edac_op_state, int, 0444);
MODULE_PARM_DESC(edac_op_state, "EDAC Error Reporting state: 0=Poll,1=NMI");
