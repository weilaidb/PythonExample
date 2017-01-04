#define __MTD_FSMC_H
#define FSMC_NAND_BW8		1
#define FSMC_NAND_BW16		2
#if defined(CONFIG_MACH_SPEAR310)
#define PLAT_NAND_CLE		(1 << 17)
#define PLAT_NAND_ALE		(1 << 16)
#define PLAT_NAND_CLE		(1 << 16)
#define PLAT_NAND_ALE		(1 << 17)
#define FSMC_MAX_NOR_BANKS	4
#define FSMC_MAX_NAND_BANKS	4
#define FSMC_FLASH_WIDTH8	1
#define FSMC_FLASH_WIDTH16	2
struct fsmc_nor_bank_regs ;
#define BANK_ENABLE		(1 << 0)
#define MUXED			(1 << 1)
#define NOR_DEV			(2 << 2)
#define WIDTH_8			(0 << 4)
#define WIDTH_16		(1 << 4)
#define RSTPWRDWN		(1 << 6)
#define WPROT			(1 << 7)
#define WRT_ENABLE		(1 << 12)
#define WAIT_ENB		(1 << 13)
struct fsmc_nand_bank_regs ;
#define FSMC_NOR_REG_SIZE	0x40
struct fsmc_regs ;
#define FSMC_BUSY_WAIT_TIMEOUT	(1 * HZ)
#define FSMC_RESET		(1 << 0)
#define FSMC_WAITON		(1 << 1)
#define FSMC_ENABLE		(1 << 2)
#define FSMC_DEVTYPE_NAND	(1 << 3)
#define FSMC_DEVWID_8		(0 << 4)
#define FSMC_DEVWID_16		(1 << 4)
#define FSMC_ECCEN		(1 << 6)
#define FSMC_ECCPLEN_512	(0 << 7)
#define FSMC_ECCPLEN_256	(1 << 7)
#define FSMC_TCLR_1		(1 << 9)
#define FSMC_TAR_1		(1 << 13)
#define FSMC_CODE_RDY		(1 << 15)
#define FSMC_TSET_0		(0 << 0)
#define FSMC_TWAIT_6		(6 << 8)
#define FSMC_THOLD_4		(4 << 16)
#define FSMC_THIZ_1		(1 << 24)
#define MAX_ECCPLACE_ENTRIES	32
struct fsmc_nand_eccplace ;
struct fsmc_eccplace ;
struct fsmc_nand_platform_data ;
extern int __init fsmc_nor_init(struct platform_device *pdev,
unsigned long base, uint32_t bank, uint32_t width);
extern void __init fsmc_init_board_info(struct platform_device *pdev,
struct mtd_partition *partitions, unsigned int nr_partitions,
unsigned int width);
