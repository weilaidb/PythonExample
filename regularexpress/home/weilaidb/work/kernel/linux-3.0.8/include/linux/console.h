#define _LINUX_CONSOLE_H_ 1
struct vc_data;
struct console_font_op;
struct console_font;
struct module;
struct tty_struct;
#define VT100ID "\033[?1;2c"
#define VT102ID "\033[?6c"
struct consw ;
extern const struct consw *conswitchp;
extern const struct consw dummy_con;
extern const struct consw vga_con;
extern const struct consw newport_con;
extern const struct consw prom_con;
int con_is_bound(const struct consw *csw);
int register_con_driver(const struct consw *csw, int first, int last);
int unregister_con_driver(const struct consw *csw);
int take_over_console(const struct consw *sw, int first, int last, int deflt);
void give_up_console(const struct consw *sw);
int con_debug_enter(struct vc_data *vc);
int con_debug_leave(void);
#define con_debug_enter(vc) (0)
#define con_debug_leave() (0)
#define SM_UP       (1)
#define SM_DOWN     (2)
#define CM_DRAW     (1)
#define CM_ERASE    (2)
#define CM_MOVE     (3)
#define CON_PRINTBUFFER	(1)
#define CON_CONSDEV	(2)
#define CON_ENABLED	(4)
#define CON_BOOT	(8)
#define CON_ANYTIME	(16)
#define CON_BRL		(32)
struct console ;
#define for_each_console(con) \
for (con = console_drivers; con != NULL; con = con->next)
extern int console_set_on_cmdline;
extern int add_preferred_console(char *name, int idx, char *options);
extern int update_console_cmdline(char *name, int idx, char *name_new, int idx_new, char *options);
extern void register_console(struct console *);
extern int unregister_console(struct console *);
extern struct console *console_drivers;
extern void console_lock(void);
extern int console_trylock(void);
extern void console_unlock(void);
extern void console_conditional_schedule(void);
extern void console_unblank(void);
extern struct tty_driver *console_device(int *);
extern void console_stop(struct console *);
extern void console_start(struct console *);
extern int is_console_locked(void);
extern int braille_register_console(struct console *, int index,
char *console_options, char *braille_options);
extern int braille_unregister_console(struct console *);
extern void console_sysfs_notify(void);
extern int console_suspend_enabled;
extern void suspend_console(void);
extern void resume_console(void);
int mda_console_init(void);
void prom_con_init(void);
void vcs_make_sysfs(int index);
void vcs_remove_sysfs(int index);
#if 1
#define WARN_CONSOLE_UNLOCKED()	WARN_ON(!is_console_locked() && !oops_in_progress)
#define WARN_CONSOLE_UNLOCKED()
#define VESA_NO_BLANKING        0
#define VESA_VSYNC_SUSPEND      1
#define VESA_HSYNC_SUSPEND      2
#define VESA_POWERDOWN          3
extern bool vgacon_text_force(void);
