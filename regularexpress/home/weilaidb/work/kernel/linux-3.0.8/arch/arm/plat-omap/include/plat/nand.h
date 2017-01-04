enum nand_io ;
struct omap_nand_platform_data ;
#define	NAND_IO_SIZE	4
#if defined(CONFIG_MTD_NAND_OMAP2) || defined(CONFIG_MTD_NAND_OMAP2_MODULE)
extern int gpmc_nand_init(struct omap_nand_platform_data *d);
static inline int gpmc_nand_init(struct omap_nand_platform_data *d)
