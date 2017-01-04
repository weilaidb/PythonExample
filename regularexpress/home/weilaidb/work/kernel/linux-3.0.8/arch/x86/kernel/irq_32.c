DEFINE_PER_CPU_SHARED_ALIGNED(irq_cpustat_t, irq_stat);
EXPORT_PER_CPU_SYMBOL(irq_stat);
DEFINE_PER_CPU(struct pt_regs *, irq_regs);
EXPORT_PER_CPU_SYMBOL(irq_regs);
static int check_stack_overflow(void)
static void print_stack_overflow(void)
static inline int check_stack_overflow(void)
static inline void print_stack_overflow(void)
union irq_ctx  __attribute__((aligned(THREAD_SIZE)));
static DEFINE_PER_CPU(union irq_ctx *, hardirq_ctx);
static DEFINE_PER_CPU(union irq_ctx *, softirq_ctx);
static void call_on_stack(void *func, void *stack)
static inline int
execute_on_irq_stack(int overflow, struct irq_desc *desc, int irq)
void __cpuinit irq_ctx_init(int cpu)
asmlinkage void do_softirq(void)
bool handle_irq(unsigned irq, struct pt_regs *regs)
