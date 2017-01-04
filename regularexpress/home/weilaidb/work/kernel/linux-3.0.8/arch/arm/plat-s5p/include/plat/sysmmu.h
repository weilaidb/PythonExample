#define __ASM__PLAT_SYSMMU_H __FILE__
enum S5P_SYSMMU_INTERRUPT_TYPE ;
void s5p_sysmmu_enable(sysmmu_ips ips, unsigned long pgd);
void s5p_sysmmu_disable(sysmmu_ips ips);
void s5p_sysmmu_set_tablebase_pgd(sysmmu_ips ips, unsigned long pgd);
void s5p_sysmmu_tlb_invalidate(sysmmu_ips ips);
void s5p_sysmmu_set_fault_handler(sysmmu_ips ips,
int (*handler)(enum S5P_SYSMMU_INTERRUPT_TYPE itype,
unsigned long pgtable_base,
unsigned long fault_addr));
#define s5p_sysmmu_enable(ips, pgd) do  while (0)
#define s5p_sysmmu_disable(ips) do  while (0)
#define s5p_sysmmu_set_tablebase_pgd(ips, pgd) do  while (0)
#define s5p_sysmmu_tlb_invalidate(ips) do  while (0)
#define s5p_sysmmu_set_fault_handler(ips, handler) do  while (0)
