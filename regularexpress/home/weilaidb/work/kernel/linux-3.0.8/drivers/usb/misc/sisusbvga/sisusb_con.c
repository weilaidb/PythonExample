#define sisusbcon_writew(val, addr)	(*(addr) = (val))
#define sisusbcon_readw(addr)		(*(addr))
#define sisusbcon_memmovew(d, s, c)	memmove(d, s, c)
#define sisusbcon_memcpyw(d, s, c)	memcpy(d, s, c)
static struct sisusb_usb_data *mysisusbs[MAX_NR_CONSOLES];
static const struct consw sisusb_con;
static inline void
sisusbcon_memsetw(u16 *s, u16 c, unsigned int count)
static inline void
sisusb_initialize(struct sisusb_usb_data *sisusb)
static inline void
sisusbcon_set_start_address(struct sisusb_usb_data *sisusb, struct vc_data *c)
void
sisusb_set_cursor(struct sisusb_usb_data *sisusb, unsigned int location)
static inline struct sisusb_usb_data *
sisusb_get_sisusb(unsigned short console)
static inline int
sisusb_sisusb_valid(struct sisusb_usb_data *sisusb)
static struct sisusb_usb_data *
sisusb_get_sisusb_lock_and_check(unsigned short console)
static int
sisusb_is_inactive(struct vc_data *c, struct sisusb_usb_data *sisusb)
static const char *
sisusbcon_startup(void)
static void
sisusbcon_init(struct vc_data *c, int init)
static void
sisusbcon_deinit(struct vc_data *c)
static u8
sisusbcon_build_attr(struct vc_data *c, u8 color, u8 intensity,
u8 blink, u8 underline, u8 reverse, u8 unused)
static void
sisusbcon_invert_region(struct vc_data *vc, u16 *p, int count)
#define SISUSB_VADDR(x,y) \
((u16 *)c->vc_origin + \
(y) * sisusb->sisusb_num_columns + \
(x))
#define SISUSB_HADDR(x,y) \
((u16 *)(sisusb->vrambase + (c->vc_origin - sisusb->scrbuf)) + \
(y) * sisusb->sisusb_num_columns + \
(x))
static void
sisusbcon_putc(struct vc_data *c, int ch, int y, int x)
static void
sisusbcon_putcs(struct vc_data *c, const unsigned short *s,
int count, int y, int x)
static void
sisusbcon_clear(struct vc_data *c, int y, int x, int height, int width)
static void
sisusbcon_bmove(struct vc_data *c, int sy, int sx,
int dy, int dx, int height, int width)
static int
sisusbcon_switch(struct vc_data *c)
static void
sisusbcon_save_screen(struct vc_data *c)
static int
sisusbcon_set_palette(struct vc_data *c, unsigned char *table)
static int
sisusbcon_blank(struct vc_data *c, int blank, int mode_switch)
static int
sisusbcon_scrolldelta(struct vc_data *c, int lines)
static void
sisusbcon_cursor(struct vc_data *c, int mode)
static int
sisusbcon_scroll_area(struct vc_data *c, struct sisusb_usb_data *sisusb,
int t, int b, int dir, int lines)
static int
sisusbcon_scroll(struct vc_data *c, int t, int b, int dir, int lines)
static int
sisusbcon_set_origin(struct vc_data *c)
static int
sisusbcon_resize(struct vc_data *c, unsigned int newcols, unsigned int newrows,
unsigned int user)
int
sisusbcon_do_font_op(struct sisusb_usb_data *sisusb, int set, int slot,
u8 *arg, int cmapsz, int ch512, int dorecalc,
struct vc_data *c, int fh, int uplock)
static int
sisusbcon_font_set(struct vc_data *c, struct console_font *font,
unsigned flags)
static int
sisusbcon_font_get(struct vc_data *c, struct console_font *font)
static const struct consw sisusb_con = ;
static const char *sisusbdummycon_startup(void)
static void sisusbdummycon_init(struct vc_data *vc, int init)
static int sisusbdummycon_dummy(void)
#define SISUSBCONDUMMY	(void *)sisusbdummycon_dummy
static const struct consw sisusb_dummy_con = ;
int
sisusb_console_init(struct sisusb_usb_data *sisusb, int first, int last)
void
sisusb_console_exit(struct sisusb_usb_data *sisusb)
void __init sisusb_init_concode(void)
