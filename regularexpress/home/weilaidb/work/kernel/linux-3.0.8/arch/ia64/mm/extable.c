static int cmp_ex(const void *a, const void *b)
static void swap_ex(void *a, void *b, int size)
void sort_extable (struct exception_table_entry *start,
struct exception_table_entry *finish)
static inline unsigned long ex_to_addr(const struct exception_table_entry *x)
void trim_init_extable(struct module *m)
const struct exception_table_entry *
search_extable (const struct exception_table_entry *first,
const struct exception_table_entry *last,
unsigned long ip)
void
ia64_handle_exception (struct pt_regs *regs, const struct exception_table_entry *e)
