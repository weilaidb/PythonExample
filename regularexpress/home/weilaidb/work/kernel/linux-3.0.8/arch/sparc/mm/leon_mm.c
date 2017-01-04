int leon_flush_during_switch = 1;
int srmmu_swprobe_trace;
unsigned long srmmu_swprobe(unsigned long vaddr, unsigned long *paddr)
void leon_flush_icache_all(void)
void leon_flush_dcache_all(void)
void leon_flush_pcache_all(struct vm_area_struct *vma, unsigned long page)
void leon_flush_cache_all(void)
void leon_flush_tlb_all(void)
void leon3_getCacheRegs(struct leon3_cacheregs *regs)
int __init leon_flush_needed(void)
void leon_switch_mm(void)
