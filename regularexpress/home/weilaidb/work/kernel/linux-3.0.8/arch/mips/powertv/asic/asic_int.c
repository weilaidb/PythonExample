static DEFINE_RAW_SPINLOCK(asic_irq_lock);
static inline int get_int(void)
static void asic_irqdispatch(void)
static inline int clz(unsigned long x)
static inline unsigned int irq_ffs(unsigned int pending)
asmlinkage void plat_irq_dispatch(void)
void __init arch_init_irq(void)
