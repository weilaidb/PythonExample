#if defined(CONFIG_SERIAL_M32R_SIO_CONSOLE) && defined(CONFIG_MAGIC_SYSRQ)
#define SUPPORT_SYSRQ
#define PORT_M32R_BASE	PORT_M32R_SIO
#define PORT_INDEX(x)	(x - PORT_M32R_BASE + 1)
#define BAUD_RATE	115200
#define PASS_LIMIT	256
#define is_real_interrupt(irq)	((irq) != 0)
#define BASE_BAUD	115200
#define STD_COM_FLAGS (UPF_BOOT_AUTOCONF | UPF_SKIP_TEST)
#if defined(CONFIG_PLAT_USRV)
#define SERIAL_PORT_DFNS						\			\
, \
,
#if defined(CONFIG_SERIAL_M32R_PLDSIO)
#define SERIAL_PORT_DFNS						\
,
#define SERIAL_PORT_DFNS						\
,
static struct old_serial_port old_serial_port[] = ;
#define UART_NR	ARRAY_SIZE(old_serial_port)
struct uart_sio_port ;
struct irq_info ;
static struct irq_info irq_lists[NR_IRQS];
static const struct serial_uart_config uart_config[] = ;
#define __sio_in(x) inw((unsigned long)(x))
#define __sio_out(v,x) outw((v),(unsigned long)(x))
static inline void sio_set_baud_rate(unsigned long baud)
static void sio_reset(void)
static void sio_init(void)
static void sio_error(int *status)
#define __sio_in(x) inl(x)
#define __sio_out(v,x) outl((v),(x))
static inline void sio_set_baud_rate(unsigned long baud)
static void sio_reset(void)
static void sio_init(void)
static void sio_error(int *status)
static unsigned int sio_in(struct uart_sio_port *up, int offset)
static void sio_out(struct uart_sio_port *up, int offset, int value)
static unsigned int serial_in(struct uart_sio_port *up, int offset)
static void serial_out(struct uart_sio_port *up, int offset, int value)
static void m32r_sio_stop_tx(struct uart_port *port)
static void m32r_sio_start_tx(struct uart_port *port)
static void m32r_sio_stop_rx(struct uart_port *port)
static void m32r_sio_enable_ms(struct uart_port *port)
static void receive_chars(struct uart_sio_port *up, int *status)
static void transmit_chars(struct uart_sio_port *up)
static inline void m32r_sio_handle_port(struct uart_sio_port *up,
unsigned int status)
static irqreturn_t m32r_sio_interrupt(int irq, void *dev_id)
static void serial_do_unlink(struct irq_info *i, struct uart_sio_port *up)
static int serial_link_irq_chain(struct uart_sio_port *up)
static void serial_unlink_irq_chain(struct uart_sio_port *up)
static void m32r_sio_timeout(unsigned long data)
static unsigned int m32r_sio_tx_empty(struct uart_port *port)
static unsigned int m32r_sio_get_mctrl(struct uart_port *port)
static void m32r_sio_set_mctrl(struct uart_port *port, unsigned int mctrl)
static void m32r_sio_break_ctl(struct uart_port *port, int break_state)
static int m32r_sio_startup(struct uart_port *port)
static void m32r_sio_shutdown(struct uart_port *port)
static unsigned int m32r_sio_get_divisor(struct uart_port *port,
unsigned int baud)
static void m32r_sio_set_termios(struct uart_port *port,
struct ktermios *termios, struct ktermios *old)
static void m32r_sio_pm(struct uart_port *port, unsigned int state,
unsigned int oldstate)
static int
m32r_sio_request_std_resource(struct uart_sio_port *up, struct resource **res)
static void m32r_sio_release_port(struct uart_port *port)
static int m32r_sio_request_port(struct uart_port *port)
static void m32r_sio_config_port(struct uart_port *port, int unused)
static int
m32r_sio_verify_port(struct uart_port *port, struct serial_struct *ser)
static const char *
m32r_sio_type(struct uart_port *port)
static struct uart_ops m32r_sio_pops = ;
static struct uart_sio_port m32r_sio_ports[UART_NR];
static void __init m32r_sio_init_ports(void)
static void __init m32r_sio_register_ports(struct uart_driver *drv)
static inline void wait_for_xmitr(struct uart_sio_port *up)
static void m32r_sio_console_putchar(struct uart_port *port, int ch)
static void m32r_sio_console_write(struct console *co, const char *s,
unsigned int count)
static int __init m32r_sio_console_setup(struct console *co, char *options)
static struct uart_driver m32r_sio_reg;
static struct console m32r_sio_console = ;
static int __init m32r_sio_console_init(void)
console_initcall(m32r_sio_console_init);
#define M32R_SIO_CONSOLE	&m32r_sio_console
#define M32R_SIO_CONSOLE	NULL
static struct uart_driver m32r_sio_reg = ;
void m32r_sio_suspend_port(int line)
void m32r_sio_resume_port(int line)
static int __init m32r_sio_init(void)
static void __exit m32r_sio_exit(void)
module_init(m32r_sio_init);
module_exit(m32r_sio_exit);
EXPORT_SYMBOL(m32r_sio_suspend_port);
EXPORT_SYMBOL(m32r_sio_resume_port);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Generic M32R SIO serial driver");
