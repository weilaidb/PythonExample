static u64 nlm_irq_mask;
static DEFINE_SPINLOCK(nlm_pic_lock);
static void xlr_pic_enable(struct irq_data *d)
static void xlr_pic_mask(struct irq_data *d)
static void xlr_pci_ack(struct irq_data *d)
static void xls_pcie_ack(struct irq_data *d)
static void xls_pcie_ack_b(struct irq_data *d)
static void xlr_pic_ack(struct irq_data *d)
static struct irq_chip xlr_pic = ;
static void rsvd_irq_handler(struct irq_data *d)
struct irq_chip nlm_cpu_intr = ;
void __init init_xlr_irqs(void)
void __init arch_init_irq(void)
void __cpuinit nlm_smp_irq_init(void)
asmlinkage void plat_irq_dispatch(void)
