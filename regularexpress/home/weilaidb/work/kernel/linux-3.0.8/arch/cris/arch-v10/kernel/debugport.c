extern void reset_watchdog(void);
struct dbg_port
;
struct dbg_port ports[]=
;
extern struct tty_driver *serial_driver;
struct dbg_port* port =
#if defined(CONFIG_ETRAX_DEBUG_PORT0)
&ports[0];
#elif defined(CONFIG_ETRAX_DEBUG_PORT1)
&ports[1];
#elif defined(CONFIG_ETRAX_DEBUG_PORT2)
&ports[2];
#elif defined(CONFIG_ETRAX_DEBUG_PORT3)
&ports[3];
NULL;
static struct dbg_port* kgdb_port =
#if defined(CONFIG_ETRAX_KGDB_PORT0)
&ports[0];
#elif defined(CONFIG_ETRAX_KGDB_PORT1)
&ports[1];
#elif defined(CONFIG_ETRAX_KGDB_PORT2)
&ports[2];
#elif defined(CONFIG_ETRAX_KGDB_PORT3)
&ports[3];
NULL;
static void
start_port(struct dbg_port* p)
static void
console_write_direct(struct console *co, const char *buf, unsigned int len)
static void
console_write(struct console *co, const char *buf, unsigned int len)
void
console_print_etrax(const char *buf)
int
getDebugChar(void)
void
putDebugChar(int val)
void
enableDebugIRQ(void)
static int __init
console_setup(struct console *co, char *options)
static struct tty_driver dummy_driver;
static int dummy_open(struct tty_struct *tty, struct file * filp)
static void dummy_close(struct tty_struct *tty, struct file * filp)
static int dummy_write(struct tty_struct * tty,
const unsigned char *buf, int count)
static int dummy_write_room(struct tty_struct *tty)
static const struct tty_operations dummy_ops = ;
void __init
init_dummy_console(void)
static struct tty_driver*
etrax_console_device(struct console* co, int *index)
static struct console sercons = ;
static struct console sercons0 = ;
static struct console sercons1 = ;
static struct console sercons2 = ;
static struct console sercons3 = ;
int __init
init_etrax_debug(void)
__initcall(init_etrax_debug);
