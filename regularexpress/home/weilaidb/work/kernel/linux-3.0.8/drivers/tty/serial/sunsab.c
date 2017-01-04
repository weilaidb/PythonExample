#if defined(CONFIG_SERIAL_SUNSAB_CONSOLE) && defined(CONFIG_MAGIC_SYSRQ)
#define SUPPORT_SYSRQ
struct uart_sunsab_port ;
#define SAB_BASE_BAUD ( 29491200 / 16 )
static char *sab82532_version[16] = ;
#define SAB82532_MAX_TEC_TIMEOUT 200000
#define SAB82532_MAX_CEC_TIMEOUT  50000
#define SAB82532_RECV_FIFO_SIZE	32
#define SAB82532_XMIT_FIFO_SIZE	32
static __inline__ void sunsab_tec_wait(struct uart_sunsab_port *up)
static __inline__ void sunsab_cec_wait(struct uart_sunsab_port *up)
static struct tty_struct *
receive_chars(struct uart_sunsab_port *up,
union sab82532_irq_status *stat)
static void sunsab_stop_tx(struct uart_port *);
static void sunsab_tx_idle(struct uart_sunsab_port *);
static void transmit_chars(struct uart_sunsab_port *up,
union sab82532_irq_status *stat)
static void check_status(struct uart_sunsab_port *up,
union sab82532_irq_status *stat)
static irqreturn_t sunsab_interrupt(int irq, void *dev_id)
static unsigned int sunsab_tx_empty(struct uart_port *port)
static void sunsab_set_mctrl(struct uart_port *port, unsigned int mctrl)
static unsigned int sunsab_get_mctrl(struct uart_port *port)
static void sunsab_stop_tx(struct uart_port *port)
static void sunsab_tx_idle(struct uart_sunsab_port *up)
static void sunsab_start_tx(struct uart_port *port)
static void sunsab_send_xchar(struct uart_port *port, char ch)
static void sunsab_stop_rx(struct uart_port *port)
static void sunsab_enable_ms(struct uart_port *port)
static void sunsab_break_ctl(struct uart_port *port, int break_state)
static int sunsab_startup(struct uart_port *port)
static void sunsab_shutdown(struct uart_port *port)
static void calc_ebrg(int baud, int *n_ret, int *m_ret)
static void sunsab_convert_to_sab(struct uart_sunsab_port *up, unsigned int cflag,
unsigned int iflag, unsigned int baud,
unsigned int quot)
static void sunsab_set_termios(struct uart_port *port, struct ktermios *termios,
struct ktermios *old)
static const char *sunsab_type(struct uart_port *port)
static void sunsab_release_port(struct uart_port *port)
static int sunsab_request_port(struct uart_port *port)
static void sunsab_config_port(struct uart_port *port, int flags)
static int sunsab_verify_port(struct uart_port *port, struct serial_struct *ser)
static struct uart_ops sunsab_pops = ;
static struct uart_driver sunsab_reg = ;
static struct uart_sunsab_port *sunsab_ports;
static void sunsab_console_putchar(struct uart_port *port, int c)
static void sunsab_console_write(struct console *con, const char *s, unsigned n)
static int sunsab_console_setup(struct console *con, char *options)
static struct console sunsab_console = ;
static inline struct console *SUNSAB_CONSOLE(void)
#define SUNSAB_CONSOLE()	(NULL)
#define sunsab_console_init()	do  while (0)
static int __devinit sunsab_init_one(struct uart_sunsab_port *up,
struct platform_device *op,
unsigned long offset,
int line)
static int __devinit sab_probe(struct platform_device *op)
static int __devexit sab_remove(struct platform_device *op)
static const struct of_device_id sab_match[] = ;
MODULE_DEVICE_TABLE(of, sab_match);
static struct platform_driver sab_driver = ;
static int __init sunsab_init(void)
static void __exit sunsab_exit(void)
module_init(sunsab_init);
module_exit(sunsab_exit);
MODULE_AUTHOR("Eddie C. Dost and David S. Miller");
MODULE_DESCRIPTION("Sun SAB82532 serial port driver");
MODULE_LICENSE("GPL");
