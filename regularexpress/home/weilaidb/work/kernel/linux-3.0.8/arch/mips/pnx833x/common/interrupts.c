static int mips_cpu_timer_irq;
static const unsigned int irq_prio[PNX833X_PIC_NUM_IRQ] =
;
static void pnx833x_timer_dispatch(void)
static void pic_dispatch(void)
asmlinkage void plat_irq_dispatch(void)
static inline void pnx833x_hard_enable_pic_irq(unsigned int irq)
static inline void pnx833x_hard_disable_pic_irq(unsigned int irq)
static DEFINE_RAW_SPINLOCK(pnx833x_irq_lock);
static unsigned int pnx833x_startup_pic_irq(unsigned int irq)
static void pnx833x_enable_pic_irq(struct irq_data *d)
static void pnx833x_disable_pic_irq(struct irq_data *d)
static DEFINE_RAW_SPINLOCK(pnx833x_gpio_pnx833x_irq_lock);
static void pnx833x_enable_gpio_irq(struct irq_data *d)
static void pnx833x_disable_gpio_irq(struct irq_data *d)
static int pnx833x_set_type_gpio_irq(struct irq_data *d, unsigned int flow_type)
static struct irq_chip pnx833x_pic_irq_type = ;
static struct irq_chip pnx833x_gpio_irq_type = ;
void __init arch_init_irq(void)
unsigned int __cpuinit get_c0_compare_int(void)
void __init plat_time_init(void)
