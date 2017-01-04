static inline int notify_page_fault(struct pt_regs *regs)
static inline int notify_page_fault(struct pt_regs *regs)
static int store_updates_sp(struct pt_regs *regs)
int __kprobes do_page_fault(struct pt_regs *regs, unsigned long address,
unsigned long error_code)
void bad_page_fault(struct pt_regs *regs, unsigned long address, int sig)
