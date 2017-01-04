struct exception_table_entry
;
const struct exception_table_entry *search_exception_tables(unsigned long add);
int arch_fixup(unsigned long address, struct uml_pt_regs *regs)
