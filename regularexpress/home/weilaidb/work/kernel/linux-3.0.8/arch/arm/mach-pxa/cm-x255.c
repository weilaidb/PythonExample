#define GPIO_NAND_CS	(5)
#define GPIO_NAND_ALE	(4)
#define GPIO_NAND_CLE	(3)
#define GPIO_NAND_RB	(10)
static unsigned long cmx255_pin_config[] = ;
#if defined(CONFIG_SPI_PXA2XX)
static struct pxa2xx_spi_master pxa_ssp_master_info = ;
static struct spi_board_info spi_board_info[] __initdata = ;
static void __init cmx255_init_rtc(void)
static inline void cmx255_init_rtc(void)
#if defined(CONFIG_MTD_PHYSMAP) || defined(CONFIG_MTD_PHYSMAP_MODULE)
static struct mtd_partition cmx255_nor_partitions[] = ;
static struct physmap_flash_data cmx255_nor_flash_data[] = ;
static struct resource cmx255_nor_resource = ;
static struct platform_device cmx255_nor = ;
static void __init cmx255_init_nor(void)
static inline void cmx255_init_nor(void)
#if defined(CONFIG_MTD_NAND_GPIO) || defined(CONFIG_MTD_NAND_GPIO_MODULE)
static struct resource cmx255_nand_resource[] = ;
static struct mtd_partition cmx255_nand_parts[] = ;
static struct gpio_nand_platdata cmx255_nand_platdata = ;
static struct platform_device cmx255_nand = ;
static void __init cmx255_init_nand(void)
static inline void cmx255_init_nand(void)
void __init cmx255_init(void)
