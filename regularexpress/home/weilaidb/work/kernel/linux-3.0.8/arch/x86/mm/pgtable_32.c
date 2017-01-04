unsigned int __VMALLOC_RESERVE = 128 << 20;
void set_pte_vaddr(unsigned long vaddr, pte_t pteval)
void set_pmd_pfn(unsigned long vaddr, unsigned long pfn, pgprot_t flags)
unsigned long __FIXADDR_TOP = 0xfffff000;
EXPORT_SYMBOL(__FIXADDR_TOP);
static int __init parse_vmalloc(char *arg)
early_param("vmalloc", parse_vmalloc);
static int __init parse_reservetop(char *arg)
early_param("reservetop", parse_reservetop);
