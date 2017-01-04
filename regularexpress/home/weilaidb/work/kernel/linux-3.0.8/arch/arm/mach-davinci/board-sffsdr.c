#define SFFSDR_PHY_ID		"0:01"
static struct mtd_partition davinci_sffsdr_nandflash_partition[] = ;
static struct flash_platform_data davinci_sffsdr_nandflash_data = ;
static struct resource davinci_sffsdr_nandflash_resource[] = ;
static struct platform_device davinci_sffsdr_nandflash_device = ;
static struct at24_platform_data eeprom_info = ;
static struct i2c_board_info __initdata i2c_info[] =  ;
static struct davinci_i2c_platform_data i2c_pdata = ;
static void __init sffsdr_init_i2c(void)
static struct platform_device *davinci_sffsdr_devices[] __initdata = ;
static struct davinci_uart_config uart_config __initdata = ;
static void __init davinci_sffsdr_map_io(void)
static __init void davinci_sffsdr_init(void)
MACHINE_START(SFFSDR, "Lyrtech SFFSDR")
.boot_params  = (DAVINCI_DDR_BASE + 0x100),
.map_io	      = davinci_sffsdr_map_io,
.init_irq     = davinci_irq_init,
.timer	      = &davinci_timer,
.init_machine = davinci_sffsdr_init,
MACHINE_END
