#define __ASM_ARCH_MEMORY_H
#define PLAT_PHYS_OFFSET	UL(0x00000000)
#if defined(CONFIG_ARCH_IOP13XX)
#define IOP13XX_PMMR_V_START (IOP13XX_PMMR_VIRT_MEM_BASE)
#define IOP13XX_PMMR_V_END   (IOP13XX_PMMR_VIRT_MEM_BASE + IOP13XX_PMMR_SIZE)
#define IOP13XX_PMMR_P_START (IOP13XX_PMMR_PHYS_MEM_BASE)
#define IOP13XX_PMMR_P_END   (IOP13XX_PMMR_PHYS_MEM_BASE + IOP13XX_PMMR_SIZE)
static inline dma_addr_t __virt_to_lbus(unsigned long x)
static inline unsigned long __lbus_to_virt(dma_addr_t x)
#define __is_lbus_dma(a)				\
((a) >= IOP13XX_PMMR_P_START && (a) < IOP13XX_PMMR_P_END)
#define __is_lbus_virt(a)				\
((a) >= IOP13XX_PMMR_V_START && (a) < IOP13XX_PMMR_V_END)
#define is_lbus_device(dev) 				\
(dev && strncmp(dev->bus->name, "platform", 8) == 0)
#define __arch_dma_to_virt(dev, addr)					\
()
#define __arch_virt_to_dma(dev, addr)					\
()
#define __arch_pfn_to_dma(dev, pfn)					\
()
#define __arch_dma_to_pfn(dev, addr)	__phys_to_pfn(addr)
