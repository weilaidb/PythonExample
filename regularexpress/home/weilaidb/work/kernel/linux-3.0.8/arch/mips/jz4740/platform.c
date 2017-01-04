static struct resource jz4740_usb_ohci_resources[] = ;
struct platform_device jz4740_usb_ohci_device = ;
static struct resource jz4740_usb_gdt_resources[] = ;
struct platform_device jz4740_udc_device = ;
static struct resource jz4740_mmc_resources[] = ;
struct platform_device jz4740_mmc_device = ;
static struct resource jz4740_rtc_resources[] = ;
struct platform_device jz4740_rtc_device = ;
static struct resource jz4740_i2c_resources[] = ;
struct platform_device jz4740_i2c_device = ;
static struct resource jz4740_nand_resources[] = ;
struct platform_device jz4740_nand_device = ;
static struct resource jz4740_framebuffer_resources[] = ;
struct platform_device jz4740_framebuffer_device = ;
static struct resource jz4740_i2s_resources[] = ;
struct platform_device jz4740_i2s_device = ;
struct platform_device jz4740_pcm_device = ;
static struct resource jz4740_codec_resources[] = ;
struct platform_device jz4740_codec_device = ;
static struct resource jz4740_adc_resources[] = ;
struct platform_device jz4740_adc_device = ;
#define JZ4740_UART_DATA(_id) \
static struct plat_serial8250_port jz4740_uart_data[] = ;
static struct platform_device jz4740_uart_device = ;
void jz4740_serial_device_register(void)
static struct resource jz4740_wdt_resources[] = ;
struct platform_device jz4740_wdt_device = ;
