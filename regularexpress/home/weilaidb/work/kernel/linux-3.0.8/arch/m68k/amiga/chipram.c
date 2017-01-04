unsigned long amiga_chip_size;
EXPORT_SYMBOL(amiga_chip_size);
static struct resource chipram_res = ;
static unsigned long chipavail;
void __init amiga_chip_init(void)
void *amiga_chip_alloc(unsigned long size, const char *name)
EXPORT_SYMBOL(amiga_chip_alloc);
void * __init amiga_chip_alloc_res(unsigned long size, struct resource *res)
void amiga_chip_free(void *ptr)
EXPORT_SYMBOL(amiga_chip_free);
unsigned long amiga_chip_avail(void)
EXPORT_SYMBOL(amiga_chip_avail);
