# define IRQ_BITMAP_BITS	(NR_IRQS + 8196)
# define IRQ_BITMAP_BITS	NR_IRQS
#define istate core_internal_state__do_not_mess_with_it
extern int noirqdebug;
enum ;
enum ;
#define irq_data_to_desc(data)	container_of(data, struct irq_desc, irq_data)
extern int __irq_set_trigger(struct irq_desc *desc, unsigned int irq,
unsigned long flags);
extern void __disable_irq(struct irq_desc *desc, unsigned int irq, bool susp);
extern void __enable_irq(struct irq_desc *desc, unsigned int irq, bool resume);
extern int irq_startup(struct irq_desc *desc);
extern void irq_shutdown(struct irq_desc *desc);
extern void irq_enable(struct irq_desc *desc);
extern void irq_disable(struct irq_desc *desc);
extern void mask_irq(struct irq_desc *desc);
extern void unmask_irq(struct irq_desc *desc);
extern void init_kstat_irqs(struct irq_desc *desc, int node, int nr);
irqreturn_t handle_irq_event_percpu(struct irq_desc *desc, struct irqaction *action);
irqreturn_t handle_irq_event(struct irq_desc *desc);
void check_irq_resend(struct irq_desc *desc, unsigned int irq);
bool irq_wait_for_poll(struct irq_desc *desc);
extern void register_irq_proc(unsigned int irq, struct irq_desc *desc);
extern void unregister_irq_proc(unsigned int irq, struct irq_desc *desc);
extern void register_handler_proc(unsigned int irq, struct irqaction *action);
extern void unregister_handler_proc(unsigned int irq, struct irqaction *action);
static inline void register_irq_proc(unsigned int irq, struct irq_desc *desc)
static inline void unregister_irq_proc(unsigned int irq, struct irq_desc *desc)
static inline void register_handler_proc(unsigned int irq,
struct irqaction *action)
static inline void unregister_handler_proc(unsigned int irq,
struct irqaction *action)
extern int irq_select_affinity_usr(unsigned int irq, struct cpumask *mask);
extern void irq_set_thread_affinity(struct irq_desc *desc);
static inline void chip_bus_lock(struct irq_desc *desc)
static inline void chip_bus_sync_unlock(struct irq_desc *desc)
struct irq_desc *
__irq_get_desc_lock(unsigned int irq, unsigned long *flags, bool bus);
void __irq_put_desc_unlock(struct irq_desc *desc, unsigned long flags, bool bus);
static inline struct irq_desc *
irq_get_desc_buslock(unsigned int irq, unsigned long *flags)
static inline void
irq_put_desc_busunlock(struct irq_desc *desc, unsigned long flags)
static inline struct irq_desc *
irq_get_desc_lock(unsigned int irq, unsigned long *flags)
static inline void
irq_put_desc_unlock(struct irq_desc *desc, unsigned long flags)
static inline void irqd_set_move_pending(struct irq_data *d)
static inline void irqd_clr_move_pending(struct irq_data *d)
static inline void irqd_clear(struct irq_data *d, unsigned int mask)
static inline void irqd_set(struct irq_data *d, unsigned int mask)
static inline bool irqd_has_set(struct irq_data *d, unsigned int mask)
