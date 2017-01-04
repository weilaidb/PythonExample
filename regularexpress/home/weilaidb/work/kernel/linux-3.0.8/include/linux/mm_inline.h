#define LINUX_MM_INLINE_H
static inline int page_is_file_cache(struct page *page)
static inline void
__add_page_to_lru_list(struct zone *zone, struct page *page, enum lru_list l,
struct list_head *head)
static inline void
add_page_to_lru_list(struct zone *zone, struct page *page, enum lru_list l)
static inline void
del_page_from_lru_list(struct zone *zone, struct page *page, enum lru_list l)
static inline enum lru_list page_lru_base_type(struct page *page)
static inline void
del_page_from_lru(struct zone *zone, struct page *page)
static inline enum lru_list page_lru(struct page *page)
