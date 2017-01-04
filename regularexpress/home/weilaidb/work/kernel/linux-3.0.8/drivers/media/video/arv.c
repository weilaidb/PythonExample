#define USE_INT		0
#define VERSION	"0.04"
#define ar_inl(addr) 		inl((unsigned long)(addr))
#define ar_outl(val, addr)	outl((unsigned long)(val), (unsigned long)(addr))
extern struct cpuinfo_m32r	boot_cpu_data;
#define AR_WIDTH_VGA		640
#define AR_HEIGHT_VGA		480
#define AR_WIDTH_QVGA		320
#define AR_HEIGHT_QVGA		240
#define MIN_AR_WIDTH		AR_WIDTH_QVGA
#define MIN_AR_HEIGHT		AR_HEIGHT_QVGA
#define MAX_AR_WIDTH		AR_WIDTH_VGA
#define MAX_AR_HEIGHT		AR_HEIGHT_VGA
#define AR_BITS_PER_PIXEL	16
#define AR_BYTES_PER_PIXEL	(AR_BITS_PER_PIXEL / 8)
#define AR_LINE_BYTES_VGA	(AR_WIDTH_VGA * AR_BYTES_PER_PIXEL)
#define AR_LINE_BYTES_QVGA	(AR_WIDTH_QVGA * AR_BYTES_PER_PIXEL)
#define MAX_AR_LINE_BYTES	AR_LINE_BYTES_VGA
#define AR_FRAME_BYTES_VGA \
(AR_WIDTH_VGA * AR_HEIGHT_VGA * AR_BYTES_PER_PIXEL)
#define AR_FRAME_BYTES_QVGA \
(AR_WIDTH_QVGA * AR_HEIGHT_QVGA * AR_BYTES_PER_PIXEL)
#define MAX_AR_FRAME_BYTES \
(MAX_AR_WIDTH * MAX_AR_HEIGHT * AR_BYTES_PER_PIXEL)
#define AR_MAX_FRAME		15
#define AR_SIZE_VGA		0
#define AR_SIZE_QVGA		1
#define AR_MODE_INTERLACE	0
#define AR_MODE_NORMAL		1
struct ar ;
static struct ar ardev;
static int video_nr = -1;
static unsigned char yuv[MAX_AR_FRAME_BYTES];
#define DEFAULT_FREQ	50
static int freq = DEFAULT_FREQ;
static int vga;
static int vga_interlace;
module_param(freq, int, 0);
module_param(vga, int, 0);
module_param(vga_interlace, int, 0);
static void wait_for_vsync(void)
static void wait_acknowledge(void)
static void iic(int n, unsigned long addr, unsigned long data1, unsigned long data2,
unsigned long data3)
static void init_iic(void)
static inline void disable_dma(void)
static inline void enable_dma(void)
static inline void clear_dma_status(void)
static void wait_for_vertical_sync(struct ar *ar, int exp_line)
static ssize_t ar_read(struct file *file, char *buf, size_t count, loff_t *ppos)
static int ar_querycap(struct file *file, void  *priv,
struct v4l2_capability *vcap)
static int ar_enum_input(struct file *file, void *fh, struct v4l2_input *vin)
static int ar_g_input(struct file *file, void *fh, unsigned int *inp)
static int ar_s_input(struct file *file, void *fh, unsigned int inp)
static int ar_g_fmt_vid_cap(struct file *file, void *fh, struct v4l2_format *fmt)
static int ar_try_fmt_vid_cap(struct file *file, void *fh, struct v4l2_format *fmt)
static int ar_s_fmt_vid_cap(struct file *file, void *fh, struct v4l2_format *fmt)
static int ar_enum_fmt_vid_cap(struct file *file, void *fh, struct v4l2_fmtdesc *fmt)
#if USE_INT
static void ar_interrupt(int irq, void *dev)
static int ar_initialize(struct ar *ar)
static const struct v4l2_file_operations ar_fops = ;
static const struct v4l2_ioctl_ops ar_ioctl_ops = ;
#define ALIGN4(x)	((((int)(x)) & 0x3) == 0)
static int __init ar_init(void)
static int __init ar_init_module(void)
static void __exit ar_cleanup_module(void)
module_init(ar_init_module);
module_exit(ar_cleanup_module);
MODULE_AUTHOR("Takeo Takahashi <takahashi.takeo@renesas.com>");
MODULE_DESCRIPTION("Colour AR M64278(VGA) for Video4Linux");
MODULE_LICENSE("GPL");
