DEFINE_MUTEX(text_mutex);
extern struct exception_table_entry __start___ex_table[];
extern struct exception_table_entry __stop___ex_table[];
void __init sort_main_extable(void)
const struct exception_table_entry *search_exception_tables(unsigned long addr)
static inline int init_kernel_text(unsigned long addr)
int core_kernel_text(unsigned long addr)
int core_kernel_data(unsigned long addr)
int __kernel_text_address(unsigned long addr)
int kernel_text_address(unsigned long addr)
int func_ptr_is_kernel_text(void *ptr)
