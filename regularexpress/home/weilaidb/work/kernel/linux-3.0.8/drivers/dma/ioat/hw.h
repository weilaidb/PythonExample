#define _IOAT_HW_H_
#define IOAT_PCI_VID            0x8086
#define IOAT_MMIO_BAR		0
#define IOAT_PCI_DID_5000       0x1A38
#define IOAT_PCI_DID_CNB        0x360B
#define IOAT_PCI_DID_SCNB       0x65FF
#define IOAT_PCI_DID_SNB        0x402F
#define IOAT_PCI_RID            0x00
#define IOAT_PCI_SVID           0x8086
#define IOAT_PCI_SID            0x8086
#define IOAT_VER_1_2            0x12
#define IOAT_VER_2_0            0x20
#define IOAT_VER_3_0            0x30
#define IOAT_VER_3_2            0x32
int system_has_dca_enabled(struct pci_dev *pdev);
struct ioat_dma_descriptor ;
struct ioat_fill_descriptor ;
struct ioat_xor_descriptor ;
struct ioat_xor_ext_descriptor ;
struct ioat_pq_descriptor ;
struct ioat_pq_ext_descriptor ;
struct ioat_pq_update_descriptor ;
struct ioat_raw_descriptor ;
