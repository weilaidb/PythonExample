#define IRQ_BANK(irq) ((irq) >> 5)
#define IRQ_BIT(irq)  ((irq) & 0x1f)
struct omap_irq_bank ;
u32 omap_irq_flags;
static unsigned int irq_bank_count;
static struct omap_irq_bank *irq_banks;
static inline unsigned int irq_bank_readl(int bank, int offset)
static inline void irq_bank_writel(unsigned long value, int bank, int offset)
static void omap_ack_irq(struct irq_data *d)
static void omap_mask_irq(struct irq_data *d)
static void omap_unmask_irq(struct irq_data *d)
static void omap_mask_ack_irq(struct irq_data *d)
static int omap_wake_irq(struct irq_data *d, unsigned int enable)
static void omap_irq_set_cfg(int irq, int fiq, int priority, int trigger)
#if defined (CONFIG_ARCH_OMAP730) || defined (CONFIG_ARCH_OMAP850)
static struct omap_irq_bank omap7xx_irq_banks[] = ;
static struct omap_irq_bank omap1510_irq_banks[] = ;
static struct omap_irq_bank omap310_irq_banks[] = ;
#if defined(CONFIG_ARCH_OMAP16XX)
static struct omap_irq_bank omap1610_irq_banks[] = ;
static struct irq_chip omap_irq_chip = ;
void __init omap_init_irq(void)
