static inline int notify_page_fault(struct pt_regs *regs, int trap)
static inline int notify_page_fault(struct pt_regs *regs, int trap)
int exception_trace = 1;
asmlinkage void do_page_fault(unsigned long ecr, struct pt_regs *regs)
asmlinkage void do_bus_error(unsigned long addr, int write_access,
struct pt_regs *regs)
