static DEFINE_MUTEX(maple_keyb_mutex);
#define NR_SCANCODES 256
MODULE_AUTHOR("Adrian McMenamin <adrian@mcmen.demon.co.uk");
MODULE_DESCRIPTION("SEGA Dreamcast keyboard driver");
MODULE_LICENSE("GPL");
struct dc_kbd ;
static const unsigned short dc_kbd_keycode[NR_SCANCODES] = ;
static void dc_scan_kbd(struct dc_kbd *kbd)
static void dc_kbd_callback(struct mapleq *mq)
static int probe_maple_kbd(struct device *dev)
static int remove_maple_kbd(struct device *dev)
static struct maple_driver dc_kbd_driver = ;
static int __init dc_kbd_init(void)
static void __exit dc_kbd_exit(void)
module_init(dc_kbd_init);
module_exit(dc_kbd_exit);
