#define _S390_CACHEFLUSH_H
void kernel_map_pages(struct page *page, int numpages, int enable);
int set_memory_ro(unsigned long addr, int numpages);
int set_memory_rw(unsigned long addr, int numpages);
int set_memory_nx(unsigned long addr, int numpages);
int set_memory_x(unsigned long addr, int numpages);
