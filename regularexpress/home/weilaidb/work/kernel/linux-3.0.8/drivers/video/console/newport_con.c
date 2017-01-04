extern unsigned long sgi_gfxaddr;
#define FONT_DATA ((unsigned char *)font_vga_8x16.data)
#define REFCOUNT(fd)	(((int *)(fd))[-1])
#define FNTSIZE(fd)	(((int *)(fd))[-2])
#define FNTCHARCNT(fd)	(((int *)(fd))[-3])
#define FONT_EXTRA_WORDS 3
static unsigned char *font_data[MAX_NR_CONSOLES];
static struct newport_regs *npregs;
static int logo_active;
static int topscan;
static int xcurs_correction = 29;
static int newport_xsize;
static int newport_ysize;
static int newport_has_init;
static int newport_set_def_font(int unit, struct console_font *op);
#define BMASK(c) (c << 24)
#define RENDER(regs, cp) do  while(0)
#define TESTVAL 0xdeadbeef
#define XSTI_TO_FXSTART(val) (((val) & 0xffff) << 11)
static inline void newport_render_background(int xstart, int ystart,
int xend, int yend, int ci)
static inline void newport_init_cmap(void)
static const struct linux_logo *newport_show_logo(void)
static inline void newport_clear_screen(int xstart, int ystart, int xend,
int yend, int ci)
static inline void newport_clear_lines(int ystart, int yend, int ci)
static void newport_reset(void)
static void newport_get_screensize(void)
static void newport_get_revisions(void)
static void newport_exit(void)
static const char *newport_startup(void)
static void newport_init(struct vc_data *vc, int init)
static void newport_deinit(struct vc_data *c)
static void newport_clear(struct vc_data *vc, int sy, int sx, int height,
int width)
static void newport_putc(struct vc_data *vc, int charattr, int ypos,
int xpos)
static void newport_putcs(struct vc_data *vc, const unsigned short *s,
int count, int ypos, int xpos)
static void newport_cursor(struct vc_data *vc, int mode)
static int newport_switch(struct vc_data *vc)
static int newport_blank(struct vc_data *c, int blank, int mode_switch)
static int newport_set_font(int unit, struct console_font *op)
static int newport_set_def_font(int unit, struct console_font *op)
static int newport_font_default(struct vc_data *vc, struct console_font *op, char *name)
static int newport_font_set(struct vc_data *vc, struct console_font *font, unsigned flags)
static int newport_set_palette(struct vc_data *vc, unsigned char *table)
static int newport_scrolldelta(struct vc_data *vc, int lines)
static int newport_scroll(struct vc_data *vc, int t, int b, int dir,
int lines)
static void newport_bmove(struct vc_data *vc, int sy, int sx, int dy,
int dx, int h, int w)
static int newport_dummy(struct vc_data *c)
#define DUMMY (void *) newport_dummy
const struct consw newport_con = ;
static int __init newport_console_init(void)
module_init(newport_console_init);
static void __exit newport_console_exit(void)
module_exit(newport_console_exit);
MODULE_LICENSE("GPL");
