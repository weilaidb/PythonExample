#define _ASM_IA64_SN_PCI_PCIBUS_PROVIDER_H
#define PCIIO_ASIC_TYPE_UNKNOWN	0
#define PCIIO_ASIC_TYPE_PPB	1
#define PCIIO_ASIC_TYPE_PIC	2
#define PCIIO_ASIC_TYPE_TIOCP	3
#define PCIIO_ASIC_TYPE_TIOCA	4
#define PCIIO_ASIC_TYPE_TIOCE	5
#define PCIIO_ASIC_MAX_TYPES	6
struct pcibus_bussoft ;
struct pci_controller;
struct sn_pcibus_provider ;
#define SN_DMA_ADDRTYPE(x)	((x) & 0xf)
#define     SN_DMA_ADDR_PHYS	1
#define     SN_DMA_ADDR_XIO	2
#define SN_DMA_MSI		0x10
extern struct sn_pcibus_provider *sn_pci_provider[];
