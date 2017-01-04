#define crisv10_mask_irq(irq_nr) (*R_VECT_MASK_CLR = 1 << (irq_nr));
#define crisv10_unmask_irq(irq_nr) (*R_VECT_MASK_SET = 1 << (irq_nr));
extern void kgdb_init(void);
extern void breakpoint(void);
void
set_int_vector(int n, irqvectptr addr)
void
set_break_vector(int n, irqvectptr addr)
void hwbreakpoint(void);
void IRQ1_interrupt(void);
BUILD_TIMER_IRQ(2, 0x04)
BUILD_IRQ(3, 0x08)
BUILD_IRQ(4, 0x10)
BUILD_IRQ(5, 0x20)
BUILD_IRQ(6, 0x40)
BUILD_IRQ(7, 0x80)
BUILD_IRQ(8, 0x100)
BUILD_IRQ(9, 0x200)
BUILD_IRQ(10, 0x400)
BUILD_IRQ(11, 0x800)
BUILD_IRQ(12, 0x1000)
BUILD_IRQ(13, 0x2000)
void mmu_bus_fault(void);
void multiple_interrupt(void);
BUILD_IRQ(16, 0x10000 | 0x20000)
BUILD_IRQ(17, 0x20000 | 0x10000)
BUILD_IRQ(18, 0x40000)
BUILD_IRQ(19, 0x80000)
BUILD_IRQ(20, 0x100000)
BUILD_IRQ(21, 0x200000)
BUILD_IRQ(22, 0x400000)
BUILD_IRQ(23, 0x800000)
BUILD_IRQ(24, 0x1000000)
BUILD_IRQ(25, 0x2000000)
BUILD_IRQ(31, 0x80000000)
static void (*interrupt[NR_IRQS])(void) = ;
static void enable_crisv10_irq(struct irq_data *data)
static void disable_crisv10_irq(struct irq_data *data)
static struct irq_chip crisv10_irq_type = ;
void weird_irq(void);
void system_call(void);
void do_sigtrap(void);
void gdb_handle_breakpoint(void);
extern void do_IRQ(int irq, struct pt_regs * regs);
void do_multiple_IRQ(struct pt_regs* regs)
void __init
init_IRQ(void)
