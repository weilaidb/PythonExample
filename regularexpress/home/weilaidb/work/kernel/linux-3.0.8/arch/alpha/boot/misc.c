#define memzero(s,n)	memset ((s),0,(n))
#define puts		srm_printk
extern long srm_printk(const char *, ...)
__attribute__ ((format (printf, 1, 2)));
#define OF(args)  args
#define STATIC static
typedef unsigned char  uch;
typedef unsigned short ush;
typedef unsigned long  ulg;
#define WSIZE 0x8000
static uch *inbuf;
static uch *window;
static unsigned insize;
static unsigned inptr;
static unsigned outcnt;
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
static char *input_data;
static int  input_data_size;
static uch *output_data;
static ulg output_ptr;
static ulg bytes_out;
static void error(char *m);
static void gzip_mark(void **);
static void gzip_release(void **);
extern int end;
static ulg free_mem_ptr;
static ulg free_mem_end_ptr;
#define HEAP_SIZE 0x3000
int fill_inbuf(void)
void flush_window(void)
static void error(char *x)
unsigned int
decompress_kernel(void *output_start,
void *input_start,
size_t ksize,
size_t kzsize)
