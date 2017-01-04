unsigned int tlb_44x_index;
unsigned int tlb_44x_hwater = PPC44x_TLB_SIZE - 1 - PPC44x_EARLY_TLBS;
int icache_44x_need_flush;
unsigned long tlb_47x_boltmap[1024/8];
static void __cpuinit ppc44x_update_tlb_hwater(void)
static void __init ppc44x_pin_tlb(unsigned int virt, unsigned int phys)
static int __init ppc47x_find_free_bolted(void)
static void __init ppc47x_update_boltmap(void)
static void __cpuinit ppc47x_pin_tlb(unsigned int virt, unsigned int phys)
void __init MMU_init_hw(void)
unsigned long __init mmu_mapin_ram(unsigned long top)
void setup_initial_memory_limit(phys_addr_t first_memblock_base,
phys_addr_t first_memblock_size)
void __cpuinit mmu_init_secondary(int cpu)
