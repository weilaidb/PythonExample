#define __ASM_PROCFNS_H
struct mm_struct;
extern struct processor  processor;
extern void cpu_proc_init(void);
extern void cpu_proc_fin(void);
extern int cpu_do_idle(void);
extern void cpu_dcache_clean_area(void *, int);
extern void cpu_do_switch_mm(unsigned long pgd_phys, struct mm_struct *mm);
extern void cpu_set_pte_ext(pte_t *ptep, pte_t pte, unsigned int ext);
extern void cpu_reset(unsigned long addr) __attribute__((noreturn));
#define cpu_proc_init()			processor._proc_init()
#define cpu_proc_fin()			processor._proc_fin()
#define cpu_reset(addr)			processor.reset(addr)
#define cpu_do_idle()			processor._do_idle()
#define cpu_dcache_clean_area(addr,sz)	processor.dcache_clean_area(addr,sz)
#define cpu_set_pte_ext(ptep,pte,ext)	processor.set_pte_ext(ptep,pte,ext)
#define cpu_do_switch_mm(pgd,mm)	processor.switch_mm(pgd,mm)
extern void cpu_resume(void);
#define cpu_switch_mm(pgd,mm) cpu_do_switch_mm(virt_to_phys(pgd),mm)
#define cpu_get_pgd()	\
()
