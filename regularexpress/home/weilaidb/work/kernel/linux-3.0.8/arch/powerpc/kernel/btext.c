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
static unsigned char *logicalDisplayBase __force_data;
unsigned long disp_BAT[2] __initdata = ;
#define cmapsz	(16*256)
static unsigned char vga_font[cmapsz];
int boot_text_mapped __force_data = 0;
int force_printk_to_btext = 0;
void __init btext_prepare_BAT(void)
void __init btext_setup_display(int width, int height, int depth, int pitch,
unsigned long address)
void __init btext_unmap(void)
static void map_boot_text(void)
int btext_initialize(struct device_node *np)
int __init btext_find_display(int allow_nonstdout)
static unsigned char * calc_base(int x, int y)
void btext_update_display(unsigned long phys, int width, int height,
int depth, int pitch)
EXPORT_SYMBOL(btext_update_display);
void btext_clearscreen(void)
void btext_flushscreen(void)
void btext_flushline(void)
static void scrollscreen(void)
void btext_drawchar(char c)
void btext_drawstring(const char *c)
void btext_drawtext(const char *c, unsigned int len)
void btext_drawhex(unsigned long v)
static void draw_byte(unsigned char c, long locX, long locY)
static unsigned int expand_bits_8[16] = ;
static unsigned int expand_bits_16[4] = ;
static void draw_byte_32(unsigned char *font, unsigned int *base, int rb)
static void draw_byte_16(unsigned char *font, unsigned int *base, int rb)
static void draw_byte_8(unsigned char *font, unsigned int *base, int rb)
static unsigned char vga_font[cmapsz] = ;
void __init udbg_init_btext(void)
