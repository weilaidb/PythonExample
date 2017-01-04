extern char _ftext, _etext, _fdata, _edata, _rodata_end;
extern char __init_begin, __init_end;
int __init mem_reserve(unsigned long start, unsigned long end, int must_exist)
void __init bootmem_init(void)
void __init zones_init(void)
void __init mem_init(void)
void
free_reserved_mem(void *start, void *end)
extern int initrd_is_mapped;
void free_initrd_mem(unsigned long start, unsigned long end)
void free_initmem(void)
