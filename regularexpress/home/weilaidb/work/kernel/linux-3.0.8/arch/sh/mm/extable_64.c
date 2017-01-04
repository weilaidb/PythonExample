extern unsigned long copy_user_memcpy, copy_user_memcpy_end;
extern void __copy_user_fixup(void);
static const struct exception_table_entry __copy_user_fixup_ex = ;
static const struct exception_table_entry *check_exception_ranges(unsigned long addr)
const struct exception_table_entry *
search_extable(const struct exception_table_entry *first,
const struct exception_table_entry *last,
unsigned long value)
int fixup_exception(struct pt_regs *regs)
