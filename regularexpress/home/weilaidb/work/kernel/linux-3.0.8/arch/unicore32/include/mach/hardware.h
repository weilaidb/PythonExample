#define __MACH_PUV3_HARDWARE_H__
#define io_p2v(x)	(void __iomem *)((x) - PKUNITY_MMIO_BASE)
#define io_v2p(x)	(phys_addr_t)((x) + PKUNITY_MMIO_BASE)
#define io_p2v(x)	((x) - PKUNITY_MMIO_BASE)
#define io_v2p(x)	((x) + PKUNITY_MMIO_BASE)
#define PCIBIOS_MIN_IO			0x4000
#define PCIBIOS_MIN_MEM			io_v2p(PKUNITY_PCIMEM_BASE)
#define	HAVE_ARCH_PCI_SET_DMA_MASK
#define pcibios_assign_all_busses()	1
