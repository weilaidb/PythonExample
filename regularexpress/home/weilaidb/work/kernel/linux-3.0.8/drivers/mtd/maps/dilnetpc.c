#define DNPC_BIOS_BLOCKS_WRITEPROTECTED
#define BIOSID_BASE	0x000fe100
#define ID_DNPC	"DNP1486"
#define ID_ADNP	"ADNP1486"
#define FLASH_BASE	0x2000000
#define CSC_INDEX	0x22
#define CSC_DATA	0x23
#define CSC_MMSWAR	0x30
#define CSC_MMSWDSR	0x31
#define CSC_RBWR	0xa7
#define CSC_CR		0xd0
#define CSC_PCCMDCR	0xf1
#define PCC_INDEX	0x3e0
#define PCC_DATA	0x3e1
#define PCC_AWER_B		0x46
#define PCC_MWSAR_1_Lo	0x58
#define PCC_MWSAR_1_Hi	0x59
#define PCC_MWEAR_1_Lo	0x5A
#define PCC_MWEAR_1_Hi	0x5B
#define PCC_MWAOR_1_Lo	0x5C
#define PCC_MWAOR_1_Hi	0x5D
static inline void setcsc(int reg, unsigned char data)
static inline unsigned char getcsc(int reg)
static inline void setpcc(int reg, unsigned char data)
static inline unsigned char getpcc(int reg)
static void dnpc_map_flash(unsigned long flash_base, unsigned long flash_size)
static void dnpc_unmap_flash(void)
static DEFINE_SPINLOCK(dnpc_spin);
static int        vpp_counter = 0;
static void dnp_set_vpp(struct map_info *not_used, int on)
static void adnp_set_vpp(struct map_info *not_used, int on)
#define DNP_WINDOW_SIZE		0x00200000
#define ADNP_WINDOW_SIZE	0x00400000
#define WINDOW_ADDR		FLASH_BASE
static struct map_info dnpc_map = ;
static struct mtd_partition partition_info[]=
;
#define NUM_PARTITIONS ARRAY_SIZE(partition_info)
static struct mtd_info *mymtd;
static struct mtd_info *lowlvl_parts[NUM_PARTITIONS];
static struct mtd_info *merged_mtd;
static struct mtd_partition higlvl_partition_info[]=
;
#define NUM_HIGHLVL_PARTITIONS ARRAY_SIZE(higlvl_partition_info)
static int dnp_adnp_probe(void)
static int __init init_dnpc(void)
static void __exit cleanup_dnpc(void)
module_init(init_dnpc);
module_exit(cleanup_dnpc);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Sysgo Real-Time Solutions GmbH");
MODULE_DESCRIPTION("MTD map driver for SSV DIL/NetPC DNP & ADNP");
