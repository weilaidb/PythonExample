#define PAGEBLOCK_FLAGS_H
enum pageblock_bits ;
extern int pageblock_order;
#define pageblock_order		HUGETLB_PAGE_ORDER
#define pageblock_order		(MAX_ORDER-1)
#define pageblock_nr_pages	(1UL << pageblock_order)
struct page;
unsigned long get_pageblock_flags_group(struct page *page,
int start_bitidx, int end_bitidx);
void set_pageblock_flags_group(struct page *page, unsigned long flags,
int start_bitidx, int end_bitidx);
#define get_pageblock_flags(page) \
get_pageblock_flags_group(page, 0, NR_PAGEBLOCK_BITS-1)
#define set_pageblock_flags(page, flags) \
set_pageblock_flags_group(page, flags,	\
0, NR_PAGEBLOCK_BITS-1)
