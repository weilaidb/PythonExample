#define STATIC		static
#undef memset
#undef memcpy
#define memzero(s, n)	memset((s), 0, (n))
static void error(char *m);
struct boot_params *real_mode;
static int quiet;
static int debug;
void *memset(void *s, int c, size_t n);
void *memcpy(void *dest, const void *src, size_t n);
#define memptr long
#define memptr unsigned
static memptr free_mem_ptr;
static memptr free_mem_end_ptr;
static char *vidmem;
static int vidport;
static int lines, cols;
static void scroll(void)
#define XMTRDY          0x20
#define TXR             0
#define LSR             5
static void serial_putchar(int ch)
void __putstr(int error, const char *s)
void *memset(void *s, int c, size_t n)
void *memcpy(void *dest, const void *src, size_t n)
void *memcpy(void *dest, const void *src, size_t n)
static void error(char *x)
static void parse_elf(void *output)
asmlinkage void decompress_kernel(void *rmode, memptr heap,
unsigned char *input_data,
unsigned long input_len,
unsigned char *output)
