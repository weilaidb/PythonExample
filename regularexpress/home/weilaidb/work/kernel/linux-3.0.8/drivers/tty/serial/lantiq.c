#define PORT_LTQ_ASC		111
#define MAXPORTS		2
#define UART_DUMMY_UER_RX	1
#define DRVNAME			"ltq_asc"
#define LTQ_ASC_TBUF		(0x0020 + 3)
#define LTQ_ASC_RBUF		(0x0024 + 3)
#define LTQ_ASC_TBUF		0x0020
#define LTQ_ASC_RBUF		0x0024
#define LTQ_ASC_FSTAT		0x0048
#define LTQ_ASC_WHBSTATE	0x0018
#define LTQ_ASC_STATE		0x0014
#define LTQ_ASC_IRNCR		0x00F8
#define LTQ_ASC_CLC		0x0000
#define LTQ_ASC_ID		0x0008
#define LTQ_ASC_PISEL		0x0004
#define LTQ_ASC_TXFCON		0x0044
#define LTQ_ASC_RXFCON		0x0040
#define LTQ_ASC_CON		0x0010
#define LTQ_ASC_BG		0x0050
#define LTQ_ASC_IRNREN		0x00F4
#define ASC_IRNREN_TX		0x1
#define ASC_IRNREN_RX		0x2
#define ASC_IRNREN_ERR		0x4
#define ASC_IRNREN_TX_BUF	0x8
#define ASC_IRNCR_TIR		0x1
#define ASC_IRNCR_RIR		0x2
#define ASC_IRNCR_EIR		0x4
#define ASCOPT_CSIZE		0x3
#define TXFIFO_FL		1
#define RXFIFO_FL		1
#define ASCCLC_DISS		0x2
#define ASCCLC_RMCMASK		0x0000FF00
#define ASCCLC_RMCOFFSET	8
#define ASCCON_M_8ASYNC		0x0
#define ASCCON_M_7ASYNC		0x2
#define ASCCON_ODD		0x00000020
#define ASCCON_STP		0x00000080
#define ASCCON_BRS		0x00000100
#define ASCCON_FDE		0x00000200
#define ASCCON_R		0x00008000
#define ASCCON_FEN		0x00020000
#define ASCCON_ROEN		0x00080000
#define ASCCON_TOEN		0x00100000
#define ASCSTATE_PE		0x00010000
#define ASCSTATE_FE		0x00020000
#define ASCSTATE_ROE		0x00080000
#define ASCSTATE_ANY		(ASCSTATE_ROE|ASCSTATE_PE|ASCSTATE_FE)
#define ASCWHBSTATE_CLRREN	0x00000001
#define ASCWHBSTATE_SETREN	0x00000002
#define ASCWHBSTATE_CLRPE	0x00000004
#define ASCWHBSTATE_CLRFE	0x00000008
#define ASCWHBSTATE_CLRROE	0x00000020
#define ASCTXFCON_TXFEN		0x0001
#define ASCTXFCON_TXFFLU	0x0002
#define ASCTXFCON_TXFITLMASK	0x3F00
#define ASCTXFCON_TXFITLOFF	8
#define ASCRXFCON_RXFEN		0x0001
#define ASCRXFCON_RXFFLU	0x0002
#define ASCRXFCON_RXFITLMASK	0x3F00
#define ASCRXFCON_RXFITLOFF	8
#define ASCFSTAT_RXFFLMASK	0x003F
#define ASCFSTAT_TXFFLMASK	0x3F00
#define ASCFSTAT_TXFREEMASK	0x3F000000
#define ASCFSTAT_TXFREEOFF	24
static void lqasc_tx_chars(struct uart_port *port);
static struct ltq_uart_port *lqasc_port[MAXPORTS];
static struct uart_driver lqasc_reg;
static DEFINE_SPINLOCK(ltq_asc_lock);
struct ltq_uart_port ;
static inline struct
ltq_uart_port *to_ltq_uart_port(struct uart_port *port)
static void
lqasc_stop_tx(struct uart_port *port)
static void
lqasc_start_tx(struct uart_port *port)
static void
lqasc_stop_rx(struct uart_port *port)
static void
lqasc_enable_ms(struct uart_port *port)
static int
lqasc_rx_chars(struct uart_port *port)
static void
lqasc_tx_chars(struct uart_port *port)
static irqreturn_t
lqasc_tx_int(int irq, void *_port)
static irqreturn_t
lqasc_err_int(int irq, void *_port)
static irqreturn_t
lqasc_rx_int(int irq, void *_port)
static unsigned int
lqasc_tx_empty(struct uart_port *port)
static unsigned int
lqasc_get_mctrl(struct uart_port *port)
static void
lqasc_set_mctrl(struct uart_port *port, u_int mctrl)
static void
lqasc_break_ctl(struct uart_port *port, int break_state)
static int
lqasc_startup(struct uart_port *port)
static void
lqasc_shutdown(struct uart_port *port)
static void
lqasc_set_termios(struct uart_port *port,
struct ktermios *new, struct ktermios *old)
static const char*
lqasc_type(struct uart_port *port)
static void
lqasc_release_port(struct uart_port *port)
static int
lqasc_request_port(struct uart_port *port)
static void
lqasc_config_port(struct uart_port *port, int flags)
static int
lqasc_verify_port(struct uart_port *port,
struct serial_struct *ser)
static struct uart_ops lqasc_pops = ;
static void
lqasc_console_putchar(struct uart_port *port, int ch)
static void
lqasc_console_write(struct console *co, const char *s, u_int count)
static int __init
lqasc_console_setup(struct console *co, char *options)
static struct console lqasc_console = ;
static int __init
lqasc_console_init(void)
console_initcall(lqasc_console_init);
static struct uart_driver lqasc_reg = ;
static int __init
lqasc_probe(struct platform_device *pdev)
static struct platform_driver lqasc_driver = ;
int __init
init_lqasc(void)
module_init(init_lqasc);
MODULE_DESCRIPTION("Lantiq serial port driver");
MODULE_LICENSE("GPL");
