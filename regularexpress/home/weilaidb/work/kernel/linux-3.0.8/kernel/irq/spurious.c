static int irqfixup __read_mostly;
#define POLL_SPURIOUS_IRQ_INTERVAL (HZ/10)
static void poll_spurious_irqs(unsigned long dummy);
static DEFINE_TIMER(poll_spurious_irq_timer, poll_spurious_irqs, 0, 0);
static int irq_poll_cpu;
static atomic_t irq_poll_active;
bool irq_wait_for_poll(struct irq_desc *desc)
static int try_one_irq(int irq, struct irq_desc *desc, bool force)
static int misrouted_irq(int irq)
static void poll_spurious_irqs(unsigned long dummy)
static inline int bad_action_ret(irqreturn_t action_ret)
static void
__report_bad_irq(unsigned int irq, struct irq_desc *desc,
irqreturn_t action_ret)
static void
report_bad_irq(unsigned int irq, struct irq_desc *desc, irqreturn_t action_ret)
static inline int
try_misrouted_irq(unsigned int irq, struct irq_desc *desc,
irqreturn_t action_ret)
void note_interrupt(unsigned int irq, struct irq_desc *desc,
irqreturn_t action_ret)
int noirqdebug __read_mostly;
int noirqdebug_setup(char *str)
__setup("noirqdebug", noirqdebug_setup);
module_param(noirqdebug, bool, 0644);
MODULE_PARM_DESC(noirqdebug, "Disable irq lockup detection when true");
static int __init irqfixup_setup(char *str)
__setup("irqfixup", irqfixup_setup);
module_param(irqfixup, int, 0644);
static int __init irqpoll_setup(char *str)
__setup("irqpoll", irqpoll_setup);
