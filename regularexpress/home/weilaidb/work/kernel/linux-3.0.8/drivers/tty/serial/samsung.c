#if defined(CONFIG_SERIAL_SAMSUNG_CONSOLE) && defined(CONFIG_MAGIC_SYSRQ)
#define SUPPORT_SYSRQ
#define S3C24XX_SERIAL_NAME	"ttySAC"
#define S3C24XX_SERIAL_MAJOR	204
#define S3C24XX_SERIAL_MINOR	64
#define tx_enabled(port) ((port)->unused[0])
#define rx_enabled(port) ((port)->unused[1])
#define RXSTAT_DUMMY_READ (0x10000000)
static inline struct s3c24xx_uart_port *to_ourport(struct uart_port *port)
static inline const char *s3c24xx_serial_portname(struct uart_port *port)
static int s3c24xx_serial_txempty_nofifo(struct uart_port *port)
static void s3c24xx_serial_rx_enable(struct uart_port *port)
static void s3c24xx_serial_rx_disable(struct uart_port *port)
static void s3c24xx_serial_stop_tx(struct uart_port *port)
static void s3c24xx_serial_start_tx(struct uart_port *port)
static void s3c24xx_serial_stop_rx(struct uart_port *port)
static void s3c24xx_serial_enable_ms(struct uart_port *port)
static inline struct s3c24xx_uart_info *s3c24xx_port_to_info(struct uart_port *port)
static inline struct s3c2410_uartcfg *s3c24xx_port_to_cfg(struct uart_port *port)
static int s3c24xx_serial_rx_fifocnt(struct s3c24xx_uart_port *ourport,
unsigned long ufstat)
#define S3C2410_UERSTAT_PARITY (0x1000)
static irqreturn_t
s3c24xx_serial_rx_chars(int irq, void *dev_id)
static irqreturn_t s3c24xx_serial_tx_chars(int irq, void *id)
static unsigned int s3c24xx_serial_tx_empty(struct uart_port *port)
static unsigned int s3c24xx_serial_get_mctrl(struct uart_port *port)
static void s3c24xx_serial_set_mctrl(struct uart_port *port, unsigned int mctrl)
static void s3c24xx_serial_break_ctl(struct uart_port *port, int break_state)
static void s3c24xx_serial_shutdown(struct uart_port *port)
static int s3c24xx_serial_startup(struct uart_port *port)
static void s3c24xx_serial_pm(struct uart_port *port, unsigned int level,
unsigned int old)
#define MAX_CLKS (8)
static struct s3c24xx_uart_clksrc tmp_clksrc = ;
static inline int
s3c24xx_serial_getsource(struct uart_port *port, struct s3c24xx_uart_clksrc *c)
static inline int
s3c24xx_serial_setsource(struct uart_port *port, struct s3c24xx_uart_clksrc *c)
struct baud_calc ;
static int s3c24xx_serial_calcbaud(struct baud_calc *calc,
struct uart_port *port,
struct s3c24xx_uart_clksrc *clksrc,
unsigned int baud)
static unsigned int s3c24xx_serial_getclk(struct uart_port *port,
struct s3c24xx_uart_clksrc **clksrc,
struct clk **clk,
unsigned int baud)
static u16 udivslot_table[16] = ;
static void s3c24xx_serial_set_termios(struct uart_port *port,
struct ktermios *termios,
struct ktermios *old)
static const char *s3c24xx_serial_type(struct uart_port *port)
#define MAP_SIZE (0x100)
static void s3c24xx_serial_release_port(struct uart_port *port)
static int s3c24xx_serial_request_port(struct uart_port *port)
static void s3c24xx_serial_config_port(struct uart_port *port, int flags)
static int
s3c24xx_serial_verify_port(struct uart_port *port, struct serial_struct *ser)
static struct console s3c24xx_serial_console;
#define S3C24XX_SERIAL_CONSOLE &s3c24xx_serial_console
#define S3C24XX_SERIAL_CONSOLE NULL
static struct uart_ops s3c24xx_serial_ops = ;
static struct uart_driver s3c24xx_uart_drv = ;
static struct s3c24xx_uart_port s3c24xx_serial_ports[CONFIG_SERIAL_SAMSUNG_UARTS] = ;
static inline int s3c24xx_serial_resetport(struct uart_port *port,
struct s3c2410_uartcfg *cfg)
static int s3c24xx_serial_cpufreq_transition(struct notifier_block *nb,
unsigned long val, void *data)
static inline int s3c24xx_serial_cpufreq_register(struct s3c24xx_uart_port *port)
static inline void s3c24xx_serial_cpufreq_deregister(struct s3c24xx_uart_port *port)
static inline int s3c24xx_serial_cpufreq_register(struct s3c24xx_uart_port *port)
static inline void s3c24xx_serial_cpufreq_deregister(struct s3c24xx_uart_port *port)
static int s3c24xx_serial_init_port(struct s3c24xx_uart_port *ourport,
struct s3c24xx_uart_info *info,
struct platform_device *platdev)
static ssize_t s3c24xx_serial_show_clksrc(struct device *dev,
struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(clock_source, S_IRUGO, s3c24xx_serial_show_clksrc, NULL);
static int probe_index;
int s3c24xx_serial_probe(struct platform_device *dev,
struct s3c24xx_uart_info *info)
EXPORT_SYMBOL_GPL(s3c24xx_serial_probe);
int __devexit s3c24xx_serial_remove(struct platform_device *dev)
EXPORT_SYMBOL_GPL(s3c24xx_serial_remove);
static int s3c24xx_serial_suspend(struct platform_device *dev, pm_message_t state)
static int s3c24xx_serial_resume(struct platform_device *dev)
int s3c24xx_serial_init(struct platform_driver *drv,
struct s3c24xx_uart_info *info)
EXPORT_SYMBOL_GPL(s3c24xx_serial_init);
static int __init s3c24xx_serial_modinit(void)
static void __exit s3c24xx_serial_modexit(void)
module_init(s3c24xx_serial_modinit);
module_exit(s3c24xx_serial_modexit);
static struct uart_port *cons_uart;
static int
s3c24xx_serial_console_txrdy(struct uart_port *port, unsigned int ufcon)
static void
s3c24xx_serial_console_putchar(struct uart_port *port, int ch)
static void
s3c24xx_serial_console_write(struct console *co, const char *s,
unsigned int count)
static void __init
s3c24xx_serial_get_options(struct uart_port *port, int *baud,
int *parity, int *bits)
static int s3c24xx_serial_init_ports(struct s3c24xx_uart_info **info)
static int __init
s3c24xx_serial_console_setup(struct console *co, char *options)
static struct console s3c24xx_serial_console = ;
int s3c24xx_serial_initconsole(struct platform_driver *drv,
struct s3c24xx_uart_info **info)
MODULE_DESCRIPTION("Samsung SoC Serial port driver");
MODULE_AUTHOR("Ben Dooks <ben@simtec.co.uk>");
MODULE_LICENSE("GPL v2");
