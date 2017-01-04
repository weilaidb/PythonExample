unsigned long asid_cache = ASID_USER_FIRST;
void bad_page_fault(struct pt_regs*, unsigned long, int);
#undef DEBUG_PAGE_FAULT
void do_page_fault(struct pt_regs *regs)
void
bad_page_fault(struct pt_regs *regs, unsigned long address, int sig)
