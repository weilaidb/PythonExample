#if defined(CONFIG_SERIAL_SB1250_DUART_CONSOLE) && defined(CONFIG_MAGIC_SYSRQ)
#define SUPPORT_SYSRQ
#if defined(CONFIG_SIBYTE_BCM1x55) || defined(CONFIG_SIBYTE_BCM1x80)
#define SBD_CHANREGS(line)	A_BCM1480_DUART_CHANREG((line), 0)
#define SBD_CTRLREGS(line)	A_BCM1480_DUART_CTRLREG((line), 0)
#define SBD_INT(line)		(K_BCM1480_INT_UART_0 + (line))
#define DUART_CHANREG_SPACING	BCM1480_DUART_CHANREG_SPACING
#define R_DUART_IMRREG(line)	R_BCM1480_DUART_IMRREG(line)
#define R_DUART_INCHREG(line)	R_BCM1480_DUART_INCHREG(line)
#define R_DUART_ISRREG(line)	R_BCM1480_DUART_ISRREG(line)
#elif defined(CONFIG_SIBYTE_SB1250) || defined(CONFIG_SIBYTE_BCM112X)
#define SBD_CHANREGS(line)	A_DUART_CHANREG((line), 0)
#define SBD_CTRLREGS(line)	A_DUART_CTRLREG(0)
#define SBD_INT(line)		(K_INT_UART_0 + (line))
#error invalid SB1250 UART configuration
MODULE_AUTHOR("Maciej W. Rozycki <macro@linux-mips.org>");
MODULE_DESCRIPTION("BCM1xxx on-chip DUART serial driver");
MODULE_LICENSE("GPL");
#define DUART_MAX_CHIP 2
#define DUART_MAX_SIDE 2
struct sbd_port ;
struct sbd_duart ;
#define to_sport(uport) container_of(uport, struct sbd_port, port)
static struct sbd_duart sbd_duarts[DUART_MAX_CHIP];
static u64 __read_sbdchn(struct sbd_port *sport, int reg)
static u64 __read_sbdshr(struct sbd_port *sport, int reg)
static void __write_sbdchn(struct sbd_port *sport, int reg, u64 value)
static void __write_sbdshr(struct sbd_port *sport, int reg, u64 value)
static void __war_sbd1956(struct sbd_port *sport)
static unsigned char read_sbdchn(struct sbd_port *sport, int reg)
static unsigned char read_sbdshr(struct sbd_port *sport, int reg)
static void write_sbdchn(struct sbd_port *sport, int reg, unsigned int value)
static void write_sbdshr(struct sbd_port *sport, int reg, unsigned int value)
static int sbd_receive_ready(struct sbd_port *sport)
static int sbd_receive_drain(struct sbd_port *sport)
static int __maybe_unused sbd_transmit_ready(struct sbd_port *sport)
static int __maybe_unused sbd_transmit_drain(struct sbd_port *sport)
static int sbd_transmit_empty(struct sbd_port *sport)
static int sbd_line_drain(struct sbd_port *sport)
static unsigned int sbd_tx_empty(struct uart_port *uport)
static unsigned int sbd_get_mctrl(struct uart_port *uport)
static void sbd_set_mctrl(struct uart_port *uport, unsigned int mctrl)
static void sbd_stop_tx(struct uart_port *uport)
;
static void sbd_start_tx(struct uart_port *uport)
;
static void sbd_stop_rx(struct uart_port *uport)
;
static void sbd_enable_ms(struct uart_port *uport)
static void sbd_break_ctl(struct uart_port *uport, int break_state)
static void sbd_receive_chars(struct sbd_port *sport)
static void sbd_transmit_chars(struct sbd_port *sport)
static void sbd_status_handle(struct sbd_port *sport)
static irqreturn_t sbd_interrupt(int irq, void *dev_id)
static int sbd_startup(struct uart_port *uport)
static void sbd_shutdown(struct uart_port *uport)
static void sbd_init_port(struct sbd_port *sport)
static void sbd_set_termios(struct uart_port *uport, struct ktermios *termios,
struct ktermios *old_termios)
static const char *sbd_type(struct uart_port *uport)
static void sbd_release_port(struct uart_port *uport)
static int sbd_map_port(struct uart_port *uport)
static int sbd_request_port(struct uart_port *uport)
static void sbd_config_port(struct uart_port *uport, int flags)
static int sbd_verify_port(struct uart_port *uport, struct serial_struct *ser)
static const struct uart_ops sbd_ops = ;
static void __init sbd_probe_duarts(void)
static void sbd_console_putchar(struct uart_port *uport, int ch)
static void sbd_console_write(struct console *co, const char *s,
unsigned int count)
static int __init sbd_console_setup(struct console *co, char *options)
static struct uart_driver sbd_reg;
static struct console sbd_console = ;
static int __init sbd_serial_console_init(void)
console_initcall(sbd_serial_console_init);
#define SERIAL_SB1250_DUART_CONSOLE	&sbd_console
#define SERIAL_SB1250_DUART_CONSOLE	NULL
static struct uart_driver sbd_reg = ;
static int __init sbd_init(void)
static void __exit sbd_exit(void)
module_init(sbd_init);
module_exit(sbd_exit);
