#define SN_SAL_MAX_CHARS 120
#define SN_SAL_BUFFER_SIZE (64 * (1 << 10))
#define SN_SAL_UART_FIFO_DEPTH 16
#define SN_SAL_UART_FIFO_SPEED_CPS (9600/10)
#define TRANSMIT_BUFFERED	0
#define TRANSMIT_RAW		1
#define DEVICE_NAME "ttySG"
#define DEVICE_NAME_DYNAMIC "ttySG0"
#define DEVICE_MAJOR 204
#define DEVICE_MINOR 40
static char sysrq_serial_str[] = "\eSYS";
static char *sysrq_serial_ptr = sysrq_serial_str;
static unsigned long sysrq_requested;
struct sn_cons_port ;
static struct sn_cons_port sal_console_port;
static int sn_process_input;
static struct miscdevice misc;
extern void early_sn_setup(void);
#undef DEBUG
static int sn_debug_printf(const char *fmt, ...);
#define DPRINTF(x...) sn_debug_printf(x)
#define DPRINTF(x...) do  while (0)
static int snt_hw_puts_raw(const char *, int);
static int snt_hw_puts_buffered(const char *, int);
static int snt_poll_getc(void);
static int snt_poll_input_pending(void);
static int snt_intr_getc(void);
static int snt_intr_input_pending(void);
static void sn_transmit_chars(struct sn_cons_port *, int);
static struct sn_sal_ops poll_ops = ;
static struct sn_sal_ops intr_ops = ;
static int snt_poll_getc(void)
static int snt_poll_input_pending(void)
static int snt_intr_getc(void)
static int snt_intr_input_pending(void)
static int snt_hw_puts_raw(const char *s, int len)
static int snt_hw_puts_buffered(const char *s, int len)
static const char *snp_type(struct uart_port *port)
static unsigned int snp_tx_empty(struct uart_port *port)
static void snp_stop_tx(struct uart_port *port)
static void snp_release_port(struct uart_port *port)
static void snp_enable_ms(struct uart_port *port)
static void snp_shutdown(struct uart_port *port)
static void snp_set_mctrl(struct uart_port *port, unsigned int mctrl)
static unsigned int snp_get_mctrl(struct uart_port *port)
static void snp_stop_rx(struct uart_port *port)
static void snp_start_tx(struct uart_port *port)
static void snp_break_ctl(struct uart_port *port, int break_state)
static int snp_startup(struct uart_port *port)
static void
snp_set_termios(struct uart_port *port, struct ktermios *termios,
struct ktermios *old)
static int snp_request_port(struct uart_port *port)
static void snp_config_port(struct uart_port *port, int flags)
static struct uart_ops sn_console_ops = ;
static int sn_debug_printf(const char *fmt, ...)
static void
sn_receive_chars(struct sn_cons_port *port, unsigned long flags)
static void sn_transmit_chars(struct sn_cons_port *port, int raw)
static irqreturn_t sn_sal_interrupt(int irq, void *dev_id)
static void sn_sal_timer_poll(unsigned long data)
static void __init sn_sal_switch_to_asynch(struct sn_cons_port *port)
static void __init sn_sal_switch_to_interrupts(struct sn_cons_port *port)
static void sn_sal_console_write(struct console *, const char *, unsigned);
static int sn_sal_console_setup(struct console *, char *);
static struct uart_driver sal_console_uart;
extern struct tty_driver *uart_console_device(struct console *, int *);
static struct console sal_console = ;
#define SAL_CONSOLE	&sal_console
static struct uart_driver sal_console_uart = ;
static int __init sn_sal_module_init(void)
static void __exit sn_sal_module_exit(void)
module_init(sn_sal_module_init);
module_exit(sn_sal_module_exit);
static void puts_raw_fixed(int (*puts_raw) (const char *s, int len),
const char *s, int count)
static void
sn_sal_console_write(struct console *co, const char *s, unsigned count)
static int sn_sal_console_setup(struct console *co, char *options)
static void __init
sn_sal_console_write_early(struct console *co, const char *s, unsigned count)
static struct console sal_console_early __initdata = ;
int __init sn_serial_console_early_setup(void)
static int __init sn_sal_serial_console_init(void)
console_initcall(sn_sal_serial_console_init);
