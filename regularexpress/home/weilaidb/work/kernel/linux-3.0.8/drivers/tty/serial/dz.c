#undef DEBUG_DZ
#if defined(CONFIG_SERIAL_DZ_CONSOLE) && defined(CONFIG_MAGIC_SYSRQ)
#define SUPPORT_SYSRQ
MODULE_DESCRIPTION("DECstation DZ serial driver");
MODULE_LICENSE("GPL");
static char dz_name[] __initdata = "DECstation DZ serial driver version ";
static char dz_version[] __initdata = "1.04";
struct dz_port ;
struct dz_mux ;
static struct dz_mux dz_mux;
static inline struct dz_port *to_dport(struct uart_port *uport)
static u16 dz_in(struct dz_port *dport, unsigned offset)
static void dz_out(struct dz_port *dport, unsigned offset, u16 value)
static void dz_stop_tx(struct uart_port *uport)
static void dz_start_tx(struct uart_port *uport)
static void dz_stop_rx(struct uart_port *uport)
static void dz_enable_ms(struct uart_port *uport)
static inline void dz_receive_chars(struct dz_mux *mux)
static inline void dz_transmit_chars(struct dz_mux *mux)
static inline void check_modem_status(struct dz_port *dport)
static irqreturn_t dz_interrupt(int irq, void *dev_id)
static unsigned int dz_get_mctrl(struct uart_port *uport)
static void dz_set_mctrl(struct uart_port *uport, unsigned int mctrl)
static int dz_startup(struct uart_port *uport)
static void dz_shutdown(struct uart_port *uport)
static unsigned int dz_tx_empty(struct uart_port *uport)
static void dz_break_ctl(struct uart_port *uport, int break_state)
static int dz_encode_baud_rate(unsigned int baud)
static void dz_reset(struct dz_port *dport)
static void dz_set_termios(struct uart_port *uport, struct ktermios *termios,
struct ktermios *old_termios)
static void dz_pm(struct uart_port *uport, unsigned int state,
unsigned int oldstate)
static const char *dz_type(struct uart_port *uport)
static void dz_release_port(struct uart_port *uport)
static int dz_map_port(struct uart_port *uport)
static int dz_request_port(struct uart_port *uport)
static void dz_config_port(struct uart_port *uport, int flags)
static int dz_verify_port(struct uart_port *uport, struct serial_struct *ser)
static struct uart_ops dz_ops = ;
static void __init dz_init_ports(void)
static void dz_console_putchar(struct uart_port *uport, int ch)
static void dz_console_print(struct console *co,
const char *str,
unsigned int count)
static int __init dz_console_setup(struct console *co, char *options)
static struct uart_driver dz_reg;
static struct console dz_console = ;
static int __init dz_serial_console_init(void)
console_initcall(dz_serial_console_init);
#define SERIAL_DZ_CONSOLE	&dz_console
#define SERIAL_DZ_CONSOLE	NULL
static struct uart_driver dz_reg = ;
static int __init dz_init(void)
module_init(dz_init);
