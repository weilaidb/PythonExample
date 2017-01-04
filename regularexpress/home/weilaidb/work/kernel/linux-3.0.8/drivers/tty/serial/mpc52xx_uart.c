#undef DEBUG
#if defined(CONFIG_SERIAL_MPC52xx_CONSOLE) && defined(CONFIG_MAGIC_SYSRQ)
#define SUPPORT_SYSRQ
#define SERIAL_PSC_MAJOR	204
#define SERIAL_PSC_MINOR	148
#define ISR_PASS_LIMIT 256
static struct uart_port mpc52xx_uart_ports[MPC52xx_PSC_MAXNUM];
static struct device_node *mpc52xx_uart_nodes[MPC52xx_PSC_MAXNUM];
static void mpc52xx_uart_of_enumerate(void);
#define PSC(port) ((struct mpc52xx_psc __iomem *)((port)->membase))
static irqreturn_t mpc52xx_uart_int(int irq, void *dev_id);
static irqreturn_t mpc5xxx_uart_process_int(struct uart_port *port);
#define uart_console(port) \
((port)->cons && (port)->cons->index == (port)->line)
#define uart_console(port)	(0)
struct psc_ops ;
static inline void mpc52xx_set_divisor(struct mpc52xx_psc __iomem *psc,
u16 prescaler, unsigned int divisor)
#define FIFO_52xx(port) ((struct mpc52xx_psc_fifo __iomem *)(PSC(port)+1))
static void mpc52xx_psc_fifo_init(struct uart_port *port)
static int mpc52xx_psc_raw_rx_rdy(struct uart_port *port)
static int mpc52xx_psc_raw_tx_rdy(struct uart_port *port)
static int mpc52xx_psc_rx_rdy(struct uart_port *port)
static int mpc52xx_psc_tx_rdy(struct uart_port *port)
static int mpc52xx_psc_tx_empty(struct uart_port *port)
static void mpc52xx_psc_start_tx(struct uart_port *port)
static void mpc52xx_psc_stop_tx(struct uart_port *port)
static void mpc52xx_psc_stop_rx(struct uart_port *port)
static void mpc52xx_psc_rx_clr_irq(struct uart_port *port)
static void mpc52xx_psc_tx_clr_irq(struct uart_port *port)
static void mpc52xx_psc_write_char(struct uart_port *port, unsigned char c)
static unsigned char mpc52xx_psc_read_char(struct uart_port *port)
static void mpc52xx_psc_cw_disable_ints(struct uart_port *port)
static void mpc52xx_psc_cw_restore_ints(struct uart_port *port)
static unsigned int mpc5200_psc_set_baudrate(struct uart_port *port,
struct ktermios *new,
struct ktermios *old)
static unsigned int mpc5200b_psc_set_baudrate(struct uart_port *port,
struct ktermios *new,
struct ktermios *old)
static void mpc52xx_psc_get_irq(struct uart_port *port, struct device_node *np)
static irqreturn_t mpc52xx_psc_handle_irq(struct uart_port *port)
static struct psc_ops mpc52xx_psc_ops = ;
static struct psc_ops mpc5200b_psc_ops = ;
#define FIFO_512x(port) ((struct mpc512x_psc_fifo __iomem *)(PSC(port)+1))
struct psc_fifoc ;
static struct psc_fifoc __iomem *psc_fifoc;
static unsigned int psc_fifoc_irq;
static void mpc512x_psc_fifo_init(struct uart_port *port)
static int mpc512x_psc_raw_rx_rdy(struct uart_port *port)
static int mpc512x_psc_raw_tx_rdy(struct uart_port *port)
static int mpc512x_psc_rx_rdy(struct uart_port *port)
static int mpc512x_psc_tx_rdy(struct uart_port *port)
static int mpc512x_psc_tx_empty(struct uart_port *port)
static void mpc512x_psc_stop_rx(struct uart_port *port)
static void mpc512x_psc_start_tx(struct uart_port *port)
static void mpc512x_psc_stop_tx(struct uart_port *port)
static void mpc512x_psc_rx_clr_irq(struct uart_port *port)
static void mpc512x_psc_tx_clr_irq(struct uart_port *port)
static void mpc512x_psc_write_char(struct uart_port *port, unsigned char c)
static unsigned char mpc512x_psc_read_char(struct uart_port *port)
static void mpc512x_psc_cw_disable_ints(struct uart_port *port)
static void mpc512x_psc_cw_restore_ints(struct uart_port *port)
static unsigned int mpc512x_psc_set_baudrate(struct uart_port *port,
struct ktermios *new,
struct ktermios *old)
static int __init mpc512x_psc_fifoc_init(void)
static void __exit mpc512x_psc_fifoc_uninit(void)
static irqreturn_t mpc512x_psc_handle_irq(struct uart_port *port)
static int mpc512x_psc_clock(struct uart_port *port, int enable)
static void mpc512x_psc_get_irq(struct uart_port *port, struct device_node *np)
static struct psc_ops mpc512x_psc_ops = ;
static struct psc_ops *psc_ops;
static unsigned int
mpc52xx_uart_tx_empty(struct uart_port *port)
static void
mpc52xx_uart_set_mctrl(struct uart_port *port, unsigned int mctrl)
static unsigned int
mpc52xx_uart_get_mctrl(struct uart_port *port)
static void
mpc52xx_uart_stop_tx(struct uart_port *port)
static void
mpc52xx_uart_start_tx(struct uart_port *port)
static void
mpc52xx_uart_send_xchar(struct uart_port *port, char ch)
static void
mpc52xx_uart_stop_rx(struct uart_port *port)
static void
mpc52xx_uart_enable_ms(struct uart_port *port)
static void
mpc52xx_uart_break_ctl(struct uart_port *port, int ctl)
static int
mpc52xx_uart_startup(struct uart_port *port)
static void
mpc52xx_uart_shutdown(struct uart_port *port)
static void
mpc52xx_uart_set_termios(struct uart_port *port, struct ktermios *new,
struct ktermios *old)
static const char *
mpc52xx_uart_type(struct uart_port *port)
static void
mpc52xx_uart_release_port(struct uart_port *port)
static int
mpc52xx_uart_request_port(struct uart_port *port)
static void
mpc52xx_uart_config_port(struct uart_port *port, int flags)
static int
mpc52xx_uart_verify_port(struct uart_port *port, struct serial_struct *ser)
static struct uart_ops mpc52xx_uart_ops = ;
static inline int
mpc52xx_uart_int_rx_chars(struct uart_port *port)
static inline int
mpc52xx_uart_int_tx_chars(struct uart_port *port)
static irqreturn_t
mpc5xxx_uart_process_int(struct uart_port *port)
static irqreturn_t
mpc52xx_uart_int(int irq, void *dev_id)
static void __init
mpc52xx_console_get_options(struct uart_port *port,
int *baud, int *parity, int *bits, int *flow)
static void
mpc52xx_console_write(struct console *co, const char *s, unsigned int count)
static int __init
mpc52xx_console_setup(struct console *co, char *options)
static struct uart_driver mpc52xx_uart_driver;
static struct console mpc52xx_console = ;
static int __init
mpc52xx_console_init(void)
console_initcall(mpc52xx_console_init);
#define MPC52xx_PSC_CONSOLE &mpc52xx_console
#define MPC52xx_PSC_CONSOLE NULL
static struct uart_driver mpc52xx_uart_driver = ;
static struct of_device_id mpc52xx_uart_of_match[] = ;
static int __devinit mpc52xx_uart_of_probe(struct platform_device *op)
static int
mpc52xx_uart_of_remove(struct platform_device *op)
static int
mpc52xx_uart_of_suspend(struct platform_device *op, pm_message_t state)
static int
mpc52xx_uart_of_resume(struct platform_device *op)
static void
mpc52xx_uart_of_assign(struct device_node *np)
static void
mpc52xx_uart_of_enumerate(void)
MODULE_DEVICE_TABLE(of, mpc52xx_uart_of_match);
static struct platform_driver mpc52xx_uart_of_driver = ;
static int __init
mpc52xx_uart_init(void)
static void __exit
mpc52xx_uart_exit(void)
module_init(mpc52xx_uart_init);
module_exit(mpc52xx_uart_exit);
MODULE_AUTHOR("Sylvain Munaut <tnt@246tNt.com>");
MODULE_DESCRIPTION("Freescale MPC52xx PSC UART");
MODULE_LICENSE("GPL");
