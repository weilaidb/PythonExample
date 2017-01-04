static unsigned long pte_misses;
static unsigned long pte_errors;
static int store_updates_sp(struct pt_regs *regs)
void bad_page_fault(struct pt_regs *regs, unsigned long address, int sig)
void do_page_fault(struct pt_regs *regs, unsigned long address,
unsigned long error_code)
