#define BETWEEN(p,st,sz)	((p) >= (st) && (p) < ((st) + (sz)))
#define XLATE(p,pst,vst)	((void __iomem *)((p) - (pst) + (vst)))
void __iomem *omap_ioremap(unsigned long p, size_t size, unsigned int type)
EXPORT_SYMBOL(omap_ioremap);
void omap_iounmap(volatile void __iomem *addr)
EXPORT_SYMBOL(omap_iounmap);
