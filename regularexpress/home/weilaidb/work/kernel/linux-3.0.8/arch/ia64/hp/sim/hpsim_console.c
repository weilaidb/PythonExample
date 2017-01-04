static int simcons_init (struct console *, char *);
static void simcons_write (struct console *, const char *, unsigned);
static struct tty_driver *simcons_console_device (struct console *, int *);
static struct console hpsim_cons = ;
static int
simcons_init (struct console *cons, char *options)
static void
simcons_write (struct console *cons, const char *buf, unsigned count)
static struct tty_driver *simcons_console_device (struct console *c, int *index)
int simcons_register(void)
