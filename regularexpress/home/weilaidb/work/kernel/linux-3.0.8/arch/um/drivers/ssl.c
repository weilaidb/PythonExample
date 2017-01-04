static const int ssl_version = 1;
static struct tty_driver *ssl_driver;
#define NR_PORTS 64
static void ssl_announce(char *dev_name, int dev)
static struct chan_opts opts = ;
static int ssl_config(char *str, char **error_out);
static int ssl_get_config(char *dev, char *str, int size, char **error_out);
static int ssl_remove(int n, char **error_out);
static struct line_driver driver = ;
static struct line serial_lines[NR_PORTS] =
;
static int ssl_config(char *str, char **error_out)
static int ssl_get_config(char *dev, char *str, int size, char **error_out)
static int ssl_remove(int n, char **error_out)
static int ssl_open(struct tty_struct *tty, struct file *filp)
static const struct tty_operations ssl_ops = ;
static int ssl_init_done = 0;
static void ssl_console_write(struct console *c, const char *string,
unsigned len)
static struct tty_driver *ssl_console_device(struct console *c, int *index)
static int ssl_console_setup(struct console *co, char *options)
static struct console ssl_cons = ;
static int ssl_init(void)
late_initcall(ssl_init);
static void ssl_exit(void)
__uml_exitcall(ssl_exit);
static int ssl_chan_setup(char *str)
__setup("ssl", ssl_chan_setup);
__channel_help(ssl_chan_setup, "ssl");
