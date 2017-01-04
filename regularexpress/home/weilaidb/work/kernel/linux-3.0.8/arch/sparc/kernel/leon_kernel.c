struct leon3_irqctrl_regs_map *leon3_irqctrl_regs;
struct leon3_gptimer_regs_map *leon3_gptimer_regs;
int leondebug_irq_disable;
int leon_debug_irqout;
static int dummy_master_l10_counter;
unsigned long amba_system_id;
static DEFINE_SPINLOCK(leon_irq_lock);
unsigned long leon3_gptimer_irq;
unsigned long leon3_gptimer_idx;
int leon3_ticker_irq;
unsigned int sparc_leon_eirq;
#define LEON_IMASK(cpu) (&leon3_irqctrl_regs->mask[cpu])
#define LEON_IACK (&leon3_irqctrl_regs->iclear)
#define LEON_DO_ACK_HW 1
static inline unsigned int leon_eirq_get(int cpu)
static void leon_handle_ext_irq(unsigned int irq, struct irq_desc *desc)
void leon_eirq_setup(unsigned int eirq)
static inline unsigned long get_irqmask(unsigned int irq)
static int irq_choose_cpu(const struct cpumask *affinity)
#define irq_choose_cpu(affinity) boot_cpu_id
static int leon_set_affinity(struct irq_data *data, const struct cpumask *dest,
bool force)
static void leon_unmask_irq(struct irq_data *data)
static void leon_mask_irq(struct irq_data *data)
static unsigned int leon_startup_irq(struct irq_data *data)
static void leon_shutdown_irq(struct irq_data *data)
static void leon_eoi_irq(struct irq_data *data)
static struct irq_chip leon_irq = ;
unsigned int leon_build_device_irq(unsigned int real_irq,
irq_flow_handler_t flow_handler,
const char *name, int do_ack)
static unsigned int _leon_build_device_irq(struct platform_device *op,
unsigned int real_irq)
void leon_update_virq_handling(unsigned int virq,
irq_flow_handler_t flow_handler,
const char *name, int do_ack)
void __init leon_init_timers(irq_handler_t counter_fn)
void leon_clear_clock_irq(void)
void leon_load_profile_irq(int cpu, unsigned int limit)
void __init leon_trans_init(struct device_node *dp)
void __initdata (*prom_amba_init)(struct device_node *dp, struct device_node ***nextp) = 0;
void __init leon_node_init(struct device_node *dp, struct device_node ***nextp)
void leon_set_cpu_int(int cpu, int level)
static void leon_clear_ipi(int cpu, int level)
static void leon_set_udt(int cpu)
void leon_clear_profile_irq(int cpu)
void leon_enable_irq_cpu(unsigned int irq_nr, unsigned int cpu)
void __init leon_init_IRQ(void)
void __init leon_init(void)
