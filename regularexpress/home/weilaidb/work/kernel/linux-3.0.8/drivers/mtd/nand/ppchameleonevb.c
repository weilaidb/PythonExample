#undef USE_READY_BUSY_PIN
#define USE_READY_BUSY_PIN
#define NAND_BIG_DELAY_US		25
#define NAND_SMALL_DELAY_US		10
#define SZ_4M                           0x00400000
#define NAND_SMALL_SIZE                 0x02000000
#define NAND_MTD_NAME		"ppchameleon-nand"
#define NAND_EVB_MTD_NAME	"ppchameleonevb-nand"
#define NAND_nCE_GPIO_PIN 		(0x80000000 >> 1)
#define NAND_CLE_GPIO_PIN 		(0x80000000 >> 2)
#define NAND_ALE_GPIO_PIN 		(0x80000000 >> 3)
#define NAND_RB_GPIO_PIN 		(0x80000000 >> 4)
#define NAND_EVB_nCE_GPIO_PIN 	(0x80000000 >> 14)
#define NAND_EVB_CLE_GPIO_PIN 	(0x80000000 >> 15)
#define NAND_EVB_ALE_GPIO_PIN 	(0x80000000 >> 16)
#define NAND_EVB_RB_GPIO_PIN 	(0x80000000 >> 31)
static struct mtd_info *ppchameleon_mtd = NULL;
static struct mtd_info *ppchameleonevb_mtd = NULL;
static unsigned long ppchameleon_fio_pbase = CFG_NAND0_PADDR;
static unsigned long ppchameleonevb_fio_pbase = CFG_NAND1_PADDR;
module_param(ppchameleon_fio_pbase, ulong, 0);
module_param(ppchameleonevb_fio_pbase, ulong, 0);
__setup("ppchameleon_fio_pbase=", ppchameleon_fio_pbase);
__setup("ppchameleonevb_fio_pbase=", ppchameleonevb_fio_pbase);
static struct mtd_partition partition_info_hi[] = ;
static struct mtd_partition partition_info_me[] = ;
static struct mtd_partition partition_info_evb[] = ;
#define NUM_PARTITIONS 1
extern int parse_cmdline_partitions(struct mtd_info *master, struct mtd_partition **pparts, const char *mtd_id);
static void ppchameleon_hwcontrol(struct mtd_info *mtdinfo, int cmd,
unsigned int ctrl)
static void ppchameleonevb_hwcontrol(struct mtd_info *mtdinfo, int cmd,
unsigned int ctrl)
static int ppchameleon_device_ready(struct mtd_info *minfo)
static int ppchameleonevb_device_ready(struct mtd_info *minfo)
const char *part_probes[] = ;
const char *part_probes_evb[] = ;
static int __init ppchameleonevb_init(void)
module_init(ppchameleonevb_init);
static void __exit ppchameleonevb_cleanup(void)
module_exit(ppchameleonevb_cleanup);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("DAVE Srl <support-ppchameleon@dave-tech.it>");
MODULE_DESCRIPTION("MTD map driver for DAVE Srl PPChameleonEVB board");
