#define I7300_REVISION    " Ver: 1.0.0"
#define EDAC_MOD_STR      "i7300_edac"
#define i7300_printk(level, fmt, arg...) \
edac_printk(level, "i7300", fmt, ##arg)
#define i7300_mc_printk(mci, level, fmt, arg...) \
edac_mc_chipset_printk(mci, level, "i7300", fmt, ##arg)
#define MAX_SLOTS		8
#define MAX_BRANCHES		2
#define MAX_CH_PER_BRANCH	2
#define MAX_CHANNELS		(MAX_CH_PER_BRANCH * MAX_BRANCHES)
#define MAX_MIR			3
#define to_channel(ch, branch)	((((branch)) << 1) | (ch))
#define to_csrow(slot, ch, branch)					\
(to_channel(ch, branch) | ((slot) << 2))
struct i7300_dev_info ;
static const struct i7300_dev_info i7300_devs[] = ;
struct i7300_dimm_info ;
struct i7300_pvt ;
static struct edac_pci_ctl_info *i7300_pci;
#define AMBASE			0x48
#define MAXCH			0x56
#define MAXDIMMPERCH		0x57
#define MC_SETTINGS		0x40
#define IS_MIRRORED(mc)		((mc) & (1 << 16))
#define IS_ECC_ENABLED(mc)		((mc) & (1 << 5))
#define IS_RETRY_ENABLED(mc)		((mc) & (1 << 31))
#define IS_SCRBALGO_ENHANCED(mc)	((mc) & (1 << 8))
#define MC_SETTINGS_A		0x58
#define IS_SINGLE_MODE(mca)		((mca) & (1 << 14))
#define TOLM			0x6C
#define MIR0			0x80
#define MIR1			0x84
#define MIR2			0x88
#define AMBPRESENT_0	0x64
#define AMBPRESENT_1	0x66
static const u16 mtr_regs[MAX_SLOTS] = ;
#define MTR_DIMMS_PRESENT(mtr)		((mtr) & (1 << 8))
#define MTR_DIMMS_ETHROTTLE(mtr)	((mtr) & (1 << 7))
#define MTR_DRAM_WIDTH(mtr)		(((mtr) & (1 << 6)) ? 8 : 4)
#define MTR_DRAM_BANKS(mtr)		(((mtr) & (1 << 5)) ? 8 : 4)
#define MTR_DIMM_RANKS(mtr)		(((mtr) & (1 << 4)) ? 1 : 0)
#define MTR_DIMM_ROWS(mtr)		(((mtr) >> 2) & 0x3)
#define MTR_DRAM_BANKS_ADDR_BITS	2
#define MTR_DIMM_ROWS_ADDR_BITS(mtr)	(MTR_DIMM_ROWS(mtr) + 13)
#define MTR_DIMM_COLS(mtr)		((mtr) & 0x3)
#define MTR_DIMM_COLS_ADDR_BITS(mtr)	(MTR_DIMM_COLS(mtr) + 10)
static const char *numrow_toString[] = ;
static const char *numcol_toString[] = ;
#define FERR_FAT_FBD	0x98
static const char *ferr_fat_fbd_name[] = ;
#define GET_FBD_FAT_IDX(fbderr)	(fbderr & (3 << 28))
#define FERR_FAT_FBD_ERR_MASK ((1 << 0) | (1 << 1) | (1 << 2) | (1 << 3))
#define FERR_NF_FBD	0xa0
static const char *ferr_nf_fbd_name[] = ;
#define GET_FBD_NF_IDX(fbderr)	(fbderr & (3 << 28))
#define FERR_NF_FBD_ERR_MASK ((1 << 24) | (1 << 23) | (1 << 22) | (1 << 21) |\
(1 << 18) | (1 << 17) | (1 << 16) | (1 << 15) |\
(1 << 14) | (1 << 13) | (1 << 11) | (1 << 10) |\
(1 << 9)  | (1 << 8)  | (1 << 7)  | (1 << 6)  |\
(1 << 5)  | (1 << 4)  | (1 << 3)  | (1 << 2)  |\
(1 << 1)  | (1 << 0))
#define EMASK_FBD	0xa8
#define EMASK_FBD_ERR_MASK ((1 << 27) | (1 << 26) | (1 << 25) | (1 << 24) |\
(1 << 22) | (1 << 21) | (1 << 20) | (1 << 19) |\
(1 << 18) | (1 << 17) | (1 << 16) | (1 << 14) |\
(1 << 13) | (1 << 12) | (1 << 11) | (1 << 10) |\
(1 << 9)  | (1 << 8)  | (1 << 7)  | (1 << 6)  |\
(1 << 5)  | (1 << 4)  | (1 << 3)  | (1 << 2)  |\
(1 << 1)  | (1 << 0))
#define FERR_GLOBAL_HI	0x48
static const char *ferr_global_hi_name[] = ;
#define ferr_global_hi_is_fatal(errno)	1
#define FERR_GLOBAL_LO	0x40
static const char *ferr_global_lo_name[] = ;
#define ferr_global_lo_is_fatal(errno)	((errno < 16) ? 0 : 1)
#define NRECMEMA	0xbe
#define NRECMEMA_BANK(v)	(((v) >> 12) & 7)
#define NRECMEMA_RANK(v)	(((v) >> 8) & 15)
#define NRECMEMB	0xc0
#define NRECMEMB_IS_WR(v)	((v) & (1 << 31))
#define NRECMEMB_CAS(v)	(((v) >> 16) & 0x1fff)
#define NRECMEMB_RAS(v)	((v) & 0xffff)
#define REDMEMA		0xdc
#define REDMEMB		0x7c
#define IS_SECOND_CH(v)	((v) * (1 << 17))
#define RECMEMA		0xe0
#define RECMEMA_BANK(v)	(((v) >> 12) & 7)
#define RECMEMA_RANK(v)	(((v) >> 8) & 15)
#define RECMEMB		0xe4
#define RECMEMB_IS_WR(v)	((v) & (1 << 31))
#define RECMEMB_CAS(v)	(((v) >> 16) & 0x1fff)
#define RECMEMB_RAS(v)	((v) & 0xffff)
static const char *get_err_from_table(const char *table[], int size, int pos)
#define GET_ERR_FROM_TABLE(table, pos)				\
get_err_from_table(table, ARRAY_SIZE(table), pos)
static void i7300_process_error_global(struct mem_ctl_info *mci)
static void i7300_process_fbd_error(struct mem_ctl_info *mci)
static void i7300_check_error(struct mem_ctl_info *mci)
;
static void i7300_clear_error(struct mem_ctl_info *mci)
static void i7300_enable_error_reporting(struct mem_ctl_info *mci)
static int decode_mtr(struct i7300_pvt *pvt,
int slot, int ch, int branch,
struct i7300_dimm_info *dinfo,
struct csrow_info *p_csrow,
u32 *nr_pages)
static void print_dimm_size(struct i7300_pvt *pvt)
static int i7300_init_csrows(struct mem_ctl_info *mci)
static void decode_mir(int mir_no, u16 mir[MAX_MIR])
static int i7300_get_mc_regs(struct mem_ctl_info *mci)
static void i7300_put_devices(struct mem_ctl_info *mci)
static int __devinit i7300_get_devices(struct mem_ctl_info *mci)
static int __devinit i7300_init_one(struct pci_dev *pdev,
const struct pci_device_id *id)
static void __devexit i7300_remove_one(struct pci_dev *pdev)
static const struct pci_device_id i7300_pci_tbl[] __devinitdata = ;
MODULE_DEVICE_TABLE(pci, i7300_pci_tbl);
static struct pci_driver i7300_driver = ;
static int __init i7300_init(void)
static void __exit i7300_exit(void)
module_init(i7300_init);
module_exit(i7300_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Mauro Carvalho Chehab <mchehab@redhat.com>");
MODULE_AUTHOR("Red Hat Inc. (http:
MODULE_DESCRIPTION("MC Driver for Intel I7300 memory controllers - "
I7300_REVISION);
module_param(edac_op_state, int, 0444);
MODULE_PARM_DESC(edac_op_state, "EDAC Error Reporting state: 0=Poll,1=NMI");
