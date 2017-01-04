void __init prom_init_memory(void)
int __uncached_access(struct file *file, unsigned long addr)
static unsigned long uca_start, uca_end;
pgprot_t phys_mem_access_prot(struct file *file, unsigned long pfn,
unsigned long size, pgprot_t vma_prot)
static int __init find_vga_mem_init(void)
late_initcall(find_vga_mem_init);
