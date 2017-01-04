static DECLARE_BITMAP(linemap, MAXLINES);
static void jsm_carrier(struct jsm_channel *ch);
static inline int jsm_get_mstat(struct jsm_channel *ch)
static unsigned int jsm_tty_tx_empty(struct uart_port *port)
static unsigned int jsm_tty_get_mctrl(struct uart_port *port)
static void jsm_tty_set_mctrl(struct uart_port *port, unsigned int mctrl)
static void jsm_tty_start_tx(struct uart_port *port)
static void jsm_tty_stop_tx(struct uart_port *port)
static void jsm_tty_send_xchar(struct uart_port *port, char ch)
static void jsm_tty_stop_rx(struct uart_port *port)
static void jsm_tty_enable_ms(struct uart_port *port)
static void jsm_tty_break(struct uart_port *port, int break_state)
static int jsm_tty_open(struct uart_port *port)
static void jsm_tty_close(struct uart_port *port)
static void jsm_tty_set_termios(struct uart_port *port,
struct ktermios *termios,
struct ktermios *old_termios)
static const char *jsm_tty_type(struct uart_port *port)
static void jsm_tty_release_port(struct uart_port *port)
static int jsm_tty_request_port(struct uart_port *port)
static void jsm_config_port(struct uart_port *port, int flags)
static struct uart_ops jsm_ops = ;
int __devinit jsm_tty_init(struct jsm_board *brd)
int jsm_uart_port_init(struct jsm_board *brd)
int jsm_remove_uart_port(struct jsm_board *brd)
void jsm_input(struct jsm_channel *ch)
static void jsm_carrier(struct jsm_channel *ch)
void jsm_check_queue_flow_control(struct jsm_channel *ch)
int jsm_tty_write(struct uart_port *port)
