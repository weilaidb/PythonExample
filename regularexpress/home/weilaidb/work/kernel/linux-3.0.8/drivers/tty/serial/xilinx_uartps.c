#define XUARTPS_TTY_NAME	"ttyPS"
#define XUARTPS_NAME		"xuartps"
#define XUARTPS_MAJOR		0
#define XUARTPS_MINOR		0
#define XUARTPS_NR_PORTS	2
#define XUARTPS_FIFO_SIZE	16
#define XUARTPS_REGISTER_SPACE	0xFFF
#define xuartps_readl(offset)		ioread32(port->membase + offset)
#define xuartps_writel(val, offset)	iowrite32(val, port->membase + offset)
#define XUARTPS_CR_OFFSET	0x00
#define XUARTPS_MR_OFFSET	0x04
#define XUARTPS_IER_OFFSET	0x08
#define XUARTPS_IDR_OFFSET	0x0C
#define XUARTPS_IMR_OFFSET	0x10
#define XUARTPS_ISR_OFFSET	0x14
#define XUARTPS_BAUDGEN_OFFSET	0x18
#define XUARTPS_RXTOUT_OFFSET	0x1C
#define XUARTPS_RXWM_OFFSET	0x20
#define XUARTPS_MODEMCR_OFFSET	0x24
#define XUARTPS_MODEMSR_OFFSET	0x28
#define XUARTPS_SR_OFFSET	0x2C
#define XUARTPS_FIFO_OFFSET	0x30
#define XUARTPS_BAUDDIV_OFFSET	0x34
#define XUARTPS_FLOWDEL_OFFSET	0x38
#define XUARTPS_IRRX_PWIDTH_OFFSET 0x3C
#define XUARTPS_IRTX_PWIDTH_OFFSET 0x40
#define XUARTPS_TXWM_OFFSET	0x44
#define XUARTPS_CR_STOPBRK	0x00000100
#define XUARTPS_CR_STARTBRK	0x00000080
#define XUARTPS_CR_TX_DIS	0x00000020
#define XUARTPS_CR_TX_EN	0x00000010
#define XUARTPS_CR_RX_DIS	0x00000008
#define XUARTPS_CR_RX_EN	0x00000004
#define XUARTPS_CR_TXRST	0x00000002
#define XUARTPS_CR_RXRST	0x00000001
#define XUARTPS_CR_RST_TO	0x00000040
#define XUARTPS_MR_CLKSEL		0x00000001
#define XUARTPS_MR_CHMODE_L_LOOP	0x00000200
#define XUARTPS_MR_CHMODE_NORM		0x00000000
#define XUARTPS_MR_STOPMODE_2_BIT	0x00000080
#define XUARTPS_MR_STOPMODE_1_BIT	0x00000000
#define XUARTPS_MR_PARITY_NONE		0x00000020
#define XUARTPS_MR_PARITY_MARK		0x00000018
#define XUARTPS_MR_PARITY_SPACE		0x00000010
#define XUARTPS_MR_PARITY_ODD		0x00000008
#define XUARTPS_MR_PARITY_EVEN		0x00000000
#define XUARTPS_MR_CHARLEN_6_BIT	0x00000006
#define XUARTPS_MR_CHARLEN_7_BIT	0x00000004
#define XUARTPS_MR_CHARLEN_8_BIT	0x00000000
#define XUARTPS_IXR_TOUT	0x00000100
#define XUARTPS_IXR_PARITY	0x00000080
#define XUARTPS_IXR_FRAMING	0x00000040
#define XUARTPS_IXR_OVERRUN	0x00000020
#define XUARTPS_IXR_TXFULL	0x00000010
#define XUARTPS_IXR_TXEMPTY	0x00000008
#define XUARTPS_ISR_RXEMPTY	0x00000002
#define XUARTPS_IXR_RXTRIG	0x00000001
#define XUARTPS_IXR_RXFULL	0x00000004
#define XUARTPS_IXR_RXEMPTY	0x00000002
#define XUARTPS_IXR_MASK	0x00001FFF
#define XUARTPS_SR_RXEMPTY	0x00000002
#define XUARTPS_SR_TXEMPTY	0x00000008
#define XUARTPS_SR_TXFULL	0x00000010
#define XUARTPS_SR_RXTRIG	0x00000001
static irqreturn_t xuartps_isr(int irq, void *dev_id)
static unsigned int xuartps_set_baud_rate(struct uart_port *port,
unsigned int baud)
static void xuartps_start_tx(struct uart_port *port)
static void xuartps_stop_tx(struct uart_port *port)
static void xuartps_stop_rx(struct uart_port *port)
static unsigned int xuartps_tx_empty(struct uart_port *port)
static void xuartps_break_ctl(struct uart_port *port, int ctl)
static void xuartps_set_termios(struct uart_port *port,
struct ktermios *termios, struct ktermios *old)
static int xuartps_startup(struct uart_port *port)
static void xuartps_shutdown(struct uart_port *port)
static const char *xuartps_type(struct uart_port *port)
static int xuartps_verify_port(struct uart_port *port,
struct serial_struct *ser)
static int xuartps_request_port(struct uart_port *port)
static void xuartps_release_port(struct uart_port *port)
static void xuartps_config_port(struct uart_port *port, int flags)
static unsigned int xuartps_get_mctrl(struct uart_port *port)
static void xuartps_set_mctrl(struct uart_port *port, unsigned int mctrl)
static void xuartps_enable_ms(struct uart_port *port)
static struct uart_ops xuartps_ops = ;
static struct uart_port xuartps_port[2];
static struct uart_port *xuartps_get_port(void)
static void xuartps_console_wait_tx(struct uart_port *port)
static void xuartps_console_putchar(struct uart_port *port, int ch)
static void xuartps_console_write(struct console *co, const char *s,
unsigned int count)
static int __init xuartps_console_setup(struct console *co, char *options)
static struct uart_driver xuartps_uart_driver;
static struct console xuartps_console = ;
static int __init xuartps_console_init(void)
console_initcall(xuartps_console_init);
static struct uart_driver xuartps_uart_driver = ;
static int __devinit xuartps_probe(struct platform_device *pdev)
static int __devexit xuartps_remove(struct platform_device *pdev)
static int xuartps_suspend(struct platform_device *pdev, pm_message_t state)
static int xuartps_resume(struct platform_device *pdev)
static struct of_device_id xuartps_of_match[] __devinitdata = ;
MODULE_DEVICE_TABLE(of, xuartps_of_match);
#define xuartps_of_match NULL
static struct platform_driver xuartps_platform_driver = ;
static int __init xuartps_init(void)
static void __exit xuartps_exit(void)
module_init(xuartps_init);
module_exit(xuartps_exit);
MODULE_DESCRIPTION("Driver for PS UART");
MODULE_AUTHOR("Xilinx Inc.");
MODULE_LICENSE("GPL");
