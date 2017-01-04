static inline struct page *
__first_valid_page(unsigned long pfn, unsigned long nr_pages)
int
start_isolate_page_range(unsigned long start_pfn, unsigned long end_pfn)
int
undo_isolate_page_range(unsigned long start_pfn, unsigned long end_pfn)
static int
__test_page_isolated_in_pageblock(unsigned long pfn, unsigned long end_pfn)
int test_pages_isolated(unsigned long start_pfn, unsigned long end_pfn)
