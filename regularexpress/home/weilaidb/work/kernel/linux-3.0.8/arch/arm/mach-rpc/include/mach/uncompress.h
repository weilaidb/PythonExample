#define VIDMEM ((char *)SCREEN_START)
int video_size_row;
unsigned char bytes_per_char_h;
extern unsigned long con_charconvtable[256];
struct param_struct ;
static const unsigned long palette_4[16] = ;
#define palette_setpixel(p)	*(unsigned long *)(IO_START+0x00400000) = 0x10000000|((p) & 255)
#define palette_write(v)	*(unsigned long *)(IO_START+0x00400000) = 0x00000000|((v) & 0x00ffffff)
extern __attribute__((pure)) struct param_struct *params(void);
#define params (params())
unsigned long video_num_cols;
unsigned long video_num_rows;
unsigned long video_x;
unsigned long video_y;
unsigned char bytes_per_char_v;
int white;
static void putc(int c)
static inline void flush(void)
static void arch_decomp_setup(void)
#define arch_decomp_wdog()
