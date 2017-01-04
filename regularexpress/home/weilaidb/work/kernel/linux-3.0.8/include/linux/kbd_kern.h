#define _KBD_KERN_H
extern struct tasklet_struct keyboard_tasklet;
extern int shift_state;
extern char *func_table[MAX_NR_FUNC];
extern char func_buf[];
extern char *funcbufptr;
extern int funcbufsize, funcbufleft;
struct kbd_struct ;
extern struct kbd_struct kbd_table[];
extern int kbd_init(void);
extern unsigned char getledstate(void);
extern void setledstate(struct kbd_struct *kbd, unsigned int led);
extern int do_poke_blanked_console;
extern void (*kbd_ledfunc)(unsigned int led);
extern int set_console(int nr);
extern void schedule_console_callback(void);
static inline void set_leds(void)
static inline int vc_kbd_mode(struct kbd_struct * kbd, int flag)
static inline int vc_kbd_led(struct kbd_struct * kbd, int flag)
static inline void set_vc_kbd_mode(struct kbd_struct * kbd, int flag)
static inline void set_vc_kbd_led(struct kbd_struct * kbd, int flag)
static inline void clr_vc_kbd_mode(struct kbd_struct * kbd, int flag)
static inline void clr_vc_kbd_led(struct kbd_struct * kbd, int flag)
static inline void chg_vc_kbd_lock(struct kbd_struct * kbd, int flag)
static inline void chg_vc_kbd_slock(struct kbd_struct * kbd, int flag)
static inline void chg_vc_kbd_mode(struct kbd_struct * kbd, int flag)
static inline void chg_vc_kbd_led(struct kbd_struct * kbd, int flag)
#define U(x) ((x) ^ 0xf000)
#define BRL_UC_ROW 0x2800
struct console;
int getkeycode(unsigned int scancode);
int setkeycode(unsigned int scancode, unsigned int keycode);
void compute_shiftstate(void);
extern unsigned int keymap_count;
static inline void con_schedule_flip(struct tty_struct *t)
