#if defined(CONFIG_SERIAL_AMBA_PL011_CONSOLE) && defined(CONFIG_MAGIC_SYSRQ)
#define SUPPORT_SYSRQ
#define UART_NR			14
#define SERIAL_AMBA_MAJOR	204
#define SERIAL_AMBA_MINOR	64
#define SERIAL_AMBA_NR		UART_NR
#define AMBA_ISR_PASS_LIMIT	256
#define UART_DR_ERROR		(UART011_DR_OE|UART011_DR_BE|UART011_DR_PE|UART011_DR_FE)
#define UART_DUMMY_DR_RX	(1 << 16)
#define UART_WA_SAVE_NR 14
static void pl011_lockup_wa(unsigned long data);
static const u32 uart_wa_reg[UART_WA_SAVE_NR] = ;
static u32 uart_wa_regdata[UART_WA_SAVE_NR];
static DECLARE_TASKLET(pl011_lockup_tlet, pl011_lockup_wa, 0);
struct vendor_data ;
static struct vendor_data vendor_arm = ;
static struct vendor_data vendor_st = ;
static struct uart_amba_port *amba_ports[UART_NR];
struct pl011_sgbuf ;
struct pl011_dmarx_data ;
struct pl011_dmatx_data ;
struct uart_amba_port ;
static int pl011_fifo_to_tty(struct uart_amba_port *uap)
#define PL011_DMA_BUFFER_SIZE PAGE_SIZE
static int pl011_sgbuf_init(struct dma_chan *chan, struct pl011_sgbuf *sg,
enum dma_data_direction dir)
static void pl011_sgbuf_free(struct dma_chan *chan, struct pl011_sgbuf *sg,
enum dma_data_direction dir)
static void pl011_dma_probe_initcall(struct uart_amba_port *uap)
struct dma_uap ;
static LIST_HEAD(pl011_dma_uarts);
static int __init pl011_dma_initcall(void)
device_initcall(pl011_dma_initcall);
static void pl011_dma_probe(struct uart_amba_port *uap)
static void pl011_dma_probe(struct uart_amba_port *uap)
static void pl011_dma_remove(struct uart_amba_port *uap)
static int pl011_dma_tx_refill(struct uart_amba_port *uap);
static void pl011_dma_tx_callback(void *data)
static int pl011_dma_tx_refill(struct uart_amba_port *uap)
static bool pl011_dma_tx_irq(struct uart_amba_port *uap)
static inline void pl011_dma_tx_stop(struct uart_amba_port *uap)
static inline bool pl011_dma_tx_start(struct uart_amba_port *uap)
static void pl011_dma_flush_buffer(struct uart_port *port)
static void pl011_dma_rx_callback(void *data);
static int pl011_dma_rx_trigger_dma(struct uart_amba_port *uap)
static void pl011_dma_rx_chars(struct uart_amba_port *uap,
u32 pending, bool use_buf_b,
bool readfifo)
static void pl011_dma_rx_irq(struct uart_amba_port *uap)
static void pl011_dma_rx_callback(void *data)
static inline void pl011_dma_rx_stop(struct uart_amba_port *uap)
static void pl011_dma_startup(struct uart_amba_port *uap)
static void pl011_dma_shutdown(struct uart_amba_port *uap)
static inline bool pl011_dma_rx_available(struct uart_amba_port *uap)
static inline bool pl011_dma_rx_running(struct uart_amba_port *uap)
static inline void pl011_dma_probe(struct uart_amba_port *uap)
static inline void pl011_dma_remove(struct uart_amba_port *uap)
static inline void pl011_dma_startup(struct uart_amba_port *uap)
static inline void pl011_dma_shutdown(struct uart_amba_port *uap)
static inline bool pl011_dma_tx_irq(struct uart_amba_port *uap)
static inline void pl011_dma_tx_stop(struct uart_amba_port *uap)
static inline bool pl011_dma_tx_start(struct uart_amba_port *uap)
static inline void pl011_dma_rx_irq(struct uart_amba_port *uap)
static inline void pl011_dma_rx_stop(struct uart_amba_port *uap)
static inline int pl011_dma_rx_trigger_dma(struct uart_amba_port *uap)
static inline bool pl011_dma_rx_available(struct uart_amba_port *uap)
static inline bool pl011_dma_rx_running(struct uart_amba_port *uap)
#define pl011_dma_flush_buffer	NULL
static void pl011_lockup_wa(unsigned long data)
static void pl011_stop_tx(struct uart_port *port)
static void pl011_start_tx(struct uart_port *port)
static void pl011_stop_rx(struct uart_port *port)
static void pl011_enable_ms(struct uart_port *port)
static void pl011_rx_chars(struct uart_amba_port *uap)
static void pl011_tx_chars(struct uart_amba_port *uap)
static void pl011_modem_status(struct uart_amba_port *uap)
static irqreturn_t pl011_int(int irq, void *dev_id)
static unsigned int pl01x_tx_empty(struct uart_port *port)
static unsigned int pl01x_get_mctrl(struct uart_port *port)
static void pl011_set_mctrl(struct uart_port *port, unsigned int mctrl)
static void pl011_break_ctl(struct uart_port *port, int break_state)
static int pl010_get_poll_char(struct uart_port *port)
static void pl010_put_poll_char(struct uart_port *port,
unsigned char ch)
static int pl011_startup(struct uart_port *port)
static void pl011_shutdown_channel(struct uart_amba_port *uap,
unsigned int lcrh)
static void pl011_shutdown(struct uart_port *port)
static void
pl011_set_termios(struct uart_port *port, struct ktermios *termios,
struct ktermios *old)
static const char *pl011_type(struct uart_port *port)
static void pl010_release_port(struct uart_port *port)
static int pl010_request_port(struct uart_port *port)
static void pl010_config_port(struct uart_port *port, int flags)
static int pl010_verify_port(struct uart_port *port, struct serial_struct *ser)
static struct uart_ops amba_pl011_pops = ;
static struct uart_amba_port *amba_ports[UART_NR];
static void pl011_console_putchar(struct uart_port *port, int ch)
static void
pl011_console_write(struct console *co, const char *s, unsigned int count)
static void __init
pl011_console_get_options(struct uart_amba_port *uap, int *baud,
int *parity, int *bits)
static int __init pl011_console_setup(struct console *co, char *options)
static struct uart_driver amba_reg;
static struct console amba_console = ;
#define AMBA_CONSOLE	(&amba_console)
#define AMBA_CONSOLE	NULL
static struct uart_driver amba_reg = ;
static int pl011_probe(struct amba_device *dev, const struct amba_id *id)
static int pl011_remove(struct amba_device *dev)
static int pl011_suspend(struct amba_device *dev, pm_message_t state)
static int pl011_resume(struct amba_device *dev)
static struct amba_id pl011_ids[] = ;
static struct amba_driver pl011_driver = ;
static int __init pl011_init(void)
static void __exit pl011_exit(void)
arch_initcall(pl011_init);
module_exit(pl011_exit);
MODULE_AUTHOR("ARM Ltd/Deep Blue Solutions Ltd");
MODULE_DESCRIPTION("ARM AMBA serial port driver");
MODULE_LICENSE("GPL");
