unsigned int reset_status;
EXPORT_SYMBOL(reset_status);
#define NR_FREQS	16
static const unsigned short cclk_frequency_100khz[NR_FREQS] = ;
unsigned int sa11x0_freq_to_ppcr(unsigned int khz)
unsigned int sa11x0_ppcr_to_freq(unsigned int idx)
int sa11x0_verify_speed(struct cpufreq_policy *policy)
unsigned int sa11x0_getspeed(unsigned int cpu)
static void sa1100_power_off(void)
static void sa11x0_register_device(struct platform_device *dev, void *data)
static struct resource sa11x0udc_resources[] = ;
static u64 sa11x0udc_dma_mask = 0xffffffffUL;
static struct platform_device sa11x0udc_device = ;
static struct resource sa11x0uart1_resources[] = ;
static struct platform_device sa11x0uart1_device = ;
static struct resource sa11x0uart3_resources[] = ;
static struct platform_device sa11x0uart3_device = ;
static struct resource sa11x0mcp_resources[] = ;
static u64 sa11x0mcp_dma_mask = 0xffffffffUL;
static struct platform_device sa11x0mcp_device = ;
void sa11x0_register_mcp(struct mcp_plat_data *data)
static struct resource sa11x0ssp_resources[] = ;
static u64 sa11x0ssp_dma_mask = 0xffffffffUL;
static struct platform_device sa11x0ssp_device = ;
static struct resource sa11x0fb_resources[] = ;
static struct platform_device sa11x0fb_device = ;
static struct platform_device sa11x0pcmcia_device = ;
static struct platform_device sa11x0mtd_device = ;
void sa11x0_register_mtd(struct flash_platform_data *flash,
struct resource *res, int nr)
static struct resource sa11x0ir_resources[] = ;
static struct platform_device sa11x0ir_device = ;
void sa11x0_register_irda(struct irda_platform_data *irda)
static struct platform_device sa11x0rtc_device = ;
static struct platform_device *sa11x0_devices[] __initdata = ;
static int __init sa1100_init(void)
arch_initcall(sa1100_init);
void (*sa1100fb_backlight_power)(int on);
void (*sa1100fb_lcd_power)(int on);
EXPORT_SYMBOL(sa1100fb_backlight_power);
EXPORT_SYMBOL(sa1100fb_lcd_power);
static struct map_desc standard_io_desc[] __initdata = ;
void __init sa1100_map_io(void)
void __init sa1110_mb_disable(void)
void __devinit sa1110_mb_enable(void)
