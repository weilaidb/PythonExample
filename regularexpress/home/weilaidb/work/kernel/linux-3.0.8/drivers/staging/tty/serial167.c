#define SERIAL_PARANOIA_CHECK
#undef  SERIAL_DEBUG_OPEN
#undef  SERIAL_DEBUG_THROTTLE
#undef  SERIAL_DEBUG_OTHER
#undef  SERIAL_DEBUG_IO
#undef  SERIAL_DEBUG_COUNT
#undef  SERIAL_DEBUG_DTR
#undef  CYCLOM_16Y_HACK
#define  CYCLOM_ENABLE_MONITORING
#define WAKEUP_CHARS 256
#define STD_COM_FLAGS (0)
static struct tty_driver *cy_serial_driver;
extern int serial_console;
static struct cyclades_port *serial_console_info = NULL;
static unsigned int serial_console_cflag = 0;
u_char initial_console_speed;
#define BASE_ADDR (0xfff45000)
#define pcc2chip	((volatile u_char *)0xfff42000)
#define PccSCCMICR	0x1d
#define PccSCCTICR	0x1e
#define PccSCCRICR	0x1f
#define PccTPIACKR	0x25
#define PccRPIACKR	0x27
#define PccIMLR		0x3f
struct cyclades_port cy_port[] = ;
#define NR_PORTS        ARRAY_SIZE(cy_port)
static int baud_table[] = ;
static u_char baud_co[] = ;
static u_char baud_bpr[] = ;
static u_char baud_cor4[] = ;
static void shutdown(struct cyclades_port *);
static int startup(struct cyclades_port *);
static void cy_throttle(struct tty_struct *);
static void cy_unthrottle(struct tty_struct *);
static void config_setup(struct cyclades_port *);
static void show_status(int);
void my_udelay(long us)
static inline int serial_paranoia_check(struct cyclades_port *info, char *name,
const char *routine)
u_short write_cy_cmd(volatile u_char * base_addr, u_char cmd)
static void cy_stop(struct tty_struct *tty)
static void cy_start(struct tty_struct *tty)
static irqreturn_t cd2401_rxerr_interrupt(int irq, void *dev_id)
static irqreturn_t cd2401_modem_interrupt(int irq, void *dev_id)
static irqreturn_t cd2401_tx_interrupt(int irq, void *dev_id)
static irqreturn_t cd2401_rx_interrupt(int irq, void *dev_id)
static int startup(struct cyclades_port *info)
void start_xmit(struct cyclades_port *info)
static void shutdown(struct cyclades_port *info)
static void config_setup(struct cyclades_port *info)
static int cy_put_char(struct tty_struct *tty, unsigned char ch)
static void cy_flush_chars(struct tty_struct *tty)
static int cy_write(struct tty_struct *tty, const unsigned char *buf, int count)
static int cy_write_room(struct tty_struct *tty)
static int cy_chars_in_buffer(struct tty_struct *tty)
static void cy_flush_buffer(struct tty_struct *tty)
static void cy_throttle(struct tty_struct *tty)
static void cy_unthrottle(struct tty_struct *tty)
static int
get_serial_info(struct cyclades_port *info,
struct serial_struct __user * retinfo)
static int
set_serial_info(struct cyclades_port *info,
struct serial_struct __user * new_info)
static int cy_tiocmget(struct tty_struct *tty)
static int
cy_tiocmset(struct tty_struct *tty, unsigned int set, unsigned int clear)
static void send_break(struct cyclades_port *info, int duration)
static int
get_mon_info(struct cyclades_port *info, struct cyclades_monitor __user * mon)
static int set_threshold(struct cyclades_port *info, unsigned long __user * arg)
static int
get_threshold(struct cyclades_port *info, unsigned long __user * value)
static int
set_default_threshold(struct cyclades_port *info, unsigned long __user * arg)
static int
get_default_threshold(struct cyclades_port *info, unsigned long __user * value)
static int set_timeout(struct cyclades_port *info, unsigned long __user * arg)
static int get_timeout(struct cyclades_port *info, unsigned long __user * value)
static int set_default_timeout(struct cyclades_port *info, unsigned long value)
static int
get_default_timeout(struct cyclades_port *info, unsigned long __user * value)
static int
cy_ioctl(struct tty_struct *tty,
unsigned int cmd, unsigned long arg)
static void cy_set_termios(struct tty_struct *tty, struct ktermios *old_termios)
static void cy_close(struct tty_struct *tty, struct file *filp)
void cy_hangup(struct tty_struct *tty)
static int
block_til_ready(struct tty_struct *tty, struct file *filp,
struct cyclades_port *info)
int cy_open(struct tty_struct *tty, struct file *filp)
static void show_version(void)
void mvme167_serial_console_setup(int cflag)
static const struct tty_operations cy_ops = ;
static int __init serial167_init(void)
module_init(serial167_init);
static void show_status(int line_num)
void serial167_console_write(struct console *co, const char *str,
unsigned count)
static struct tty_driver *serial167_console_device(struct console *c,
int *index)
static struct console sercons = ;
static int __init serial167_console_init(void)
console_initcall(serial167_console_init);
MODULE_LICENSE("GPL");
