#define _ASM_IRQ_H
static inline void irq_dispose_mapping(unsigned int virq)
static inline int irq_canonicalize(int irq)
#define irq_canonicalize(irq) (irq)
struct irqaction;
extern unsigned long irq_hwmask[];
extern int setup_irq_smtc(unsigned int irq, struct irqaction * new,
unsigned long hwmask);
static inline void smtc_im_ack_irq(unsigned int irq)
static inline void smtc_im_ack_irq(unsigned int irq)
extern int plat_set_irq_affinity(struct irq_data *d,
const struct cpumask *affinity, bool force);
extern void smtc_forward_irq(struct irq_data *d);
static inline int handle_on_other_cpu(unsigned int irq)
static inline int handle_on_other_cpu(unsigned int irq)
static inline void smtc_im_backstop(unsigned int irq)
static inline int smtc_handle_on_other_cpu(unsigned int irq)
static inline void smtc_im_backstop(unsigned int irq)
static inline int smtc_handle_on_other_cpu(unsigned int irq)
extern void do_IRQ(unsigned int irq);
extern void do_IRQ_no_affinity(unsigned int irq);
extern void arch_init_irq(void);
extern void spurious_interrupt(void);
extern int allocate_irqno(void);
extern void alloc_legacy_irqno(void);
extern void free_irqno(unsigned int irq);
#define CP0_LEGACY_COMPARE_IRQ 7
extern int cp0_compare_irq;
extern int cp0_compare_irq_shift;
extern int cp0_perfcount_irq;
