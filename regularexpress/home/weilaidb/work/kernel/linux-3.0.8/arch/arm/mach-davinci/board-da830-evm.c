#define DA830_EVM_PHY_ID		""
#define ON_BD_USB_DRV	GPIO_TO_PIN(1, 15)
#define ON_BD_USB_OVC	GPIO_TO_PIN(2, 4)
static const short da830_evm_usb11_pins[] = ;
static da8xx_ocic_handler_t da830_evm_usb_ocic_handler;
static int da830_evm_usb_set_power(unsigned port, int on)
static int da830_evm_usb_get_power(unsigned port)
static int da830_evm_usb_get_oci(unsigned port)
static irqreturn_t da830_evm_usb_ocic_irq(int, void *);
static int da830_evm_usb_ocic_notify(da8xx_ocic_handler_t handler)
static struct da8xx_ohci_root_hub da830_evm_usb11_pdata = ;
static irqreturn_t da830_evm_usb_ocic_irq(int irq, void *dev_id)
static __init void da830_evm_usb_init(void)
static struct davinci_uart_config da830_evm_uart_config __initdata = ;
static const short da830_evm_mcasp1_pins[] = ;
static u8 da830_iis_serializer_direction[] = ;
static struct snd_platform_data da830_evm_snd_data = ;
static const short da830_evm_mmc_sd_pins[] = ;
#define DA830_MMCSD_WP_PIN		GPIO_TO_PIN(2, 1)
#define DA830_MMCSD_CD_PIN		GPIO_TO_PIN(2, 2)
static int da830_evm_mmc_get_ro(int index)
static int da830_evm_mmc_get_cd(int index)
static struct davinci_mmc_config da830_evm_mmc_config = ;
static inline void da830_evm_init_mmc(void)
static const short da830_evm_emif25_pins[] = ;
#if defined(CONFIG_MMC_DAVINCI) || defined(CONFIG_MMC_DAVINCI_MODULE)
#define HAS_MMC	1
#define HAS_MMC	0
static struct mtd_partition da830_evm_nand_partitions[] = ;
static uint8_t da830_evm_nand_bbt_pattern[] = ;
static uint8_t da830_evm_nand_mirror_pattern[] = ;
static struct nand_bbt_descr da830_evm_nand_bbt_main_descr = ;
static struct nand_bbt_descr da830_evm_nand_bbt_mirror_descr = ;
static struct davinci_aemif_timing da830_evm_nandflash_timing = ;
static struct davinci_nand_pdata da830_evm_nand_pdata = ;
static struct resource da830_evm_nand_resources[] = ;
static struct platform_device da830_evm_nand_device = ;
static inline void da830_evm_init_nand(int mux_mode)
static inline void da830_evm_init_nand(int mux_mode)
static inline void da830_evm_init_lcdc(int mux_mode)
static inline void da830_evm_init_lcdc(int mux_mode)
static struct at24_platform_data da830_evm_i2c_eeprom_info = ;
static int __init da830_evm_ui_expander_setup(struct i2c_client *client,
int gpio, unsigned ngpio, void *context)
static int da830_evm_ui_expander_teardown(struct i2c_client *client, int gpio,
unsigned ngpio, void *context)
static struct pcf857x_platform_data __initdata da830_evm_ui_expander_info = ;
static struct i2c_board_info __initdata da830_evm_i2c_devices[] = ;
static struct davinci_i2c_platform_data da830_evm_i2c_0_pdata = ;
static const s16 da830_dma_rsv_chans[][2] = ;
static const s16 da830_dma_rsv_slots[][2] = ;
static struct edma_rsv_info da830_edma_rsv[] = ;
static struct mtd_partition da830evm_spiflash_part[] = ;
static struct flash_platform_data da830evm_spiflash_data = ;
static struct davinci_spi_config da830evm_spiflash_cfg = ;
static struct spi_board_info da830evm_spi_info[] = ;
static __init void da830_evm_init(void)
static int __init da830_evm_console_init(void)
console_initcall(da830_evm_console_init);
static void __init da830_evm_map_io(void)
MACHINE_START(DAVINCI_DA830_EVM, "DaVinci DA830/OMAP-L137/AM17x EVM")
.boot_params	= (DA8XX_DDR_BASE + 0x100),
.map_io		= da830_evm_map_io,
.init_irq	= cp_intc_init,
.timer		= &davinci_timer,
.init_machine	= da830_evm_init,
MACHINE_END
