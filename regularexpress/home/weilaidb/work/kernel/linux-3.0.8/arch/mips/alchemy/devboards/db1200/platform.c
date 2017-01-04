static struct mtd_partition db1200_spiflash_parts[] = ;
static struct flash_platform_data db1200_spiflash_data = ;
static struct spi_board_info db1200_spi_devs[] __initdata = ;
static struct i2c_board_info db1200_i2c_devs[] __initdata = ;
static void au1200_nand_cmd_ctrl(struct mtd_info *mtd, int cmd,
unsigned int ctrl)
static int au1200_nand_device_ready(struct mtd_info *mtd)
static const char *db1200_part_probes[] = ;
static struct mtd_partition db1200_nand_parts[] = ;
struct platform_nand_data db1200_nand_platdata = ;
static struct resource db1200_nand_res[] = ;
static struct platform_device db1200_nand_dev = ;
static struct smc91x_platdata db1200_eth_data = ;
static struct resource db1200_eth_res[] = ;
static struct platform_device db1200_eth_dev = ;
static struct resource db1200_ide_res[] = ;
static u64 ide_dmamask = DMA_BIT_MASK(32);
static struct platform_device db1200_ide_dev = ;
static struct platform_device db1200_rtc_dev = ;
static irqreturn_t db1200_mmc_cd(int irq, void *ptr)
static int db1200_mmc_cd_setup(void *mmc_host, int en)
static void db1200_mmc_set_power(void *mmc_host, int state)
static int db1200_mmc_card_readonly(void *mmc_host)
static int db1200_mmc_card_inserted(void *mmc_host)
static void db1200_mmcled_set(struct led_classdev *led,
enum led_brightness brightness)
static struct led_classdev db1200_mmc_led = ;
struct au1xmmc_platform_data au1xmmc_platdata[] = ;
static struct resource au1200_psc0_res[] = ;
static struct platform_device db1200_i2c_dev = ;
static void db1200_spi_cs_en(struct au1550_spi_info *spi, int cs, int pol)
static struct au1550_spi_info db1200_spi_platdata = ;
static u64 spi_dmamask = DMA_BIT_MASK(32);
static struct platform_device db1200_spi_dev = ;
static struct resource au1200_psc1_res[] = ;
static struct platform_device db1200_audio_dev = ;
static struct platform_device db1200_stac_dev = ;
static struct platform_device *db1200_devs[] __initdata = ;
static int __init db1200_dev_init(void)
device_initcall(db1200_dev_init);
int board_au1200fb_panel(void)
int board_au1200fb_panel_init(void)
int board_au1200fb_panel_shutdown(void)
