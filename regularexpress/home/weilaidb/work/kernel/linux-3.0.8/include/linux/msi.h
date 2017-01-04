#define LINUX_MSI_H
struct msi_msg ;
struct irq_data;
struct msi_desc;
extern void mask_msi_irq(struct irq_data *data);
extern void unmask_msi_irq(struct irq_data *data);
extern void __read_msi_msg(struct msi_desc *entry, struct msi_msg *msg);
extern void __get_cached_msi_msg(struct msi_desc *entry, struct msi_msg *msg);
extern void __write_msi_msg(struct msi_desc *entry, struct msi_msg *msg);
extern void read_msi_msg(unsigned int irq, struct msi_msg *msg);
extern void get_cached_msi_msg(unsigned int irq, struct msi_msg *msg);
extern void write_msi_msg(unsigned int irq, struct msi_msg *msg);
struct msi_desc ;
int arch_setup_msi_irq(struct pci_dev *dev, struct msi_desc *desc);
void arch_teardown_msi_irq(unsigned int irq);
extern int arch_setup_msi_irqs(struct pci_dev *dev, int nvec, int type);
extern void arch_teardown_msi_irqs(struct pci_dev *dev);
extern int arch_msi_check_device(struct pci_dev* dev, int nvec, int type);
