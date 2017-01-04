#define IXDP425_SDA_PIN		7
#define IXDP425_SCL_PIN		6
#define IXDP425_NAND_NCE_PIN	12
#define IXDP425_NAND_CMD_BYTE	0x01
#define IXDP425_NAND_ADDR_BYTE	0x02
static struct flash_platform_data ixdp425_flash_data = ;
static struct resource ixdp425_flash_resource = ;
static struct platform_device ixdp425_flash = ;
#if defined(CONFIG_MTD_NAND_PLATFORM) || \
defined(CONFIG_MTD_NAND_PLATFORM_MODULE)
const char *part_probes[] = ;
static struct mtd_partition ixdp425_partitions[] = ;
static void
ixdp425_flash_nand_cmd_ctrl(struct mtd_info *mtd, int cmd, unsigned int ctrl)
static struct platform_nand_data ixdp425_flash_nand_data = ;
static struct resource ixdp425_flash_nand_resource = ;
static struct platform_device ixdp425_flash_nand = ;
static struct i2c_gpio_platform_data ixdp425_i2c_gpio_data = ;
static struct platform_device ixdp425_i2c_gpio = ;
static struct resource ixdp425_uart_resources[] = ;
static struct plat_serial8250_port ixdp425_uart_data[] = ;
static struct platform_device ixdp425_uart = ;
static struct eth_plat_info ixdp425_plat_eth[] = ;
static struct platform_device ixdp425_eth[] = ;
static struct platform_device *ixdp425_devices[] __initdata = ;
static void __init ixdp425_init(void)
MACHINE_START(IXDP425, "Intel IXDP425 Development Platform")
.map_io		= ixp4xx_map_io,
.init_irq	= ixp4xx_init_irq,
.timer		= &ixp4xx_timer,
.boot_params	= 0x0100,
.init_machine	= ixdp425_init,
MACHINE_END
MACHINE_START(IXDP465, "Intel IXDP465 Development Platform")
.map_io		= ixp4xx_map_io,
.init_irq	= ixp4xx_init_irq,
.timer		= &ixp4xx_timer,
.boot_params	= 0x0100,
.init_machine	= ixdp425_init,
MACHINE_END
MACHINE_START(IXCDP1100, "Intel IXCDP1100 Development Platform")
.map_io		= ixp4xx_map_io,
.init_irq	= ixp4xx_init_irq,
.timer		= &ixp4xx_timer,
.boot_params	= 0x0100,
.init_machine	= ixdp425_init,
MACHINE_END
MACHINE_START(KIXRP435, "Intel KIXRP435 Reference Platform")
.map_io		= ixp4xx_map_io,
.init_irq	= ixp4xx_init_irq,
.timer		= &ixp4xx_timer,
.boot_params	= 0x0100,
.init_machine	= ixdp425_init,
MACHINE_END
