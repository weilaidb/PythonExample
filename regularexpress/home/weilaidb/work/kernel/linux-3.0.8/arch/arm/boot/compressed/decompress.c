#define _LINUX_STRING_H_
extern unsigned long free_mem_ptr;
extern unsigned long free_mem_end_ptr;
extern void error(char *);
#define STATIC static
#define STATIC_RW_DATA
#define ARCH_HAS_DECOMP_WDOG
#  define Assert(cond,msg)
#  define Trace(x) fprintf x
#  define Tracev(x)
#  define Tracevv(x)
#  define Tracec(c,x)
#  define Tracecv(c,x)
#  define Assert(cond,msg)
#  define Trace(x)
#  define Tracev(x)
#  define Tracevv(x)
#  define Tracec(c,x)
#  define Tracecv(c,x)
int do_decompress(u8 *input, int len, u8 *output, void (*error)(char *x))
