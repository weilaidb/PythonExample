#define _ASM_M32R_CACHEFLUSH_H
extern void _flush_cache_all(void);
extern void _flush_cache_copyback_all(void);
#if defined(CONFIG_CHIP_M32700) || defined(CONFIG_CHIP_OPSP) || defined(CONFIG_CHIP_M32104)
#define flush_cache_all()			do  while (0)
#define flush_cache_mm(mm)			do  while (0)
#define flush_cache_dup_mm(mm)			do  while (0)
#define flush_cache_range(vma, start, end)	do  while (0)
#define flush_cache_page(vma, vmaddr, pfn)	do  while (0)
#define ARCH_IMPLEMENTS_FLUSH_DCACHE_PAGE 0
#define flush_dcache_page(page)			do  while (0)
#define flush_dcache_mmap_lock(mapping)		do  while (0)
#define flush_dcache_mmap_unlock(mapping)	do  while (0)
#define flush_icache_range(start, end)		_flush_cache_copyback_all()
#define flush_icache_page(vma,pg)		_flush_cache_copyback_all()
#define flush_icache_user_range(vma,pg,adr,len)	_flush_cache_copyback_all()
#define flush_cache_sigtramp(addr)		_flush_cache_copyback_all()
extern void smp_flush_cache_all(void);
#define flush_icache_range(start, end)		smp_flush_cache_all()
#define flush_icache_page(vma,pg)		smp_flush_cache_all()
#define flush_icache_user_range(vma,pg,adr,len)	smp_flush_cache_all()
#define flush_cache_sigtramp(addr)		_flush_cache_copyback_all()
#elif defined(CONFIG_CHIP_M32102)
#define flush_cache_all()			do  while (0)
#define flush_cache_mm(mm)			do  while (0)
#define flush_cache_dup_mm(mm)			do  while (0)
#define flush_cache_range(vma, start, end)	do  while (0)
#define flush_cache_page(vma, vmaddr, pfn)	do  while (0)
#define ARCH_IMPLEMENTS_FLUSH_DCACHE_PAGE 0
#define flush_dcache_page(page)			do  while (0)
#define flush_dcache_mmap_lock(mapping)		do  while (0)
#define flush_dcache_mmap_unlock(mapping)	do  while (0)
#define flush_icache_range(start, end)		_flush_cache_all()
#define flush_icache_page(vma,pg)		_flush_cache_all()
#define flush_icache_user_range(vma,pg,adr,len)	_flush_cache_all()
#define flush_cache_sigtramp(addr)		_flush_cache_all()
#define flush_cache_all()			do  while (0)
#define flush_cache_mm(mm)			do  while (0)
#define flush_cache_dup_mm(mm)			do  while (0)
#define flush_cache_range(vma, start, end)	do  while (0)
#define flush_cache_page(vma, vmaddr, pfn)	do  while (0)
#define ARCH_IMPLEMENTS_FLUSH_DCACHE_PAGE 0
#define flush_dcache_page(page)			do  while (0)
#define flush_dcache_mmap_lock(mapping)		do  while (0)
#define flush_dcache_mmap_unlock(mapping)	do  while (0)
#define flush_icache_range(start, end)		do  while (0)
#define flush_icache_page(vma,pg)		do  while (0)
#define flush_icache_user_range(vma,pg,adr,len)	do  while (0)
#define flush_cache_sigtramp(addr)		do  while (0)
#define flush_cache_vmap(start, end)	do  while (0)
#define flush_cache_vunmap(start, end)	do  while (0)
#define copy_to_user_page(vma, page, vaddr, dst, src, len)	\
do  while (0)
#define copy_from_user_page(vma, page, vaddr, dst, src, len)	\
memcpy(dst, src, len)