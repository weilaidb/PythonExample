#define RETRY_UNLIMITED	0
struct balloon_stats ;
extern struct balloon_stats balloon_stats;
void balloon_set_new_target(unsigned long target);
int alloc_xenballooned_pages(int nr_pages, struct page** pages);
void free_xenballooned_pages(int nr_pages, struct page** pages);
