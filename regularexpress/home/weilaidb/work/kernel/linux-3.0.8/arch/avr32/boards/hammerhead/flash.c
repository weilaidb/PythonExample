#define HAMMERHEAD_USB_PERIPH_GCLK0	0x40000000
#define HAMMERHEAD_USB_PERIPH_CS2	0x02000000
#define HAMMERHEAD_USB_PERIPH_EXTINT0	0x02000000
#define HAMMERHEAD_FPGA_PERIPH_MOSI	0x00000002
#define HAMMERHEAD_FPGA_PERIPH_SCK	0x00000020
#define HAMMERHEAD_FPGA_PERIPH_EXTINT3	0x10000000
static struct smc_timing flash_timing __initdata = ;
static struct smc_config flash_config __initdata = ;
static struct mtd_partition flash_parts[] = ;
static struct physmap_flash_data flash_data = ;
static struct resource flash_resource = ;
static struct platform_device flash_device = ;
static struct smc_timing isp1160_timing __initdata = ;
static struct smc_config isp1160_config __initdata = ;
void isp116x_delay(struct device *dev, int delay)
static struct  isp116x_platform_data isp1160_data = ;
static struct resource isp1160_resource[] = ;
static struct platform_device isp1160_device = ;
static int __init hammerhead_usbh_init(void)
static struct smc_timing fpga_timing __initdata = ;
static struct smc_config fpga_config __initdata = ;
static struct resource hh_fpga0_resource[] = ;
static u64 hh_fpga0_dma_mask = DMA_BIT_MASK(32);
static struct platform_device hh_fpga0_device = ;
static struct clk hh_fpga0_spi_clk = ;
struct platform_device *__init at32_add_device_hh_fpga(void)
static int __init hammerhead_flash_init(void)
device_initcall(hammerhead_flash_init);
