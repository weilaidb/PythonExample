static DEFINE_SPINLOCK(srmcons_callback_lock);
static int srm_is_registered_console = 0;
#define MAX_SRM_CONSOLE_DEVICES 1
struct srmcons_private ;
typedef union _srmcons_result  srmcons_result;
static int
srmcons_do_receive_chars(struct tty_struct *tty)
static void
srmcons_receive_chars(unsigned long data)
static int
srmcons_do_write(struct tty_struct *tty, const char *buf, int count)
static int
srmcons_write(struct tty_struct *tty,
const unsigned char *buf, int count)
static int
srmcons_write_room(struct tty_struct *tty)
static int
srmcons_chars_in_buffer(struct tty_struct *tty)
static int
srmcons_get_private_struct(struct srmcons_private **ps)
static int
srmcons_open(struct tty_struct *tty, struct file *filp)
static void
srmcons_close(struct tty_struct *tty, struct file *filp)
static struct tty_driver *srmcons_driver;
static const struct tty_operations srmcons_ops = ;
static int __init
srmcons_init(void)
module_init(srmcons_init);
static void
srm_console_write(struct console *co, const char *s, unsigned count)
static struct tty_driver *
srm_console_device(struct console *co, int *index)
static int
srm_console_setup(struct console *co, char *options)
static struct console srmcons = ;
void __init
register_srm_console(void)
void __init
unregister_srm_console(void)
