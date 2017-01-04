#if 1
#define CYG_DEV_BASE	0xA6FB0000
#define CYG_DEV_BASE	0xA6FC0000
#define CYG_DEV_THR	(*((volatile __u8*)(CYG_DEV_BASE + 0x00)))
#define CYG_DEV_MCR	(*((volatile __u8*)(CYG_DEV_BASE + 0x10)))
#define SIO_MCR_DTR	0x01
#define SIO_MCR_RTS	0x02
#define CYG_DEV_LSR	(*((volatile __u8*)(CYG_DEV_BASE + 0x14)))
#define SIO_LSR_THRE	0x20
#define SIO_LSR_TEMT	0x40
#define CYG_DEV_MSR	(*((volatile __u8*)(CYG_DEV_BASE + 0x18)))
#define SIO_MSR_CTS	0x10
#define SIO_MSR_DSR	0x20
#define LSR_WAIT_FOR(STATE) \
do  while (0)
#define FLOWCTL_QUERY(LINE) \
()
#define FLOWCTL_WAIT_FOR(LINE) \
do  while (0)
#define FLOWCTL_CLEAR(LINE) \
do  while (0)
#define FLOWCTL_SET(LINE) \
do  while (0)
#define OF(args)  args
#define STATIC static
#undef memset
#undef memcpy
static inline void *memset(const void *s, int c, size_t n)
#define memzero(s, n) memset((s), 0, (n))
static inline void *memcpy(void *__dest, const void *__src, size_t __n)
typedef unsigned char  uch;
typedef unsigned short ush;
typedef unsigned long  ulg;
#define WSIZE 0x8000
static uch *inbuf;
static uch window[WSIZE];
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
#  define Assert(cond, msg)
#  define Trace(x)	fprintf x
#  define Tracev(x)
#  define Tracevv(x)
#  define Tracec(c, x)
#  define Tracecv(c, x)
#  define Assert(cond, msg)
#  define Trace(x)
#  define Tracev(x)
#  define Tracevv(x)
#  define Tracec(c, x)
#  define Tracecv(c, x)
static int  fill_inbuf(void);
static void flush_window(void);
static void error(const char *) __attribute__((noreturn));
static void kputs(const char *);
static inline unsigned char get_byte(void)
#define EXT_MEM_K (*(unsigned short *)0x90002)
#define ALT_MEM_K (*(unsigned long *) 0x901e0)
#define SCREEN_INFO (*(struct screen_info *)0x90000)
static long bytes_out;
static uch *output_data;
static unsigned long output_ptr;
static unsigned long free_mem_ptr = (unsigned long) &end;
static unsigned long free_mem_end_ptr = (unsigned long) &end + 0x90000;
#define INPLACE_MOVE_ROUTINE	0x1000
#define LOW_BUFFER_START	0x2000
#define LOW_BUFFER_END		0x90000
#define LOW_BUFFER_SIZE		(LOW_BUFFER_END - LOW_BUFFER_START)
#define HEAP_SIZE		0x3000
static int high_loaded;
static uch *high_buffer_start;
static char *vidmem = (char *)0xb8000;
static int lines, cols;
#define BOOTLOADER_INFLATE
static inline void scroll(void)
static inline void kputchar(unsigned char ch)
static void kputs(const char *s)
static int fill_inbuf()
static void flush_window_low(void)
static void flush_window_high(void)
static void flush_window(void)
static void error(const char *x)
#define STACK_SIZE (4096)
long user_stack[STACK_SIZE];
struct  stack_start = ;
void setup_normal_output_buffer(void)
struct moveparams ;
void setup_output_buffer_if_we_run_high(struct moveparams *mv)
void close_output_buffer_if_we_run_high(struct moveparams *mv)
#undef DEBUGFLAG
int debugflag;
int decompress_kernel(struct moveparams *mv)
