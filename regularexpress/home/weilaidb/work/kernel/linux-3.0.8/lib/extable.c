static int cmp_ex(const void *a, const void *b)
void sort_extable(struct exception_table_entry *start,
struct exception_table_entry *finish)
void trim_init_extable(struct module *m)
const struct exception_table_entry *
search_extable(const struct exception_table_entry *first,
const struct exception_table_entry *last,
unsigned long value)
