static DEFINE_SPINLOCK(mda_lock);
static unsigned long	mda_vram_base;
static unsigned long	mda_vram_len;
static unsigned int	mda_num_columns;
static unsigned int	mda_num_lines;
static unsigned int	mda_index_port;
static unsigned int	mda_value_port;
static unsigned int	mda_mode_port;
static unsigned int	mda_status_port;
static unsigned int	mda_gfx_port;
static int	mda_cursor_loc=-1;
static int	mda_cursor_size_from=-1;
static int	mda_cursor_size_to=-1;
static enum  mda_type;
static char *mda_type_name;
static int	mda_first_vc = 13;
static int	mda_last_vc  = 16;
static struct vc_data	*mda_display_fg = NULL;
module_param(mda_first_vc, int, 0);
MODULE_PARM_DESC(mda_first_vc, "First virtual console. Default: 13");
module_param(mda_last_vc, int, 0);
MODULE_PARM_DESC(mda_last_vc, "Last virtual console. Default: 16");
#define MDA_CURSOR_BLINKING	0x00
#define MDA_CURSOR_OFF		0x20
#define MDA_CURSOR_SLOWBLINK	0x60
#define MDA_MODE_GRAPHICS	0x02
#define MDA_MODE_VIDEO_EN	0x08
#define MDA_MODE_BLINK_EN	0x20
#define MDA_MODE_GFX_PAGE1	0x80
#define MDA_STATUS_HSYNC	0x01
#define MDA_STATUS_VSYNC	0x80
#define MDA_STATUS_VIDEO	0x08
#define MDA_CONFIG_COL132	0x08
#define MDA_GFX_MODE_EN		0x01
#define MDA_GFX_PAGE_EN		0x02
static void write_mda_b(unsigned int val, unsigned char reg)
static void write_mda_w(unsigned int val, unsigned char reg)
static int test_mda_b(unsigned char val, unsigned char reg)
static inline void mda_set_cursor(unsigned int location)
static inline void mda_set_cursor_size(int from, int to)
static int __init mdacon_setup(char *str)
__setup("mdacon=", mdacon_setup);
static int mda_detect(void)
static void mda_initialize(void)
static const char *mdacon_startup(void)
static void mdacon_init(struct vc_data *c, int init)
static void mdacon_deinit(struct vc_data *c)
static inline u16 mda_convert_attr(u16 ch)
static u8 mdacon_build_attr(struct vc_data *c, u8 color, u8 intensity,
u8 blink, u8 underline, u8 reverse, u8 italic)
static void mdacon_invert_region(struct vc_data *c, u16 *p, int count)
#define MDA_ADDR(x,y)  ((u16 *) mda_vram_base + (y)*mda_num_columns + (x))
static void mdacon_putc(struct vc_data *c, int ch, int y, int x)
static void mdacon_putcs(struct vc_data *c, const unsigned short *s,
int count, int y, int x)
static void mdacon_clear(struct vc_data *c, int y, int x,
int height, int width)
static void mdacon_bmove(struct vc_data *c, int sy, int sx,
int dy, int dx, int height, int width)
static int mdacon_switch(struct vc_data *c)
static int mdacon_set_palette(struct vc_data *c, unsigned char *table)
static int mdacon_blank(struct vc_data *c, int blank, int mode_switch)
static int mdacon_scrolldelta(struct vc_data *c, int lines)
static void mdacon_cursor(struct vc_data *c, int mode)
static int mdacon_scroll(struct vc_data *c, int t, int b, int dir, int lines)
static const struct consw mda_con = ;
int __init mda_console_init(void)
static void __exit mda_console_exit(void)
module_init(mda_console_init);
module_exit(mda_console_exit);
MODULE_LICENSE("GPL");
