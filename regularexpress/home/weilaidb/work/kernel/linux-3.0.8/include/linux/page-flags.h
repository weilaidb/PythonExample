#define PAGE_FLAGS_H
enum pageflags ;
#define TESTPAGEFLAG(uname, lname)					\
static inline int Page##uname(struct page *page) 			\
#define SETPAGEFLAG(uname, lname)					\
static inline void SetPage##uname(struct page *page)			\
#define CLEARPAGEFLAG(uname, lname)					\
static inline void ClearPage##uname(struct page *page)			\
#define __SETPAGEFLAG(uname, lname)					\
static inline void __SetPage##uname(struct page *page)			\
#define __CLEARPAGEFLAG(uname, lname)					\
static inline void __ClearPage##uname(struct page *page)		\
#define TESTSETFLAG(uname, lname)					\
static inline int TestSetPage##uname(struct page *page)			\
#define TESTCLEARFLAG(uname, lname)					\
static inline int TestClearPage##uname(struct page *page)		\
#define __TESTCLEARFLAG(uname, lname)					\
static inline int __TestClearPage##uname(struct page *page)		\
#define PAGEFLAG(uname, lname) TESTPAGEFLAG(uname, lname)		\
SETPAGEFLAG(uname, lname) CLEARPAGEFLAG(uname, lname)
#define __PAGEFLAG(uname, lname) TESTPAGEFLAG(uname, lname)		\
__SETPAGEFLAG(uname, lname)  __CLEARPAGEFLAG(uname, lname)
#define PAGEFLAG_FALSE(uname) 						\
static inline int Page##uname(struct page *page) 			\
#define TESTSCFLAG(uname, lname)					\
TESTSETFLAG(uname, lname) TESTCLEARFLAG(uname, lname)
#define SETPAGEFLAG_NOOP(uname)						\
static inline void SetPage##uname(struct page *page)
#define CLEARPAGEFLAG_NOOP(uname)					\
static inline void ClearPage##uname(struct page *page)
#define __CLEARPAGEFLAG_NOOP(uname)					\
static inline void __ClearPage##uname(struct page *page)
#define TESTCLEARFLAG_FALSE(uname)					\
static inline int TestClearPage##uname(struct page *page)
#define __TESTCLEARFLAG_FALSE(uname)					\
static inline int __TestClearPage##uname(struct page *page)
struct page;
TESTPAGEFLAG(Locked, locked)
PAGEFLAG(Error, error) TESTCLEARFLAG(Error, error)
PAGEFLAG(Referenced, referenced) TESTCLEARFLAG(Referenced, referenced)
PAGEFLAG(Dirty, dirty) TESTSCFLAG(Dirty, dirty) __CLEARPAGEFLAG(Dirty, dirty)
PAGEFLAG(LRU, lru) __CLEARPAGEFLAG(LRU, lru)
PAGEFLAG(Active, active) __CLEARPAGEFLAG(Active, active)
TESTCLEARFLAG(Active, active)
__PAGEFLAG(Slab, slab)
PAGEFLAG(Checked, checked)
PAGEFLAG(Pinned, pinned) TESTSCFLAG(Pinned, pinned)
PAGEFLAG(SavePinned, savepinned);
PAGEFLAG(Reserved, reserved) __CLEARPAGEFLAG(Reserved, reserved)
PAGEFLAG(SwapBacked, swapbacked) __CLEARPAGEFLAG(SwapBacked, swapbacked)
__PAGEFLAG(SlobFree, slob_free)
__PAGEFLAG(SlubFrozen, slub_frozen)
PAGEFLAG(Private, private) __SETPAGEFLAG(Private, private)
__CLEARPAGEFLAG(Private, private)
PAGEFLAG(Private2, private_2) TESTSCFLAG(Private2, private_2)
PAGEFLAG(OwnerPriv1, owner_priv_1) TESTCLEARFLAG(OwnerPriv1, owner_priv_1)
TESTPAGEFLAG(Writeback, writeback) TESTSCFLAG(Writeback, writeback)
PAGEFLAG(MappedToDisk, mappedtodisk)
PAGEFLAG(Reclaim, reclaim) TESTCLEARFLAG(Reclaim, reclaim)
PAGEFLAG(Readahead, reclaim)
#define PageHighMem(__p) is_highmem(page_zone(__p))
PAGEFLAG_FALSE(HighMem)
PAGEFLAG(SwapCache, swapcache)
PAGEFLAG_FALSE(SwapCache)
SETPAGEFLAG_NOOP(SwapCache) CLEARPAGEFLAG_NOOP(SwapCache)
PAGEFLAG(Unevictable, unevictable) __CLEARPAGEFLAG(Unevictable, unevictable)
TESTCLEARFLAG(Unevictable, unevictable)
PAGEFLAG(Mlocked, mlocked) __CLEARPAGEFLAG(Mlocked, mlocked)
TESTSCFLAG(Mlocked, mlocked) __TESTCLEARFLAG(Mlocked, mlocked)
PAGEFLAG_FALSE(Mlocked) SETPAGEFLAG_NOOP(Mlocked)
TESTCLEARFLAG_FALSE(Mlocked) __TESTCLEARFLAG_FALSE(Mlocked)
PAGEFLAG(Uncached, uncached)
PAGEFLAG_FALSE(Uncached)
PAGEFLAG(HWPoison, hwpoison)
TESTSCFLAG(HWPoison, hwpoison)
#define __PG_HWPOISON (1UL << PG_hwpoison)
PAGEFLAG_FALSE(HWPoison)
#define __PG_HWPOISON 0
u64 stable_page_flags(struct page *page);
static inline int PageUptodate(struct page *page)
static inline void __SetPageUptodate(struct page *page)
static inline void SetPageUptodate(struct page *page)
CLEARPAGEFLAG(Uptodate, uptodate)
extern void cancel_dirty_page(struct page *page, unsigned int account_size);
int test_clear_page_writeback(struct page *page);
int test_set_page_writeback(struct page *page);
static inline void set_page_writeback(struct page *page)
__PAGEFLAG(Head, head) CLEARPAGEFLAG(Head, head)
__PAGEFLAG(Tail, tail)
static inline int PageCompound(struct page *page)
static inline void ClearPageCompound(struct page *page)
TESTPAGEFLAG(Compound, compound)
__PAGEFLAG(Head, compound)
#define PG_head_tail_mask ((1L << PG_compound) | (1L << PG_reclaim))
static inline int PageTail(struct page *page)
static inline void __SetPageTail(struct page *page)
static inline void __ClearPageTail(struct page *page)
static inline void ClearPageCompound(struct page *page)
static inline int PageTransHuge(struct page *page)
static inline int PageTransCompound(struct page *page)
static inline int PageTransHuge(struct page *page)
static inline int PageTransCompound(struct page *page)
#define __PG_MLOCKED		(1 << PG_mlocked)
#define __PG_MLOCKED		0
#define __PG_COMPOUND_LOCK		(1 << PG_compound_lock)
#define __PG_COMPOUND_LOCK		0
#define PAGE_FLAGS_CHECK_AT_FREE \
(1 << PG_lru	 | 1 << PG_locked    | \
1 << PG_private | 1 << PG_private_2 | \
1 << PG_writeback | 1 << PG_reserved | \
1 << PG_slab	 | 1 << PG_swapcache | 1 << PG_active | \
1 << PG_unevictable | __PG_MLOCKED | __PG_HWPOISON | \
__PG_COMPOUND_LOCK)
#define PAGE_FLAGS_CHECK_AT_PREP	((1 << NR_PAGEFLAGS) - 1)
#define PAGE_FLAGS_PRIVATE				\
(1 << PG_private | 1 << PG_private_2)
static inline int page_has_private(struct page *page)
