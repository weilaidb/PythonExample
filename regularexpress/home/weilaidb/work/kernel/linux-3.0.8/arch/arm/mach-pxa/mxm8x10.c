static mfp_cfg_t mfp_cfg[] __initdata = ;
#if defined(CONFIG_MMC)
static struct pxamci_platform_data mxm_8x10_mci_platform_data = ;
void __init mxm_8x10_mmc_init(void)
static struct pxaohci_platform_data mxm_8x10_ohci_platform_data = ;
void __init mxm_8x10_usb_host_init(void)
static struct platform_device mxm_8x10_ac97_device = ;
void __init mxm_8x10_ac97_init(void)
#if defined(CONFIG_MTD_NAND_PXA3xx) || defined(CONFIG_MTD_NAND_PXA3xx_MODULE)
#define NAND_BLOCK_SIZE SZ_128K
#define NB(x)           (NAND_BLOCK_SIZE * (x))
static struct mtd_partition mxm_8x10_nand_partitions[] = ;
static struct pxa3xx_nand_platform_data mxm_8x10_nand_info = ;
static void __init mxm_8x10_nand_init(void)
static inline void mxm_8x10_nand_init(void)
static struct resource dm9k_resources[] = ;
static struct dm9000_plat_data dm9k_plat_data = ;
static struct platform_device dm9k_device = ;
static void __init mxm_8x10_ethernet_init(void)
static void __init mxm_8x10_uarts_init(void)
static struct i2c_board_info __initdata mxm_8x10_i2c_devices[] = ;
static void __init mxm_8x10_i2c_init(void)
void __init mxm_8x10_barebones_init(void)
