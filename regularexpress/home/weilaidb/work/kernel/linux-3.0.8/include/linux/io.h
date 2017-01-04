#define _LINUX_IO_H
struct device;
void __iowrite32_copy(void __iomem *to, const void *from, size_t count);
void __iowrite64_copy(void __iomem *to, const void *from, size_t count);
int ioremap_page_range(unsigned long addr, unsigned long end,
phys_addr_t phys_addr, pgprot_t prot);
static inline int ioremap_page_range(unsigned long addr, unsigned long end,
phys_addr_t phys_addr, pgprot_t prot)
void __iomem * devm_ioport_map(struct device *dev, unsigned long port,
unsigned int nr);
void devm_ioport_unmap(struct device *dev, void __iomem *addr);
static inline void __iomem *devm_ioport_map(struct device *dev,
unsigned long port,
unsigned int nr)
static inline void devm_ioport_unmap(struct device *dev, void __iomem *addr)
void __iomem *devm_ioremap(struct device *dev, resource_size_t offset,
unsigned long size);
void __iomem *devm_ioremap_nocache(struct device *dev, resource_size_t offset,
unsigned long size);
void devm_iounmap(struct device *dev, void __iomem *addr);
int check_signature(const volatile void __iomem *io_addr,
const unsigned char *signature, int length);
void devm_ioremap_release(struct device *dev, void *res);
