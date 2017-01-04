#define _LINUX_PAGEVEC_H
#define PAGEVEC_SIZE	14
struct page;
struct address_space;
struct pagevec ;
void __pagevec_release(struct pagevec *pvec);
void __pagevec_free(struct pagevec *pvec);
void ____pagevec_lru_add(struct pagevec *pvec, enum lru_list lru);
void pagevec_strip(struct pagevec *pvec);
unsigned pagevec_lookup(struct pagevec *pvec, struct address_space *mapping,
pgoff_t start, unsigned nr_pages);
unsigned pagevec_lookup_tag(struct pagevec *pvec,
struct address_space *mapping, pgoff_t *index, int tag,
unsigned nr_pages);
static inline void pagevec_init(struct pagevec *pvec, int cold)
static inline void pagevec_reinit(struct pagevec *pvec)
static inline unsigned pagevec_count(struct pagevec *pvec)
static inline unsigned pagevec_space(struct pagevec *pvec)
static inline unsigned pagevec_add(struct pagevec *pvec, struct page *page)
static inline void pagevec_release(struct pagevec *pvec)
static inline void pagevec_free(struct pagevec *pvec)
static inline void __pagevec_lru_add_anon(struct pagevec *pvec)
static inline void __pagevec_lru_add_active_anon(struct pagevec *pvec)
static inline void __pagevec_lru_add_file(struct pagevec *pvec)
static inline void __pagevec_lru_add_active_file(struct pagevec *pvec)
static inline void pagevec_lru_add_file(struct pagevec *pvec)
static inline void pagevec_lru_add_anon(struct pagevec *pvec)
