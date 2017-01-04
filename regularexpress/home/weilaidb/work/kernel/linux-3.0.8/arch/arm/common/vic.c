struct vic_device ;
static struct vic_device vic_devices[CONFIG_ARM_VIC_NR];
static int vic_id;
static void vic_init2(void __iomem *base)
static void resume_one_vic(struct vic_device *vic)
static void vic_resume(void)
static void suspend_one_vic(struct vic_device *vic)
static int vic_suspend(void)
struct syscore_ops vic_syscore_ops = ;
static int __init vic_pm_init(void)
late_initcall(vic_pm_init);
static void __init vic_pm_register(void __iomem *base, unsigned int irq, u32 resume_sources)
static inline void vic_pm_register(void __iomem *base, unsigned int irq, u32 arg1)
static void vic_ack_irq(struct irq_data *d)
static void vic_mask_irq(struct irq_data *d)
static void vic_unmask_irq(struct irq_data *d)
#if defined(CONFIG_PM)
static struct vic_device *vic_from_irq(unsigned int irq)
static int vic_set_wake(struct irq_data *d, unsigned int on)
#define vic_set_wake NULL
static struct irq_chip vic_chip = ;
static void __init vic_disable(void __iomem *base)
static void __init vic_clear_interrupts(void __iomem *base)
static void __init vic_set_irq_sources(void __iomem *base,
unsigned int irq_start, u32 vic_sources)
static void __init vic_init_st(void __iomem *base, unsigned int irq_start,
u32 vic_sources)
void __init vic_init(void __iomem *base, unsigned int irq_start,
u32 vic_sources, u32 resume_sources)
