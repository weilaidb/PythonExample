# include <asm/perfmon.h>
#define IRQ_DEBUG	0
#define IRQ_VECTOR_UNASSIGNED	(0)
#define IRQ_UNUSED		(0)
#define IRQ_USED		(1)
#define IRQ_RSVD		(2)
int ia64_first_device_vector = IA64_DEF_FIRST_DEVICE_VECTOR;
int ia64_last_device_vector = IA64_DEF_LAST_DEVICE_VECTOR;
void __iomem *ipi_base_addr = ((void __iomem *)
(__IA64_UNCACHED_OFFSET | IA64_IPI_DEFAULT_BASE_ADDR));
static cpumask_t vector_allocation_domain(int cpu);
__u8 isa_irq_to_vector_map[16] = ;
EXPORT_SYMBOL(isa_irq_to_vector_map);
DEFINE_SPINLOCK(vector_lock);
struct irq_cfg irq_cfg[NR_IRQS] __read_mostly = ;
DEFINE_PER_CPU(int[IA64_NUM_VECTORS], vector_irq) = ;
static cpumask_t vector_table[IA64_NUM_VECTORS] = ;
static int irq_status[NR_IRQS] = ;
int check_irq_used(int irq)
static inline int find_unassigned_irq(void)
static inline int find_unassigned_vector(cpumask_t domain)
static int __bind_irq_vector(int irq, int vector, cpumask_t domain)
int bind_irq_vector(int irq, int vector, cpumask_t domain)
static void __clear_irq_vector(int irq)
static void clear_irq_vector(int irq)
int
ia64_native_assign_irq_vector (int irq)
void
ia64_native_free_irq_vector (int vector)
int
reserve_irq_vector (int vector)
void __setup_vector_irq(int cpu)
#if defined(CONFIG_SMP) && (defined(CONFIG_IA64_GENERIC) || defined(CONFIG_IA64_DIG))
static enum vector_domain_type  vector_domain_type = VECTOR_DOMAIN_NONE;
static cpumask_t vector_allocation_domain(int cpu)
static int __irq_prepare_move(int irq, int cpu)
int irq_prepare_move(int irq, int cpu)
void irq_complete_move(unsigned irq)
static irqreturn_t smp_irq_move_cleanup_interrupt(int irq, void *dev_id)
static struct irqaction irq_move_irqaction = ;
static int __init parse_vector_domain(char *arg)
early_param("vector", parse_vector_domain);
static cpumask_t vector_allocation_domain(int cpu)
void destroy_and_reserve_irq(unsigned int irq)
int create_irq(void)
void destroy_irq(unsigned int irq)
#	define IS_RESCHEDULE(vec)	(vec == IA64_IPI_RESCHEDULE)
#	define IS_LOCAL_TLB_FLUSH(vec)	(vec == IA64_IPI_LOCAL_TLB_FLUSH)
#	define IS_RESCHEDULE(vec)	(0)
#	define IS_LOCAL_TLB_FLUSH(vec)	(0)
void
ia64_handle_irq (ia64_vector vector, struct pt_regs *regs)
void ia64_process_pending_intr(void)
static irqreturn_t dummy_handler (int irq, void *dev_id)
static struct irqaction ipi_irqaction = ;
static struct irqaction resched_irqaction = ;
static struct irqaction tlb_irqaction = ;
void
ia64_native_register_percpu_irq (ia64_vector vec, struct irqaction *action)
void __init
ia64_native_register_ipi(void)
void __init
init_IRQ (void)
void
ia64_send_ipi (int cpu, int vector, int delivery_mode, int redirect)
