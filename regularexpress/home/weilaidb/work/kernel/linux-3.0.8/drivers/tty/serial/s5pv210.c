static int s5pv210_serial_setsource(struct uart_port *port,
struct s3c24xx_uart_clksrc *clk)
static int s5pv210_serial_getsource(struct uart_port *port,
struct s3c24xx_uart_clksrc *clk)
static int s5pv210_serial_resetport(struct uart_port *port,
struct s3c2410_uartcfg *cfg)
#define S5PV210_UART_DEFAULT_INFO(fifo_size)			\
.name		= "Samsung S5PV210 UART0",	\
.type		= PORT_S3C6400,			\
.fifosize	= fifo_size,			\
.has_divslot	= 1,				\
.rx_fifomask	= S5PV210_UFSTAT_RXMASK,	\
.rx_fifoshift	= S5PV210_UFSTAT_RXSHIFT,	\
.rx_fifofull	= S5PV210_UFSTAT_RXFULL,	\
.tx_fifofull	= S5PV210_UFSTAT_TXFULL,	\
.tx_fifomask	= S5PV210_UFSTAT_TXMASK,	\
.tx_fifoshift	= S5PV210_UFSTAT_TXSHIFT,	\
.get_clksrc	= s5pv210_serial_getsource,	\
.set_clksrc	= s5pv210_serial_setsource,	\
.reset_port	= s5pv210_serial_resetport
static struct s3c24xx_uart_info s5p_port_fifo256 = ;
static struct s3c24xx_uart_info s5p_port_fifo64 = ;
static struct s3c24xx_uart_info s5p_port_fifo16 = ;
static struct s3c24xx_uart_info *s5p_uart_inf[] = ;
static int s5p_serial_probe(struct platform_device *pdev)
static struct platform_driver s5p_serial_driver = ;
static int __init s5pv210_serial_console_init(void)
console_initcall(s5pv210_serial_console_init);
static int __init s5p_serial_init(void)
static void __exit s5p_serial_exit(void)
module_init(s5p_serial_init);
module_exit(s5p_serial_exit);
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:s5pv210-uart");
MODULE_DESCRIPTION("Samsung S5PV210 UART Driver support");
MODULE_AUTHOR("Thomas Abraham <thomas.ab@samsung.com>");
