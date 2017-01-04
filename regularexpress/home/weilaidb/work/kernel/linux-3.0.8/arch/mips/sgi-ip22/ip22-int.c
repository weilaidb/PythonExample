#undef USE_LIO3_IRQ
struct sgint_regs *sgint;
static char lc0msk_to_irqnr[256];
static char lc1msk_to_irqnr[256];
static char lc2msk_to_irqnr[256];
static char lc3msk_to_irqnr[256];
extern int ip22_eisa_init(void);
static void enable_local0_irq(struct irq_data *d)
static void disable_local0_irq(struct irq_data *d)
static struct irq_chip ip22_local0_irq_type = ;
static void enable_local1_irq(struct irq_data *d)
static void disable_local1_irq(struct irq_data *d)
static struct irq_chip ip22_local1_irq_type = ;
static void enable_local2_irq(struct irq_data *d)
static void disable_local2_irq(struct irq_data *d)
static struct irq_chip ip22_local2_irq_type = ;
static void enable_local3_irq(struct irq_data *d)
static void disable_local3_irq(struct irq_data *d)
static struct irq_chip ip22_local3_irq_type = ;
static void indy_local0_irqdispatch(void)
static void indy_local1_irqdispatch(void)
extern void ip22_be_interrupt(int irq);
static void __irq_entry indy_buserror_irq(void)
static struct irqaction local0_cascade = ;
static struct irqaction local1_cascade = ;
static struct irqaction buserr = ;
static struct irqaction map0_cascade = ;
static struct irqaction map1_cascade = ;
#define SGI_INTERRUPTS	SGINT_END
#define SGI_INTERRUPTS	SGINT_LOCAL3
extern void indy_8254timer_irq(void);
asmlinkage void plat_irq_dispatch(void)
void __init arch_init_irq(void)
