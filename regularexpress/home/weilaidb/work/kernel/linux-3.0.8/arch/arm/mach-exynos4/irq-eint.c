static DEFINE_SPINLOCK(eint_lock);
static unsigned int eint0_15_data[16];
static unsigned int exynos4_get_irq_nr(unsigned int number)
static inline void exynos4_irq_eint_mask(struct irq_data *data)
static void exynos4_irq_eint_unmask(struct irq_data *data)
static inline void exynos4_irq_eint_ack(struct irq_data *data)
static void exynos4_irq_eint_maskack(struct irq_data *data)
static int exynos4_irq_eint_set_type(struct irq_data *data, unsigned int type)
static struct irq_chip exynos4_irq_eint = ;
static inline void exynos4_irq_demux_eint(unsigned int start)
static void exynos4_irq_demux_eint16_31(unsigned int irq, struct irq_desc *desc)
static void exynos4_irq_eint0_15(unsigned int irq, struct irq_desc *desc)
int __init exynos4_init_irq_eint(void)
arch_initcall(exynos4_init_irq_eint);
