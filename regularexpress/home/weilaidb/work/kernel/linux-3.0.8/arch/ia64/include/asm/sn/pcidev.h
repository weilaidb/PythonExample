#define _ASM_IA64_SN_PCI_PCIDEV_H
struct sn_platform_data ;
#define SN_PLATFORM_DATA(busdev) \
((struct sn_platform_data *)(PCI_CONTROLLER(busdev)->platform_data))
#define SN_PCIDEV_INFO(dev)	sn_pcidev_info_get(dev)
#define SN_PCIBUS_BUSSOFT(pci_bus) \
((struct pcibus_bussoft *)(SN_PLATFORM_DATA(pci_bus)->provider_soft))
#define SN_PCIBUS_BUSSOFT_INFO(pci_bus) \
((struct pcibus_info *)(SN_PLATFORM_DATA(pci_bus)->provider_soft))
#define SN_PCIDEV_BUSSOFT(pci_dev) \
(SN_PCIDEV_INFO(pci_dev)->pdi_host_pcidev_info->pdi_pcibus_info)
#define SN_PCIDEV_BUSPROVIDER(pci_dev) \
(SN_PCIDEV_INFO(pci_dev)->pdi_provider)
#define PCIIO_BUS_NONE	255
#define PCIIO_SLOT_NONE 255
#define PCIIO_FUNC_NONE 255
#define PCIIO_VENDOR_ID_NONE	(-1)
struct pcidev_info ;
extern void sn_irq_fixup(struct pci_dev *pci_dev,
struct sn_irq_info *sn_irq_info);
extern void sn_irq_unfixup(struct pci_dev *pci_dev);
extern struct pcidev_info * sn_pcidev_info_get(struct pci_dev *);
extern void sn_bus_fixup(struct pci_bus *);
extern void sn_acpi_bus_fixup(struct pci_bus *);
extern void sn_common_bus_fixup(struct pci_bus *, struct pcibus_bussoft *);
extern void sn_bus_store_sysdata(struct pci_dev *dev);
extern void sn_bus_free_sysdata(void);
extern void sn_generate_path(struct pci_bus *pci_bus, char *address);
extern void sn_io_slot_fixup(struct pci_dev *);
extern void sn_acpi_slot_fixup(struct pci_dev *);
extern void sn_pci_fixup_slot(struct pci_dev *dev, struct pcidev_info *,
struct sn_irq_info *);
extern void sn_pci_unfixup_slot(struct pci_dev *dev);
extern void sn_irq_lh_init(void);
