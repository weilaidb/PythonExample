#define LINUX_QUICKLIST_H
struct quicklist ;
DECLARE_PER_CPU(struct quicklist, quicklist)[CONFIG_NR_QUICK];
static inline void *quicklist_alloc(int nr, gfp_t flags, void (*ctor)(void *))
static inline void __quicklist_free(int nr, void (*dtor)(void *), void *p,
struct page *page)
static inline void quicklist_free(int nr, void (*dtor)(void *), void *pp)
static inline void quicklist_free_page(int nr, void (*dtor)(void *),
struct page *page)
void quicklist_trim(int nr, void (*dtor)(void *),
unsigned long min_pages, unsigned long max_free);
unsigned long quicklist_total_size(void);
static inline unsigned long quicklist_total_size(void)
