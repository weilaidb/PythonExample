#define I5400_REVISION    " Ver: 1.0.0"
#define EDAC_MOD_STR      "i5400_edac"
#define i5400_printk(level, fmt, arg...) \
edac_printk(level, "i5400", fmt, ##arg)
#define i5400_mc_printk(mci, level, fmt, arg...) \
edac_mc_chipset_printk(mci, level, "i5400", fmt, ##arg)
#define NUM_MTRS_PER_BRANCH	4
#define CHANNELS_PER_BRANCH	2
#define MAX_DIMMS_PER_CHANNEL	NUM_MTRS_PER_BRANCH
#define	MAX_CHANNELS		4
#define MAX_CSROWS		(MAX_DIMMS_PER_CHANNEL)
#define		AMBASE			0x48
#define		MAXCH			0x56
#define		MAXDIMMPERCH		0x57
#define		TOLM			0x6C
#define		REDMEMB			0x7C
#define			REC_ECC_LOCATOR_ODD(x)	((x) & 0x3fe00)
#define		MIR0			0x80
#define		MIR1			0x84
#define		AMIR0			0x8c
#define		AMIR1			0x90
#define		FERR_FAT_FBD		0x98
#define			FERR_FAT_FBDCHAN (3<<28)
#define		NERR_FAT_FBD		0x9c
#define		FERR_NF_FBD		0xa0
#define		NERR_NF_FBD		0xa4
#define		EMASK_FBD		0xa8
#define		ERR0_FBD		0xac
#define		ERR1_FBD		0xb0
#define		ERR2_FBD		0xb4
#define		MCERR_FBD		0xb8
#define AMBPRESENT_0	0x64
#define AMBPRESENT_1	0x66
#define MTR0		0x80
#define MTR1		0x82
#define MTR2		0x84
#define MTR3		0x86
#define NRECFGLOG		0x74
#define RECFGLOG		0x78
#define NRECMEMA		0xbe
#define NRECMEMB		0xc0
#define NRECFB_DIMMA		0xc4
#define NRECFB_DIMMB		0xc8
#define NRECFB_DIMMC		0xcc
#define NRECFB_DIMMD		0xd0
#define NRECFB_DIMME		0xd4
#define NRECFB_DIMMF		0xd8
#define REDMEMA			0xdC
#define RECMEMA			0xf0
#define RECMEMB			0xf4
#define RECFB_DIMMA		0xf8
#define RECFB_DIMMB		0xec
#define RECFB_DIMMC		0xf0
#define RECFB_DIMMD		0xf4
#define RECFB_DIMME		0xf8
#define RECFB_DIMMF		0xfC
enum error_mask ;
static const char *error_name[] = ;
#define ERROR_FAT_MASK		(EMASK_M1 | \
EMASK_M2 | \
EMASK_M23)
#define ERROR_NF_CORRECTABLE	(EMASK_M27 | \
EMASK_M20 | \
EMASK_M19 | \
EMASK_M18 | \
EMASK_M17 | \
EMASK_M16)
#define ERROR_NF_DIMM_SPARE	(EMASK_M29 | \
EMASK_M28)
#define ERROR_NF_SPD_PROTOCOL	(EMASK_M22)
#define ERROR_NF_NORTH_CRC	(EMASK_M21)
#define ERROR_NF_RECOVERABLE	(EMASK_M26 | \
EMASK_M25 | \
EMASK_M24 | \
EMASK_M15 | \
EMASK_M14 | \
EMASK_M13 | \
EMASK_M12 | \
EMASK_M11 | \
EMASK_M9  | \
EMASK_M8  | \
EMASK_M7  | \
EMASK_M5)
#define ERROR_NF_UNCORRECTABLE	(EMASK_M4)
#define ERROR_NF_MASK		(ERROR_NF_CORRECTABLE   | \
ERROR_NF_UNCORRECTABLE | \
ERROR_NF_RECOVERABLE   | \
ERROR_NF_DIMM_SPARE    | \
ERROR_NF_SPD_PROTOCOL  | \
ERROR_NF_NORTH_CRC)
#define ENABLE_EMASK_ALL	(ERROR_FAT_MASK | ERROR_NF_MASK)
#define FERR_FAT_MASK ERROR_FAT_MASK
static inline int to_nf_mask(unsigned int mask)
;
static inline int from_nf_ferr(unsigned int mask)
;
#define FERR_NF_MASK		to_nf_mask(ERROR_NF_MASK)
#define FERR_NF_CORRECTABLE	to_nf_mask(ERROR_NF_CORRECTABLE)
#define FERR_NF_DIMM_SPARE	to_nf_mask(ERROR_NF_DIMM_SPARE)
#define FERR_NF_SPD_PROTOCOL	to_nf_mask(ERROR_NF_SPD_PROTOCOL)
#define FERR_NF_NORTH_CRC	to_nf_mask(ERROR_NF_NORTH_CRC)
#define FERR_NF_RECOVERABLE	to_nf_mask(ERROR_NF_RECOVERABLE)
#define FERR_NF_UNCORRECTABLE	to_nf_mask(ERROR_NF_UNCORRECTABLE)
#define MTR_DIMMS_PRESENT(mtr)		((mtr) & (1 << 10))
#define MTR_DIMMS_ETHROTTLE(mtr)	((mtr) & (1 << 9))
#define MTR_DRAM_WIDTH(mtr)		(((mtr) & (1 << 8)) ? 8 : 4)
#define MTR_DRAM_BANKS(mtr)		(((mtr) & (1 << 6)) ? 8 : 4)
#define MTR_DRAM_BANKS_ADDR_BITS(mtr)	((MTR_DRAM_BANKS(mtr) == 8) ? 3 : 2)
#define MTR_DIMM_RANK(mtr)		(((mtr) >> 5) & 0x1)
#define MTR_DIMM_RANK_ADDR_BITS(mtr)	(MTR_DIMM_RANK(mtr) ? 2 : 1)
#define MTR_DIMM_ROWS(mtr)		(((mtr) >> 2) & 0x3)
#define MTR_DIMM_ROWS_ADDR_BITS(mtr)	(MTR_DIMM_ROWS(mtr) + 13)
#define MTR_DIMM_COLS(mtr)		((mtr) & 0x3)
#define MTR_DIMM_COLS_ADDR_BITS(mtr)	(MTR_DIMM_COLS(mtr) + 10)
static inline int extract_fbdchan_indx(u32 x)
static const char *numrow_toString[] = ;
static const char *numcol_toString[] = ;
struct i5400_dev_info ;
static const struct i5400_dev_info i5400_devs[] = ;
struct i5400_dimm_info ;
struct i5400_pvt ;
struct i5400_error_info ;
static inline int nrec_bank(struct i5400_error_info *info)
static inline int nrec_rank(struct i5400_error_info *info)
static inline int nrec_buf_id(struct i5400_error_info *info)
static inline int nrec_rdwr(struct i5400_error_info *info)
static inline const char *rdwr_str(int rdwr)
static inline int nrec_cas(struct i5400_error_info *info)
static inline int nrec_ras(struct i5400_error_info *info)
static inline int rec_bank(struct i5400_error_info *info)
static inline int rec_rank(struct i5400_error_info *info)
static inline int rec_rdwr(struct i5400_error_info *info)
static inline int rec_cas(struct i5400_error_info *info)
static inline int rec_ras(struct i5400_error_info *info)
static struct edac_pci_ctl_info *i5400_pci;
static void i5400_get_error_info(struct mem_ctl_info *mci,
struct i5400_error_info *info)
static void i5400_proccess_non_recoverable_info(struct mem_ctl_info *mci,
struct i5400_error_info *info,
unsigned long allErrors)
static void i5400_process_nonfatal_error_info(struct mem_ctl_info *mci,
struct i5400_error_info *info)
static void i5400_process_error_info(struct mem_ctl_info *mci,
struct i5400_error_info *info)
static void i5400_clear_error(struct mem_ctl_info *mci)
static void i5400_check_error(struct mem_ctl_info *mci)
static void i5400_put_devices(struct mem_ctl_info *mci)
static int i5400_get_devices(struct mem_ctl_info *mci, int dev_idx)
static int determine_amb_present_reg(struct i5400_pvt *pvt, int channel)
static int determine_mtr(struct i5400_pvt *pvt, int csrow, int channel)
static void decode_mtr(int slot_row, u16 mtr)
static void handle_channel(struct i5400_pvt *pvt, int csrow, int channel,
struct i5400_dimm_info *dinfo)
static void calculate_dimm_size(struct i5400_pvt *pvt)
static void i5400_get_mc_regs(struct mem_ctl_info *mci)
static int i5400_init_csrows(struct mem_ctl_info *mci)
static void i5400_enable_error_reporting(struct mem_ctl_info *mci)
static int i5400_probe1(struct pci_dev *pdev, int dev_idx)
static int __devinit i5400_init_one(struct pci_dev *pdev,
const struct pci_device_id *id)
static void __devexit i5400_remove_one(struct pci_dev *pdev)
static const struct pci_device_id i5400_pci_tbl[] __devinitdata = ;
MODULE_DEVICE_TABLE(pci, i5400_pci_tbl);
static struct pci_driver i5400_driver = ;
static int __init i5400_init(void)
static void __exit i5400_exit(void)
module_init(i5400_init);
module_exit(i5400_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Ben Woodard <woodard@redhat.com>");
MODULE_AUTHOR("Mauro Carvalho Chehab <mchehab@redhat.com>");
MODULE_AUTHOR("Red Hat Inc. (http:
MODULE_DESCRIPTION("MC Driver for Intel I5400 memory controllers - "
I5400_REVISION);
module_param(edac_op_state, int, 0444);
MODULE_PARM_DESC(edac_op_state, "EDAC Error Reporting state: 0=Poll,1=NMI");
