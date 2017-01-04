#define _VT_KERN_H
#define BROKEN_GRAPHICS_PROGRAMS 1
extern void kd_mksound(unsigned int hz, unsigned int ticks);
extern int kbd_rate(struct kbd_repeat *rep);
extern int fg_console, last_console, want_console;
int vc_allocate(unsigned int console);
int vc_cons_allocated(unsigned int console);
int vc_resize(struct vc_data *vc, unsigned int cols, unsigned int lines);
void vc_deallocate(unsigned int console);
void reset_palette(struct vc_data *vc);
void do_blank_screen(int entering_gfx);
void do_unblank_screen(int leaving_gfx);
void unblank_screen(void);
void poke_blanked_console(void);
int con_font_op(struct vc_data *vc, struct console_font_op *op);
int con_set_cmap(unsigned char __user *cmap);
int con_get_cmap(unsigned char __user *cmap);
void scrollback(struct vc_data *vc, int lines);
void scrollfront(struct vc_data *vc, int lines);
void update_region(struct vc_data *vc, unsigned long start, int count);
void redraw_screen(struct vc_data *vc, int is_switch);
#define update_screen(x) redraw_screen(x, 0)
#define switch_screen(x) redraw_screen(x, 1)
struct tty_struct;
int tioclinux(struct tty_struct *tty, unsigned long arg);
struct unimapinit;
struct unipair;
int con_set_trans_old(unsigned char __user * table);
int con_get_trans_old(unsigned char __user * table);
int con_set_trans_new(unsigned short __user * table);
int con_get_trans_new(unsigned short __user * table);
int con_clear_unimap(struct vc_data *vc, struct unimapinit *ui);
int con_set_unimap(struct vc_data *vc, ushort ct, struct unipair __user *list);
int con_get_unimap(struct vc_data *vc, ushort ct, ushort __user *uct, struct unipair __user *list);
int con_set_default_unimap(struct vc_data *vc);
void con_free_unimap(struct vc_data *vc);
void con_protect_unimap(struct vc_data *vc, int rdonly);
int con_copy_unimap(struct vc_data *dst_vc, struct vc_data *src_vc);
#define vc_translate(vc, c) ((vc)->vc_translate[(c) |			\
((vc)->vc_toggle_meta ? 0x80 : 0)])
static inline int con_set_trans_old(unsigned char __user *table)
static inline int con_get_trans_old(unsigned char __user *table)
static inline int con_set_trans_new(unsigned short __user *table)
static inline int con_get_trans_new(unsigned short __user *table)
static inline int con_clear_unimap(struct vc_data *vc, struct unimapinit *ui)
static inline
int con_set_unimap(struct vc_data *vc, ushort ct, struct unipair __user *list)
static inline
int con_get_unimap(struct vc_data *vc, ushort ct, ushort __user *uct,
struct unipair __user *list)
static inline int con_set_default_unimap(struct vc_data *vc)
static inline void con_free_unimap(struct vc_data *vc)
static inline void con_protect_unimap(struct vc_data *vc, int rdonly)
static inline
int con_copy_unimap(struct vc_data *dst_vc, struct vc_data *src_vc)
#define vc_translate(vc, c) (c)
void vt_event_post(unsigned int event, unsigned int old, unsigned int new);
int vt_waitactive(int n);
void change_console(struct vc_data *new_vc);
void reset_vc(struct vc_data *vc);
extern int unbind_con_driver(const struct consw *csw, int first, int last,
int deflt);
int vty_init(const struct file_operations *console_fops);
static inline bool vt_force_oops_output(struct vc_data *vc)
extern char vt_dont_switch;
extern int default_utf8;
extern int global_cursor_default;
struct vt_spawn_console ;
extern struct vt_spawn_console vt_spawn_con;
extern int vt_move_to_console(unsigned int vt, int alloc);
struct vt_notifier_param ;
extern int register_vt_notifier(struct notifier_block *nb);
extern int unregister_vt_notifier(struct notifier_block *nb);
extern void hide_boot_cursor(bool hide);
