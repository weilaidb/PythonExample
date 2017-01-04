MODULE_AUTHOR("samuel.thibault@ens-lyon.org");
MODULE_DESCRIPTION("braille device");
MODULE_LICENSE("GPL");
static int sound;
module_param(sound, bool, 0);
MODULE_PARM_DESC(sound, "emit sounds");
static void beep(unsigned int freq)
#define WIDTH 40
#define BRAILLE_KEY KEY_INSERT
static u16 console_buf[WIDTH];
static int console_cursor;
static int vc_x, vc_y, lastvc_x, lastvc_y;
static int console_show = 1;
static int console_newline = 1;
static int lastVC = -1;
static struct console *braille_co;
static void braille_write(u16 *buf)
static void vc_follow_cursor(struct vc_data *vc)
static void vc_maybe_cursor_moved(struct vc_data *vc)
static void vc_refresh(struct vc_data *vc)
static int keyboard_notifier_call(struct notifier_block *blk,
unsigned long code, void *_param)
static struct notifier_block keyboard_notifier_block = ;
static int vt_notifier_call(struct notifier_block *blk,
unsigned long code, void *_param)
static struct notifier_block vt_notifier_block = ;
int braille_register_console(struct console *console, int index,
char *console_options, char *braille_options)
int braille_unregister_console(struct console *console)
