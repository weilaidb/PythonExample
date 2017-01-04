#define CPC925_EDAC_REVISION	" Ver: 1.0.0"
#define CPC925_EDAC_MOD_STR	"cpc925_edac"
#define cpc925_printk(level, fmt, arg...) \
edac_printk(level, "CPC925", fmt, ##arg)
#define cpc925_mc_printk(mci, level, fmt, arg...) \
edac_mc_chipset_printk(mci, level, "CPC925", fmt, ##arg)
#define CPC925_BITS_PER_REG	32
#define CPC925_BIT(nr)		(1UL << (CPC925_BITS_PER_REG - 1 - nr))
#define CPC925_CPU_ERR_DEV	"cpu"
#define CPC925_HT_LINK_DEV	"htlink"
#define CPC925_REF_FREQ		0xFA69
#define CPC925_SCRUB_BLOCK_SIZE 64
#define CPC925_NR_CSROWS	8
#define REG_APIMASK_OFFSET	0x30070
enum apimask_bits ;
#define REG_APIEXCP_OFFSET	0x30060
enum apiexcp_bits ;
#define REG_MBCR_OFFSET		0x2190
#define MBCR_64BITCFG_SHIFT	23
#define MBCR_64BITCFG_MASK	(1UL << MBCR_64BITCFG_SHIFT)
#define MBCR_64BITBUS_SHIFT	22
#define MBCR_64BITBUS_MASK	(1UL << MBCR_64BITBUS_SHIFT)
#define REG_MBMR_OFFSET		0x21C0
#define MBMR_MODE_MAX_VALUE	0xF
#define MBMR_MODE_SHIFT		25
#define MBMR_MODE_MASK		(MBMR_MODE_MAX_VALUE << MBMR_MODE_SHIFT)
#define MBMR_BBA_SHIFT		24
#define MBMR_BBA_MASK		(1UL << MBMR_BBA_SHIFT)
#define REG_MBBAR_OFFSET	0x21D0
#define MBBAR_BBA_MAX_VALUE	0xFF
#define MBBAR_BBA_SHIFT		24
#define MBBAR_BBA_MASK		(MBBAR_BBA_MAX_VALUE << MBBAR_BBA_SHIFT)
#define REG_MSCR_OFFSET		0x2400
#define MSCR_SCRUB_MOD_MASK	0xC0000000
#define MSCR_BACKGR_SCRUB	0x40000000
#define MSCR_SI_SHIFT		16
#define MSCR_SI_MAX_VALUE	0xFF
#define MSCR_SI_MASK		(MSCR_SI_MAX_VALUE << MSCR_SI_SHIFT)
#define REG_MSRSR_OFFSET	0x2410
#define REG_MSRER_OFFSET	0x2420
#define REG_MSPR_OFFSET		0x2430
#define REG_MCCR_OFFSET		0x2440
enum mccr_bits ;
#define REG_MCRER_OFFSET	0x2450
#define REG_MEAR_OFFSET		0x2460
#define MEAR_BCNT_MAX_VALUE	0x3
#define MEAR_BCNT_SHIFT		30
#define MEAR_BCNT_MASK		(MEAR_BCNT_MAX_VALUE << MEAR_BCNT_SHIFT)
#define MEAR_RANK_MAX_VALUE	0x7
#define MEAR_RANK_SHIFT		27
#define MEAR_RANK_MASK		(MEAR_RANK_MAX_VALUE << MEAR_RANK_SHIFT)
#define MEAR_COL_MAX_VALUE	0x7FF
#define MEAR_COL_SHIFT		16
#define MEAR_COL_MASK		(MEAR_COL_MAX_VALUE << MEAR_COL_SHIFT)
#define MEAR_BANK_MAX_VALUE	0x3
#define MEAR_BANK_SHIFT		14
#define MEAR_BANK_MASK		(MEAR_BANK_MAX_VALUE << MEAR_BANK_SHIFT)
#define MEAR_ROW_MASK		0x00003FFF
#define REG_MESR_OFFSET		0x2470
#define MESR_ECC_SYN_H_MASK	0xFF00
#define MESR_ECC_SYN_L_MASK	0x00FF
#define REG_MMCR_OFFSET		0x2500
enum mmcr_bits ;
#define REG_ERRCTRL_OFFSET	0x70140
enum errctrl_bits ;
#define REG_LINKCTRL_OFFSET	0x70110
enum linkctrl_bits ;
#define REG_LINKERR_OFFSET	0x70120
enum linkerr_bits ;
#define REG_BRGCTRL_OFFSET	0x70300
enum brgctrl_bits ;
struct cpc925_mc_pdata ;
struct cpc925_dev_info ;
static void get_total_mem(struct cpc925_mc_pdata *pdata)
static void cpc925_init_csrows(struct mem_ctl_info *mci)
static void cpc925_mc_init(struct mem_ctl_info *mci)
static void cpc925_mc_exit(struct mem_ctl_info *mci)
static void cpc925_mc_get_pfn(struct mem_ctl_info *mci, u32 mear,
unsigned long *pfn, unsigned long *offset, int *csrow)
static int cpc925_mc_find_channel(struct mem_ctl_info *mci, u16 syndrome)
static void cpc925_mc_check(struct mem_ctl_info *mci)
static void cpc925_cpu_init(struct cpc925_dev_info *dev_info)
static void cpc925_cpu_exit(struct cpc925_dev_info *dev_info)
static void cpc925_cpu_check(struct edac_device_ctl_info *edac_dev)
static void cpc925_htlink_init(struct cpc925_dev_info *dev_info)
static void cpc925_htlink_exit(struct cpc925_dev_info *dev_info)
static void cpc925_htlink_check(struct edac_device_ctl_info *edac_dev)
static struct cpc925_dev_info cpc925_devs[] = ;
static void cpc925_add_edac_devices(void __iomem *vbase)
static void cpc925_del_edac_devices(void)
static int cpc925_get_sdram_scrub_rate(struct mem_ctl_info *mci)
static int cpc925_mc_get_channels(void __iomem *vbase)
static int __devinit cpc925_probe(struct platform_device *pdev)
static int cpc925_remove(struct platform_device *pdev)
static struct platform_driver cpc925_edac_driver = ;
static int __init cpc925_edac_init(void)
static void __exit cpc925_edac_exit(void)
module_init(cpc925_edac_init);
module_exit(cpc925_edac_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Cao Qingtao <qingtao.cao@windriver.com>");
MODULE_DESCRIPTION("IBM CPC925 Bridge and MC EDAC kernel module");
