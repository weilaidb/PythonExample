#define _COLIBRI_H_
enum ;
#if defined(CONFIG_MACH_COLIBRI_EVALBOARD)
extern void colibri_evalboard_init(void);
static inline void colibri_evalboard_init(void)
#if defined(CONFIG_MACH_COLIBRI_PXA270_INCOME)
extern void colibri_pxa270_income_boardinit(void);
static inline void colibri_pxa270_income_boardinit(void)
#if defined(CONFIG_MMC_PXA) || defined(CONFIG_MMC_PXA_MODULE)
extern void colibri_pxa3xx_init_mmc(mfp_cfg_t *pins, int len, int detect_pin);
static inline void colibri_pxa3xx_init_mmc(mfp_cfg_t *pins, int len, int detect_pin)
#if defined(CONFIG_FB_PXA) || defined(CONFIG_FB_PXA_MODULE)
extern void colibri_pxa3xx_init_lcd(int bl_pin);
static inline void colibri_pxa3xx_init_lcd(int bl_pin)
#if defined(CONFIG_AX88796)
extern void colibri_pxa3xx_init_eth(struct ax_plat_data *plat_data);
#if defined(CONFIG_MTD_NAND_PXA3xx) || defined(CONFIG_MTD_NAND_PXA3xx_MODULE)
extern void colibri_pxa3xx_init_nand(void);
static inline void colibri_pxa3xx_init_nand(void)
#define COLIBRI_SDRAM_BASE	0xa0000000
#define GPIO114_COLIBRI_PXA270_ETH_IRQ	114
#define GPIO0_COLIBRI_PXA270_SD_DETECT	0
#define GPIO113_COLIBRI_PXA270_TS_IRQ	113
#define GPIO13_COLIBRI_PXA300_SD_DETECT	13
#define GPIO28_COLIBRI_PXA320_SD_DETECT	28
