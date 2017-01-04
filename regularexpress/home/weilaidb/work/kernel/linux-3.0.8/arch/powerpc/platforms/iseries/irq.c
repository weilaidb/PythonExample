enum pci_event_type ;
struct pci_event ;
static DEFINE_SPINLOCK(pending_irqs_lock);
static int num_pending_irqs;
static int pending_irqs[NR_IRQS];
static void int_received(struct pci_event *event)
static void pci_event_handler(struct HvLpEvent *event)
#define REAL_IRQ_TO_SUBBUS(irq)	(((irq) >> 14) & 0xff)
#define REAL_IRQ_TO_BUS(irq)	((((irq) >> 6) & 0xff) + 1)
#define REAL_IRQ_TO_IDSEL(irq)	((((irq) >> 3) & 7) + 1)
#define REAL_IRQ_TO_FUNC(irq)	((irq) & 7)
static void iseries_enable_IRQ(struct irq_data *d)
static unsigned int iseries_startup_IRQ(struct irq_data *d)
void __init iSeries_activate_IRQs()
static void iseries_shutdown_IRQ(struct irq_data *d)
static void iseries_disable_IRQ(struct irq_data *d)
static void iseries_end_IRQ(struct irq_data *d)
static struct irq_chip iseries_pic = ;
int __init iSeries_allocate_IRQ(HvBusNumber bus,
HvSubBusNumber sub_bus, u32 bsubbus)
unsigned int iSeries_get_irq(void)
static int iseries_irq_host_map(struct irq_host *h, unsigned int virq,
irq_hw_number_t hw)
static int iseries_irq_host_match(struct irq_host *h, struct device_node *np)
static struct irq_host_ops iseries_irq_host_ops = ;
void __init iSeries_init_IRQ(void)
