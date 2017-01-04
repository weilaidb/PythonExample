DEFINE_PER_CPU(struct quicklist [CONFIG_NR_QUICK], quicklist);
#define FRACTION_OF_NODE_MEM	16
static unsigned long max_pages(unsigned long min_pages)
static long min_pages_to_free(struct quicklist *q,
unsigned long min_pages, long max_free)
void quicklist_trim(int nr, void (*dtor)(void *),
unsigned long min_pages, unsigned long max_free)
unsigned long quicklist_total_size(void)
