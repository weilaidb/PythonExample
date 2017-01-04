unsigned int ioread8(void __iomem *addr)
EXPORT_SYMBOL(ioread8);
unsigned int ioread16(void __iomem *addr)
EXPORT_SYMBOL(ioread16);
unsigned int ioread16be(void __iomem *addr)
EXPORT_SYMBOL(ioread16be);
unsigned int ioread32(void __iomem *addr)
EXPORT_SYMBOL(ioread32);
unsigned int ioread32be(void __iomem *addr)
EXPORT_SYMBOL(ioread32be);
void iowrite8(u8 val, void __iomem *addr)
EXPORT_SYMBOL(iowrite8);
void iowrite16(u16 val, void __iomem *addr)
EXPORT_SYMBOL(iowrite16);
void iowrite16be(u16 val, void __iomem *addr)
EXPORT_SYMBOL(iowrite16be);
void iowrite32(u32 val, void __iomem *addr)
EXPORT_SYMBOL(iowrite32);
void iowrite32be(u32 val, void __iomem *addr)
EXPORT_SYMBOL(iowrite32be);
static inline void mmio_insb(void __iomem *addr, u8 *dst, int count)
static inline void mmio_insw(void __iomem *addr, u16 *dst, int count)
static inline void mmio_insl(void __iomem *addr, u32 *dst, int count)
static inline void mmio_outsb(void __iomem *addr, const u8 *src, int count)
static inline void mmio_outsw(void __iomem *addr, const u16 *src, int count)
static inline void mmio_outsl(void __iomem *addr, const u32 *src, int count)
void ioread8_rep(void __iomem *addr, void *dst, unsigned long count)
EXPORT_SYMBOL(ioread8_rep);
void ioread16_rep(void __iomem *addr, void *dst, unsigned long count)
EXPORT_SYMBOL(ioread16_rep);
void ioread32_rep(void __iomem *addr, void *dst, unsigned long count)
EXPORT_SYMBOL(ioread32_rep);
void iowrite8_rep(void __iomem *addr, const void *src, unsigned long count)
EXPORT_SYMBOL(iowrite8_rep);
void iowrite16_rep(void __iomem *addr, const void *src, unsigned long count)
EXPORT_SYMBOL(iowrite16_rep);
void iowrite32_rep(void __iomem *addr, const void *src, unsigned long count)
EXPORT_SYMBOL(iowrite32_rep);
