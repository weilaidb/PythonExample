static DEFINE_SPINLOCK(ht_irq_lock);
struct ht_irq_cfg ;
void write_ht_irq_msg(unsigned int irq, struct ht_irq_msg *msg)
void fetch_ht_irq_msg(unsigned int irq, struct ht_irq_msg *msg)
void mask_ht_irq(struct irq_data *data)
void unmask_ht_irq(struct irq_data *data)
int __ht_create_irq(struct pci_dev *dev, int idx, ht_irq_update_t *update)
int ht_create_irq(struct pci_dev *dev, int idx)
void ht_destroy_irq(unsigned int irq)
EXPORT_SYMBOL(__ht_create_irq);
EXPORT_SYMBOL(ht_create_irq);
EXPORT_SYMBOL(ht_destroy_irq);
