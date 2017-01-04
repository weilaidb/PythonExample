#define E752X_REVISION	" Ver: 2.0.2"
#define EDAC_MOD_STR	"e752x_edac"
static int report_non_memory_errors;
static int force_function_unhide;
static int sysbus_parity = -1;
static struct edac_pci_ctl_info *e752x_pci;
#define e752x_printk(level, fmt, arg...) \
edac_printk(level, "e752x", fmt, ##arg)
#define e752x_mc_printk(mci, level, fmt, arg...) \
edac_mc_chipset_printk(mci, level, "e752x", fmt, ##arg)
#define PCI_DEVICE_ID_INTEL_7520_0      0x3590
#define PCI_DEVICE_ID_INTEL_7520_1_ERR  0x3591
#define PCI_DEVICE_ID_INTEL_7525_0      0x359E
#define PCI_DEVICE_ID_INTEL_7525_1_ERR  0x3593
#define PCI_DEVICE_ID_INTEL_7320_0	0x3592
#define PCI_DEVICE_ID_INTEL_7320_1_ERR	0x3593
#define PCI_DEVICE_ID_INTEL_3100_0	0x35B0
#define PCI_DEVICE_ID_INTEL_3100_1_ERR	0x35B1
#define E752X_NR_CSROWS		8
#define E752X_MCHSCRB		0x52
#define E752X_DRB		0x60
#define E752X_DRA		0x70
#define E752X_DRC		0x7C
#define E752X_DRM		0x80
#define E752X_DDRCSR		0x9A
#define E752X_TOLM		0xC4
#define E752X_REMAPBASE		0xC6
#define E752X_REMAPLIMIT	0xC8
#define E752X_REMAPOFFSET	0xCA
#define E752X_FERR_GLOBAL	0x40
#define E752X_NERR_GLOBAL	0x44
#define E752X_HI_FERR		0x50
#define E752X_HI_NERR		0x52
#define E752X_HI_ERRMASK	0x54
#define E752X_HI_SMICMD		0x5A
#define E752X_SYSBUS_FERR	0x60
#define E752X_SYSBUS_NERR	0x62
#define E752X_SYSBUS_ERRMASK	0x64
#define E752X_SYSBUS_SMICMD	0x6A
#define E752X_BUF_FERR		0x70
#define E752X_BUF_NERR		0x72
#define E752X_BUF_ERRMASK	0x74
#define E752X_BUF_SMICMD	0x7A
#define E752X_DRAM_FERR		0x80
#define E752X_DRAM_NERR		0x82
#define E752X_DRAM_ERRMASK	0x84
#define E752X_DRAM_SMICMD	0x8A
#define E752X_DRAM_RETR_ADD	0xAC
#define E752X_DRAM_SEC1_ADD	0xA0
#define E752X_DRAM_SEC2_ADD	0xC8
#define E752X_DRAM_DED_ADD	0xA4
#define E752X_DRAM_SCRB_ADD	0xA8
#define E752X_DRAM_SEC1_SYNDROME 0xC4
#define E752X_DRAM_SEC2_SYNDROME 0xC6
#define E752X_DEVPRES1		0xF4
#define I3100_NSI_FERR		0x48
#define I3100_NSI_NERR		0x4C
#define I3100_NSI_SMICMD	0x54
#define I3100_NSI_EMASK		0x90
#define ICH5R_PCI_STAT		0x06
#define ICH5R_PCI_2ND_STAT	0x1E
#define ICH5R_PCI_BRIDGE_CTL	0x3E
enum e752x_chips ;
struct e752x_pvt ;
struct e752x_dev_info ;
struct e752x_error_info ;
static const struct e752x_dev_info e752x_devs[] = ;
#define SDRATE_EOT 0xFFFFFFFF
struct scrubrate ;
static const struct scrubrate scrubrates_e752x[] = ;
static const struct scrubrate scrubrates_i3100[] = ;
static unsigned long ctl_page_to_phys(struct mem_ctl_info *mci,
unsigned long page)
static void do_process_ce(struct mem_ctl_info *mci, u16 error_one,
u32 sec1_add, u16 sec1_syndrome)
static inline void process_ce(struct mem_ctl_info *mci, u16 error_one,
u32 sec1_add, u16 sec1_syndrome, int *error_found,
int handle_error)
static void do_process_ue(struct mem_ctl_info *mci, u16 error_one,
u32 ded_add, u32 scrb_add)
static inline void process_ue(struct mem_ctl_info *mci, u16 error_one,
u32 ded_add, u32 scrb_add, int *error_found,
int handle_error)
static inline void process_ue_no_info_wr(struct mem_ctl_info *mci,
int *error_found, int handle_error)
static void do_process_ded_retry(struct mem_ctl_info *mci, u16 error,
u32 retry_add)
static inline void process_ded_retry(struct mem_ctl_info *mci, u16 error,
u32 retry_add, int *error_found,
int handle_error)
static inline void process_threshold_ce(struct mem_ctl_info *mci, u16 error,
int *error_found, int handle_error)
static char *global_message[11] = ;
#define DRAM_ENTRY	9
static char *fatal_message[2] = ;
static void do_global_error(int fatal, u32 errors)
static inline void global_error(int fatal, u32 errors, int *error_found,
int handle_error)
static char *hub_message[7] = ;
static void do_hub_error(int fatal, u8 errors)
static inline void hub_error(int fatal, u8 errors, int *error_found,
int handle_error)
#define NSI_FATAL_MASK		0x0c080081
#define NSI_NON_FATAL_MASK	0x23a0ba64
#define NSI_ERR_MASK		(NSI_FATAL_MASK | NSI_NON_FATAL_MASK)
static char *nsi_message[30] = ;
static void do_nsi_error(int fatal, u32 errors)
static inline void nsi_error(int fatal, u32 errors, int *error_found,
int handle_error)
static char *membuf_message[4] = ;
static void do_membuf_error(u8 errors)
static inline void membuf_error(u8 errors, int *error_found, int handle_error)
static char *sysbus_message[10] = ;
static void do_sysbus_error(int fatal, u32 errors)
static inline void sysbus_error(int fatal, u32 errors, int *error_found,
int handle_error)
static void e752x_check_hub_interface(struct e752x_error_info *info,
int *error_found, int handle_error)
static void e752x_check_ns_interface(struct e752x_error_info *info,
int *error_found, int handle_error)
static void e752x_check_sysbus(struct e752x_error_info *info,
int *error_found, int handle_error)
static void e752x_check_membuf(struct e752x_error_info *info,
int *error_found, int handle_error)
static void e752x_check_dram(struct mem_ctl_info *mci,
struct e752x_error_info *info, int *error_found,
int handle_error)
static void e752x_get_error_info(struct mem_ctl_info *mci,
struct e752x_error_info *info)
static int e752x_process_error_info(struct mem_ctl_info *mci,
struct e752x_error_info *info,
int handle_errors)
static void e752x_check(struct mem_ctl_info *mci)
static int set_sdram_scrub_rate(struct mem_ctl_info *mci, u32 new_bw)
static int get_sdram_scrub_rate(struct mem_ctl_info *mci)
static inline int dual_channel_active(u16 ddrcsr)
static inline int remap_csrow_index(struct mem_ctl_info *mci, int index)
static void e752x_init_csrows(struct mem_ctl_info *mci, struct pci_dev *pdev,
u16 ddrcsr)
static void e752x_init_mem_map_table(struct pci_dev *pdev,
struct e752x_pvt *pvt)
static int e752x_get_devs(struct pci_dev *pdev, int dev_idx,
struct e752x_pvt *pvt)
static void e752x_init_sysbus_parity_mask(struct e752x_pvt *pvt)
static void e752x_init_error_reporting_regs(struct e752x_pvt *pvt)
static int e752x_probe1(struct pci_dev *pdev, int dev_idx)
static int __devinit e752x_init_one(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit e752x_remove_one(struct pci_dev *pdev)
static const struct pci_device_id e752x_pci_tbl[] __devinitdata = ;
MODULE_DEVICE_TABLE(pci, e752x_pci_tbl);
static struct pci_driver e752x_driver = ;
static int __init e752x_init(void)
static void __exit e752x_exit(void)
module_init(e752x_init);
module_exit(e752x_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Linux Networx (http:
MODULE_DESCRIPTION("MC support for Intel e752x/3100 memory controllers");
module_param(force_function_unhide, int, 0444);
MODULE_PARM_DESC(force_function_unhide, "if BIOS sets Dev0:Fun1 up as hidden:"
" 1=force unhide and hope BIOS doesn't fight driver for "
"Dev0:Fun1 access");
module_param(edac_op_state, int, 0444);
MODULE_PARM_DESC(edac_op_state, "EDAC Error Reporting state: 0=Poll,1=NMI");
module_param(sysbus_parity, int, 0444);
MODULE_PARM_DESC(sysbus_parity, "0=disable system bus parity checking,"
" 1=enable system bus parity checking, default=auto-detect");
module_param(report_non_memory_errors, int, 0644);
MODULE_PARM_DESC(report_non_memory_errors, "0=disable non-memory error "
"reporting, 1=enable non-memory error reporting");
