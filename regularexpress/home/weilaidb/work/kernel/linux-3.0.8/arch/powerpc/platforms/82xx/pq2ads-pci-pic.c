static DEFINE_RAW_SPINLOCK(pci_pic_lock);
struct pq2ads_pci_pic ;
#define NUM_IRQS 32
static void pq2ads_pci_mask_irq(struct irq_data *d)
static void pq2ads_pci_unmask_irq(struct irq_data *d)
static struct irq_chip pq2ads_pci_ic = ;
static void pq2ads_pci_irq_demux(unsigned int irq, struct irq_desc *desc)
static int pci_pic_host_map(struct irq_host *h, unsigned int virq,
irq_hw_number_t hw)
static struct irq_host_ops pci_pic_host_ops = ;
int __init pq2ads_pci_init_irq(void)
