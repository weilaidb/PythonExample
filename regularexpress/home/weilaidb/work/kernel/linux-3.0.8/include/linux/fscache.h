#define _LINUX_FSCACHE_H
#if defined(CONFIG_FSCACHE) || defined(CONFIG_FSCACHE_MODULE)
#define fscache_available() (1)
#define fscache_cookie_valid(cookie) (cookie)
#define fscache_available() (0)
#define fscache_cookie_valid(cookie) (0)
#define PageFsCache(page)		PagePrivate2((page))
#define SetPageFsCache(page)		SetPagePrivate2((page))
#define ClearPageFsCache(page)		ClearPagePrivate2((page))
#define TestSetPageFsCache(page)	TestSetPagePrivate2((page))
#define TestClearPageFsCache(page)	TestClearPagePrivate2((page))
#define FSCACHE_INDEX_DEADFILL_PATTERN 0x79
struct pagevec;
struct fscache_cache_tag;
struct fscache_cookie;
struct fscache_netfs;
typedef void (*fscache_rw_complete_t)(struct page *page,
void *context,
int error);
enum fscache_checkaux ;
struct fscache_cookie_def ;
struct fscache_netfs ;
extern int __fscache_register_netfs(struct fscache_netfs *);
extern void __fscache_unregister_netfs(struct fscache_netfs *);
extern struct fscache_cache_tag *__fscache_lookup_cache_tag(const char *);
extern void __fscache_release_cache_tag(struct fscache_cache_tag *);
extern struct fscache_cookie *__fscache_acquire_cookie(
struct fscache_cookie *,
const struct fscache_cookie_def *,
void *);
extern void __fscache_relinquish_cookie(struct fscache_cookie *, int);
extern void __fscache_update_cookie(struct fscache_cookie *);
extern int __fscache_attr_changed(struct fscache_cookie *);
extern int __fscache_read_or_alloc_page(struct fscache_cookie *,
struct page *,
fscache_rw_complete_t,
void *,
gfp_t);
extern int __fscache_read_or_alloc_pages(struct fscache_cookie *,
struct address_space *,
struct list_head *,
unsigned *,
fscache_rw_complete_t,
void *,
gfp_t);
extern int __fscache_alloc_page(struct fscache_cookie *, struct page *, gfp_t);
extern int __fscache_write_page(struct fscache_cookie *, struct page *, gfp_t);
extern void __fscache_uncache_page(struct fscache_cookie *, struct page *);
extern bool __fscache_check_page_write(struct fscache_cookie *, struct page *);
extern void __fscache_wait_on_page_write(struct fscache_cookie *, struct page *);
extern bool __fscache_maybe_release_page(struct fscache_cookie *, struct page *,
gfp_t);
extern void __fscache_uncache_all_inode_pages(struct fscache_cookie *,
struct inode *);
static inline
int fscache_register_netfs(struct fscache_netfs *netfs)
static inline
void fscache_unregister_netfs(struct fscache_netfs *netfs)
static inline
struct fscache_cache_tag *fscache_lookup_cache_tag(const char *name)
static inline
void fscache_release_cache_tag(struct fscache_cache_tag *tag)
static inline
struct fscache_cookie *fscache_acquire_cookie(
struct fscache_cookie *parent,
const struct fscache_cookie_def *def,
void *netfs_data)
static inline
void fscache_relinquish_cookie(struct fscache_cookie *cookie, int retire)
static inline
void fscache_update_cookie(struct fscache_cookie *cookie)
static inline
int fscache_pin_cookie(struct fscache_cookie *cookie)
static inline
void fscache_unpin_cookie(struct fscache_cookie *cookie)
static inline
int fscache_attr_changed(struct fscache_cookie *cookie)
static inline
int fscache_reserve_space(struct fscache_cookie *cookie, loff_t size)
static inline
int fscache_read_or_alloc_page(struct fscache_cookie *cookie,
struct page *page,
fscache_rw_complete_t end_io_func,
void *context,
gfp_t gfp)
static inline
int fscache_read_or_alloc_pages(struct fscache_cookie *cookie,
struct address_space *mapping,
struct list_head *pages,
unsigned *nr_pages,
fscache_rw_complete_t end_io_func,
void *context,
gfp_t gfp)
static inline
int fscache_alloc_page(struct fscache_cookie *cookie,
struct page *page,
gfp_t gfp)
static inline
int fscache_write_page(struct fscache_cookie *cookie,
struct page *page,
gfp_t gfp)
static inline
void fscache_uncache_page(struct fscache_cookie *cookie,
struct page *page)
static inline
bool fscache_check_page_write(struct fscache_cookie *cookie,
struct page *page)
static inline
void fscache_wait_on_page_write(struct fscache_cookie *cookie,
struct page *page)
static inline
bool fscache_maybe_release_page(struct fscache_cookie *cookie,
struct page *page,
gfp_t gfp)
static inline
void fscache_uncache_all_inode_pages(struct fscache_cookie *cookie,
struct inode *inode)
