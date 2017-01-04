#if defined(CONFIG_SERIAL_SH_SCI_CONSOLE) && defined(CONFIG_MAGIC_SYSRQ)
#define SUPPORT_SYSRQ
#undef DEBUG
struct sci_port ;
static void sci_start_tx(struct uart_port *port);
static void sci_stop_tx(struct uart_port *port);
static void sci_start_rx(struct uart_port *port);
#define SCI_NPORTS CONFIG_SERIAL_SH_SCI_NR_UARTS
static struct sci_port sci_ports[SCI_NPORTS];
static struct uart_driver sci_uart_driver;
static inline struct sci_port *
to_sci_port(struct uart_port *uart)
#if defined(CONFIG_CONSOLE_POLL) || defined(CONFIG_SERIAL_SH_SCI_CONSOLE)
static int sci_poll_get_char(struct uart_port *port)
static void sci_poll_put_char(struct uart_port *port, unsigned char c)
#if defined(__H8300H__) || defined(__H8300S__)
static void sci_init_pins(struct uart_port *port, unsigned int cflag)
#elif defined(CONFIG_CPU_SUBTYPE_SH7710) || defined(CONFIG_CPU_SUBTYPE_SH7712)
static inline void sci_init_pins(struct uart_port *port, unsigned int cflag)
#elif defined(CONFIG_CPU_SUBTYPE_SH7720) || defined(CONFIG_CPU_SUBTYPE_SH7721)
static inline void sci_init_pins(struct uart_port *port, unsigned int cflag)
#elif defined(CONFIG_CPU_SH3)
static inline void sci_init_pins(struct uart_port *port, unsigned int cflag)
#elif defined(CONFIG_CPU_SUBTYPE_SH7722)
static inline void sci_init_pins(struct uart_port *port, unsigned int cflag)
#elif defined(CONFIG_CPU_SUBTYPE_SH7757) || \
defined(CONFIG_CPU_SUBTYPE_SH7763) || \
defined(CONFIG_CPU_SUBTYPE_SH7780) || \
defined(CONFIG_CPU_SUBTYPE_SH7785) || \
defined(CONFIG_CPU_SUBTYPE_SH7786) || \
defined(CONFIG_CPU_SUBTYPE_SHX3)
static inline void sci_init_pins(struct uart_port *port, unsigned int cflag)
#elif defined(CONFIG_CPU_SH4) && !defined(CONFIG_CPU_SH4A)
static inline void sci_init_pins(struct uart_port *port, unsigned int cflag)
static inline void sci_init_pins(struct uart_port *port, unsigned int cflag)
#if defined(CONFIG_CPU_SUBTYPE_SH7760) || \
defined(CONFIG_CPU_SUBTYPE_SH7780) || \
defined(CONFIG_CPU_SUBTYPE_SH7785) || \
defined(CONFIG_CPU_SUBTYPE_SH7786)
static int scif_txfill(struct uart_port *port)
static int scif_txroom(struct uart_port *port)
static int scif_rxfill(struct uart_port *port)
#elif defined(CONFIG_CPU_SUBTYPE_SH7763)
static int scif_txfill(struct uart_port *port)
static int scif_txroom(struct uart_port *port)
static int scif_rxfill(struct uart_port *port)
#elif defined(CONFIG_ARCH_SH7372)
static int scif_txfill(struct uart_port *port)
static int scif_txroom(struct uart_port *port)
static int scif_rxfill(struct uart_port *port)
static int scif_txfill(struct uart_port *port)
static int scif_txroom(struct uart_port *port)
static int scif_rxfill(struct uart_port *port)
static int sci_txfill(struct uart_port *port)
static int sci_txroom(struct uart_port *port)
static int sci_rxfill(struct uart_port *port)
static void sci_transmit_chars(struct uart_port *port)
#define STEPFN(c)  ()
static void sci_receive_chars(struct uart_port *port)
#define SCI_BREAK_JIFFIES (HZ/20)
static inline void sci_schedule_break_timer(struct sci_port *port)
static void sci_break_timer(unsigned long data)
static int sci_handle_errors(struct uart_port *port)
static int sci_handle_fifo_overrun(struct uart_port *port)
static int sci_handle_breaks(struct uart_port *port)
static irqreturn_t sci_rx_interrupt(int irq, void *ptr)
static irqreturn_t sci_tx_interrupt(int irq, void *ptr)
static irqreturn_t sci_er_interrupt(int irq, void *ptr)
static irqreturn_t sci_br_interrupt(int irq, void *ptr)
static inline unsigned long port_rx_irq_mask(struct uart_port *port)
static irqreturn_t sci_mpxed_interrupt(int irq, void *ptr)
static int sci_notifier(struct notifier_block *self,
unsigned long phase, void *p)
static void sci_clk_enable(struct uart_port *port)
static void sci_clk_disable(struct uart_port *port)
static int sci_request_irq(struct sci_port *port)
static void sci_free_irq(struct sci_port *port)
static unsigned int sci_tx_empty(struct uart_port *port)
static void sci_set_mctrl(struct uart_port *port, unsigned int mctrl)
static unsigned int sci_get_mctrl(struct uart_port *port)
static void sci_dma_tx_complete(void *arg)
static int sci_dma_rx_push(struct sci_port *s, struct tty_struct *tty,
size_t count)
static void sci_dma_rx_complete(void *arg)
static void sci_rx_dma_release(struct sci_port *s, bool enable_pio)
static void sci_tx_dma_release(struct sci_port *s, bool enable_pio)
static void sci_submit_rx(struct sci_port *s)
static void work_fn_rx(struct work_struct *work)
static void work_fn_tx(struct work_struct *work)
static void sci_start_tx(struct uart_port *port)
static void sci_stop_tx(struct uart_port *port)
static void sci_start_rx(struct uart_port *port)
static void sci_stop_rx(struct uart_port *port)
static void sci_enable_ms(struct uart_port *port)
static void sci_break_ctl(struct uart_port *port, int break_state)
static bool filter(struct dma_chan *chan, void *slave)
static void rx_timer_fn(unsigned long arg)
static void sci_request_dma(struct uart_port *port)
static void sci_free_dma(struct uart_port *port)
static inline void sci_request_dma(struct uart_port *port)
static inline void sci_free_dma(struct uart_port *port)
static int sci_startup(struct uart_port *port)
static void sci_shutdown(struct uart_port *port)
static unsigned int sci_scbrr_calc(unsigned int algo_id, unsigned int bps,
unsigned long freq)
static void sci_set_termios(struct uart_port *port, struct ktermios *termios,
struct ktermios *old)
static const char *sci_type(struct uart_port *port)
static inline unsigned long sci_port_size(struct uart_port *port)
static int sci_remap_port(struct uart_port *port)
static void sci_release_port(struct uart_port *port)
static int sci_request_port(struct uart_port *port)
static void sci_config_port(struct uart_port *port, int flags)
static int sci_verify_port(struct uart_port *port, struct serial_struct *ser)
static struct uart_ops sci_uart_ops = ;
static int __devinit sci_init_single(struct platform_device *dev,
struct sci_port *sci_port,
unsigned int index,
struct plat_sci_port *p)
static void serial_console_putchar(struct uart_port *port, int ch)
static void serial_console_write(struct console *co, const char *s,
unsigned count)
static int __devinit serial_console_setup(struct console *co, char *options)
static struct console serial_console = ;
static struct console early_serial_console = ;
static char early_serial_buf[32];
static int __devinit sci_probe_earlyprintk(struct platform_device *pdev)
#define SCI_CONSOLE	(&serial_console)
static inline int __devinit sci_probe_earlyprintk(struct platform_device *pdev)
#define SCI_CONSOLE	NULL
static char banner[] __initdata =
KERN_INFO "SuperH SCI(F) driver initialized\n";
static struct uart_driver sci_uart_driver = ;
static int sci_remove(struct platform_device *dev)
static int __devinit sci_probe_single(struct platform_device *dev,
unsigned int index,
struct plat_sci_port *p,
struct sci_port *sciport)
static int __devinit sci_probe(struct platform_device *dev)
static int sci_suspend(struct device *dev)
static int sci_resume(struct device *dev)
static const struct dev_pm_ops sci_dev_pm_ops = ;
static struct platform_driver sci_driver = ;
static int __init sci_init(void)
static void __exit sci_exit(void)
early_platform_init_buffer("earlyprintk", &sci_driver,
early_serial_buf, ARRAY_SIZE(early_serial_buf));
module_init(sci_init);
module_exit(sci_exit);
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:sh-sci");
