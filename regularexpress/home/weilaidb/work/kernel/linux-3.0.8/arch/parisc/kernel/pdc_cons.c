#define EARLY_BOOTUP_DEBUG
static DEFINE_SPINLOCK(pdc_console_lock);
static struct console pdc_cons;
static void pdc_console_write(struct console *co, const char *s, unsigned count)
int pdc_console_poll_key(struct console *co)
static int pdc_console_setup(struct console *co, char *options)
#if defined(CONFIG_PDC_CONSOLE)
#define PDC_CONS_POLL_DELAY (30 * HZ / 1000)
static struct timer_list pdc_console_timer;
static int pdc_console_tty_open(struct tty_struct *tty, struct file *filp)
static void pdc_console_tty_close(struct tty_struct *tty, struct file *filp)
static int pdc_console_tty_write(struct tty_struct *tty, const unsigned char *buf, int count)
static int pdc_console_tty_write_room(struct tty_struct *tty)
static int pdc_console_tty_chars_in_buffer(struct tty_struct *tty)
static struct tty_driver *pdc_console_tty_driver;
static const struct tty_operations pdc_console_tty_ops = ;
static void pdc_console_poll(unsigned long unused)
static int __init pdc_console_tty_driver_init(void)
module_init(pdc_console_tty_driver_init);
static struct tty_driver * pdc_console_device (struct console *c, int *index)
#define pdc_console_device NULL
static struct console pdc_cons = ;
static int pdc_console_initialized;
static void pdc_console_init_force(void)
void __init pdc_console_init(void)
void pdc_console_restart(void)
