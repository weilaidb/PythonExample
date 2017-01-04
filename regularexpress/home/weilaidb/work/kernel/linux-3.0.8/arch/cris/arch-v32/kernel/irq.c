#define CPU_FIXED -1
#if TIMER0_INTR_VECT - FIRST_IRQ < 32
#define TIMER_MASK (1 << (TIMER0_INTR_VECT - FIRST_IRQ))
#undef TIMER_VECT1
#define TIMER_MASK (1 << (TIMER0_INTR_VECT - FIRST_IRQ - 32))
#define TIMER_VECT1
#if defined(CONFIG_ETRAX_KGDB_PORT0)
#define IGNOREMASK (1 << (SER0_INTR_VECT - FIRST_IRQ))
#elif defined(CONFIG_ETRAX_KGDB_PORT1)
#define IGNOREMASK (1 << (SER1_INTR_VECT - FIRST_IRQ))
#elif defined(CONFIG_ETRAX_KGB_PORT2)
#define IGNOREMASK (1 << (SER2_INTR_VECT - FIRST_IRQ))
#elif defined(CONFIG_ETRAX_KGDB_PORT3)
#define IGNOREMASK (1 << (SER3_INTR_VECT - FIRST_IRQ))
DEFINE_SPINLOCK(irq_lock);
struct cris_irq_allocation
;
struct cris_irq_allocation irq_allocations[NR_REAL_IRQS] =
;
static unsigned long irq_regs[NR_CPUS] =
;
#if NR_REAL_IRQS > 32
#define NBR_REGS 2
#define NBR_REGS 1
unsigned long cpu_irq_counters[NR_CPUS];
unsigned long irq_counters[NR_REAL_IRQS];
extern void weird_irq(void);
extern void system_call(void);
extern void nmi_interrupt(void);
extern void multiple_interrupt(void);
extern void gdb_handle_exception(void);
extern void i_mmu_refill(void);
extern void i_mmu_invalid(void);
extern void i_mmu_access(void);
extern void i_mmu_execute(void);
extern void d_mmu_refill(void);
extern void d_mmu_invalid(void);
extern void d_mmu_access(void);
extern void d_mmu_write(void);
extern void kgdb_init(void);
extern void breakpoint(void);
extern void breakh_BUG(void);
BUILD_TIMER_IRQ(0x31, 0)
BUILD_IRQ(0x31)
BUILD_IRQ(0x32)
BUILD_IRQ(0x33)
BUILD_IRQ(0x34)
BUILD_IRQ(0x35)
BUILD_IRQ(0x36)
BUILD_IRQ(0x37)
BUILD_IRQ(0x38)
BUILD_IRQ(0x39)
BUILD_IRQ(0x3a)
BUILD_IRQ(0x3b)
BUILD_IRQ(0x3c)
BUILD_IRQ(0x3d)
BUILD_IRQ(0x3e)
BUILD_IRQ(0x3f)
BUILD_IRQ(0x40)
BUILD_IRQ(0x41)
BUILD_IRQ(0x42)
BUILD_IRQ(0x43)
BUILD_IRQ(0x44)
BUILD_IRQ(0x45)
BUILD_IRQ(0x46)
BUILD_IRQ(0x47)
BUILD_IRQ(0x48)
BUILD_IRQ(0x49)
BUILD_IRQ(0x4a)
BUILD_TIMER_IRQ(0x4b, 0)
BUILD_IRQ(0x4b)
BUILD_IRQ(0x4c)
BUILD_IRQ(0x4d)
BUILD_IRQ(0x4e)
BUILD_IRQ(0x4f)
BUILD_IRQ(0x50)
#if MACH_IRQS > 32
BUILD_IRQ(0x51)
BUILD_IRQ(0x52)
BUILD_IRQ(0x53)
BUILD_IRQ(0x54)
BUILD_IRQ(0x55)
BUILD_IRQ(0x56)
BUILD_IRQ(0x57)
BUILD_IRQ(0x58)
BUILD_IRQ(0x59)
BUILD_IRQ(0x5a)
BUILD_IRQ(0x5b)
BUILD_IRQ(0x5c)
BUILD_IRQ(0x5d)
BUILD_IRQ(0x5e)
BUILD_IRQ(0x5f)
BUILD_IRQ(0x60)
BUILD_IRQ(0x61)
BUILD_IRQ(0x62)
BUILD_IRQ(0x63)
BUILD_IRQ(0x64)
BUILD_IRQ(0x65)
BUILD_IRQ(0x66)
BUILD_IRQ(0x67)
BUILD_IRQ(0x68)
BUILD_IRQ(0x69)
BUILD_IRQ(0x6a)
BUILD_IRQ(0x6b)
BUILD_IRQ(0x6c)
BUILD_IRQ(0x6d)
BUILD_IRQ(0x6e)
BUILD_IRQ(0x6f)
BUILD_IRQ(0x70)
static void (*interrupt[MACH_IRQS])(void) = ;
void
block_irq(int irq, int cpu)
void
unblock_irq(int irq, int cpu)
static int irq_cpu(int irq)
void crisv32_mask_irq(int irq)
void crisv32_unmask_irq(int irq)
static void enable_crisv32_irq(struct irq_data *data)
static void disable_crisv32_irq(struct irq_data *data)
static int set_affinity_crisv32_irq(struct irq_data *data,
const struct cpumask *dest, bool force)
static struct irq_chip crisv32_irq_type = ;
void
set_exception_vector(int n, irqvectptr addr)
extern void do_IRQ(int irq, struct pt_regs * regs);
void
crisv32_do_IRQ(int irq, int block, struct pt_regs* regs)
void
crisv32_do_multiple(struct pt_regs* regs)
void __init
init_IRQ(void)
