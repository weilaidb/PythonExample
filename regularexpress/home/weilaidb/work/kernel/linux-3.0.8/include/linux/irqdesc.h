#define _LINUX_IRQDESC_H
struct irq_affinity_notify;
struct proc_dir_entry;
struct timer_rand_state;
struct irq_desc  ____cacheline_internodealigned_in_smp;
extern struct irq_desc irq_desc[NR_IRQS];
static inline struct irq_data *irq_desc_get_irq_data(struct irq_desc *desc)
static inline struct irq_chip *irq_desc_get_chip(struct irq_desc *desc)
static inline void *irq_desc_get_chip_data(struct irq_desc *desc)
static inline void *irq_desc_get_handler_data(struct irq_desc *desc)
static inline struct msi_desc *irq_desc_get_msi_desc(struct irq_desc *desc)
static inline void generic_handle_irq_desc(unsigned int irq, struct irq_desc *desc)
int generic_handle_irq(unsigned int irq);
static inline int irq_has_action(unsigned int irq)
static inline void __irq_set_handler_locked(unsigned int irq,
irq_flow_handler_t handler)
static inline void
__irq_set_chip_handler_name_locked(unsigned int irq, struct irq_chip *chip,
irq_flow_handler_t handler, const char *name)
static inline int irq_balancing_disabled(unsigned int irq)
static inline void
irq_set_lockdep_class(unsigned int irq, struct lock_class_key *class)
static inline void
__irq_set_preflow_handler(unsigned int irq, irq_preflow_handler_t handler)
