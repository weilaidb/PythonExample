#define MXS_AUART_PORTS 5
#define AUART_CTRL0			0x00000000
#define AUART_CTRL0_SET			0x00000004
#define AUART_CTRL0_CLR			0x00000008
#define AUART_CTRL0_TOG			0x0000000c
#define AUART_CTRL1			0x00000010
#define AUART_CTRL1_SET			0x00000014
#define AUART_CTRL1_CLR			0x00000018
#define AUART_CTRL1_TOG			0x0000001c
#define AUART_CTRL2			0x00000020
#define AUART_CTRL2_SET			0x00000024
#define AUART_CTRL2_CLR			0x00000028
#define AUART_CTRL2_TOG			0x0000002c
#define AUART_LINECTRL			0x00000030
#define AUART_LINECTRL_SET		0x00000034
#define AUART_LINECTRL_CLR		0x00000038
#define AUART_LINECTRL_TOG		0x0000003c
#define AUART_LINECTRL2			0x00000040
#define AUART_LINECTRL2_SET		0x00000044
#define AUART_LINECTRL2_CLR		0x00000048
#define AUART_LINECTRL2_TOG		0x0000004c
#define AUART_INTR			0x00000050
#define AUART_INTR_SET			0x00000054
#define AUART_INTR_CLR			0x00000058
#define AUART_INTR_TOG			0x0000005c
#define AUART_DATA			0x00000060
#define AUART_STAT			0x00000070
#define AUART_DEBUG			0x00000080
#define AUART_VERSION			0x00000090
#define AUART_AUTOBAUD			0x000000a0
#define AUART_CTRL0_SFTRST			(1 << 31)
#define AUART_CTRL0_CLKGATE			(1 << 30)
#define AUART_CTRL2_CTSEN			(1 << 15)
#define AUART_CTRL2_RTS				(1 << 11)
#define AUART_CTRL2_RXE				(1 << 9)
#define AUART_CTRL2_TXE				(1 << 8)
#define AUART_CTRL2_UARTEN			(1 << 0)
#define AUART_LINECTRL_BAUD_DIVINT_SHIFT	16
#define AUART_LINECTRL_BAUD_DIVINT_MASK		0xffff0000
#define AUART_LINECTRL_BAUD_DIVINT(v)		(((v) & 0xffff) << 16)
#define AUART_LINECTRL_BAUD_DIVFRAC_SHIFT	8
#define AUART_LINECTRL_BAUD_DIVFRAC_MASK	0x00003f00
#define AUART_LINECTRL_BAUD_DIVFRAC(v)		(((v) & 0x3f) << 8)
#define AUART_LINECTRL_WLEN_MASK		0x00000060
#define AUART_LINECTRL_WLEN(v)			(((v) & 0x3) << 5)
#define AUART_LINECTRL_FEN			(1 << 4)
#define AUART_LINECTRL_STP2			(1 << 3)
#define AUART_LINECTRL_EPS			(1 << 2)
#define AUART_LINECTRL_PEN			(1 << 1)
#define AUART_LINECTRL_BRK			(1 << 0)
#define AUART_INTR_RTIEN			(1 << 22)
#define AUART_INTR_TXIEN			(1 << 21)
#define AUART_INTR_RXIEN			(1 << 20)
#define AUART_INTR_CTSMIEN			(1 << 17)
#define AUART_INTR_RTIS				(1 << 6)
#define AUART_INTR_TXIS				(1 << 5)
#define AUART_INTR_RXIS				(1 << 4)
#define AUART_INTR_CTSMIS			(1 << 1)
#define AUART_STAT_BUSY				(1 << 29)
#define AUART_STAT_CTS				(1 << 28)
#define AUART_STAT_TXFE				(1 << 27)
#define AUART_STAT_TXFF				(1 << 25)
#define AUART_STAT_RXFE				(1 << 24)
#define AUART_STAT_OERR				(1 << 19)
#define AUART_STAT_BERR				(1 << 18)
#define AUART_STAT_PERR				(1 << 17)
#define AUART_STAT_FERR				(1 << 16)
static struct uart_driver auart_driver;
struct mxs_auart_port ;
static void mxs_auart_stop_tx(struct uart_port *u);
#define to_auart_port(u) container_of(u, struct mxs_auart_port, port)
static inline void mxs_auart_tx_chars(struct mxs_auart_port *s)
static void mxs_auart_rx_char(struct mxs_auart_port *s)
static void mxs_auart_rx_chars(struct mxs_auart_port *s)
static int mxs_auart_request_port(struct uart_port *u)
static int mxs_auart_verify_port(struct uart_port *u,
struct serial_struct *ser)
static void mxs_auart_config_port(struct uart_port *u, int flags)
static const char *mxs_auart_type(struct uart_port *u)
static void mxs_auart_release_port(struct uart_port *u)
static void mxs_auart_set_mctrl(struct uart_port *u, unsigned mctrl)
static u32 mxs_auart_get_mctrl(struct uart_port *u)
static void mxs_auart_settermios(struct uart_port *u,
struct ktermios *termios,
struct ktermios *old)
static irqreturn_t mxs_auart_irq_handle(int irq, void *context)
static void mxs_auart_reset(struct uart_port *u)
static int mxs_auart_startup(struct uart_port *u)
static void mxs_auart_shutdown(struct uart_port *u)
static unsigned int mxs_auart_tx_empty(struct uart_port *u)
static void mxs_auart_start_tx(struct uart_port *u)
static void mxs_auart_stop_tx(struct uart_port *u)
static void mxs_auart_stop_rx(struct uart_port *u)
static void mxs_auart_break_ctl(struct uart_port *u, int ctl)
static void mxs_auart_enable_ms(struct uart_port *port)
static struct uart_ops mxs_auart_ops = ;
static struct mxs_auart_port *auart_port[MXS_AUART_PORTS];
static void mxs_auart_console_putchar(struct uart_port *port, int ch)
static void
auart_console_write(struct console *co, const char *str, unsigned int count)
static void __init
auart_console_get_options(struct uart_port *port, int *baud,
int *parity, int *bits)
static int __init
auart_console_setup(struct console *co, char *options)
static struct console auart_console = ;
static struct uart_driver auart_driver = ;
static int __devinit mxs_auart_probe(struct platform_device *pdev)
static int __devexit mxs_auart_remove(struct platform_device *pdev)
static struct platform_driver mxs_auart_driver = ;
static int __init mxs_auart_init(void)
static void __exit mxs_auart_exit(void)
module_init(mxs_auart_init);
module_exit(mxs_auart_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Freescale MXS application uart driver");
