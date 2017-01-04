#define MAX_NR_CON_DRIVER 16
#define CON_DRIVER_FLAG_MODULE 1
#define CON_DRIVER_FLAG_INIT   2
#define CON_DRIVER_FLAG_ATTR   4
struct con_driver ;
static struct con_driver registered_con_driver[MAX_NR_CON_DRIVER];
const struct consw *conswitchp;
#define CTRL_ACTION 0x0d00ff81
#define CTRL_ALWAYS 0x0800f501
#define DEFAULT_BELL_PITCH	750
#define DEFAULT_BELL_DURATION	(HZ/8)
struct vc vc_cons [MAX_NR_CONSOLES];
static const struct consw *con_driver_map[MAX_NR_CONSOLES];
static int con_open(struct tty_struct *, struct file *);
static void vc_init(struct vc_data *vc, unsigned int rows,
unsigned int cols, int do_clear);
static void gotoxy(struct vc_data *vc, int new_x, int new_y);
static void save_cur(struct vc_data *vc);
static void reset_terminal(struct vc_data *vc, int do_clear);
static void con_flush_chars(struct tty_struct *tty);
static int set_vesa_blanking(char __user *p);
static void set_cursor(struct vc_data *vc);
static void hide_cursor(struct vc_data *vc);
static void console_callback(struct work_struct *ignored);
static void blank_screen_t(unsigned long dummy);
static void set_palette(struct vc_data *vc);
static int printable;
int default_utf8 = true;
module_param(default_utf8, int, S_IRUGO | S_IWUSR);
int global_cursor_default = -1;
module_param(global_cursor_default, int, S_IRUGO | S_IWUSR);
static int cur_default = CUR_DEFAULT;
module_param(cur_default, int, S_IRUGO | S_IWUSR);
static int ignore_poke;
int do_poke_blanked_console;
int console_blanked;
static int vesa_blank_mode;
static int vesa_off_interval;
static int blankinterval = 10*60;
core_param(consoleblank, blankinterval, int, 0444);
static DECLARE_WORK(console_work, console_callback);
int fg_console;
int last_console;
int want_console = -1;
static int saved_fg_console;
static int saved_last_console;
static int saved_want_console;
static int saved_vc_mode;
static int saved_console_blanked;
static struct vc_data *master_display_fg;
static int scrollback_delta;
int (*console_blank_hook)(int);
static DEFINE_TIMER(console_timer, blank_screen_t, 0, 0);
static int blank_state;
static int blank_timer_expired;
enum ;
static struct device *tty0dev;
static ATOMIC_NOTIFIER_HEAD(vt_notifier_list);
int register_vt_notifier(struct notifier_block *nb)
EXPORT_SYMBOL_GPL(register_vt_notifier);
int unregister_vt_notifier(struct notifier_block *nb)
EXPORT_SYMBOL_GPL(unregister_vt_notifier);
static void notify_write(struct vc_data *vc, unsigned int unicode)
static void notify_update(struct vc_data *vc)
#define IS_FG(vc)	((vc)->vc_num == fg_console)
#define DO_UPDATE(vc)	0
#define DO_UPDATE(vc)	(CON_IS_VISIBLE(vc) && !console_blanked)
static inline unsigned short *screenpos(struct vc_data *vc, int offset, int viewed)
static inline void scrolldelta(int lines)
void schedule_console_callback(void)
static void scrup(struct vc_data *vc, unsigned int t, unsigned int b, int nr)
static void scrdown(struct vc_data *vc, unsigned int t, unsigned int b, int nr)
static void do_update_region(struct vc_data *vc, unsigned long start, int count)
void update_region(struct vc_data *vc, unsigned long start, int count)
static u8 build_attr(struct vc_data *vc, u8 _color, u8 _intensity, u8 _blink,
u8 _underline, u8 _reverse, u8 _italic)
static void update_attr(struct vc_data *vc)
void invert_screen(struct vc_data *vc, int offset, int count, int viewed)
void complement_pos(struct vc_data *vc, int offset)
static void insert_char(struct vc_data *vc, unsigned int nr)
static void delete_char(struct vc_data *vc, unsigned int nr)
static int softcursor_original;
static void add_softcursor(struct vc_data *vc)
static void hide_softcursor(struct vc_data *vc)
static void hide_cursor(struct vc_data *vc)
static void set_cursor(struct vc_data *vc)
static void set_origin(struct vc_data *vc)
static inline void save_screen(struct vc_data *vc)
static void clear_buffer_attributes(struct vc_data *vc)
void redraw_screen(struct vc_data *vc, int is_switch)
int vc_cons_allocated(unsigned int i)
static void visual_init(struct vc_data *vc, int num, int init)
int vc_allocate(unsigned int currcons)
static inline int resize_screen(struct vc_data *vc, int width, int height,
int user)
#define VC_RESIZE_MAXCOL (32767)
#define VC_RESIZE_MAXROW (32767)
static int vc_do_resize(struct tty_struct *tty, struct vc_data *vc,
unsigned int cols, unsigned int lines)
int vc_resize(struct vc_data *vc, unsigned int cols, unsigned int rows)
static int vt_resize(struct tty_struct *tty, struct winsize *ws)
void vc_deallocate(unsigned int currcons)
#define set_kbd(vc, x)	set_vc_kbd_mode(kbd_table + (vc)->vc_num, (x))
#define clr_kbd(vc, x)	clr_vc_kbd_mode(kbd_table + (vc)->vc_num, (x))
#define is_kbd(vc, x)	vc_kbd_mode(kbd_table + (vc)->vc_num, (x))
#define decarm		VC_REPEAT
#define decckm		VC_CKMODE
#define kbdapplic	VC_APPLIC
#define lnm		VC_CRLF
#define VT100ID "\033[?1;2c"
#define VT102ID "\033[?6c"
unsigned char color_table[] = ;
int default_red[] = ;
int default_grn[] = ;
int default_blu[] = ;
module_param_array(default_red, int, NULL, S_IRUGO | S_IWUSR);
module_param_array(default_grn, int, NULL, S_IRUGO | S_IWUSR);
module_param_array(default_blu, int, NULL, S_IRUGO | S_IWUSR);
static void gotoxy(struct vc_data *vc, int new_x, int new_y)
static void gotoxay(struct vc_data *vc, int new_x, int new_y)
void scrollback(struct vc_data *vc, int lines)
void scrollfront(struct vc_data *vc, int lines)
static void lf(struct vc_data *vc)
static void ri(struct vc_data *vc)
static inline void cr(struct vc_data *vc)
static inline void bs(struct vc_data *vc)
static inline void del(struct vc_data *vc)
static void csi_J(struct vc_data *vc, int vpar)
static void csi_K(struct vc_data *vc, int vpar)
static void csi_X(struct vc_data *vc, int vpar)
static void default_attr(struct vc_data *vc)
static void csi_m(struct vc_data *vc)
static void respond_string(const char *p, struct tty_struct *tty)
static void cursor_report(struct vc_data *vc, struct tty_struct *tty)
static inline void status_report(struct tty_struct *tty)
static inline void respond_ID(struct tty_struct * tty)
void mouse_report(struct tty_struct *tty, int butt, int mrx, int mry)
int mouse_reporting(void)
static void set_mode(struct vc_data *vc, int on_off)
static void setterm_command(struct vc_data *vc)
static void csi_at(struct vc_data *vc, unsigned int nr)
static void csi_L(struct vc_data *vc, unsigned int nr)
static void csi_P(struct vc_data *vc, unsigned int nr)
static void csi_M(struct vc_data *vc, unsigned int nr)
static void save_cur(struct vc_data *vc)
static void restore_cur(struct vc_data *vc)
enum ;
static void reset_terminal(struct vc_data *vc, int do_clear)
static void do_con_trol(struct tty_struct *tty, struct vc_data *vc, int c)
struct interval ;
static int bisearch(uint32_t ucs, const struct interval *table, int max)
static int is_double_width(uint32_t ucs)
static int do_con_write(struct tty_struct *tty, const unsigned char *buf, int count)
static void console_callback(struct work_struct *ignored)
int set_console(int nr)
struct tty_driver *console_driver;
int vt_kmsg_redirect(int new)
static void vt_console_print(struct console *co, const char *b, unsigned count)
static struct tty_driver *vt_console_device(struct console *c, int *index)
static struct console vt_console_driver = ;
int tioclinux(struct tty_struct *tty, unsigned long arg)
static int con_write(struct tty_struct *tty, const unsigned char *buf, int count)
static int con_put_char(struct tty_struct *tty, unsigned char ch)
static int con_write_room(struct tty_struct *tty)
static int con_chars_in_buffer(struct tty_struct *tty)
static void con_throttle(struct tty_struct *tty)
static void con_unthrottle(struct tty_struct *tty)
static void con_stop(struct tty_struct *tty)
static void con_start(struct tty_struct *tty)
static void con_flush_chars(struct tty_struct *tty)
static int con_open(struct tty_struct *tty, struct file *filp)
static void con_close(struct tty_struct *tty, struct file *filp)
static void con_shutdown(struct tty_struct *tty)
static int default_italic_color    = 2;
static int default_underline_color = 3;
module_param_named(italic, default_italic_color, int, S_IRUGO | S_IWUSR);
module_param_named(underline, default_underline_color, int, S_IRUGO | S_IWUSR);
static void vc_init(struct vc_data *vc, unsigned int rows,
unsigned int cols, int do_clear)
static int __init con_init(void)
console_initcall(con_init);
static const struct tty_operations con_ops = ;
static struct cdev vc0_cdev;
static ssize_t show_tty_active(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(active, S_IRUGO, show_tty_active, NULL);
int __init vty_init(const struct file_operations *console_fops)
static struct class *vtconsole_class;
static int bind_con_driver(const struct consw *csw, int first, int last,
int deflt)
;
static int con_is_graphics(const struct consw *csw, int first, int last)
int unbind_con_driver(const struct consw *csw, int first, int last, int deflt)
EXPORT_SYMBOL(unbind_con_driver);
static int vt_bind(struct con_driver *con)
static int vt_unbind(struct con_driver *con)
static inline int vt_bind(struct con_driver *con)
static inline int vt_unbind(struct con_driver *con)
static ssize_t store_bind(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t show_bind(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t show_name(struct device *dev, struct device_attribute *attr,
char *buf)
static struct device_attribute device_attrs[] = ;
static int vtconsole_init_device(struct con_driver *con)
static void vtconsole_deinit_device(struct con_driver *con)
int con_is_bound(const struct consw *csw)
EXPORT_SYMBOL(con_is_bound);
int con_debug_enter(struct vc_data *vc)
EXPORT_SYMBOL_GPL(con_debug_enter);
int con_debug_leave(void)
EXPORT_SYMBOL_GPL(con_debug_leave);
int register_con_driver(const struct consw *csw, int first, int last)
EXPORT_SYMBOL(register_con_driver);
int unregister_con_driver(const struct consw *csw)
EXPORT_SYMBOL(unregister_con_driver);
int take_over_console(const struct consw *csw, int first, int last, int deflt)
void give_up_console(const struct consw *csw)
static int __init vtconsole_class_init(void)
postcore_initcall(vtconsole_class_init);
static int set_vesa_blanking(char __user *p)
void do_blank_screen(int entering_gfx)
EXPORT_SYMBOL(do_blank_screen);
void do_unblank_screen(int leaving_gfx)
EXPORT_SYMBOL(do_unblank_screen);
void unblank_screen(void)
static void blank_screen_t(unsigned long dummy)
void poke_blanked_console(void)
static void set_palette(struct vc_data *vc)
static int set_get_cmap(unsigned char __user *arg, int set)
int con_set_cmap(unsigned char __user *arg)
int con_get_cmap(unsigned char __user *arg)
void reset_palette(struct vc_data *vc)
#define max_font_size 65536
static int con_font_get(struct vc_data *vc, struct console_font_op *op)
static int con_font_set(struct vc_data *vc, struct console_font_op *op)
static int con_font_default(struct vc_data *vc, struct console_font_op *op)
static int con_font_copy(struct vc_data *vc, struct console_font_op *op)
int con_font_op(struct vc_data *vc, struct console_font_op *op)
u16 screen_glyph(struct vc_data *vc, int offset)
EXPORT_SYMBOL_GPL(screen_glyph);
unsigned short *screen_pos(struct vc_data *vc, int w_offset, int viewed)
void getconsxy(struct vc_data *vc, unsigned char *p)
void putconsxy(struct vc_data *vc, unsigned char *p)
u16 vcs_scr_readw(struct vc_data *vc, const u16 *org)
void vcs_scr_writew(struct vc_data *vc, u16 val, u16 *org)
void vcs_scr_updated(struct vc_data *vc)
EXPORT_SYMBOL(color_table);
EXPORT_SYMBOL(default_red);
EXPORT_SYMBOL(default_grn);
EXPORT_SYMBOL(default_blu);
EXPORT_SYMBOL(update_region);
EXPORT_SYMBOL(redraw_screen);
EXPORT_SYMBOL(vc_resize);
EXPORT_SYMBOL(fg_console);
EXPORT_SYMBOL(console_blank_hook);
EXPORT_SYMBOL(console_blanked);
EXPORT_SYMBOL(vc_cons);
EXPORT_SYMBOL(global_cursor_default);
EXPORT_SYMBOL(take_over_console);
EXPORT_SYMBOL(give_up_console);
