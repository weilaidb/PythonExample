#define I5100_MC		0x40
#define 	I5100_MC_SCRBEN_MASK	(1 << 7)
#define 	I5100_MC_SCRBDONE_MASK	(1 << 4)
#define I5100_MS		0x44
#define I5100_SPDDATA		0x48
#define I5100_SPDCMD		0x4c
#define I5100_TOLM		0x6c
#define I5100_MIR0		0x80
#define I5100_MIR1		0x84
#define I5100_AMIR_0		0x8c
#define I5100_AMIR_1		0x90
#define I5100_FERR_NF_MEM	0xa0
#define		I5100_FERR_NF_MEM_M16ERR_MASK	(1 << 16)
#define		I5100_FERR_NF_MEM_M15ERR_MASK	(1 << 15)
#define		I5100_FERR_NF_MEM_M14ERR_MASK	(1 << 14)
#define		I5100_FERR_NF_MEM_M12ERR_MASK	(1 << 12)
#define		I5100_FERR_NF_MEM_M11ERR_MASK	(1 << 11)
#define		I5100_FERR_NF_MEM_M10ERR_MASK	(1 << 10)
#define		I5100_FERR_NF_MEM_M6ERR_MASK	(1 << 6)
#define		I5100_FERR_NF_MEM_M5ERR_MASK	(1 << 5)
#define		I5100_FERR_NF_MEM_M4ERR_MASK	(1 << 4)
#define		I5100_FERR_NF_MEM_M1ERR_MASK	1
#define		I5100_FERR_NF_MEM_ANY_MASK	\
(I5100_FERR_NF_MEM_M16ERR_MASK | \
I5100_FERR_NF_MEM_M15ERR_MASK | \
I5100_FERR_NF_MEM_M14ERR_MASK | \
I5100_FERR_NF_MEM_M12ERR_MASK | \
I5100_FERR_NF_MEM_M11ERR_MASK | \
I5100_FERR_NF_MEM_M10ERR_MASK | \
I5100_FERR_NF_MEM_M6ERR_MASK | \
I5100_FERR_NF_MEM_M5ERR_MASK | \
I5100_FERR_NF_MEM_M4ERR_MASK | \
I5100_FERR_NF_MEM_M1ERR_MASK)
#define	I5100_NERR_NF_MEM	0xa4
#define I5100_EMASK_MEM		0xa8
#define I5100_MTR_0	0x154
#define I5100_DMIR	0x15c
#define	I5100_VALIDLOG	0x18c
#define	I5100_NRECMEMA	0x190
#define	I5100_NRECMEMB	0x194
#define	I5100_REDMEMA	0x198
#define	I5100_REDMEMB	0x19c
#define	I5100_RECMEMA	0x1a0
#define	I5100_RECMEMB	0x1a4
#define I5100_MTR_4	0x1b0
static inline u32 i5100_mc_scrben(u32 mc)
static inline u32 i5100_mc_errdeten(u32 mc)
static inline u32 i5100_mc_scrbdone(u32 mc)
static inline u16 i5100_spddata_rdo(u16 a)
static inline u16 i5100_spddata_sbe(u16 a)
static inline u16 i5100_spddata_busy(u16 a)
static inline u16 i5100_spddata_data(u16 a)
static inline u32 i5100_spdcmd_create(u32 dti, u32 ckovrd, u32 sa, u32 ba,
u32 data, u32 cmd)
static inline u16 i5100_tolm_tolm(u16 a)
static inline u16 i5100_mir_limit(u16 a)
static inline u16 i5100_mir_way1(u16 a)
static inline u16 i5100_mir_way0(u16 a)
static inline u32 i5100_ferr_nf_mem_chan_indx(u32 a)
static inline u32 i5100_ferr_nf_mem_any(u32 a)
static inline u32 i5100_nerr_nf_mem_any(u32 a)
static inline u32 i5100_dmir_limit(u32 a)
static inline u32 i5100_dmir_rank(u32 a, u32 i)
static inline u16 i5100_mtr_present(u16 a)
static inline u16 i5100_mtr_ethrottle(u16 a)
static inline u16 i5100_mtr_width(u16 a)
static inline u16 i5100_mtr_numbank(u16 a)
static inline u16 i5100_mtr_numrow(u16 a)
static inline u16 i5100_mtr_numcol(u16 a)
static inline u32 i5100_validlog_redmemvalid(u32 a)
static inline u32 i5100_validlog_recmemvalid(u32 a)
static inline u32 i5100_validlog_nrecmemvalid(u32 a)
static inline u32 i5100_nrecmema_merr(u32 a)
static inline u32 i5100_nrecmema_bank(u32 a)
static inline u32 i5100_nrecmema_rank(u32 a)
static inline u32 i5100_nrecmema_dm_buf_id(u32 a)
static inline u32 i5100_nrecmemb_cas(u32 a)
static inline u32 i5100_nrecmemb_ras(u32 a)
static inline u32 i5100_redmemb_ecc_locator(u32 a)
static inline u32 i5100_recmema_merr(u32 a)
static inline u32 i5100_recmema_bank(u32 a)
static inline u32 i5100_recmema_rank(u32 a)
static inline u32 i5100_recmema_dm_buf_id(u32 a)
static inline u32 i5100_recmemb_cas(u32 a)
static inline u32 i5100_recmemb_ras(u32 a)
#define I5100_MAX_RANKS_PER_CHAN	6
#define I5100_CHANNELS			    2
#define I5100_MAX_RANKS_PER_DIMM	4
#define I5100_DIMM_ADDR_LINES		(6 - 3)
#define I5100_MAX_DIMM_SLOTS_PER_CHAN	4
#define I5100_MAX_RANK_INTERLEAVE	4
#define I5100_MAX_DMIRS			5
#define I5100_SCRUB_REFRESH_RATE	(5 * 60 * HZ)
struct i5100_priv ;
static int i5100_rank_to_slot(const struct mem_ctl_info *mci,
int chan, int rank)
static const char *i5100_err_msg(unsigned err)
static int i5100_csrow_to_rank(const struct mem_ctl_info *mci, int csrow)
static int i5100_csrow_to_chan(const struct mem_ctl_info *mci, int csrow)
static unsigned i5100_rank_to_csrow(const struct mem_ctl_info *mci,
int chan, int rank)
static void i5100_handle_ce(struct mem_ctl_info *mci,
int chan,
unsigned bank,
unsigned rank,
unsigned long syndrome,
unsigned cas,
unsigned ras,
const char *msg)
static void i5100_handle_ue(struct mem_ctl_info *mci,
int chan,
unsigned bank,
unsigned rank,
unsigned long syndrome,
unsigned cas,
unsigned ras,
const char *msg)
static void i5100_read_log(struct mem_ctl_info *mci, int chan,
u32 ferr, u32 nerr)
static void i5100_check_error(struct mem_ctl_info *mci)
static void i5100_refresh_scrubbing(struct work_struct *work)
static int i5100_set_scrub_rate(struct mem_ctl_info *mci, u32 bandwidth)
static int i5100_get_scrub_rate(struct mem_ctl_info *mci)
static struct pci_dev *pci_get_device_func(unsigned vendor,
unsigned device,
unsigned func)
static unsigned long __devinit i5100_npages(struct mem_ctl_info *mci,
int csrow)
static void __devinit i5100_init_mtr(struct mem_ctl_info *mci)
static int i5100_read_spd_byte(const struct mem_ctl_info *mci,
u8 ch, u8 slot, u8 addr, u8 *byte)
static void __devinit i5100_init_dimm_csmap(struct mem_ctl_info *mci)
static void __devinit i5100_init_dimm_layout(struct pci_dev *pdev,
struct mem_ctl_info *mci)
static void __devinit i5100_init_interleaving(struct pci_dev *pdev,
struct mem_ctl_info *mci)
static void __devinit i5100_init_csrows(struct mem_ctl_info *mci)
static int __devinit i5100_init_one(struct pci_dev *pdev,
const struct pci_device_id *id)
static void __devexit i5100_remove_one(struct pci_dev *pdev)
static const struct pci_device_id i5100_pci_tbl[] __devinitdata = ;
MODULE_DEVICE_TABLE(pci, i5100_pci_tbl);
static struct pci_driver i5100_driver = ;
static int __init i5100_init(void)
static void __exit i5100_exit(void)
module_init(i5100_init);
module_exit(i5100_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR
("Arthur Jones <ajones@riverbed.com>");
MODULE_DESCRIPTION("MC Driver for Intel I5100 memory controllers");
