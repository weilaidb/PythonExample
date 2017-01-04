#undef FBCONDEBUG
#  define DPRINTK(fmt, args...) printk(KERN_DEBUG "%s: " fmt, __func__ , ## args)
#  define DPRINTK(fmt, args...)
enum ;
static struct display fb_display[MAX_NR_CONSOLES];
static signed char con2fb_map[MAX_NR_CONSOLES];
static signed char con2fb_map_boot[MAX_NR_CONSOLES];
static int logo_lines;
static int logo_shown = FBCON_LOGO_CANSHOW;
static int fbcon_softback_size = 32768;
static unsigned long softback_buf, softback_curr;
static unsigned long softback_in;
static unsigned long softback_top, softback_end;
static int softback_lines;
static int first_fb_vc;
static int last_fb_vc = MAX_NR_CONSOLES - 1;
static int fbcon_is_default = 1;
static int fbcon_has_exited;
static int primary_device = -1;
static int fbcon_has_console_bind;
static int map_override;
static inline void fbcon_map_override(void)
static inline void fbcon_map_override(void)
static char fontname[40];
static int info_idx = -1;
static int initial_rotation;
static int fbcon_has_sysfs;
static const struct consw fb_con;
#define CM_SOFTBACK	(8)
#define advance_row(p, delta) (unsigned short *)((unsigned long)(p) + (delta) * vc->vc_size_row)
static int fbcon_set_origin(struct vc_data *);
#define CURSOR_DRAW_DELAY		(1)
static int vbl_cursor_cnt;
static int fbcon_cursor_noblink;
#define divides(a, b)	((!(a) || (b)%(a)) ? 0 : 1)
static const char *fbcon_startup(void);
static void fbcon_init(struct vc_data *vc, int init);
static void fbcon_deinit(struct vc_data *vc);
static void fbcon_clear(struct vc_data *vc, int sy, int sx, int height,
int width);
static void fbcon_putc(struct vc_data *vc, int c, int ypos, int xpos);
static void fbcon_putcs(struct vc_data *vc, const unsigned short *s,
int count, int ypos, int xpos);
static void fbcon_clear_margins(struct vc_data *vc, int bottom_only);
static void fbcon_cursor(struct vc_data *vc, int mode);
static int fbcon_scroll(struct vc_data *vc, int t, int b, int dir,
int count);
static void fbcon_bmove(struct vc_data *vc, int sy, int sx, int dy, int dx,
int height, int width);
static int fbcon_switch(struct vc_data *vc);
static int fbcon_blank(struct vc_data *vc, int blank, int mode_switch);
static int fbcon_set_palette(struct vc_data *vc, unsigned char *table);
static int fbcon_scrolldelta(struct vc_data *vc, int lines);
static __inline__ void ywrap_up(struct vc_data *vc, int count);
static __inline__ void ywrap_down(struct vc_data *vc, int count);
static __inline__ void ypan_up(struct vc_data *vc, int count);
static __inline__ void ypan_down(struct vc_data *vc, int count);
static void fbcon_bmove_rec(struct vc_data *vc, struct display *p, int sy, int sx,
int dy, int dx, int height, int width, u_int y_break);
static void fbcon_set_disp(struct fb_info *info, struct fb_var_screeninfo *var,
int unit);
static void fbcon_redraw_move(struct vc_data *vc, struct display *p,
int line, int count, int dy);
static void fbcon_modechanged(struct fb_info *info);
static void fbcon_set_all_vcs(struct fb_info *info);
static void fbcon_start(void);
static void fbcon_exit(void);
static struct device *fbcon_device;
static inline void fbcon_set_rotation(struct fb_info *info)
static void fbcon_rotate(struct fb_info *info, u32 rotate)
static void fbcon_rotate_all(struct fb_info *info, u32 rotate)
static inline void fbcon_set_rotation(struct fb_info *info)
static void fbcon_rotate(struct fb_info *info, u32 rotate)
static void fbcon_rotate_all(struct fb_info *info, u32 rotate)
static int fbcon_get_rotate(struct fb_info *info)
static inline int fbcon_is_inactive(struct vc_data *vc, struct fb_info *info)
static int get_color(struct vc_data *vc, struct fb_info *info,
u16 c, int is_fg)
static void fbcon_update_softback(struct vc_data *vc)
static void fb_flashcursor(struct work_struct *work)
static void cursor_timer_handler(unsigned long dev_addr)
static void fbcon_add_cursor_timer(struct fb_info *info)
static void fbcon_del_cursor_timer(struct fb_info *info)
static int __init fb_console_setup(char *this_opt)
__setup("fbcon=", fb_console_setup);
static int search_fb_in_map(int idx)
static int search_for_mapped_con(void)
static int fbcon_takeover(int show_logo)
static void fbcon_prepare_logo(struct vc_data *vc, struct fb_info *info,
int cols, int rows, int new_cols, int new_rows)
static void fbcon_prepare_logo(struct vc_data *vc, struct fb_info *info,
int cols, int rows, int new_cols, int new_rows)
static void set_blitting_type(struct vc_data *vc, struct fb_info *info)
static int fbcon_invalid_charcount(struct fb_info *info, unsigned charcount)
static void set_blitting_type(struct vc_data *vc, struct fb_info *info)
static int fbcon_invalid_charcount(struct fb_info *info, unsigned charcount)
static int con2fb_acquire_newinfo(struct vc_data *vc, struct fb_info *info,
int unit, int oldidx)
static int con2fb_release_oldinfo(struct vc_data *vc, struct fb_info *oldinfo,
struct fb_info *newinfo, int unit,
int oldidx, int found)
static void con2fb_init_display(struct vc_data *vc, struct fb_info *info,
int unit, int show_logo)
static int set_con2fb_map(int unit, int newidx, int user)
static int var_to_display(struct display *disp,
struct fb_var_screeninfo *var,
struct fb_info *info)
static void display_to_var(struct fb_var_screeninfo *var,
struct display *disp)
static const char *fbcon_startup(void)
static void fbcon_init(struct vc_data *vc, int init)
static void fbcon_free_font(struct display *p)
static void fbcon_deinit(struct vc_data *vc)
static void fbcon_clear(struct vc_data *vc, int sy, int sx, int height,
int width)
static void fbcon_putcs(struct vc_data *vc, const unsigned short *s,
int count, int ypos, int xpos)
static void fbcon_putc(struct vc_data *vc, int c, int ypos, int xpos)
static void fbcon_clear_margins(struct vc_data *vc, int bottom_only)
static void fbcon_cursor(struct vc_data *vc, int mode)
static int scrollback_phys_max = 0;
static int scrollback_max = 0;
static int scrollback_current = 0;
static void fbcon_set_disp(struct fb_info *info, struct fb_var_screeninfo *var,
int unit)
static __inline__ void ywrap_up(struct vc_data *vc, int count)
static __inline__ void ywrap_down(struct vc_data *vc, int count)
static __inline__ void ypan_up(struct vc_data *vc, int count)
static __inline__ void ypan_up_redraw(struct vc_data *vc, int t, int count)
static __inline__ void ypan_down(struct vc_data *vc, int count)
static __inline__ void ypan_down_redraw(struct vc_data *vc, int t, int count)
static void fbcon_redraw_softback(struct vc_data *vc, struct display *p,
long delta)
static void fbcon_redraw_move(struct vc_data *vc, struct display *p,
int line, int count, int dy)
static void fbcon_redraw_blit(struct vc_data *vc, struct fb_info *info,
struct display *p, int line, int count, int ycount)
static void fbcon_redraw(struct vc_data *vc, struct display *p,
int line, int count, int offset)
static inline void fbcon_softback_note(struct vc_data *vc, int t,
int count)
static int fbcon_scroll(struct vc_data *vc, int t, int b, int dir,
int count)
static void fbcon_bmove(struct vc_data *vc, int sy, int sx, int dy, int dx,
int height, int width)
static void fbcon_bmove_rec(struct vc_data *vc, struct display *p, int sy, int sx,
int dy, int dx, int height, int width, u_int y_break)
static void updatescrollmode(struct display *p,
struct fb_info *info,
struct vc_data *vc)
static int fbcon_resize(struct vc_data *vc, unsigned int width,
unsigned int height, unsigned int user)
static int fbcon_switch(struct vc_data *vc)
static void fbcon_generic_blank(struct vc_data *vc, struct fb_info *info,
int blank)
static int fbcon_blank(struct vc_data *vc, int blank, int mode_switch)
static int fbcon_debug_enter(struct vc_data *vc)
static int fbcon_debug_leave(struct vc_data *vc)
static int fbcon_get_font(struct vc_data *vc, struct console_font *font)
static int fbcon_do_set_font(struct vc_data *vc, int w, int h,
const u8 * data, int userfont)
static int fbcon_copy_font(struct vc_data *vc, int con)
static int fbcon_set_font(struct vc_data *vc, struct console_font *font, unsigned flags)
static int fbcon_set_def_font(struct vc_data *vc, struct console_font *font, char *name)
static u16 palette_red[16];
static u16 palette_green[16];
static u16 palette_blue[16];
static struct fb_cmap palette_cmap = ;
static int fbcon_set_palette(struct vc_data *vc, unsigned char *table)
static u16 *fbcon_screen_pos(struct vc_data *vc, int offset)
static unsigned long fbcon_getxy(struct vc_data *vc, unsigned long pos,
int *px, int *py)
static void fbcon_invert_region(struct vc_data *vc, u16 * p, int cnt)
static int fbcon_scrolldelta(struct vc_data *vc, int lines)
static int fbcon_set_origin(struct vc_data *vc)
static void fbcon_suspended(struct fb_info *info)
static void fbcon_resumed(struct fb_info *info)
static void fbcon_modechanged(struct fb_info *info)
static void fbcon_set_all_vcs(struct fb_info *info)
static int fbcon_mode_deleted(struct fb_info *info,
struct fb_videomode *mode)
static int fbcon_unbind(void)
static inline int fbcon_unbind(void)
static int fbcon_fb_unbind(int idx)
static int fbcon_fb_unregistered(struct fb_info *info)
static void fbcon_remap_all(int idx)
static void fbcon_select_primary(struct fb_info *info)
static inline void fbcon_select_primary(struct fb_info *info)
static int fbcon_fb_registered(struct fb_info *info)
static void fbcon_fb_blanked(struct fb_info *info, int blank)
static void fbcon_new_modelist(struct fb_info *info)
static void fbcon_get_requirement(struct fb_info *info,
struct fb_blit_caps *caps)
static int fbcon_event_notify(struct notifier_block *self,
unsigned long action, void *data)
static const struct consw fb_con = ;
static struct notifier_block fbcon_event_notifier = ;
static ssize_t store_rotate(struct device *device,
struct device_attribute *attr, const char *buf,
size_t count)
static ssize_t store_rotate_all(struct device *device,
struct device_attribute *attr,const char *buf,
size_t count)
static ssize_t show_rotate(struct device *device,
struct device_attribute *attr,char *buf)
static ssize_t show_cursor_blink(struct device *device,
struct device_attribute *attr, char *buf)
static ssize_t store_cursor_blink(struct device *device,
struct device_attribute *attr,
const char *buf, size_t count)
static struct device_attribute device_attrs[] = ;
static int fbcon_init_device(void)
static void fbcon_start(void)
static void fbcon_exit(void)
static int __init fb_console_init(void)
module_init(fb_console_init);
static void __exit fbcon_deinit_device(void)
static void __exit fb_console_exit(void)
module_exit(fb_console_exit);
MODULE_LICENSE("GPL");
