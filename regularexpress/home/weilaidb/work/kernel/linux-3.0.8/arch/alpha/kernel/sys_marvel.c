#if NR_IRQS < MARVEL_NR_IRQS
# error NR_IRQS < MARVEL_NR_IRQS !!!
static void
io7_device_interrupt(unsigned long vector)
static volatile unsigned long *
io7_get_irq_ctl(unsigned int irq, struct io7 **pio7)
static void
io7_enable_irq(struct irq_data *d)
static void
io7_disable_irq(struct irq_data *d)
static void
marvel_irq_noop(struct irq_data *d)
static struct irq_chip marvel_legacy_irq_type = ;
static struct irq_chip io7_lsi_irq_type = ;
static struct irq_chip io7_msi_irq_type = ;
static void
io7_redirect_irq(struct io7 *io7,
volatile unsigned long *csr,
unsigned int where)
static void
io7_redirect_one_lsi(struct io7 *io7, unsigned int which, unsigned int where)
static void
io7_redirect_one_msi(struct io7 *io7, unsigned int which, unsigned int where)
static void __init
init_one_io7_lsi(struct io7 *io7, unsigned int which, unsigned int where)
static void __init
init_one_io7_msi(struct io7 *io7, unsigned int which, unsigned int where)
static void __init
init_io7_irqs(struct io7 *io7,
struct irq_chip *lsi_ops,
struct irq_chip *msi_ops)
static void __init
marvel_init_irq(void)
static int
marvel_map_irq(struct pci_dev *dev, u8 slot, u8 pin)
static void __init
marvel_init_pci(void)
static void __init
marvel_init_rtc(void)
struct marvel_rtc_time ;
static void
smp_get_rtc_time(void *data)
static void
smp_set_rtc_time(void *data)
static unsigned int
marvel_get_rtc_time(struct rtc_time *time)
static int
marvel_set_rtc_time(struct rtc_time *time)
static void
marvel_smp_callin(void)
struct alpha_machine_vector marvel_ev7_mv __initmv = ;
ALIAS_MV(marvel_ev7)
