struct timbuart_port ;
static int baudrates[] = ;
static void timbuart_mctrl_check(struct uart_port *port, u32 isr, u32 *ier);
static irqreturn_t timbuart_handleinterrupt(int irq, void *devid);
static void timbuart_stop_rx(struct uart_port *port)
static void timbuart_stop_tx(struct uart_port *port)
static void timbuart_start_tx(struct uart_port *port)
static unsigned int timbuart_tx_empty(struct uart_port *port)
static void timbuart_flush_buffer(struct uart_port *port)
static void timbuart_rx_chars(struct uart_port *port)
static void timbuart_tx_chars(struct uart_port *port)
static void timbuart_handle_tx_port(struct uart_port *port, u32 isr, u32 *ier)
void timbuart_handle_rx_port(struct uart_port *port, u32 isr, u32 *ier)
void timbuart_tasklet(unsigned long arg)
static unsigned int timbuart_get_mctrl(struct uart_port *port)
static void timbuart_set_mctrl(struct uart_port *port, unsigned int mctrl)
static void timbuart_mctrl_check(struct uart_port *port, u32 isr, u32 *ier)
static void timbuart_enable_ms(struct uart_port *port)
static void timbuart_break_ctl(struct uart_port *port, int ctl)
static int timbuart_startup(struct uart_port *port)
static void timbuart_shutdown(struct uart_port *port)
static int get_bindex(int baud)
static void timbuart_set_termios(struct uart_port *port,
struct ktermios *termios,
struct ktermios *old)
static const char *timbuart_type(struct uart_port *port)
static void timbuart_release_port(struct uart_port *port)
static int timbuart_request_port(struct uart_port *port)
static irqreturn_t timbuart_handleinterrupt(int irq, void *devid)
static void timbuart_config_port(struct uart_port *port, int flags)
static int timbuart_verify_port(struct uart_port *port,
struct serial_struct *ser)
static struct uart_ops timbuart_ops = ;
static struct uart_driver timbuart_driver = ;
static int __devinit timbuart_probe(struct platform_device *dev)
static int __devexit timbuart_remove(struct platform_device *dev)
static struct platform_driver timbuart_platform_driver = ;
static int __init timbuart_init(void)
static void __exit timbuart_exit(void)
module_init(timbuart_init);
module_exit(timbuart_exit);
MODULE_DESCRIPTION("Timberdale UART driver");
MODULE_LICENSE("GPL v2");
MODULE_ALIAS("platform:timb-uart");
