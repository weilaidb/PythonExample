#undef DEBUG
#define D(x) x
#define D(x)
extern const struct exception_table_entry
*search_exception_tables(unsigned long addr);
asmlinkage void do_page_fault(unsigned long address, struct pt_regs *regs,
int protection, int writeaccess);
void
handle_mmu_bus_fault(struct pt_regs *regs)
