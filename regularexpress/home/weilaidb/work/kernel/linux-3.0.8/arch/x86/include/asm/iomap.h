#define _ASM_X86_IOMAP_H
void __iomem *
iomap_atomic_prot_pfn(unsigned long pfn, pgprot_t prot);
void
iounmap_atomic(void __iomem *kvaddr);
int
iomap_create_wc(resource_size_t base, unsigned long size, pgprot_t *prot);
void
iomap_free(resource_size_t base, unsigned long size);
