static inline void dma_make_coherent(unsigned long pa, unsigned long len)
static inline void dma_make_coherent(unsigned long pa, unsigned long len)
static struct resource *_sparc_find_resource(struct resource *r,
unsigned long);
static void __iomem *_sparc_ioremap(struct resource *res, u32 bus, u32 pa, int sz);
static void __iomem *_sparc_alloc_io(unsigned int busno, unsigned long phys,
unsigned long size, char *name);
static void _sparc_free_io(struct resource *res);
static void register_proc_sparc_ioport(void);
static struct resource _sparc_dvma = ; struct resource sparc_iomap = ;
#define XNMLN  15
#define XNRES  10
struct xresource ;
static struct xresource xresv[XNRES];
static struct xresource *xres_alloc(void)
static void xres_free(struct xresource *xrp)
void __iomem *ioremap(unsigned long offset, unsigned long size)
EXPORT_SYMBOL(ioremap);
void iounmap(volatile void __iomem *virtual)
EXPORT_SYMBOL(iounmap);
void __iomem *of_ioremap(struct resource *res, unsigned long offset,
unsigned long size, char *name)
EXPORT_SYMBOL(of_ioremap);
void of_iounmap(struct resource *res, void __iomem *base, unsigned long size)
EXPORT_SYMBOL(of_iounmap);
static void __iomem *_sparc_alloc_io(unsigned int busno, unsigned long phys,
unsigned long size, char *name)
static void __iomem *
_sparc_ioremap(struct resource *res, u32 bus, u32 pa, int sz)
static void _sparc_free_io(struct resource *res)
void sbus_set_sbus64(struct device *dev, int x)
EXPORT_SYMBOL(sbus_set_sbus64);
static void *sbus_alloc_coherent(struct device *dev, size_t len,
dma_addr_t *dma_addrp, gfp_t gfp)
static void sbus_free_coherent(struct device *dev, size_t n, void *p,
dma_addr_t ba)
static dma_addr_t sbus_map_page(struct device *dev, struct page *page,
unsigned long offset, size_t len,
enum dma_data_direction dir,
struct dma_attrs *attrs)
static void sbus_unmap_page(struct device *dev, dma_addr_t ba, size_t n,
enum dma_data_direction dir, struct dma_attrs *attrs)
static int sbus_map_sg(struct device *dev, struct scatterlist *sg, int n,
enum dma_data_direction dir, struct dma_attrs *attrs)
static void sbus_unmap_sg(struct device *dev, struct scatterlist *sg, int n,
enum dma_data_direction dir, struct dma_attrs *attrs)
static void sbus_sync_sg_for_cpu(struct device *dev, struct scatterlist *sg,
int n,	enum dma_data_direction dir)
static void sbus_sync_sg_for_device(struct device *dev, struct scatterlist *sg,
int n, enum dma_data_direction dir)
struct dma_map_ops sbus_dma_ops = ;
static int __init sparc_register_ioport(void)
arch_initcall(sparc_register_ioport);
#if defined(CONFIG_PCI) || defined(CONFIG_SPARC_LEON)
static void *pci32_alloc_coherent(struct device *dev, size_t len,
dma_addr_t *pba, gfp_t gfp)
static void pci32_free_coherent(struct device *dev, size_t n, void *p,
dma_addr_t ba)
static dma_addr_t pci32_map_page(struct device *dev, struct page *page,
unsigned long offset, size_t size,
enum dma_data_direction dir,
struct dma_attrs *attrs)
static void pci32_unmap_page(struct device *dev, dma_addr_t ba, size_t size,
enum dma_data_direction dir, struct dma_attrs *attrs)
static int pci32_map_sg(struct device *device, struct scatterlist *sgl,
int nents, enum dma_data_direction dir,
struct dma_attrs *attrs)
static void pci32_unmap_sg(struct device *dev, struct scatterlist *sgl,
int nents, enum dma_data_direction dir,
struct dma_attrs *attrs)
static void pci32_sync_single_for_cpu(struct device *dev, dma_addr_t ba,
size_t size, enum dma_data_direction dir)
static void pci32_sync_single_for_device(struct device *dev, dma_addr_t ba,
size_t size, enum dma_data_direction dir)
static void pci32_sync_sg_for_cpu(struct device *dev, struct scatterlist *sgl,
int nents, enum dma_data_direction dir)
static void pci32_sync_sg_for_device(struct device *device, struct scatterlist *sgl,
int nents, enum dma_data_direction dir)
struct dma_map_ops pci32_dma_ops = ;
EXPORT_SYMBOL(pci32_dma_ops);
struct dma_map_ops *dma_ops = &pci32_dma_ops;
#elif defined(CONFIG_SBUS)
struct dma_map_ops *dma_ops = &sbus_dma_ops;
EXPORT_SYMBOL(dma_ops);
int dma_supported(struct device *dev, u64 mask)
EXPORT_SYMBOL(dma_supported);
static int sparc_io_proc_show(struct seq_file *m, void *v)
static int sparc_io_proc_open(struct inode *inode, struct file *file)
static const struct file_operations sparc_io_proc_fops = ;
static struct resource *_sparc_find_resource(struct resource *root,
unsigned long hit)
static void register_proc_sparc_ioport(void)
