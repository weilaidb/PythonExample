#define OMAP1_DMA_BASE			(0xfffed800)
#define OMAP1_LOGICAL_DMA_CH_COUNT	17
#define OMAP1_DMA_STRIDE		0x40
static u32 errata;
static u32 enable_1510_mode;
static u8 dma_stride;
static enum omap_reg_offsets dma_common_ch_start, dma_common_ch_end;
static u16 reg_map[] = ;
static struct resource res[] __initdata = ;
static void __iomem *dma_base;
static inline void dma_write(u32 val, int reg, int lch)
static inline u32 dma_read(int reg, int lch)
static void omap1_clear_lch_regs(int lch)
static void omap1_clear_dma(int lch)
static void omap1_show_dma_caps(void)
static u32 configure_dma_errata(void)
static int __init omap1_system_dma_init(void)
arch_initcall(omap1_system_dma_init);
