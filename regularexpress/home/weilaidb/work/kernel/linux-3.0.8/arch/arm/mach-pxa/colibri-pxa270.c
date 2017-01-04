static mfp_cfg_t colibri_pxa270_evalboard_pin_config[] __initdata = ;
static mfp_cfg_t colibri_pxa270_evalboard_pin_config[] __initdata = ;
static mfp_cfg_t income_pin_config[] __initdata = ;
static mfp_cfg_t income_pin_config[] __initdata = ;
static mfp_cfg_t colibri_pxa270_pin_config[] __initdata = ;
#if defined(CONFIG_MTD_PHYSMAP) || defined(CONFIG_MTD_PHYSMAP_MODULE)
static struct mtd_partition colibri_partitions[] = ;
static struct physmap_flash_data colibri_flash_data[] = ;
static struct resource colibri_pxa270_flash_resource = ;
static struct platform_device colibri_pxa270_flash_device = ;
static void __init colibri_pxa270_nor_init(void)
static inline void colibri_pxa270_nor_init(void)
#if defined(CONFIG_DM9000) || defined(CONFIG_DM9000_MODULE)
static struct resource colibri_pxa270_dm9000_resources[] = ;
static struct platform_device colibri_pxa270_dm9000_device = ;
static void __init colibri_pxa270_eth_init(void)
static inline void colibri_pxa270_eth_init(void)
#if	defined(CONFIG_TOUCHSCREEN_UCB1400) || \
defined(CONFIG_TOUCHSCREEN_UCB1400_MODULE)
static pxa2xx_audio_ops_t colibri_pxa270_ac97_pdata = ;
static struct ucb1400_pdata colibri_pxa270_ucb1400_pdata = ;
static struct platform_device colibri_pxa270_ucb1400_device = ;
static void __init colibri_pxa270_tsc_init(void)
static inline void colibri_pxa270_tsc_init(void)
static int colibri_pxa270_baseboard;
core_param(colibri_pxa270_baseboard, colibri_pxa270_baseboard, int, 0444);
static void __init colibri_pxa270_init(void)
static void __init colibri_pxa270_income_init(void)
MACHINE_START(COLIBRI, "Toradex Colibri PXA270")
.boot_params	= COLIBRI_SDRAM_BASE + 0x100,
.init_machine	= colibri_pxa270_init,
.map_io		= pxa27x_map_io,
.init_irq	= pxa27x_init_irq,
.timer		= &pxa_timer,
MACHINE_END
MACHINE_START(INCOME, "Income s.r.o. SH-Dmaster PXA270 SBC")
.boot_params	= 0xa0000100,
.init_machine	= colibri_pxa270_income_init,
.map_io		= pxa27x_map_io,
.init_irq	= pxa27x_init_irq,
.timer		= &pxa_timer,
MACHINE_END
