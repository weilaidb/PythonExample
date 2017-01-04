static DEFINE_SPINLOCK(vga_lock);
static int cursor_size_lastfrom;
static int cursor_size_lastto;
static u32 vgacon_xres;
static u32 vgacon_yres;
static struct vgastate state;
#define BLANK 0x0020
#define CAN_LOAD_EGA_FONTS
#define CAN_LOAD_PALETTE
#undef TRIDENT_GLITCH
#define VGA_FONTWIDTH       8
static const char *vgacon_startup(void);
static void vgacon_init(struct vc_data *c, int init);
static void vgacon_deinit(struct vc_data *c);
static void vgacon_cursor(struct vc_data *c, int mode);
static int vgacon_switch(struct vc_data *c);
static int vgacon_blank(struct vc_data *c, int blank, int mode_switch);
static int vgacon_set_palette(struct vc_data *vc, unsigned char *table);
static int vgacon_scrolldelta(struct vc_data *c, int lines);
static int vgacon_set_origin(struct vc_data *c);
static void vgacon_save_screen(struct vc_data *c);
static int vgacon_scroll(struct vc_data *c, int t, int b, int dir,
int lines);
static void vgacon_invert_region(struct vc_data *c, u16 * p, int count);
static unsigned long vgacon_uni_pagedir[2];
static int		vga_init_done		__read_mostly;
static unsigned long	vga_vram_base		__read_mostly;
static unsigned long	vga_vram_end		__read_mostly;
static unsigned int	vga_vram_size		__read_mostly;
static u16		vga_video_port_reg	__read_mostly;
static u16		vga_video_port_val	__read_mostly;
static unsigned int	vga_video_num_columns;
static unsigned int	vga_video_num_lines;
static int		vga_can_do_color	__read_mostly;
static unsigned int	vga_default_font_height __read_mostly;
static unsigned char	vga_video_type		__read_mostly;
static unsigned char	vga_hardscroll_enabled	__read_mostly;
static unsigned char	vga_hardscroll_user_enable __read_mostly = 1;
static unsigned char	vga_font_is_default = 1;
static int		vga_vesa_blanked;
static int 		vga_palette_blanked;
static int 		vga_is_gfx;
static int 		vga_512_chars;
static int 		vga_video_font_height;
static int 		vga_scan_lines		__read_mostly;
static unsigned int 	vga_rolled_over;
static int vgacon_text_mode_force;
bool vgacon_text_force(void)
EXPORT_SYMBOL(vgacon_text_force);
static int __init text_mode(char *str)
__setup("nomodeset", text_mode);
static int __init no_scroll(char *str)
__setup("no-scroll", no_scroll);
static inline void write_vga(unsigned char reg, unsigned int val)
static inline void vga_set_mem_top(struct vc_data *c)
static void *vgacon_scrollback;
static int vgacon_scrollback_tail;
static int vgacon_scrollback_size;
static int vgacon_scrollback_rows;
static int vgacon_scrollback_cnt;
static int vgacon_scrollback_cur;
static int vgacon_scrollback_save;
static int vgacon_scrollback_restore;
static void vgacon_scrollback_init(int pitch)
static void vgacon_scrollback_startup(void)
static void vgacon_scrollback_update(struct vc_data *c, int t, int count)
static void vgacon_restore_screen(struct vc_data *c)
static int vgacon_scrolldelta(struct vc_data *c, int lines)
#define vgacon_scrollback_startup(...) do  while (0)
#define vgacon_scrollback_init(...)    do  while (0)
#define vgacon_scrollback_update(...)  do  while (0)
static void vgacon_restore_screen(struct vc_data *c)
static int vgacon_scrolldelta(struct vc_data *c, int lines)
static const char *vgacon_startup(void)
static void vgacon_init(struct vc_data *c, int init)
static void vgacon_deinit(struct vc_data *c)
static u8 vgacon_build_attr(struct vc_data *c, u8 color, u8 intensity,
u8 blink, u8 underline, u8 reverse, u8 italic)
static void vgacon_invert_region(struct vc_data *c, u16 * p, int count)
static void vgacon_set_cursor_size(int xpos, int from, int to)
static void vgacon_cursor(struct vc_data *c, int mode)
static int vgacon_doresize(struct vc_data *c,
unsigned int width, unsigned int height)
static int vgacon_switch(struct vc_data *c)
static void vga_set_palette(struct vc_data *vc, unsigned char *table)
static int vgacon_set_palette(struct vc_data *vc, unsigned char *table)
static struct  vga_state;
static void vga_vesa_blank(struct vgastate *state, int mode)
static void vga_vesa_unblank(struct vgastate *state)
static void vga_pal_blank(struct vgastate *state)
static int vgacon_blank(struct vc_data *c, int blank, int mode_switch)
#define colourmap 0xa0000
#define blackwmap 0xa0000
#define cmapsz 8192
static int vgacon_do_font_op(struct vgastate *state,char *arg,int set,int ch512)
static int vgacon_adjust_height(struct vc_data *vc, unsigned fontheight)
static int vgacon_font_set(struct vc_data *c, struct console_font *font, unsigned flags)
static int vgacon_font_get(struct vc_data *c, struct console_font *font)
#define vgacon_font_set NULL
#define vgacon_font_get NULL
static int vgacon_resize(struct vc_data *c, unsigned int width,
unsigned int height, unsigned int user)
static int vgacon_set_origin(struct vc_data *c)
static void vgacon_save_screen(struct vc_data *c)
static int vgacon_scroll(struct vc_data *c, int t, int b, int dir,
int lines)
static int vgacon_dummy(struct vc_data *c)
#define DUMMY (void *) vgacon_dummy
const struct consw vga_con = ;
MODULE_LICENSE("GPL");
