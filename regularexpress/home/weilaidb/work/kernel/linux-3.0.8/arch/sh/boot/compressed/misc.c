#define STATIC static
#undef memset
#undef memcpy
#define memzero(s, n)     memset ((s), 0, (n))
#define CACHE_ENABLE      0
#define CACHE_DISABLE     1
int cache_control(unsigned int command);
extern char input_data[];
extern int input_len;
static unsigned char *output;
static void error(char *m);
int puts(const char *);
extern int _text;
extern int _end;
static unsigned long free_mem_ptr;
static unsigned long free_mem_end_ptr;
#define HEAP_SIZE	0x400000
#define HEAP_SIZE	0x10000
int puts(const char *s)
void* memset(void* s, int c, size_t n)
void* memcpy(void* __dest, __const void* __src,
size_t __n)
static void error(char *x)
#define stackalign	8
#define stackalign	4
#define STACK_SIZE (4096)
long __attribute__ ((aligned(stackalign))) user_stack[STACK_SIZE];
long *stack_start = &user_stack[STACK_SIZE];
void decompress_kernel(void)
