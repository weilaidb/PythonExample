#define I5000_REVISION    " Ver: 2.0.12"
#define EDAC_MOD_STR      "i5000_edac"
#define i5000_printk(level, fmt, arg...) \
edac_printk(level, "i5000", fmt, ##arg)
#define i5000_mc_printk(mci, level, fmt, arg...) \
edac_mc_chipset_printk(mci, level, "i5000", fmt, ##arg)
#define PCI_DEVICE_ID_INTEL_FBD_0	0x25F5
#define PCI_DEVICE_ID_INTEL_FBD_1	0x25F6
#define	PCI_DEVICE_ID_INTEL_I5000_DEV16	0x25F0
#define		AMBASE			0x48
#define		MAXCH			0x56
#define		MAXDIMMPERCH		0x57
#define		TOLM			0x6C
#define		REDMEMB			0x7C
#define			RED_ECC_LOCATOR(x)	((x) & 0x3FFFF)
#define			REC_ECC_LOCATOR_EVEN(x)	((x) & 0x001FF)
#define			REC_ECC_LOCATOR_ODD(x)	((x) & 0x3FE00)
#define		MIR0			0x80
#define		MIR1			0x84
#define		MIR2			0x88
#define		AMIR0			0x8C
#define		AMIR1			0x90
#define		AMIR2			0x94
#define		FERR_FAT_FBD		0x98
#define		NERR_FAT_FBD		0x9C
#define			EXTRACT_FBDCHAN_INDX(x)	(((x)>>28) & 0x3)
#define			FERR_FAT_FBDCHAN 0x30000000
#define			FERR_FAT_M3ERR	0x00000004
#define			FERR_FAT_M2ERR	0x00000002
#define			FERR_FAT_M1ERR	0x00000001
#define			FERR_FAT_MASK	(FERR_FAT_M1ERR | \
FERR_FAT_M2ERR | \
FERR_FAT_M3ERR)
#define		FERR_NF_FBD		0xA0
#define			FERR_NF_M28ERR	0x01000000
#define			FERR_NF_M27ERR	0x00800000
#define			FERR_NF_M26ERR	0x00400000
#define			FERR_NF_M25ERR	0x00200000
#define			FERR_NF_M24ERR	0x00100000
#define			FERR_NF_M23ERR	0x00080000
#define			FERR_NF_M22ERR	0x00040000
#define			FERR_NF_M21ERR	0x00020000
#define			FERR_NF_M20ERR	0x00010000
#define			FERR_NF_M19ERR	0x00008000
#define			FERR_NF_M18ERR	0x00004000
#define			FERR_NF_M17ERR	0x00002000
#define			FERR_NF_M16ERR	0x00001000
#define			FERR_NF_M15ERR	0x00000800
#define			FERR_NF_M14ERR	0x00000400
#define			FERR_NF_M13ERR	0x00000200
#define			FERR_NF_M12ERR	0x00000100
#define			FERR_NF_M11ERR	0x00000080
#define			FERR_NF_M10ERR	0x00000040
#define			FERR_NF_M9ERR	0x00000020
#define			FERR_NF_M8ERR	0x00000010
#define			FERR_NF_M7ERR	0x00000008
#define			FERR_NF_M6ERR	0x00000004
#define			FERR_NF_M5ERR	0x00000002
#define			FERR_NF_M4ERR	0x00000001
#define			FERR_NF_UNCORRECTABLE	(FERR_NF_M12ERR | \
FERR_NF_M11ERR | \
FERR_NF_M10ERR | \
FERR_NF_M9ERR | \
FERR_NF_M8ERR | \
FERR_NF_M7ERR | \
FERR_NF_M6ERR | \
FERR_NF_M5ERR | \
FERR_NF_M4ERR)
#define			FERR_NF_CORRECTABLE	(FERR_NF_M20ERR | \
FERR_NF_M19ERR | \
FERR_NF_M18ERR | \
FERR_NF_M17ERR)
#define			FERR_NF_DIMM_SPARE	(FERR_NF_M27ERR | \
FERR_NF_M28ERR)
#define			FERR_NF_THERMAL		(FERR_NF_M26ERR | \
FERR_NF_M25ERR | \
FERR_NF_M24ERR | \
FERR_NF_M23ERR)
#define			FERR_NF_SPD_PROTOCOL	(FERR_NF_M22ERR)
#define			FERR_NF_NORTH_CRC	(FERR_NF_M21ERR)
#define			FERR_NF_NON_RETRY	(FERR_NF_M13ERR | \
FERR_NF_M14ERR | \
FERR_NF_M15ERR)
#define		NERR_NF_FBD		0xA4
#define			FERR_NF_MASK		(FERR_NF_UNCORRECTABLE | \
FERR_NF_CORRECTABLE | \
FERR_NF_DIMM_SPARE | \
FERR_NF_THERMAL | \
FERR_NF_SPD_PROTOCOL | \
FERR_NF_NORTH_CRC | \
FERR_NF_NON_RETRY)
#define		EMASK_FBD		0xA8
#define			EMASK_FBD_M28ERR	0x08000000
#define			EMASK_FBD_M27ERR	0x04000000
#define			EMASK_FBD_M26ERR	0x02000000
#define			EMASK_FBD_M25ERR	0x01000000
#define			EMASK_FBD_M24ERR	0x00800000
#define			EMASK_FBD_M23ERR	0x00400000
#define			EMASK_FBD_M22ERR	0x00200000
#define			EMASK_FBD_M21ERR	0x00100000
#define			EMASK_FBD_M20ERR	0x00080000
#define			EMASK_FBD_M19ERR	0x00040000
#define			EMASK_FBD_M18ERR	0x00020000
#define			EMASK_FBD_M17ERR	0x00010000
#define			EMASK_FBD_M15ERR	0x00004000
#define			EMASK_FBD_M14ERR	0x00002000
#define			EMASK_FBD_M13ERR	0x00001000
#define			EMASK_FBD_M12ERR	0x00000800
#define			EMASK_FBD_M11ERR	0x00000400
#define			EMASK_FBD_M10ERR	0x00000200
#define			EMASK_FBD_M9ERR		0x00000100
#define			EMASK_FBD_M8ERR		0x00000080
#define			EMASK_FBD_M7ERR		0x00000040
#define			EMASK_FBD_M6ERR		0x00000020
#define			EMASK_FBD_M5ERR		0x00000010
#define			EMASK_FBD_M4ERR		0x00000008
#define			EMASK_FBD_M3ERR		0x00000004
#define			EMASK_FBD_M2ERR		0x00000002
#define			EMASK_FBD_M1ERR		0x00000001
#define			ENABLE_EMASK_FBD_FATAL_ERRORS	(EMASK_FBD_M1ERR | \
EMASK_FBD_M2ERR | \
EMASK_FBD_M3ERR)
#define 		ENABLE_EMASK_FBD_UNCORRECTABLE	(EMASK_FBD_M4ERR | \
EMASK_FBD_M5ERR | \
EMASK_FBD_M6ERR | \
EMASK_FBD_M7ERR | \
EMASK_FBD_M8ERR | \
EMASK_FBD_M9ERR | \
EMASK_FBD_M10ERR | \
EMASK_FBD_M11ERR | \
EMASK_FBD_M12ERR)
#define 		ENABLE_EMASK_FBD_CORRECTABLE	(EMASK_FBD_M17ERR | \
EMASK_FBD_M18ERR | \
EMASK_FBD_M19ERR | \
EMASK_FBD_M20ERR)
#define			ENABLE_EMASK_FBD_DIMM_SPARE	(EMASK_FBD_M27ERR | \
EMASK_FBD_M28ERR)
#define			ENABLE_EMASK_FBD_THERMALS	(EMASK_FBD_M26ERR | \
EMASK_FBD_M25ERR | \
EMASK_FBD_M24ERR | \
EMASK_FBD_M23ERR)
#define			ENABLE_EMASK_FBD_SPD_PROTOCOL	(EMASK_FBD_M22ERR)
#define			ENABLE_EMASK_FBD_NORTH_CRC	(EMASK_FBD_M21ERR)
#define			ENABLE_EMASK_FBD_NON_RETRY	(EMASK_FBD_M15ERR | \
EMASK_FBD_M14ERR | \
EMASK_FBD_M13ERR)
#define		ENABLE_EMASK_ALL	(ENABLE_EMASK_FBD_NON_RETRY | \
ENABLE_EMASK_FBD_NORTH_CRC | \
ENABLE_EMASK_FBD_SPD_PROTOCOL | \
ENABLE_EMASK_FBD_THERMALS | \
ENABLE_EMASK_FBD_DIMM_SPARE | \
ENABLE_EMASK_FBD_FATAL_ERRORS | \
ENABLE_EMASK_FBD_CORRECTABLE | \
ENABLE_EMASK_FBD_UNCORRECTABLE)
#define		ERR0_FBD		0xAC
#define		ERR1_FBD		0xB0
#define		ERR2_FBD		0xB4
#define		MCERR_FBD		0xB8
#define		NRECMEMA		0xBE
#define			NREC_BANK(x)		(((x)>>12) & 0x7)
#define			NREC_RDWR(x)		(((x)>>11) & 1)
#define			NREC_RANK(x)		(((x)>>8) & 0x7)
#define		NRECMEMB		0xC0
#define			NREC_CAS(x)		(((x)>>16) & 0xFFFFFF)
#define			NREC_RAS(x)		((x) & 0x7FFF)
#define		NRECFGLOG		0xC4
#define		NREEECFBDA		0xC8
#define		NREEECFBDB		0xCC
#define		NREEECFBDC		0xD0
#define		NREEECFBDD		0xD4
#define		NREEECFBDE		0xD8
#define		REDMEMA			0xDC
#define		RECMEMA			0xE2
#define			REC_BANK(x)		(((x)>>12) & 0x7)
#define			REC_RDWR(x)		(((x)>>11) & 1)
#define			REC_RANK(x)		(((x)>>8) & 0x7)
#define		RECMEMB			0xE4
#define			REC_CAS(x)		(((x)>>16) & 0xFFFFFF)
#define			REC_RAS(x)		((x) & 0x7FFF)
#define		RECFGLOG		0xE8
#define		RECFBDA			0xEC
#define		RECFBDB			0xF0
#define		RECFBDC			0xF4
#define		RECFBDD			0xF8
#define		RECFBDE			0xFC
#define PCI_DEVICE_ID_I5000_BRANCH_0	0x25F5
#define PCI_DEVICE_ID_I5000_BRANCH_1	0x25F6
#define AMB_PRESENT_0	0x64
#define AMB_PRESENT_1	0x66
#define MTR0		0x80
#define MTR1		0x84
#define MTR2		0x88
#define MTR3		0x8C
#define NUM_MTRS		4
#define CHANNELS_PER_BRANCH	(2)
#define MTR_DIMMS_PRESENT(mtr)		((mtr) & (0x1 << 8))
#define MTR_DRAM_WIDTH(mtr)		((((mtr) >> 6) & 0x1) ? 8 : 4)
#define MTR_DRAM_BANKS(mtr)		((((mtr) >> 5) & 0x1) ? 8 : 4)
#define MTR_DRAM_BANKS_ADDR_BITS(mtr)	((MTR_DRAM_BANKS(mtr) == 8) ? 3 : 2)
#define MTR_DIMM_RANK(mtr)		(((mtr) >> 4) & 0x1)
#define MTR_DIMM_RANK_ADDR_BITS(mtr)	(MTR_DIMM_RANK(mtr) ? 2 : 1)
#define MTR_DIMM_ROWS(mtr)		(((mtr) >> 2) & 0x3)
#define MTR_DIMM_ROWS_ADDR_BITS(mtr)	(MTR_DIMM_ROWS(mtr) + 13)
#define MTR_DIMM_COLS(mtr)		((mtr) & 0x3)
#define MTR_DIMM_COLS_ADDR_BITS(mtr)	(MTR_DIMM_COLS(mtr) + 10)
static char *numrow_toString[] = ;
static char *numcol_toString[] = ;
static int misc_messages;
enum i5000_chips ;
struct i5000_dev_info ;
static const struct i5000_dev_info i5000_devs[] = ;
struct i5000_dimm_info ;
#define	MAX_CHANNELS	6
#define MAX_CSROWS	(8*2)
struct i5000_pvt ;
struct i5000_error_info ;
static struct edac_pci_ctl_info *i5000_pci;
static void i5000_get_error_info(struct mem_ctl_info *mci,
struct i5000_error_info *info)
static void i5000_process_fatal_error_info(struct mem_ctl_info *mci,
struct i5000_error_info *info,
int handle_errors)
static void i5000_process_nonfatal_error_info(struct mem_ctl_info *mci,
struct i5000_error_info *info,
int handle_errors)
static void i5000_process_error_info(struct mem_ctl_info *mci,
struct i5000_error_info *info,
int handle_errors)
static void i5000_clear_error(struct mem_ctl_info *mci)
static void i5000_check_error(struct mem_ctl_info *mci)
static int i5000_get_devices(struct mem_ctl_info *mci, int dev_idx)
static void i5000_put_devices(struct mem_ctl_info *mci)
static int determine_amb_present_reg(struct i5000_pvt *pvt, int channel)
static int determine_mtr(struct i5000_pvt *pvt, int csrow, int channel)
static void decode_mtr(int slot_row, u16 mtr)
static void handle_channel(struct i5000_pvt *pvt, int csrow, int channel,
struct i5000_dimm_info *dinfo)
static void calculate_dimm_size(struct i5000_pvt *pvt)
static void i5000_get_mc_regs(struct mem_ctl_info *mci)
static int i5000_init_csrows(struct mem_ctl_info *mci)
static void i5000_enable_error_reporting(struct mem_ctl_info *mci)
static void i5000_get_dimm_and_channel_counts(struct pci_dev *pdev,
int *num_dimms_per_channel,
int *num_channels)
static int i5000_probe1(struct pci_dev *pdev, int dev_idx)
static int __devinit i5000_init_one(struct pci_dev *pdev,
const struct pci_device_id *id)
static void __devexit i5000_remove_one(struct pci_dev *pdev)
static const struct pci_device_id i5000_pci_tbl[] __devinitdata = ;
MODULE_DEVICE_TABLE(pci, i5000_pci_tbl);
static struct pci_driver i5000_driver = ;
static int __init i5000_init(void)
static void __exit i5000_exit(void)
module_init(i5000_init);
module_exit(i5000_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR
("Linux Networx (http:
MODULE_DESCRIPTION("MC Driver for Intel I5000 memory controllers - "
I5000_REVISION);
module_param(edac_op_state, int, 0444);
MODULE_PARM_DESC(edac_op_state, "EDAC Error Reporting state: 0=Poll,1=NMI");
module_param(misc_messages, int, 0444);
MODULE_PARM_DESC(misc_messages, "Log miscellaneous non fatal messages");
