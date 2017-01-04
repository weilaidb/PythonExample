static int is_io_mapping_possible(resource_size_t base, unsigned long size)
int iomap_create_wc(resource_size_t base, unsigned long size, pgprot_t *prot)
EXPORT_SYMBOL_GPL(iomap_create_wc);
void iomap_free(resource_size_t base, unsigned long size)
EXPORT_SYMBOL_GPL(iomap_free);
void *kmap_atomic_prot_pfn(unsigned long pfn, pgprot_t prot)
void __iomem *
iomap_atomic_prot_pfn(unsigned long pfn, pgprot_t prot)
EXPORT_SYMBOL_GPL(iomap_atomic_prot_pfn);
void
iounmap_atomic(void __iomem *kvaddr)
EXPORT_SYMBOL_GPL(iounmap_atomic);
