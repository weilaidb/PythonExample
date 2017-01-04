#define __LINUX_PAGEISOLATION_H
extern int
start_isolate_page_range(unsigned long start_pfn, unsigned long end_pfn);
extern int
undo_isolate_page_range(unsigned long start_pfn, unsigned long end_pfn);
extern int
test_pages_isolated(unsigned long start_pfn, unsigned long end_pfn);
extern int set_migratetype_isolate(struct page *page);
extern void unset_migratetype_isolate(struct page *page);
