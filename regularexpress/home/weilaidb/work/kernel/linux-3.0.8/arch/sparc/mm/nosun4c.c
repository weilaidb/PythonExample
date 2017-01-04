static char shouldnothappen[] __initdata = "32bit SMP kernel only supports sun4m and sun4d\n";
struct sun4c_mmu_ring ;
struct sun4c_mmu_ring sun4c_kernel_ring;
struct sun4c_mmu_ring sun4c_kfree_ring;
unsigned long sun4c_kernel_faults;
unsigned long *sun4c_memerr_reg;
static void __init should_not_happen(void)
unsigned long __init sun4c_paging_init(unsigned long start_mem, unsigned long end_mem)
void __init ld_mmu_sun4c(void)
void sun4c_mapioaddr(unsigned long physaddr, unsigned long virt_addr, int bus_type, int rdonly)
void sun4c_unmapioaddr(unsigned long virt_addr)
void sun4c_complete_all_stores(void)
pte_t *sun4c_pte_offset(pmd_t * dir, unsigned long address)
pte_t *sun4c_pte_offset_kernel(pmd_t *dir, unsigned long address)
void sun4c_update_mmu_cache(struct vm_area_struct *vma, unsigned long address, pte_t *ptep)
void __init sun4c_probe_vac(void)
void __init sun4c_probe_memerr_reg(void)
