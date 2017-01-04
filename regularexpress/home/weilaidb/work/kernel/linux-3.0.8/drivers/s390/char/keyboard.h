#define NR_FN_HANDLER	20
struct kbd_data;
typedef void (fn_handler_fn)(struct kbd_data *);
struct kbd_data ;
struct kbd_data *kbd_alloc(void);
void kbd_free(struct kbd_data *);
void kbd_ascebc(struct kbd_data *, unsigned char *);
void kbd_keycode(struct kbd_data *, unsigned int);
int kbd_ioctl(struct kbd_data *, unsigned int, unsigned long);
static inline void
kbd_put_queue(struct tty_struct *tty, int ch)
static inline void
kbd_puts_queue(struct tty_struct *tty, char *cp)
