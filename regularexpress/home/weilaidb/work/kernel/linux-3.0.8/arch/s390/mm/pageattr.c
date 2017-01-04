static void change_page_attr(unsigned long addr, int numpages,
pte_t (*set) (pte_t))
int set_memory_ro(unsigned long addr, int numpages)
EXPORT_SYMBOL_GPL(set_memory_ro);
int set_memory_rw(unsigned long addr, int numpages)
EXPORT_SYMBOL_GPL(set_memory_rw);
int set_memory_nx(unsigned long addr, int numpages)
EXPORT_SYMBOL_GPL(set_memory_nx);
int set_memory_x(unsigned long addr, int numpages)
