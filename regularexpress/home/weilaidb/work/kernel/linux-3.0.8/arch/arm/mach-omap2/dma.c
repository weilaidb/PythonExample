#define OMAP2_DMA_STRIDE	0x60
static u32 errata;
static u8 dma_stride;
static struct omap_dma_dev_attr *d;
static enum omap_reg_offsets dma_common_ch_start, dma_common_ch_end;
static u16 reg_map[] = ;
static struct omap_device_pm_latency omap2_dma_latency[] = ;
static void __iomem *dma_base;
static inline void dma_write(u32 val, int reg, int lch)
static inline u32 dma_read(int reg, int lch)
static inline void omap2_disable_irq_lch(int lch)
static void omap2_clear_dma(int lch)
static void omap2_show_dma_caps(void)
static u32 configure_dma_errata(void)
static int __init omap2_system_dma_init_dev(struct omap_hwmod *oh, void *unused)
static int __init omap2_system_dma_init(void)
arch_initcall(omap2_system_dma_init);
