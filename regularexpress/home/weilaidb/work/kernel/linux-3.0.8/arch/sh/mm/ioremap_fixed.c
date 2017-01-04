struct ioremap_map ;
static struct ioremap_map ioremap_maps[FIX_N_IOREMAPS];
void __init ioremap_fixed_init(void)
void __init __iomem *
ioremap_fixed(phys_addr_t phys_addr, unsigned long size, pgprot_t prot)
int iounmap_fixed(void __iomem *addr)
