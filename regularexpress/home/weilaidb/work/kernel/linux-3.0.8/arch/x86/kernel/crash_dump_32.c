static void *kdump_buf_page;
static inline bool is_crashed_pfn_valid(unsigned long pfn)
ssize_t copy_oldmem_page(unsigned long pfn, char *buf,
size_t csize, unsigned long offset, int userbuf)
static int __init kdump_buf_page_init(void)
arch_initcall(kdump_buf_page_init);
