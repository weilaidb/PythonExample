extern void die(const char *,struct pt_regs *,long);
#define PFLAG(val,flag)   (( (val) & (flag) ) ? #flag : "" )
#define PPROT(flag) PFLAG(pgprot_val(prot),flag)
static inline void print_prots(pgprot_t prot)
static inline void print_vma(struct vm_area_struct *vma)
static inline void print_task(struct task_struct *tsk)
static pte_t *lookup_pte(struct mm_struct *mm, unsigned long address)
asmlinkage void do_page_fault(struct pt_regs *regs, unsigned long writeaccess,
unsigned long textaccess, unsigned long address)
void local_flush_tlb_one(unsigned long asid, unsigned long page)
void local_flush_tlb_page(struct vm_area_struct *vma, unsigned long page)
void local_flush_tlb_range(struct vm_area_struct *vma, unsigned long start,
unsigned long end)
void local_flush_tlb_mm(struct mm_struct *mm)
void local_flush_tlb_all(void)
void local_flush_tlb_kernel_range(unsigned long start, unsigned long end)
void __flush_tlb_global(void)
void __update_tlb(struct vm_area_struct *vma, unsigned long address, pte_t pte)
