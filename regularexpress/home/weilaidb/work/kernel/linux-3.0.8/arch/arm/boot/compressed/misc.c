unsigned int __machine_arch_type;
#define _LINUX_STRING_H_
static void putstr(const char *ptr);
extern void error(char *x);
#if defined(CONFIG_CPU_V6) || defined(CONFIG_CPU_V6K) || defined(CONFIG_CPU_V7)
static void icedcc_putc(int ch)
#elif defined(CONFIG_CPU_XSCALE)
static void icedcc_putc(int ch)
static void icedcc_putc(int ch)
#define putc(ch)	icedcc_putc(ch)
static void putstr(const char *ptr)
void *memcpy(void *__dest, __const void *__src, size_t __n)
extern char input_data[];
extern char input_data_end[];
unsigned char *output_data;
unsigned long free_mem_ptr;
unsigned long free_mem_end_ptr;
#define arch_error(x)
void error(char *x)
asmlinkage void __div0(void)
extern int do_decompress(u8 *input, int len, u8 *output, void (*error)(char *x));
void
decompress_kernel(unsigned long output_start, unsigned long free_mem_ptr_p,
unsigned long free_mem_ptr_end_p,
int arch_id)
