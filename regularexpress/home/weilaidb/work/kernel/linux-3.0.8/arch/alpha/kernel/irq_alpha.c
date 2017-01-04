int __min_ipl;
EXPORT_SYMBOL(__min_ipl);
static void
dummy_perf(unsigned long vector, struct pt_regs *regs)
void (*perf_irq)(unsigned long, struct pt_regs *) = dummy_perf;
EXPORT_SYMBOL(perf_irq);
asmlinkage void
do_entInt(unsigned long type, unsigned long vector,
unsigned long la_ptr, struct pt_regs *regs)
void __init
common_init_isa_dma(void)
void __init
init_IRQ(void)
#define MCHK_K_TPERR           0x0080
#define MCHK_K_TCPERR          0x0082
#define MCHK_K_HERR            0x0084
#define MCHK_K_ECC_C           0x0086
#define MCHK_K_ECC_NC          0x0088
#define MCHK_K_OS_BUGCHECK     0x008A
#define MCHK_K_PAL_BUGCHECK    0x0090
struct mcheck_info __mcheck_info;
void
process_mcheck_info(unsigned long vector, unsigned long la_ptr,
const char *machine, int expected)
struct irqaction timer_irqaction = ;
void __init
init_rtc_irq(void)
struct irqaction isa_cascade_irqaction = ;
struct irqaction timer_cascade_irqaction = ;
struct irqaction halt_switch_irqaction = ;
