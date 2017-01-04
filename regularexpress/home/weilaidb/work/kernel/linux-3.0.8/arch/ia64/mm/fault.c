extern int die(char *, struct pt_regs *, long);
static inline int notify_page_fault(struct pt_regs *regs, int trap)
static inline int notify_page_fault(struct pt_regs *regs, int trap)
static int
mapped_kernel_page_is_present (unsigned long address)
void __kprobes
ia64_do_page_fault (unsigned long address, unsigned long isr, struct pt_regs *regs)
