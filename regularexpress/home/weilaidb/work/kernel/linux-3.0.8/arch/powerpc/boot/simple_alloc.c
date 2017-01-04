#define	ENTRY_BEEN_USED	0x01
#define	ENTRY_IN_USE	0x02
static struct alloc_info  *alloc_tbl;
static unsigned long tbl_entries;
static unsigned long alloc_min;
static unsigned long next_base;
static unsigned long space_left;
static void *simple_malloc(unsigned long size)
static struct alloc_info *simple_find_entry(void *ptr)
static void simple_free(void *ptr)
static void *simple_realloc(void *ptr, unsigned long size)
void *simple_alloc_init(char *base, unsigned long heap_size,
unsigned long granularity, unsigned long max_allocs)
