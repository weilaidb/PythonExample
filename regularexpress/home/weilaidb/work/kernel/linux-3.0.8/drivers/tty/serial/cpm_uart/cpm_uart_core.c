#if defined(CONFIG_SERIAL_CPM_CONSOLE) && defined(CONFIG_MAGIC_SYSRQ)
#define SUPPORT_SYSRQ
static int  cpm_uart_tx_pump(struct uart_port *port);
static void cpm_uart_init_smc(struct uart_cpm_port *pinfo);
static void cpm_uart_init_scc(struct uart_cpm_port *pinfo);
static void cpm_uart_initbd(struct uart_cpm_port *pinfo);
#define HW_BUF_SPD_THRESHOLD    9600
static unsigned int cpm_uart_tx_empty(struct uart_port *port)
static void cpm_uart_set_mctrl(struct uart_port *port, unsigned int mctrl)
static unsigned int cpm_uart_get_mctrl(struct uart_port *port)
static void cpm_uart_stop_tx(struct uart_port *port)
static void cpm_uart_start_tx(struct uart_port *port)
static void cpm_uart_stop_rx(struct uart_port *port)
static void cpm_uart_enable_ms(struct uart_port *port)
static void cpm_uart_break_ctl(struct uart_port *port, int break_state)
static void cpm_uart_int_tx(struct uart_port *port)
static int serial_polled;
static void cpm_uart_int_rx(struct uart_port *port)
static irqreturn_t cpm_uart_int(int irq, void *data)
static int cpm_uart_startup(struct uart_port *port)
inline void cpm_uart_wait_until_send(struct uart_cpm_port *pinfo)
static void cpm_uart_shutdown(struct uart_port *port)
static void cpm_uart_set_termios(struct uart_port *port,
struct ktermios *termios,
struct ktermios *old)
static const char *cpm_uart_type(struct uart_port *port)
static int cpm_uart_verify_port(struct uart_port *port,
struct serial_struct *ser)
static int cpm_uart_tx_pump(struct uart_port *port)
static void cpm_uart_initbd(struct uart_cpm_port *pinfo)
static void cpm_uart_init_scc(struct uart_cpm_port *pinfo)
static void cpm_uart_init_smc(struct uart_cpm_port *pinfo)
static int cpm_uart_request_port(struct uart_port *port)
static void cpm_uart_release_port(struct uart_port *port)
static void cpm_uart_config_port(struct uart_port *port, int flags)
#if defined(CONFIG_CONSOLE_POLL) || defined(CONFIG_SERIAL_CPM_CONSOLE)
static void cpm_uart_early_write(struct uart_cpm_port *pinfo,
const char *string, u_int count)
#define GDB_BUF_SIZE	512
static char poll_buf[GDB_BUF_SIZE];
static char *pollp;
static int poll_chars;
static int poll_wait_key(char *obuf, struct uart_cpm_port *pinfo)
static int cpm_get_poll_char(struct uart_port *port)
static void cpm_put_poll_char(struct uart_port *port,
unsigned char c)
static struct uart_ops cpm_uart_pops = ;
struct uart_cpm_port cpm_uart_ports[UART_NR];
static int cpm_uart_init_port(struct device_node *np,
struct uart_cpm_port *pinfo)
static void cpm_uart_console_write(struct console *co, const char *s,
u_int count)
static int __init cpm_uart_console_setup(struct console *co, char *options)
static struct uart_driver cpm_reg;
static struct console cpm_scc_uart_console = ;
static int __init cpm_uart_console_init(void)
console_initcall(cpm_uart_console_init);
#define CPM_UART_CONSOLE	&cpm_scc_uart_console
#define CPM_UART_CONSOLE	NULL
static struct uart_driver cpm_reg = ;
static int probe_index;
static int __devinit cpm_uart_probe(struct platform_device *ofdev)
static int __devexit cpm_uart_remove(struct platform_device *ofdev)
static struct of_device_id cpm_uart_match[] = ;
static struct platform_driver cpm_uart_driver = ;
static int __init cpm_uart_init(void)
static void __exit cpm_uart_exit(void)
module_init(cpm_uart_init);
module_exit(cpm_uart_exit);
MODULE_AUTHOR("Kumar Gala/Antoniou Pantelis");
MODULE_DESCRIPTION("CPM SCC/SMC port driver $Revision: 0.01 $");
MODULE_LICENSE("GPL");
MODULE_ALIAS_CHARDEV(SERIAL_CPM_MAJOR, SERIAL_CPM_MINOR);
