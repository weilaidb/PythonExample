#define IS_HW_CLEARED 1
DEFINE_PER_CPU(unsigned long long, interrupts_enabled_mask) =
INITIAL_INTERRUPTS_ENABLED;
EXPORT_PER_CPU_SYMBOL(interrupts_enabled_mask);
DEFINE_PER_CPU(irq_cpustat_t, irq_stat) ____cacheline_internodealigned_in_smp;
EXPORT_PER_CPU_SYMBOL(irq_stat);
static DEFINE_PER_CPU(unsigned long, irq_disable_mask)
____cacheline_internodealigned_in_smp;
static DEFINE_PER_CPU(int, irq_depth);
#if CHIP_HAS_IPI()
static unsigned long available_irqs = ~(1UL << IRQ_RESCHEDULE);
static DEFINE_SPINLOCK(available_irqs_lock);
#if CHIP_HAS_IPI()
#define mask_irqs(irq_mask) __insn_mtspr(SPR_IPI_MASK_SET_K, irq_mask)
#define unmask_irqs(irq_mask) __insn_mtspr(SPR_IPI_MASK_RESET_K, irq_mask)
#define clear_irqs(irq_mask) __insn_mtspr(SPR_IPI_EVENT_RESET_K, irq_mask)
#define mask_irqs(irq_mask) hv_disable_intr(irq_mask)
#define unmask_irqs(irq_mask) hv_enable_intr(irq_mask)
#define clear_irqs(irq_mask) hv_clear_intr(irq_mask)
void tile_dev_intr(struct pt_regs *regs, int intnum)
void enable_percpu_irq(unsigned int irq)
EXPORT_SYMBOL(enable_percpu_irq);
void disable_percpu_irq(unsigned int irq)
EXPORT_SYMBOL(disable_percpu_irq);
static void tile_irq_chip_mask(struct irq_data *d)
static void tile_irq_chip_unmask(struct irq_data *d)
static void tile_irq_chip_ack(struct irq_data *d)
static void tile_irq_chip_eoi(struct irq_data *d)
static struct irq_chip tile_irq_chip = ;
void __init init_IRQ(void)
void __cpuinit setup_irq_regs(void)
void tile_irq_activate(unsigned int irq, int tile_irq_type)
EXPORT_SYMBOL(tile_irq_activate);
void ack_bad_irq(unsigned int irq)
#if CHIP_HAS_IPI()
int create_irq(void)
EXPORT_SYMBOL(create_irq);
void destroy_irq(unsigned int irq)
EXPORT_SYMBOL(destroy_irq);
