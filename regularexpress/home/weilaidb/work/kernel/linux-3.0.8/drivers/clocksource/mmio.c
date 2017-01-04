struct clocksource_mmio ;
static inline struct clocksource_mmio *to_mmio_clksrc(struct clocksource *c)
cycle_t clocksource_mmio_readl_up(struct clocksource *c)
cycle_t clocksource_mmio_readl_down(struct clocksource *c)
cycle_t clocksource_mmio_readw_up(struct clocksource *c)
cycle_t clocksource_mmio_readw_down(struct clocksource *c)
int __init clocksource_mmio_init(void __iomem *base, const char *name,
unsigned long hz, int rating, unsigned bits,
cycle_t (*read)(struct clocksource *))
