#define REG_FPGA_REV			0x10
#define REG_FPGA_DIP_SWITCH_INPUT2	0x60
#define MAX_SUPPORTED_GPMC_CONFIG	3
#define DEBUG_BASE		0x08000000
#define FLASH_SIZE_SDPV1	SZ_64M
#define FLASH_SIZE_SDPV2	SZ_128M
static struct physmap_flash_data board_nor_data = ;
static struct resource board_nor_resource = ;
static struct platform_device board_nor_device = ;
static void
__init board_nor_init(struct mtd_partition *nor_parts, u8 nr_parts, u8 cs)
#if defined(CONFIG_MTD_ONENAND_OMAP2) || \
defined(CONFIG_MTD_ONENAND_OMAP2_MODULE)
static struct omap_onenand_platform_data board_onenand_data = ;
static void
__init board_onenand_init(struct mtd_partition *onenand_parts,
u8 nr_parts, u8 cs)
static void
__init board_onenand_init(struct mtd_partition *nor_parts, u8 nr_parts, u8 cs)
#if defined(CONFIG_MTD_NAND_OMAP2) || \
defined(CONFIG_MTD_NAND_OMAP2_MODULE)
static struct gpmc_timings nand_timings = ;
static struct omap_nand_platform_data board_nand_data = ;
void
__init board_nand_init(struct mtd_partition *nand_parts,
u8 nr_parts, u8 cs, int nand_type)
void
__init board_nand_init(struct mtd_partition *nand_parts, u8 nr_parts, u8 cs, int nand_type)
static u8 get_gpmc0_type(void)
void board_flash_init(struct flash_partitions partition_info[],
char chip_sel_board[][GPMC_CS_NUM], int nand_type)
