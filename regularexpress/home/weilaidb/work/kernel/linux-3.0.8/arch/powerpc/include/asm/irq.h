#define _ASM_POWERPC_IRQ_H
#define for_each_irq(i) \
for ((i) = 0; (i) < NR_IRQS; ++(i))
extern atomic_t ppc_n_lost_interrupts;
#define NO_IRQ			(0)
#define NO_IRQ_IGNORE		((unsigned int)-1)
#define NR_IRQS		CONFIG_NR_IRQS
#define NUM_ISA_INTERRUPTS	16
#define NR_IRQS_LEGACY		NUM_ISA_INTERRUPTS
typedef unsigned long irq_hw_number_t;
struct irq_host;
struct radix_tree_root;
struct irq_host_ops ;
struct irq_host ;
struct irq_data;
extern irq_hw_number_t irqd_to_hwirq(struct irq_data *d);
extern irq_hw_number_t virq_to_hw(unsigned int virq);
extern bool virq_is_host(unsigned int virq, struct irq_host *host);
extern struct irq_host *irq_alloc_host(struct device_node *of_node,
unsigned int revmap_type,
unsigned int revmap_arg,
struct irq_host_ops *ops,
irq_hw_number_t inval_irq);
extern struct irq_host *irq_find_host(struct device_node *node);
extern void irq_set_default_host(struct irq_host *host);
extern void irq_set_virq_count(unsigned int count);
extern unsigned int irq_create_mapping(struct irq_host *host,
irq_hw_number_t hwirq);
extern void irq_dispose_mapping(unsigned int virq);
extern unsigned int irq_find_mapping(struct irq_host *host,
irq_hw_number_t hwirq);
extern unsigned int irq_create_direct_mapping(struct irq_host *host);
extern void irq_radix_revmap_insert(struct irq_host *host, unsigned int virq,
irq_hw_number_t hwirq);
extern unsigned int irq_radix_revmap_lookup(struct irq_host *host,
irq_hw_number_t hwirq);
extern unsigned int irq_linear_revmap(struct irq_host *host,
irq_hw_number_t hwirq);
extern unsigned int irq_alloc_virt(struct irq_host *host,
unsigned int count,
unsigned int hint);
extern void irq_free_virt(unsigned int virq, unsigned int count);
extern void irq_early_init(void);
static __inline__ int irq_canonicalize(int irq)
extern int distribute_irqs;
struct irqaction;
struct pt_regs;
#define __ARCH_HAS_DO_SOFTIRQ
#if defined(CONFIG_BOOKE) || defined(CONFIG_40x)
extern struct thread_info *critirq_ctx[NR_CPUS];
extern struct thread_info *dbgirq_ctx[NR_CPUS];
extern struct thread_info *mcheckirq_ctx[NR_CPUS];
extern void exc_lvl_ctx_init(void);
#define exc_lvl_ctx_init()
extern struct thread_info *hardirq_ctx[NR_CPUS];
extern struct thread_info *softirq_ctx[NR_CPUS];
extern void irq_ctx_init(void);
extern void call_do_softirq(struct thread_info *tp);
extern int call_handle_irq(int irq, void *p1,
struct thread_info *tp, void *func);
extern void do_IRQ(struct pt_regs *regs);
