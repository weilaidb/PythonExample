#define _LANTIQ_PLATFORM_H__
enum ;
#define PCI_EXIN0	0x0001
#define PCI_EXIN1	0x0002
#define PCI_EXIN2	0x0004
#define PCI_EXIN3	0x0008
#define PCI_EXIN4	0x0010
#define PCI_EXIN5	0x0020
#define PCI_EXIN_MAX	6
#define PCI_GNT1	0x0040
#define PCI_GNT2	0x0080
#define PCI_GNT3	0x0100
#define PCI_GNT4	0x0200
#define PCI_REQ1	0x0400
#define PCI_REQ2	0x0800
#define PCI_REQ3	0x1000
#define PCI_REQ4	0x2000
#define PCI_REQ_SHIFT	10
#define PCI_REQ_MASK	0xf
struct ltq_pci_data ;
struct ltq_eth_data ;
