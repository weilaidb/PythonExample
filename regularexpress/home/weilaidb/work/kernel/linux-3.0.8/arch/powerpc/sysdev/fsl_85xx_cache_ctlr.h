#define __FSL_85XX_CACHE_CTLR_H__
#define L2CR_L2FI		0x40000000
#define L2CR_L2IO		0x00200000
#define L2CR_SRAM_ZERO		0x00000000
#define L2CR_SRAM_FULL		0x00010000
#define L2CR_SRAM_HALF		0x00020000
#define L2CR_SRAM_TWO_HALFS	0x00030000
#define L2CR_SRAM_QUART		0x00040000
#define L2CR_SRAM_TWO_QUARTS	0x00050000
#define L2CR_SRAM_EIGHTH	0x00060000
#define L2CR_SRAM_TWO_EIGHTH	0x00070000
#define L2SRAM_OPTIMAL_SZ_SHIFT	0x00000003
#define L2SRAM_BAR_MSK_LO18	0xFFFFC000
#define L2SRAM_BARE_MSK_HI4	0x0000000F
enum cache_sram_lock_ways ;
struct mpc85xx_l2ctlr ;
struct sram_parameters ;
extern int instantiate_cache_sram(struct platform_device *dev,
struct sram_parameters sram_params);
extern void remove_cache_sram(struct platform_device *dev);
