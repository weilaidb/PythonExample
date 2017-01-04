static int s3c24a0_serial_setsource(struct uart_port *port,
struct s3c24xx_uart_clksrc *clk)
static int s3c24a0_serial_getsource(struct uart_port *port,
struct s3c24xx_uart_clksrc *clk)
static int s3c24a0_serial_resetport(struct uart_port *port,
struct s3c2410_uartcfg *cfg)
static struct s3c24xx_uart_info s3c24a0_uart_inf = ;
static int s3c24a0_serial_probe(struct platform_device *dev)
static struct platform_driver s3c24a0_serial_driver = ;
s3c24xx_console_init(&s3c24a0_serial_driver, &s3c24a0_uart_inf);
static int __init s3c24a0_serial_init(void)
static void __exit s3c24a0_serial_exit(void)
module_init(s3c24a0_serial_init);
module_exit(s3c24a0_serial_exit);
