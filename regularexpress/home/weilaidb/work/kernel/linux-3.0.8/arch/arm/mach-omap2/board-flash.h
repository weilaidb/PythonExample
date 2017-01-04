#define PDC_NOR		1
#define PDC_NAND	2
#define PDC_ONENAND	3
#define DBG_MPDB	4
struct flash_partitions ;
extern void board_flash_init(struct flash_partitions [],
char chip_sel[][GPMC_CS_NUM], int nand_type);
extern void board_nand_init(struct mtd_partition *nand_parts,
u8 nr_parts, u8 cs, int nand_type);
