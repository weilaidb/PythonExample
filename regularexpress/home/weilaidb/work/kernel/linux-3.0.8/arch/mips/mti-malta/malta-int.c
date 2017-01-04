int gcmp_present = -1;
int gic_present;
static unsigned long _msc01_biu_base;
static unsigned long _gcmp_base;
static unsigned int ipi_map[NR_CPUS];
static DEFINE_RAW_SPINLOCK(mips_irq_lock);
static inline int mips_pcibios_iack(void)
static inline int get_int(void)
static void malta_hw0_irqdispatch(void)
static void malta_ipi_irqdispatch(void)
static void corehi_irqdispatch(void)
static inline int clz(unsigned long x)
static inline unsigned int irq_ffs(unsigned int pending)
asmlinkage void plat_irq_dispatch(void)
#define GIC_MIPS_CPU_IPI_RESCHED_IRQ	3
#define GIC_MIPS_CPU_IPI_CALL_IRQ	4
#define MIPS_CPU_IPI_RESCHED_IRQ 0
#define C_RESCHED C_SW0
#define MIPS_CPU_IPI_CALL_IRQ 1
#define C_CALL C_SW1
static int cpu_ipi_resched_irq, cpu_ipi_call_irq;
static void ipi_resched_dispatch(void)
static void ipi_call_dispatch(void)
static irqreturn_t ipi_resched_interrupt(int irq, void *dev_id)
static irqreturn_t ipi_call_interrupt(int irq, void *dev_id)
static struct irqaction irq_resched = ;
static struct irqaction irq_call = ;
static int gic_resched_int_base;
static int gic_call_int_base;
#define GIC_RESCHED_INT(cpu) (gic_resched_int_base+(cpu))
#define GIC_CALL_INT(cpu) (gic_call_int_base+(cpu))
unsigned int plat_ipi_call_int_xlate(unsigned int cpu)
unsigned int plat_ipi_resched_int_xlate(unsigned int cpu)
static struct irqaction i8259irq = ;
static struct irqaction corehi_irqaction = ;
static msc_irqmap_t __initdata msc_irqmap[] = ;
static int __initdata msc_nr_irqs = ARRAY_SIZE(msc_irqmap);
static msc_irqmap_t __initdata msc_eicirqmap[] = ;
static int __initdata msc_nr_eicirqs = ARRAY_SIZE(msc_eicirqmap);
#define GIC_CPU_NMI GIC_MAP_TO_NMI_MSK
#define X GIC_UNUSED
static struct gic_intr_map gic_intr_map[GIC_NUM_INTRS] = ;
#undef X
int __init gcmp_probe(unsigned long addr, unsigned long size)
int __init gcmp_niocu(void)
void __init gcmp_setregion(int region, unsigned long base,
unsigned long mask, int type)
#if defined(CONFIG_MIPS_MT_SMP)
static void __init fill_ipi_map1(int baseintr, int cpu, int cpupin)
static void __init fill_ipi_map(void)
void __init arch_init_ipiirq(int irq, struct irqaction *action)
void __init arch_init_irq(void)
void malta_be_init(void)
static char *tr[8] = ;
static char *mcmd[32] = ;
static char *core[8] = ;
static char *causes[32] = ;
int malta_be_handler(struct pt_regs *regs, int is_fixup)
