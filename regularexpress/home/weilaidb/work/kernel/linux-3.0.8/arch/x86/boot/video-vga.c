static struct mode_info vga_modes[] = ;
static struct mode_info ega_modes[] = ;
static struct mode_info cga_modes[] = ;
static __videocard video_vga;
static u8 vga_set_basic_mode(void)
static void vga_set_8font(void)
static void vga_set_14font(void)
static void vga_set_80x43(void)
u16 vga_crtc(void)
static void vga_set_480_scanlines(void)
static void vga_set_vertical_end(int lines)
static void vga_set_80x30(void)
static void vga_set_80x34(void)
static void vga_set_80x60(void)
static int vga_set_mode(struct mode_info *mode)
static int vga_probe(void)
static __videocard video_vga = ;
