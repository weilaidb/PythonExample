static struct plat_sci_port scif0_platform_data = ;
static struct platform_device scif0_device = ;
static struct plat_sci_port scif1_platform_data = ;
static struct platform_device scif1_device = ;
static struct plat_sci_port scif2_platform_data = ;
static struct platform_device scif2_device = ;
static struct plat_sci_port scif3_platform_data = ;
static struct platform_device scif3_device = ;
static struct plat_sci_port scif4_platform_data = ;
static struct platform_device scif4_device = ;
static struct plat_sci_port scif5_platform_data = ;
static struct platform_device scif5_device = ;
static struct plat_sci_port scif6_platform_data = ;
static struct platform_device scif6_device = ;
static struct plat_sci_port scif7_platform_data = ;
static struct platform_device scif7_device = ;
static struct plat_sci_port scif8_platform_data = ;
static struct platform_device scif8_device = ;
static struct sh_timer_config cmt10_platform_data = ;
static struct resource cmt10_resources[] = ;
static struct platform_device cmt10_device = ;
static struct sh_timer_config tmu00_platform_data = ;
static struct resource tmu00_resources[] = ;
static struct platform_device tmu00_device = ;
static struct sh_timer_config tmu01_platform_data = ;
static struct resource tmu01_resources[] = ;
static struct platform_device tmu01_device = ;
static struct resource i2c0_resources[] = ;
static struct resource i2c1_resources[] = ;
static struct resource i2c2_resources[] = ;
static struct resource i2c3_resources[] = ;
static struct resource i2c4_resources[] = ;
static struct platform_device i2c0_device = ;
static struct platform_device i2c1_device = ;
static struct platform_device i2c2_device = ;
static struct platform_device i2c3_device = ;
static struct platform_device i2c4_device = ;
enum ;
#define TS_SHIFT
#define TS_INDEX2VAL(i) ((((i) & 3) << 3) | (((i) & 0xc) << (20 - 2)))
#define CHCR_TX(xmit_sz) (DM_FIX | SM_INC | 0x800 | TS_INDEX2VAL((xmit_sz)))
#define CHCR_RX(xmit_sz) (DM_INC | SM_FIX | 0x800 | TS_INDEX2VAL((xmit_sz)))
static const struct sh_dmae_slave_config sh73a0_dmae_slaves[] = ;
#define DMAE_CHANNEL(_offset)					\
static const struct sh_dmae_channel sh73a0_dmae_channels[] = ;
static const unsigned int ts_shift[] = TS_SHIFT;
static struct sh_dmae_pdata sh73a0_dmae_platform_data = ;
static struct resource sh73a0_dmae_resources[] = ;
static struct platform_device dma0_device = ;
static struct platform_device *sh73a0_early_devices[] __initdata = ;
static struct platform_device *sh73a0_late_devices[] __initdata = ;
#define SRCR2          0xe61580b0
void __init sh73a0_add_standard_devices(void)
void __init sh73a0_add_early_devices(void)
