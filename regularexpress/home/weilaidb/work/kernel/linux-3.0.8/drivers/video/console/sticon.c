#define BLANK 0
static int vga_is_gfx;
static struct sti_struct *sticon_sti;
static unsigned long softback_buf, softback_curr;
static unsigned long softback_in;
static unsigned long softback_end;
static int softback_lines;
static int cursor_drawn;
#define CURSOR_DRAW_DELAY		(1)
#define DEFAULT_CURSOR_BLINK_RATE	(20)
static int vbl_cursor_cnt;
static inline void cursor_undrawn(void)
static const char *sticon_startup(void)
static int sticon_set_palette(struct vc_data *c, unsigned char *table)
static void sticon_putc(struct vc_data *conp, int c, int ypos, int xpos)
static void sticon_putcs(struct vc_data *conp, const unsigned short *s,
int count, int ypos, int xpos)
static void sticon_cursor(struct vc_data *conp, int mode)
static int sticon_scroll(struct vc_data *conp, int t, int b, int dir, int count)
static void sticon_bmove(struct vc_data *conp, int sy, int sx,
int dy, int dx, int height, int width)
static void sticon_init(struct vc_data *c, int init)
static void sticon_deinit(struct vc_data *c)
static void sticon_clear(struct vc_data *conp, int sy, int sx, int height,
int width)
static int sticon_switch(struct vc_data *conp)
static int sticon_set_origin(struct vc_data *conp)
static int sticon_blank(struct vc_data *c, int blank, int mode_switch)
static int sticon_scrolldelta(struct vc_data *conp, int lines)
static u16 *sticon_screen_pos(struct vc_data *conp, int offset)
static unsigned long sticon_getxy(struct vc_data *conp, unsigned long pos,
int *px, int *py)
static u8 sticon_build_attr(struct vc_data *conp, u8 color, u8 intens,
u8 blink, u8 underline, u8 reverse, u8 italic)
static void sticon_invert_region(struct vc_data *conp, u16 *p, int count)
static void sticon_save_screen(struct vc_data *conp)
static const struct consw sti_con = ;
static int __init sticonsole_init(void)
module_init(sticonsole_init);
MODULE_LICENSE("GPL");
