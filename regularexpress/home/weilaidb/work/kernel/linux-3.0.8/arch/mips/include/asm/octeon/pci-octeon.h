#define __PCI_OCTEON_H__
#define PCI_CONFIG_SPACE_DELAY 10000
#define CVMX_PCIE_BAR1_PHYS_BASE ((1ull << 32) - (1ull << 28))
#define CVMX_PCIE_BAR1_PHYS_SIZE (1ull << 28)
#define CVMX_PCIE_BAR1_RC_BASE (1ull << 41)
extern int (*octeon_pcibios_map_irq)(const struct pci_dev *dev,
u8 slot, u8 pin);
#define OCTEON_BAR2_PCI_ADDRESS 0x8000000000ull
extern u64 octeon_bar1_pci_phys;
#define OCTEON_PCI_BAR1_HOLE_BITS 5
#define OCTEON_PCI_BAR1_HOLE_SIZE (1ul<<(OCTEON_PCI_BAR1_HOLE_BITS+3))
enum octeon_dma_bar_type ;
extern enum octeon_dma_bar_type octeon_dma_bar_type;
