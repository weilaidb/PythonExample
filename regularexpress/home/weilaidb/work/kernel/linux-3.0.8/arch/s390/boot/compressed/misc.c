#define STATIC static
#undef memset
#undef memcpy
#undef memmove
#define memmove memmove
#define memzero(s, n) memset((s), 0, (n))
extern char input_data[];
extern int input_len;
extern char _text, _end;
extern char _bss, _ebss;
static void error(char *m);
static unsigned long free_mem_ptr;
static unsigned long free_mem_end_ptr;
#define HEAP_SIZE	0x400000
#define HEAP_SIZE	0x10000
extern _sclp_print_early(const char *);
int puts(const char *s)
void *memset(void *s, int c, size_t n)
void *memcpy(void *__dest, __const void *__src, size_t __n)
void *memmove(void *__dest, __const void *__src, size_t __n)
static void error(char *x)
static void check_ipl_parmblock(void *start, unsigned long size)
unsigned long decompress_kernel(void)
