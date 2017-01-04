#define OF(args)  args
#define STATIC static
#undef memset
#undef memcpy
#define memzero(s, n)     memset ((s), 0, (n))
typedef unsigned char  uch;
typedef unsigned short ush;
typedef unsigned long  ulg;
#define WSIZE 0x8000
static uch *inbuf;
static uch window[WSIZE];
static unsigned insize = 0;
static unsigned inptr = 0;
static unsigned outcnt = 0;
#define ASCII_FLAG   0x01
#define CONTINUATION 0x02
#define EXTRA_FIELD  0x04
#define ORIG_NAME    0x08
#define COMMENT      0x10
#define ENCRYPTED    0x20
#define RESERVED     0xC0
#define get_byte()  (inptr < insize ? inbuf[inptr++] : fill_inbuf())
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
static int  fill_inbuf(void);
static void flush_window(void);
static void error(char *m);
extern char input_data[];
extern int input_len;
static long bytes_out = 0;
static uch *output_data;
static unsigned long output_ptr = 0;
static void error(char *m);
int puts(const char *);
extern int _text;
extern int _end;
static unsigned long free_mem_ptr;
static unsigned long free_mem_end_ptr;
#define HEAP_SIZE             0x10000
#define SCR *((volatile unsigned char *)0xffff8a)
#define TDR *((volatile unsigned char *)0xffff8b)
#define SSR *((volatile unsigned char *)0xffff8c)
int puts(const char *s)
void* memset(void* s, int c, size_t n)
void* memcpy(void* __dest, __const void* __src,
size_t __n)
static int fill_inbuf(void)
static void flush_window(void)
static void error(char *x)
#define STACK_SIZE (4096)
long user_stack [STACK_SIZE];
long* stack_start = &user_stack[STACK_SIZE];
void decompress_kernel(void)
