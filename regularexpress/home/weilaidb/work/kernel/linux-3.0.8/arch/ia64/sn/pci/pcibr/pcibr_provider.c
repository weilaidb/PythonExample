int
sal_pcibr_slot_enable(struct pcibus_info *soft, int device, void *resp,
char **ssdt)
int
sal_pcibr_slot_disable(struct pcibus_info *soft, int device, int action,
void *resp)
static int sal_pcibr_error_interrupt(struct pcibus_info *soft)
u16 sn_ioboard_to_pci_bus(struct pci_bus *pci_bus)
static irqreturn_t
pcibr_error_intr_handler(int irq, void *arg)
void *
pcibr_bus_fixup(struct pcibus_bussoft *prom_bussoft, struct pci_controller *controller)
void pcibr_force_interrupt(struct sn_irq_info *sn_irq_info)
void pcibr_target_interrupt(struct sn_irq_info *sn_irq_info)
struct sn_pcibus_provider pcibr_provider = ;
int
pcibr_init_provider(void)
EXPORT_SYMBOL_GPL(sal_pcibr_slot_enable);
EXPORT_SYMBOL_GPL(sal_pcibr_slot_disable);
EXPORT_SYMBOL_GPL(sn_ioboard_to_pci_bus);
