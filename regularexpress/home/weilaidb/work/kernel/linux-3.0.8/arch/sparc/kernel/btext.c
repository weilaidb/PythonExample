#define NO_SCROLL
static void scrollscreen(void);
static void draw_byte(unsigned char c, long locX, long locY);
static void draw_byte_32(unsigned char *bits, unsigned int *base, int rb);
static void draw_byte_16(unsigned char *bits, unsigned int *base, int rb);
static void draw_byte_8(unsigned char *bits, unsigned int *base, int rb);
#define __force_data __attribute__((__section__(".data")))
static int g_loc_X __force_data;
static int g_loc_Y __force_data;
static int g_max_loc_X __force_data;
static int g_max_loc_Y __force_data;
static int dispDeviceRowBytes __force_data;
static int dispDeviceDepth  __force_data;
static int dispDeviceRect[4] __force_data;
static unsigned char *dispDeviceBase __force_data;
#define cmapsz	(16*256)
static unsigned char vga_font[cmapsz];
static int __init btext_initialize(phandle node)
static unsigned char * calc_base(int x, int y)
static void btext_clearscreen(void)
static void scrollscreen(void)
void btext_drawchar(char c)
static void btext_drawtext(const char *c, unsigned int len)
static void draw_byte(unsigned char c, long locX, long locY)
static unsigned int expand_bits_8[16] = ;
static unsigned int expand_bits_16[4] = ;
static void draw_byte_32(unsigned char *font, unsigned int *base, int rb)
static void draw_byte_16(unsigned char *font, unsigned int *base, int rb)
static void draw_byte_8(unsigned char *font, unsigned int *base, int rb)
static void btext_console_write(struct console *con, const char *s,
unsigned int n)
static struct console btext_console = ;
int __init btext_find_display(void)
static unsigned char vga_font[cmapsz] = ;
