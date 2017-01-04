static void q40_irq_handler(unsigned int, struct pt_regs *fp);
static void q40_enable_irq(unsigned int);
static void q40_disable_irq(unsigned int);
unsigned short q40_ablecount[35];
unsigned short q40_state[35];
static int q40_irq_startup(unsigned int irq)
static void q40_irq_shutdown(unsigned int irq)
static struct irq_controller q40_irq_controller = ;
static int disabled;
void __init q40_init_IRQ(void)
int ql_ticks;
static int sound_ticks;
#define SVOL 45
void q40_mksound(unsigned int hz, unsigned int ticks)
static irq_handler_t q40_timer_routine;
static irqreturn_t q40_timer_int (int irq, void * dev)
void q40_sched_init (irq_handler_t timer_routine)
struct IRQ_TABLE;
static struct IRQ_TABLE eirqs[] = ;
static int ccleirq=60;
#define IRQ_INPROGRESS 1
#define DEBUG_Q40INT
static int aliased_irq=0;
static void q40_irq_handler(unsigned int irq, struct pt_regs *fp)
void q40_enable_irq(unsigned int irq)
void q40_disable_irq(unsigned int irq)
unsigned long q40_probe_irq_on(void)
int q40_probe_irq_off(unsigned long irqs)
