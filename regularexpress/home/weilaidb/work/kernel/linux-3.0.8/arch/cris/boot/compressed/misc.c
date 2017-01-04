#define KERNEL_LOAD_ADR 0x40004000
#define OF(args)  args
#define STATIC static
void *memset(void *s, int c, size_t n);
void *memcpy(void *__dest, __const void *__src, size_t __n);
#define memzero(s, n)     memset((s), 0, (n))
typedef unsigned char  uch;
typedef unsigned short ush;
typedef unsigned long  ulg;
#define WSIZE 0x8000
static uch *inbuf;
static uch window[WSIZE];
unsigned inptr = 0;
static unsigned outcnt = 0;
#define ASCII_FLAG   0x01
#define CONTINUATION 0x02
#define EXTRA_FIELD  0x04
#define ORIG_NAME    0x08
#define COMMENT      0x10
#define ENCRYPTED    0x20
#define RESERVED     0xC0
#define get_byte() (inbuf[inptr++])
#  define Assert(cond, msg) do  while (0)
#  define Trace(x) fprintf x
#  define Tracev(x) do  while (0)
#  define Tracevv(x) do  while (0)
#  define Tracec(c, x) do  while (0)
#  define Tracecv(c, x) do  while (0)
#  define Assert(cond, msg)
#  define Trace(x)
#  define Tracev(x)
#  define Tracevv(x)
#  define Tracec(c, x)
#  define Tracecv(c, x)
static void flush_window(void);
static void error(char *m);
static void aputs(const char *s);
extern char *input_data;
static long bytes_out;
static uch *output_data;
static unsigned long output_ptr;
extern int _end;
static long free_mem_ptr = (long)&_end;
static long free_mem_end_ptr;
static inline void serout(const char *s, reg_scope_instances regi_ser)
#define SEROUT(S, N) \
do  while (0)
#define SEROUT(S, N) do  while (0)
static void aputs(const char *s)
void *memset(void *s, int c, size_t n)
void *memcpy(void *__dest, __const void *__src, size_t __n)
static void flush_window(void)
static void error(char *x)
void setup_normal_output_buffer(void)
static inline void serial_setup(reg_scope_instances regi_ser)
void decompress_kernel(void)
