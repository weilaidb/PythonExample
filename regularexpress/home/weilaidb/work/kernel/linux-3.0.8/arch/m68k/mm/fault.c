extern void die_if_kernel(char *, struct pt_regs *, long);
int send_fault_sig(struct pt_regs *regs)
int do_page_fault(struct pt_regs *regs, unsigned long address,
unsigned long error_code)
