static const struct baud_table brg26_ext[] = ;
static const struct baud_table brg13_int[] = ;
static u32 get_new_brg(int baud, struct max3107_port *s)
int max3107_rw(struct max3107_port *s, u8 *tx, u8 *rx, int len)
EXPORT_SYMBOL_GPL(max3107_rw);
static void put_data_to_circ_buf(struct max3107_port *s, unsigned char *data,
int len)
static void max3107_handlerx(struct max3107_port *s, u16 rxlvl)
static void max3107_handletx(struct max3107_port *s)
static u16 handle_interrupt(struct max3107_port *s)
static void max3107_dowork(struct max3107_port *s)
static void max3107_work(struct work_struct *w)
static void max3107_set_sleep(struct max3107_port *s, int mode)
static void max3107_register_init(struct max3107_port *s)
static irqreturn_t max3107_irq(int irqno, void *dev_id)
void max3107_hw_susp(struct max3107_port *s, int suspend)
EXPORT_SYMBOL_GPL(max3107_hw_susp);
static void max3107_enable_ms(struct uart_port *port)
static void max3107_start_tx(struct uart_port *port)
static unsigned int max3107_tx_empty(struct uart_port *port)
static void max3107_stop_rx(struct uart_port *port)
static unsigned int max3107_get_mctrl(struct uart_port *port)
static void max3107_set_mctrl(struct uart_port *port, unsigned int mctrl)
static void max3107_set_termios(struct uart_port *port,
struct ktermios *termios,
struct ktermios *old)
static void max3107_shutdown(struct uart_port *port)
static int max3107_startup(struct uart_port *port)
static const char *max3107_type(struct uart_port *port)
static void max3107_release_port(struct uart_port *port)
static int max3107_request_port(struct uart_port *port)
static void max3107_config_port(struct uart_port *port, int flags)
static int max3107_verify_port(struct uart_port *port,
struct serial_struct *ser)
static void max3107_stop_tx(struct uart_port *port)
static void max3107_break_ctl(struct uart_port *port, int break_state)
static struct uart_ops max3107_ops = ;
static struct uart_driver max3107_uart_driver = ;
static int driver_registered = 0;
static struct max3107_plat generic_plat_data = ;
int max3107_probe(struct spi_device *spi, struct max3107_plat *pdata)
EXPORT_SYMBOL_GPL(max3107_probe);
int max3107_remove(struct spi_device *spi)
EXPORT_SYMBOL_GPL(max3107_remove);
int max3107_suspend(struct spi_device *spi, pm_message_t state)
EXPORT_SYMBOL_GPL(max3107_suspend);
int max3107_resume(struct spi_device *spi)
EXPORT_SYMBOL_GPL(max3107_resume);
static int max3107_probe_generic(struct spi_device *spi)
static struct spi_driver max3107_driver = ;
static int __init max3107_init(void)
static void __exit max3107_exit(void)
module_init(max3107_init);
module_exit(max3107_exit);
MODULE_DESCRIPTION("MAX3107 driver");
MODULE_AUTHOR("Aavamobile");
MODULE_ALIAS("spi:max3107");
MODULE_LICENSE("GPL v2");
