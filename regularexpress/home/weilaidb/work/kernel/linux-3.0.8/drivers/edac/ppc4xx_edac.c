#define EDAC_OPSTATE_INT_STR		"interrupt"
#define EDAC_OPSTATE_POLL_STR		"polled"
#define EDAC_OPSTATE_UNKNOWN_STR	"unknown"
#define PPC4XX_EDAC_MODULE_NAME		"ppc4xx_edac"
#define PPC4XX_EDAC_MODULE_REVISION	"v1.0.0"
#define PPC4XX_EDAC_MESSAGE_SIZE	256
#define ppc4xx_edac_printk(level, fmt, arg...) \
edac_printk(level, "PPC4xx MC", fmt, ##arg)
#define ppc4xx_edac_mc_printk(level, mci, fmt, arg...) \
edac_mc_chipset_printk(mci, level, "PPC4xx", fmt, ##arg)
#define SDRAM_MBCF_SZ_MiB_MIN		4
#define SDRAM_MBCF_SZ_TO_MiB(n)		(SDRAM_MBCF_SZ_MiB_MIN \
<< (SDRAM_MBCF_SZ_DECODE(n)))
#define SDRAM_MBCF_SZ_TO_PAGES(n)	(SDRAM_MBCF_SZ_MiB_MIN \
<< (20 - PAGE_SHIFT + \
SDRAM_MBCF_SZ_DECODE(n)))
#define SDRAM_DCR_RESOURCE_LEN		2
#define SDRAM_DCR_ADDR_OFFSET		0
#define SDRAM_DCR_DATA_OFFSET		1
#define INTMAP_ECCDED_INDEX		0
#define INTMAP_ECCSEC_INDEX		1
struct ppc4xx_edac_pdata ;
struct ppc4xx_ecc_status ;
static int ppc4xx_edac_probe(struct platform_device *device)
static int ppc4xx_edac_remove(struct platform_device *device);
static struct of_device_id ppc4xx_edac_match[] = ;
static struct platform_driver ppc4xx_edac_driver = ;
static const unsigned ppc4xx_edac_nr_csrows = 2;
static const unsigned ppc4xx_edac_nr_chans = 1;
static const char * const ppc4xx_plb_masters[9] = ;
static inline u32
mfsdram(const dcr_host_t *dcr_host, unsigned int idcr_n)
static inline void
mtsdram(const dcr_host_t *dcr_host, unsigned int idcr_n, u32 value)
static bool
ppc4xx_edac_check_bank_error(const struct ppc4xx_ecc_status *status,
unsigned int bank)
static int
ppc4xx_edac_generate_bank_message(const struct mem_ctl_info *mci,
const struct ppc4xx_ecc_status *status,
char *buffer,
size_t size)
static int
ppc4xx_edac_generate_checkbit_message(const struct mem_ctl_info *mci,
const struct ppc4xx_ecc_status *status,
char *buffer,
size_t size)
static int
ppc4xx_edac_generate_lane_message(const struct mem_ctl_info *mci,
const struct ppc4xx_ecc_status *status,
char *buffer,
size_t size)
static int
ppc4xx_edac_generate_ecc_message(const struct mem_ctl_info *mci,
const struct ppc4xx_ecc_status *status,
char *buffer,
size_t size)
static int
ppc4xx_edac_generate_plb_message(const struct mem_ctl_info *mci,
const struct ppc4xx_ecc_status *status,
char *buffer,
size_t size)
static void
ppc4xx_edac_generate_message(const struct mem_ctl_info *mci,
const struct ppc4xx_ecc_status *status,
char *buffer,
size_t size)
static void
ppc4xx_ecc_dump_status(const struct mem_ctl_info *mci,
const struct ppc4xx_ecc_status *status)
static void
ppc4xx_ecc_get_status(const struct mem_ctl_info *mci,
struct ppc4xx_ecc_status *status)
static void
ppc4xx_ecc_clear_status(const struct mem_ctl_info *mci,
const struct ppc4xx_ecc_status *status)
static void
ppc4xx_edac_handle_ce(struct mem_ctl_info *mci,
const struct ppc4xx_ecc_status *status)
static void
ppc4xx_edac_handle_ue(struct mem_ctl_info *mci,
const struct ppc4xx_ecc_status *status)
static void
ppc4xx_edac_check(struct mem_ctl_info *mci)
static irqreturn_t
ppc4xx_edac_isr(int irq, void *dev_id)
static enum dev_type __devinit
ppc4xx_edac_get_dtype(u32 mcopt1)
static enum mem_type __devinit
ppc4xx_edac_get_mtype(u32 mcopt1)
static int __devinit
ppc4xx_edac_init_csrows(struct mem_ctl_info *mci, u32 mcopt1)
static int __devinit
ppc4xx_edac_mc_init(struct mem_ctl_info *mci,
struct platform_device *op,
const dcr_host_t *dcr_host,
u32 mcopt1)
static int __devinit
ppc4xx_edac_register_irq(struct platform_device *op, struct mem_ctl_info *mci)
static int __devinit
ppc4xx_edac_map_dcrs(const struct device_node *np, dcr_host_t *dcr_host)
static int __devinit ppc4xx_edac_probe(struct platform_device *op)
static int
ppc4xx_edac_remove(struct platform_device *op)
static inline void __init
ppc4xx_edac_opstate_init(void)
static int __init
ppc4xx_edac_init(void)
static void __exit
ppc4xx_edac_exit(void)
module_init(ppc4xx_edac_init);
module_exit(ppc4xx_edac_exit);
MODULE_LICENSE("GPL v2");
MODULE_AUTHOR("Grant Erickson <gerickson@nuovations.com>");
MODULE_DESCRIPTION("EDAC MC Driver for the PPC4xx IBM DDR2 Memory Controller");
module_param(edac_op_state, int, 0444);
MODULE_PARM_DESC(edac_op_state, "EDAC Error Reporting State: "
"0=" EDAC_OPSTATE_POLL_STR ", 2=" EDAC_OPSTATE_INT_STR);
