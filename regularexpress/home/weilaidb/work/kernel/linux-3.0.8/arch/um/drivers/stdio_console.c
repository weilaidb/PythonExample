#define MAX_TTYS (16)
static struct tty_driver *console_driver;
static void stdio_announce(char *dev_name, int dev)
static struct chan_opts opts = ;
static int con_config(char *str, char **error_out);
static int con_get_config(char *dev, char *str, int size, char **error_out);
static int con_remove(int n, char **con_remove);
static struct line_driver driver = ;
static struct line vts[MAX_TTYS] = ;
static int con_config(char *str, char **error_out)
static int con_get_config(char *dev, char *str, int size, char **error_out)
static int con_remove(int n, char **error_out)
static int con_open(struct tty_struct *tty, struct file *filp)
static int con_init_done = 0;
static const struct tty_operations console_ops = ;
static void uml_console_write(struct console *console, const char *string,
unsigned len)
static struct tty_driver *uml_console_device(struct console *c, int *index)
static int uml_console_setup(struct console *co, char *options)
static struct console stdiocons = ;
static int stdio_init(void)
late_initcall(stdio_init);
static void console_exit(void)
__uml_exitcall(console_exit);
static int console_chan_setup(char *str)
__setup("con", console_chan_setup);
__channel_help(console_chan_setup, "con");
