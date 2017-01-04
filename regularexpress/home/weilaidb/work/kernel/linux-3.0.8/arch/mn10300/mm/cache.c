EXPORT_SYMBOL(mn10300_icache_inv);
EXPORT_SYMBOL(mn10300_icache_inv_range);
EXPORT_SYMBOL(mn10300_icache_inv_range2);
EXPORT_SYMBOL(mn10300_icache_inv_page);
EXPORT_SYMBOL(mn10300_dcache_inv);
EXPORT_SYMBOL(mn10300_dcache_inv_range);
EXPORT_SYMBOL(mn10300_dcache_inv_range2);
EXPORT_SYMBOL(mn10300_dcache_inv_page);
EXPORT_SYMBOL(mn10300_dcache_flush);
EXPORT_SYMBOL(mn10300_dcache_flush_inv);
EXPORT_SYMBOL(mn10300_dcache_flush_inv_range);
EXPORT_SYMBOL(mn10300_dcache_flush_inv_range2);
EXPORT_SYMBOL(mn10300_dcache_flush_inv_page);
EXPORT_SYMBOL(mn10300_dcache_flush_range);
EXPORT_SYMBOL(mn10300_dcache_flush_range2);
EXPORT_SYMBOL(mn10300_dcache_flush_page);
asmlinkage long sys_cacheflush(unsigned long start, unsigned long end)
