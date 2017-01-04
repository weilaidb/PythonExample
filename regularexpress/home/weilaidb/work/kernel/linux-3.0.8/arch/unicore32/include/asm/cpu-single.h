#define __UNICORE_CPU_SINGLE_H__
#define cpu_switch_mm(pgd, mm) cpu_do_switch_mm(virt_to_phys(pgd), mm)
#define cpu_get_pgd()					\
()
struct mm_struct;
extern void cpu_proc_fin(void);
extern int cpu_do_idle(void);
extern void cpu_dcache_clean_area(void *, int);
extern void cpu_do_switch_mm(unsigned long pgd_phys, struct mm_struct *mm);
extern void cpu_set_pte(pte_t *ptep, pte_t pte);
extern void cpu_reset(unsigned long addr) __attribute__((noreturn));
