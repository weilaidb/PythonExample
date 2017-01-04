#define ICONTROL_MCP251x_nCS1	(15)
#define ICONTROL_MCP251x_nCS2	(16)
#define ICONTROL_MCP251x_nCS3	(17)
#define ICONTROL_MCP251x_nCS4	(24)
#define ICONTROL_MCP251x_nIRQ1	(74)
#define ICONTROL_MCP251x_nIRQ2	(75)
#define ICONTROL_MCP251x_nIRQ3	(76)
#define ICONTROL_MCP251x_nIRQ4	(77)
static struct pxa2xx_spi_chip mcp251x_chip_info1 = ;
static struct pxa2xx_spi_chip mcp251x_chip_info2 = ;
static struct pxa2xx_spi_chip mcp251x_chip_info3 = ;
static struct pxa2xx_spi_chip mcp251x_chip_info4 = ;
static struct mcp251x_platform_data mcp251x_info = ;
static struct spi_board_info mcp251x_board_info[] = ;
static struct pxa2xx_spi_master pxa_ssp3_spi_master_info = ;
static struct pxa2xx_spi_master pxa_ssp4_spi_master_info = ;
struct platform_device pxa_spi_ssp3 = ;
struct platform_device pxa_spi_ssp4 = ;
static struct platform_device *icontrol_spi_devices[] __initdata = ;
static mfp_cfg_t mfp_can_cfg[] __initdata = ;
static void __init icontrol_can_init(void)
static void __init icontrol_init(void)
MACHINE_START(ICONTROL, "iControl/SafeTcam boards using Embedian MXM-8x10 CoM")
.boot_params	= 0xa0000100,
.map_io		= pxa3xx_map_io,
.init_irq	= pxa3xx_init_irq,
.timer		= &pxa_timer,
.init_machine	= icontrol_init
MACHINE_END
