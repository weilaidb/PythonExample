unsigned long cached_to_uncached = SZ_512M;
unsigned long uncached_size = SZ_512M;
unsigned long uncached_start, uncached_end;
EXPORT_SYMBOL(uncached_start);
EXPORT_SYMBOL(uncached_end);
int virt_addr_uncached(unsigned long kaddr)
EXPORT_SYMBOL(virt_addr_uncached);
void __init uncached_init(void)
void __init uncached_resize(unsigned long size)
