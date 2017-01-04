extern void omap_check_revision(void);
extern void omap_sram_init(void);
static struct map_desc omap_io_desc[] __initdata = ;
#if defined (CONFIG_ARCH_OMAP730) || defined (CONFIG_ARCH_OMAP850)
static struct map_desc omap7xx_io_desc[] __initdata = ;
static struct map_desc omap1510_io_desc[] __initdata = ;
#if defined(CONFIG_ARCH_OMAP16XX)
static struct map_desc omap16xx_io_desc[] __initdata = ;
void __init omap1_map_common_io(void)
void __init omap1_init_common_hw(void)
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
