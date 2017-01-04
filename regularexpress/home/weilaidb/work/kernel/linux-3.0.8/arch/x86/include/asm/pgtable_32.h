#define _ASM_X86_PGTABLE_32_H
struct mm_struct;
struct vm_area_struct;
extern pgd_t swapper_pg_dir[1024];
extern pgd_t initial_page_table[1024];
static inline void pgtable_cache_init(void)
static inline void check_pgt_cache(void)
void paging_init(void);
extern void set_pmd_pfn(unsigned long, unsigned long, pgprot_t);
#undef TEST_ACCESS_OK
# include <asm/pgtable-3level.h>
# include <asm/pgtable-2level.h>
#if defined(CONFIG_HIGHPTE)
#define pte_offset_map(dir, address)					\
((pte_t *)kmap_atomic(pmd_page(*(dir))) +		\
pte_index((address)))
#define pte_unmap(pte) kunmap_atomic((pte))
#define pte_offset_map(dir, address)					\
((pte_t *)page_address(pmd_page(*(dir))) + pte_index((address)))
#define pte_unmap(pte) do  while (0)
#define kpte_clear_flush(ptep, vaddr)		\
do  while (0)
#define update_mmu_cache(vma, address, ptep) do  while (0)
#define kern_addr_valid(addr)	(1)
#define kern_addr_valid(kaddr)	(0)
