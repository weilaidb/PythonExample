struct s6dmac_ctrl s6dmac_ctrl[S6_DMAC_NB];
void s6dmac_put_fifo_cache(u32 dmac, int chan, u32 src, u32 dst, u32 size)
void s6dmac_disable_error_irqs(u32 dmac, u32 mask)
u32 s6dmac_int_sources(u32 dmac, u32 channel)
void s6dmac_release_chan(u32 dmac, int chan)
static inline void __init dmac_init(u32 dmac, u8 chan_nb)
static inline void __init dmac_master(u32 dmac,
u32 m0start, u32 m0end, u32 m1start, u32 m1end)
static void __init s6_dmac_init(void)
arch_initcall(s6_dmac_init);
