static struct fb_info fb_info = ;
static unsigned long fb_regs;
static unsigned char fb_bitmask;
#define TC_NBLANK	0x4080
#define TC_WEN		0x4088
#define TC_REN		0x408c
#define TC_FBEN		0x4090
#define TC_PRR		0x40ea
#define RR_CLEAR	0x0
#define RR_COPY		0x3
#define RR_NOOP		0x5
#define RR_XOR		0x6
#define RR_INVERT	0xa
#define RR_COPYINVERTED 0xc
#define RR_SET		0xf
#define BUSY		0x4044
#define WMRR		0x40ef
#define SOURCE_X	0x40f2
#define SOURCE_Y	0x40f6
#define DEST_X		0x40fa
#define DEST_Y		0x40fe
#define WHEIGHT		0x4106
#define WWIDTH		0x4102
#define WMOVE		0x409c
static struct fb_var_screeninfo hpfb_defined = ;
static int hpfb_setcolreg(unsigned regno, unsigned red, unsigned green,
unsigned blue, unsigned transp,
struct fb_info *info)
static int hpfb_blank(int blank, struct fb_info *info)
static void topcat_blit(int x0, int y0, int x1, int y1, int w, int h, int rr)
static void hpfb_copyarea(struct fb_info *info, const struct fb_copyarea *area)
static void hpfb_fillrect(struct fb_info *p, const struct fb_fillrect *region)
static int hpfb_sync(struct fb_info *info)
static struct fb_ops hpfb_ops = ;
#define HPFB_FBWMSB	0x05
#define HPFB_FBWLSB	0x07
#define HPFB_FBHMSB	0x09
#define HPFB_FBHLSB	0x0b
#define HPFB_DWMSB	0x0d
#define HPFB_DWLSB	0x0f
#define HPFB_DHMSB	0x11
#define HPFB_DHLSB	0x13
#define HPFB_NUMPLANES	0x5b
#define HPFB_FBOMSB	0x5d
#define HPFB_FBOLSB	0x5f
static int __devinit hpfb_init_one(unsigned long phys_base,
unsigned long virt_base)
#define topcat_sid_ok(x)  (((x) == DIO_ID2_LRCATSEYE) || ((x) == DIO_ID2_HRCCATSEYE)    \
|| ((x) == DIO_ID2_HRMCATSEYE) || ((x) == DIO_ID2_TOPCAT))
static int __devinit hpfb_dio_probe(struct dio_dev * d, const struct dio_device_id * ent)
static void __devexit hpfb_remove_one(struct dio_dev *d)
static struct dio_device_id hpfb_dio_tbl[] = ;
static struct dio_driver hpfb_driver = ;
int __init hpfb_init(void)
void __exit hpfb_cleanup_module(void)
module_init(hpfb_init);
module_exit(hpfb_cleanup_module);
MODULE_LICENSE("GPL");
