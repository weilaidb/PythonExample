struct hash_pte *Hash, *Hash_end;
unsigned long Hash_size, Hash_mask;
unsigned long _SDR1;
struct ppc_bat BATS[8][2];
struct batrange  bat_addrs[8];
phys_addr_t v_mapped_by_bats(unsigned long va)
unsigned long p_mapped_by_bats(phys_addr_t pa)
unsigned long __init mmu_mapin_ram(unsigned long top)
void __init setbat(int index, unsigned long virt, phys_addr_t phys,
unsigned int size, int flags)
void hash_preload(struct mm_struct *mm, unsigned long ea,
unsigned long access, unsigned long trap)
void __init MMU_init_hw(void)
void setup_initial_memory_limit(phys_addr_t first_memblock_base,
phys_addr_t first_memblock_size)
