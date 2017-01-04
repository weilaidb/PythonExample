unsigned long free_mem_ptr;
unsigned long free_mem_end_ptr;
extern unsigned char __image_begin, __image_end;
extern void puts(const char *s);
extern void puthex(unsigned long long val);
void error(char *x)
#define STATIC static
void *memcpy(void *dest, const void *src, size_t n)
void *memset(void *s, int c, size_t n)
void decompress_kernel(unsigned long boot_heap_start)
