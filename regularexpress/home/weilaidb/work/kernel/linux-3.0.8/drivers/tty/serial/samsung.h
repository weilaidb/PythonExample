struct s3c24xx_uart_info ;
struct s3c24xx_uart_port ;
#define s3c24xx_dev_to_port(__dev) (struct uart_port *)dev_get_drvdata(__dev)
#define s3c24xx_dev_to_cfg(__dev) (struct s3c2410_uartcfg *)((__dev)->platform_data)
#define portaddr(port, reg) ((port)->membase + (reg))
#define rd_regb(port, reg) (__raw_readb(portaddr(port, reg)))
#define rd_regl(port, reg) (__raw_readl(portaddr(port, reg)))
#define wr_regb(port, reg, val) __raw_writeb(val, portaddr(port, reg))
#define wr_regl(port, reg, val) __raw_writel(val, portaddr(port, reg))
extern int s3c24xx_serial_probe(struct platform_device *dev,
struct s3c24xx_uart_info *uart);
extern int __devexit s3c24xx_serial_remove(struct platform_device *dev);
extern int s3c24xx_serial_initconsole(struct platform_driver *drv,
struct s3c24xx_uart_info **uart);
extern int s3c24xx_serial_init(struct platform_driver *drv,
struct s3c24xx_uart_info *info);
#define s3c24xx_console_init(__drv, __inf)				\
static int __init s3c_serial_console_init(void)				\
\
\
console_initcall(s3c_serial_console_init)
#define s3c24xx_console_init(drv, inf) extern void no_console(void)
extern void printascii(const char *);
static void dbg(const char *fmt, ...)
#define dbg(x...) do  while (0)
