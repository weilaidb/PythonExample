void sort_extable(struct exception_table_entry *start,
struct exception_table_entry *finish)
const struct exception_table_entry *
search_extable(const struct exception_table_entry *start,
const struct exception_table_entry *last,
unsigned long value)
void trim_init_extable(struct module *m)
unsigned long search_extables_range(unsigned long addr, unsigned long *g2)
