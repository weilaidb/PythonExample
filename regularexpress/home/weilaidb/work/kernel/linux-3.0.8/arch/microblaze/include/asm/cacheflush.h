#define _ASM_MICROBLAZE_CACHEFLUSH_H
struct scache ;
extern struct scache *mbc;
void microblaze_cache_init(void);
#define enable_icache()					mbc->ie();
#define disable_icache()				mbc->id();
#define flush_icache()					mbc->ifl();
#define flush_icache_range(start, end)			mbc->iflr(start, end);
#define invalidate_icache()				mbc->iin();
#define invalidate_icache_range(start, end)		mbc->iinr(start, end);
#define flush_icache_user_range(vma, pg, adr, len)	flush_icache();
#define flush_icache_page(vma, pg)			do  while (0)
#define enable_dcache()					mbc->de();
#define disable_dcache()				mbc->dd();
#define invalidate_dcache()				mbc->din();
#define invalidate_dcache_range(start, end)		mbc->dinr(start, end);
#define flush_dcache()					mbc->dfl();
#define flush_dcache_range(start, end)			mbc->dflr(start, end);
#define ARCH_IMPLEMENTS_FLUSH_DCACHE_PAGE 1
#define flush_dcache_page(page) \
do  while (0);
#define flush_dcache_mmap_lock(mapping)		do  while (0)
#define flush_dcache_mmap_unlock(mapping)	do  while (0)
#define flush_cache_dup_mm(mm)				do  while (0)
#define flush_cache_vmap(start, end)			do  while (0)
#define flush_cache_vunmap(start, end)			do  while (0)
#define flush_cache_mm(mm)			do  while (0)
#define flush_cache_page(vma, vmaddr, pfn) \
flush_dcache_range(pfn << PAGE_SHIFT, (pfn << PAGE_SHIFT) + PAGE_SIZE);
#define flush_cache_range(vma, start, len) do  while (0)
#define copy_to_user_page(vma, page, vaddr, dst, src, len)		\
do  while (0)
#define copy_from_user_page(vma, page, vaddr, dst, src, len)		\
do  while (0)
