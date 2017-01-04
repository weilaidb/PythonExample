static struct map_desc omap24xx_io_desc[] __initdata = ;
static struct map_desc omap242x_io_desc[] __initdata = ;
static struct map_desc omap243x_io_desc[] __initdata = ;
static struct map_desc omap34xx_io_desc[] __initdata = ;
static struct map_desc omapti816x_io_desc[] __initdata = ;
static struct map_desc omap44xx_io_desc[] __initdata = ;
static void __init _omap2_map_common_io(void)
void __init omap242x_map_common_io(void)
void __init omap243x_map_common_io(void)
void __init omap34xx_map_common_io(void)
void __init omapti816x_map_common_io(void)
void __init omap44xx_map_common_io(void)
static int __init _omap2_init_reprogram_sdrc(void)
static int _set_hwmod_postsetup_state(struct omap_hwmod *oh, void *data)
void __iomem *omap_irq_base;
static inline void omap_irq_base_init(void)
void __init omap2_init_common_infrastructure(void)
void __init omap2_init_common_devices(struct omap_sdrc_params *sdrc_cs0,
struct omap_sdrc_params *sdrc_cs1)
u8 omap_readb(u32 pa)
EXPORT_SYMBOL(omap_readb);
u16 omap_readw(u32 pa)
EXPORT_SYMBOL(omap_readw);
u32 omap_readl(u32 pa)
EXPORT_SYMBOL(omap_readl);
void omap_writeb(u8 v, u32 pa)
EXPORT_SYMBOL(omap_writeb);
void omap_writew(u16 v, u32 pa)
EXPORT_SYMBOL(omap_writew);
void omap_writel(u32 v, u32 pa)
EXPORT_SYMBOL(omap_writel);
