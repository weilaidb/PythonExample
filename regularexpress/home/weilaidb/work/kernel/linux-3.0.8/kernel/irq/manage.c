__read_mostly bool force_irqthreads;
static int __init setup_forced_irqthreads(char *arg)
early_param("threadirqs", setup_forced_irqthreads);
void synchronize_irq(unsigned int irq)
EXPORT_SYMBOL(synchronize_irq);
cpumask_var_t irq_default_affinity;
int irq_can_set_affinity(unsigned int irq)
void irq_set_thread_affinity(struct irq_desc *desc)
static inline bool irq_can_move_pcntxt(struct irq_data *data)
static inline bool irq_move_pending(struct irq_data *data)
static inline void
irq_copy_pending(struct irq_desc *desc, const struct cpumask *mask)
static inline void
irq_get_pending(struct cpumask *mask, struct irq_desc *desc)
static inline bool irq_can_move_pcntxt(struct irq_data *data)
static inline bool irq_move_pending(struct irq_data *data)
static inline void
irq_copy_pending(struct irq_desc *desc, const struct cpumask *mask)
static inline void
irq_get_pending(struct cpumask *mask, struct irq_desc *desc)
int __irq_set_affinity_locked(struct irq_data *data, const struct cpumask *mask)
int irq_set_affinity(unsigned int irq, const struct cpumask *mask)
int irq_set_affinity_hint(unsigned int irq, const struct cpumask *m)
EXPORT_SYMBOL_GPL(irq_set_affinity_hint);
static void irq_affinity_notify(struct work_struct *work)
int
irq_set_affinity_notifier(unsigned int irq, struct irq_affinity_notify *notify)
EXPORT_SYMBOL_GPL(irq_set_affinity_notifier);
static int
setup_affinity(unsigned int irq, struct irq_desc *desc, struct cpumask *mask)
static inline int
setup_affinity(unsigned int irq, struct irq_desc *d, struct cpumask *mask)
int irq_select_affinity_usr(unsigned int irq, struct cpumask *mask)
static inline int
setup_affinity(unsigned int irq, struct irq_desc *desc, struct cpumask *mask)
void __disable_irq(struct irq_desc *desc, unsigned int irq, bool suspend)
static int __disable_irq_nosync(unsigned int irq)
void disable_irq_nosync(unsigned int irq)
EXPORT_SYMBOL(disable_irq_nosync);
void disable_irq(unsigned int irq)
EXPORT_SYMBOL(disable_irq);
void __enable_irq(struct irq_desc *desc, unsigned int irq, bool resume)
void enable_irq(unsigned int irq)
EXPORT_SYMBOL(enable_irq);
static int set_irq_wake_real(unsigned int irq, unsigned int on)
int irq_set_irq_wake(unsigned int irq, unsigned int on)
EXPORT_SYMBOL(irq_set_irq_wake);
int can_request_irq(unsigned int irq, unsigned long irqflags)
int __irq_set_trigger(struct irq_desc *desc, unsigned int irq,
unsigned long flags)
static irqreturn_t irq_default_primary_handler(int irq, void *dev_id)
static irqreturn_t irq_nested_primary_handler(int irq, void *dev_id)
static int irq_wait_for_interrupt(struct irqaction *action)
static void irq_finalize_oneshot(struct irq_desc *desc,
struct irqaction *action, bool force)
static void
irq_thread_check_affinity(struct irq_desc *desc, struct irqaction *action)
static inline void
irq_thread_check_affinity(struct irq_desc *desc, struct irqaction *action)
static irqreturn_t
irq_forced_thread_fn(struct irq_desc *desc, struct irqaction *action)
static irqreturn_t irq_thread_fn(struct irq_desc *desc,
struct irqaction *action)
static int irq_thread(void *data)
void exit_irq_thread(void)
static void irq_setup_forced_threading(struct irqaction *new)
static int
__setup_irq(unsigned int irq, struct irq_desc *desc, struct irqaction *new)
int setup_irq(unsigned int irq, struct irqaction *act)
EXPORT_SYMBOL_GPL(setup_irq);
static struct irqaction *__free_irq(unsigned int irq, void *dev_id)
void remove_irq(unsigned int irq, struct irqaction *act)
EXPORT_SYMBOL_GPL(remove_irq);
void free_irq(unsigned int irq, void *dev_id)
EXPORT_SYMBOL(free_irq);
int request_threaded_irq(unsigned int irq, irq_handler_t handler,
irq_handler_t thread_fn, unsigned long irqflags,
const char *devname, void *dev_id)
EXPORT_SYMBOL(request_threaded_irq);
int request_any_context_irq(unsigned int irq, irq_handler_t handler,
unsigned long flags, const char *name, void *dev_id)
EXPORT_SYMBOL_GPL(request_any_context_irq);
