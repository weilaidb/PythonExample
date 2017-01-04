static int s3c2400_serial_getsource(struct uart_port *port,
struct s3c24xx_uart_clksrc *clk)
static int s3c2400_serial_setsource(struct uart_port *port,
struct s3c24xx_uart_clksrc *clk)
static int s3c2400_serial_resetport(struct uart_port *port,
struct s3c2410_uartcfg *cfg)
static struct s3c24xx_uart_info s3c2400_uart_inf = ;
static int s3c2400_serial_probe(struct platform_device *dev)
static struct platform_driver s3c2400_serial_driver = ;
s3c24xx_console_init(&s3c2400_serial_driver, &s3c2400_uart_inf);
static inline int s3c2400_serial_init(void)
static inline void s3c2400_serial_exit(void)
module_init(s3c2400_serial_init);
module_exit(s3c2400_serial_exit);
MODULE_LICENSE("GPL v2");
MODULE_AUTHOR("Ben Dooks <ben@simtec.co.uk>");
MODULE_DESCRIPTION("Samsung S3C2400 SoC Serial port driver");
MODULE_ALIAS("platform:s3c2400-uart");
