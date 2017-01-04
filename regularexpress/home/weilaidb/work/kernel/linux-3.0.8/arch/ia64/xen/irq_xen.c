static int
xen_assign_irq_vector(int irq)
static void
xen_free_irq_vector(int vector)
static DEFINE_PER_CPU(int, xen_timer_irq) = -1;
static DEFINE_PER_CPU(int, xen_ipi_irq) = -1;
static DEFINE_PER_CPU(int, xen_resched_irq) = -1;
static DEFINE_PER_CPU(int, xen_cmc_irq) = -1;
static DEFINE_PER_CPU(int, xen_cmcp_irq) = -1;
static DEFINE_PER_CPU(int, xen_cpep_irq) = -1;
#define NAME_SIZE	15
static DEFINE_PER_CPU(char[NAME_SIZE], xen_timer_name);
static DEFINE_PER_CPU(char[NAME_SIZE], xen_ipi_name);
static DEFINE_PER_CPU(char[NAME_SIZE], xen_resched_name);
static DEFINE_PER_CPU(char[NAME_SIZE], xen_cmc_name);
static DEFINE_PER_CPU(char[NAME_SIZE], xen_cmcp_name);
static DEFINE_PER_CPU(char[NAME_SIZE], xen_cpep_name);
#undef NAME_SIZE
struct saved_irq ;
#define MAX_LATE_IRQ	16
static struct saved_irq saved_percpu_irqs[MAX_LATE_IRQ];
static unsigned short late_irq_cnt;
static unsigned short saved_irq_cnt;
static int xen_slab_ready;
static irqreturn_t
xen_dummy_handler(int irq, void *dev_id)
static irqreturn_t
xen_resched_handler(int irq, void *dev_id)
static struct irqaction xen_ipi_irqaction = ;
static struct irqaction xen_resched_irqaction = ;
static struct irqaction xen_tlb_irqaction = ;
static void
__xen_register_percpu_irq(unsigned int cpu, unsigned int vec,
struct irqaction *action, int save)
static void
xen_register_percpu_irq(ia64_vector vec, struct irqaction *action)
static void
xen_bind_early_percpu_irq(void)
static int __devinit
unbind_evtchn_callback(struct notifier_block *nfb,
unsigned long action, void *hcpu)
static struct notifier_block unbind_evtchn_notifier = ;
void xen_smp_intr_init_early(unsigned int cpu)
void xen_smp_intr_init(void)
void __init
xen_irq_init(void)
void
xen_platform_send_ipi(int cpu, int vector, int delivery_mode, int redirect)
static void __init
xen_register_ipi(void)
static void
xen_resend_irq(unsigned int vector)
const struct pv_irq_ops xen_irq_ops __initdata = ;
