static struct resource s3c2410_uart0_resource[] = ;
static struct resource s3c2410_uart1_resource[] = ;
static struct resource s3c2410_uart2_resource[] = ;
static struct resource s3c2410_uart3_resource[] = ;
struct s3c24xx_uart_resources s3c2410_uart_resources[] __initdata = ;
static struct resource s3c_lcd_resource[] = ;
static u64 s3c_device_lcd_dmamask = 0xffffffffUL;
struct platform_device s3c_device_lcd = ;
EXPORT_SYMBOL(s3c_device_lcd);
void __init s3c24xx_fb_set_platdata(struct s3c2410fb_mach_info *pd)
static struct resource s3c_ts_resource[] = ;
struct platform_device s3c_device_ts = ;
EXPORT_SYMBOL(s3c_device_ts);
static struct s3c2410_ts_mach_info s3c2410ts_info;
void __init s3c24xx_ts_set_platdata(struct s3c2410_ts_mach_info *hard_s3c2410ts_info)
static struct resource s3c_usbgadget_resource[] = ;
struct platform_device s3c_device_usbgadget = ;
EXPORT_SYMBOL(s3c_device_usbgadget);
void __init s3c24xx_udc_set_platdata(struct s3c2410_udc_mach_info *pd)
static struct resource s3c_hsudc_resource[] = ;
static u64 s3c_hsudc_dmamask = DMA_BIT_MASK(32);
struct platform_device s3c_device_usb_hsudc = ;
void __init s3c24xx_hsudc_set_platdata(struct s3c24xx_hsudc_platdata *pd)
static struct resource s3c_iis_resource[] = ;
static u64 s3c_device_iis_dmamask = 0xffffffffUL;
struct platform_device s3c_device_iis = ;
EXPORT_SYMBOL(s3c_device_iis);
static struct resource s3c_rtc_resource[] = ;
struct platform_device s3c_device_rtc = ;
EXPORT_SYMBOL(s3c_device_rtc);
static struct resource s3c_adc_resource[] = ;
struct platform_device s3c_device_adc = ;
static struct resource s3c_sdi_resource[] = ;
struct platform_device s3c_device_sdi = ;
EXPORT_SYMBOL(s3c_device_sdi);
void __init s3c24xx_mci_set_platdata(struct s3c24xx_mci_pdata *pdata)
static struct resource s3c_spi0_resource[] = ;
static u64 s3c_device_spi0_dmamask = 0xffffffffUL;
struct platform_device s3c_device_spi0 = ;
EXPORT_SYMBOL(s3c_device_spi0);
static struct resource s3c_spi1_resource[] = ;
static u64 s3c_device_spi1_dmamask = 0xffffffffUL;
struct platform_device s3c_device_spi1 = ;
EXPORT_SYMBOL(s3c_device_spi1);
static struct resource s3c_camif_resource[] = ;
static u64 s3c_device_camif_dmamask = 0xffffffffUL;
struct platform_device s3c_device_camif = ;
EXPORT_SYMBOL(s3c_device_camif);
static struct resource s3c_ac97_resource[] = ;
static u64 s3c_device_audio_dmamask = 0xffffffffUL;
struct platform_device s3c_device_ac97 = ;
EXPORT_SYMBOL(s3c_device_ac97);
struct platform_device s3c2412_device_iis = ;
EXPORT_SYMBOL(s3c2412_device_iis);
