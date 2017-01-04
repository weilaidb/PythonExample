static inline int notify_page_fault(struct pt_regs *regs, int trap)
static inline pmd_t *vmalloc_sync_one(pgd_t *pgd, unsigned long address)
static noinline int vmalloc_fault(unsigned long address)
static int fault_in_kernel_space(unsigned long address)
asmlinkage void __kprobes do_page_fault(struct pt_regs *regs,
unsigned long writeaccess,
unsigned long address)
asmlinkage int __kprobes
handle_tlbmiss(struct pt_regs *regs, unsigned long writeaccess,
unsigned long address)
