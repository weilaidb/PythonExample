#define __MACH_TEGRA_IO_H
#define IO_SPACE_LIMIT 0xffff
#define IO_IRAM_PHYS	0x40000000
#define IO_IRAM_VIRT	0xFE400000
#define IO_IRAM_SIZE	SZ_256K
#define IO_CPU_PHYS     0x50040000
#define IO_CPU_VIRT     0xFE000000
#define IO_CPU_SIZE	SZ_16K
#define IO_PPSB_PHYS	0x60000000
#define IO_PPSB_VIRT	0xFE200000
#define IO_PPSB_SIZE	SZ_1M
#define IO_APB_PHYS	0x70000000
#define IO_APB_VIRT	0xFE300000
#define IO_APB_SIZE	SZ_1M
#define IO_TO_VIRT_BETWEEN(p, st, sz)	((p) >= (st) && (p) < ((st) + (sz)))
#define IO_TO_VIRT_XLATE(p, pst, vst)	(((p) - (pst) + (vst)))
#define IO_TO_VIRT(n) ( \
IO_TO_VIRT_BETWEEN((n), IO_PPSB_PHYS, IO_PPSB_SIZE) ?		\
IO_TO_VIRT_XLATE((n), IO_PPSB_PHYS, IO_PPSB_VIRT) :	\
IO_TO_VIRT_BETWEEN((n), IO_APB_PHYS, IO_APB_SIZE) ?		\
IO_TO_VIRT_XLATE((n), IO_APB_PHYS, IO_APB_VIRT) :	\
IO_TO_VIRT_BETWEEN((n), IO_CPU_PHYS, IO_CPU_SIZE) ?		\
IO_TO_VIRT_XLATE((n), IO_CPU_PHYS, IO_CPU_VIRT) :	\
IO_TO_VIRT_BETWEEN((n), IO_IRAM_PHYS, IO_IRAM_SIZE) ?		\
IO_TO_VIRT_XLATE((n), IO_IRAM_PHYS, IO_IRAM_VIRT) :	\
0)
#define __arch_ioremap		tegra_ioremap
#define __arch_iounmap		tegra_iounmap
void __iomem *tegra_ioremap(unsigned long phys, size_t size, unsigned int type);
void tegra_iounmap(volatile void __iomem *addr);
#define IO_ADDRESS(n) ((void __iomem *) IO_TO_VIRT(n))
extern void __iomem *tegra_pcie_io_base;
static inline void __iomem *__io(unsigned long addr)
static inline void __iomem *__io(unsigned long addr)
#define __io(a)         __io(a)
#define __mem_pci(a)    (a)
