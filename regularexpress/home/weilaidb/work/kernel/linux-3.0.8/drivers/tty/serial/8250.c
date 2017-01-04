#if defined(CONFIG_SERIAL_8250_CONSOLE) && defined(CONFIG_MAGIC_SYSRQ)
#define SUPPORT_SYSRQ
static unsigned int share_irqs = SERIAL8250_SHARE_IRQS;
static unsigned int nr_uarts = CONFIG_SERIAL_8250_RUNTIME_UARTS;
static struct uart_driver serial8250_reg;
static int serial_index(struct uart_port *port)
static unsigned int skip_txen_test;
#define PASS_LIMIT	256
#define BOTH_EMPTY 	(UART_LSR_TEMT | UART_LSR_THRE)
#define is_real_interrupt(irq)	((irq) != 0)
#define CONFIG_SERIAL_DETECT_IRQ 1
#define CONFIG_SERIAL_MANY_PORTS 1
#define CONFIG_HUB6 1
#define SERIAL_PORT_DFNS
static const struct old_serial_port old_serial_port[] = ;
#define UART_NR	CONFIG_SERIAL_8250_NR_UARTS
#define PORT_RSA_MAX 4
static unsigned long probe_rsa[PORT_RSA_MAX];
static unsigned int probe_rsa_count;
struct uart_8250_port ;
struct irq_info ;
#define NR_IRQ_HASH		32
static struct hlist_head irq_lists[NR_IRQ_HASH];
static DEFINE_MUTEX(hash_mutex);
static const struct serial8250_config uart_config[] = ;
#if defined(CONFIG_MIPS_ALCHEMY)
static const u8 au_io_in_map[] = ;
static const u8 au_io_out_map[] = ;
static inline int map_8250_in_reg(struct uart_port *p, int offset)
static inline int map_8250_out_reg(struct uart_port *p, int offset)
#elif defined(CONFIG_SERIAL_8250_RM9K)
static const u8
regmap_in[8] = ,
regmap_out[8] = ;
static inline int map_8250_in_reg(struct uart_port *p, int offset)
static inline int map_8250_out_reg(struct uart_port *p, int offset)
#define map_8250_in_reg(up, offset) (offset)
#define map_8250_out_reg(up, offset) (offset)
static unsigned int hub6_serial_in(struct uart_port *p, int offset)
static void hub6_serial_out(struct uart_port *p, int offset, int value)
static unsigned int mem_serial_in(struct uart_port *p, int offset)
static void mem_serial_out(struct uart_port *p, int offset, int value)
static void mem32_serial_out(struct uart_port *p, int offset, int value)
static unsigned int mem32_serial_in(struct uart_port *p, int offset)
static unsigned int au_serial_in(struct uart_port *p, int offset)
static void au_serial_out(struct uart_port *p, int offset, int value)
static unsigned int tsi_serial_in(struct uart_port *p, int offset)
static void tsi_serial_out(struct uart_port *p, int offset, int value)
static inline void dwapb_save_out_value(struct uart_port *p, int offset,
int value)
static inline void dwapb_check_clear_ier(struct uart_port *p, int offset)
static void dwapb_serial_out(struct uart_port *p, int offset, int value)
static void dwapb32_serial_out(struct uart_port *p, int offset, int value)
static unsigned int io_serial_in(struct uart_port *p, int offset)
static void io_serial_out(struct uart_port *p, int offset, int value)
static void set_io_from_upio(struct uart_port *p)
static void
serial_out_sync(struct uart_8250_port *up, int offset, int value)
#define serial_in(up, offset)		\
(up->port.serial_in(&(up)->port, (offset)))
#define serial_out(up, offset, value)	\
(up->port.serial_out(&(up)->port, (offset), (value)))
#define serial_inp(up, offset)		serial_in(up, offset)
#define serial_outp(up, offset, value)	serial_out(up, offset, value)
static inline int _serial_dl_read(struct uart_8250_port *up)
static inline void _serial_dl_write(struct uart_8250_port *up, int value)
#if defined(CONFIG_MIPS_ALCHEMY)
static int serial_dl_read(struct uart_8250_port *up)
static void serial_dl_write(struct uart_8250_port *up, int value)
#elif defined(CONFIG_SERIAL_8250_RM9K)
static int serial_dl_read(struct uart_8250_port *up)
static void serial_dl_write(struct uart_8250_port *up, int value)
#define serial_dl_read(up) _serial_dl_read(up)
#define serial_dl_write(up, value) _serial_dl_write(up, value)
static void serial_icr_write(struct uart_8250_port *up, int offset, int value)
static unsigned int serial_icr_read(struct uart_8250_port *up, int offset)
static void serial8250_clear_fifos(struct uart_8250_port *p)
static void serial8250_set_sleep(struct uart_8250_port *p, int sleep)
static int __enable_rsa(struct uart_8250_port *up)
static void enable_rsa(struct uart_8250_port *up)
static void disable_rsa(struct uart_8250_port *up)
static int size_fifo(struct uart_8250_port *up)
static unsigned int autoconfig_read_divisor_id(struct uart_8250_port *p)
static void autoconfig_has_efr(struct uart_8250_port *up)
static void autoconfig_8250(struct uart_8250_port *up)
static int broken_efr(struct uart_8250_port *up)
static inline int ns16550a_goto_highspeed(struct uart_8250_port *up)
static void autoconfig_16550a(struct uart_8250_port *up)
static void autoconfig(struct uart_8250_port *up, unsigned int probeflags)
static void autoconfig_irq(struct uart_8250_port *up)
static inline void __stop_tx(struct uart_8250_port *p)
static void serial8250_stop_tx(struct uart_port *port)
static void transmit_chars(struct uart_8250_port *up);
static void serial8250_start_tx(struct uart_port *port)
static void serial8250_stop_rx(struct uart_port *port)
static void serial8250_enable_ms(struct uart_port *port)
static void clear_rx_fifo(struct uart_8250_port *up)
static void
receive_chars(struct uart_8250_port *up, unsigned int *status)
static void transmit_chars(struct uart_8250_port *up)
static unsigned int check_modem_status(struct uart_8250_port *up)
static void serial8250_handle_port(struct uart_8250_port *up)
static irqreturn_t serial8250_interrupt(int irq, void *dev_id)
static void serial_do_unlink(struct irq_info *i, struct uart_8250_port *up)
static int serial_link_irq_chain(struct uart_8250_port *up)
static void serial_unlink_irq_chain(struct uart_8250_port *up)
static void serial8250_timeout(unsigned long data)
static void serial8250_backup_timeout(unsigned long data)
static unsigned int serial8250_tx_empty(struct uart_port *port)
static unsigned int serial8250_get_mctrl(struct uart_port *port)
static void serial8250_set_mctrl(struct uart_port *port, unsigned int mctrl)
static void serial8250_break_ctl(struct uart_port *port, int break_state)
static void wait_for_xmitr(struct uart_8250_port *up, int bits)
static int serial8250_get_poll_char(struct uart_port *port)
static void serial8250_put_poll_char(struct uart_port *port,
unsigned char c)
static int serial8250_startup(struct uart_port *port)
static void serial8250_shutdown(struct uart_port *port)
static unsigned int serial8250_get_divisor(struct uart_port *port, unsigned int baud)
void
serial8250_do_set_termios(struct uart_port *port, struct ktermios *termios,
struct ktermios *old)
EXPORT_SYMBOL(serial8250_do_set_termios);
static void
serial8250_set_termios(struct uart_port *port, struct ktermios *termios,
struct ktermios *old)
static void
serial8250_set_ldisc(struct uart_port *port, int new)
void serial8250_do_pm(struct uart_port *port, unsigned int state,
unsigned int oldstate)
EXPORT_SYMBOL(serial8250_do_pm);
static void
serial8250_pm(struct uart_port *port, unsigned int state,
unsigned int oldstate)
static unsigned int serial8250_port_size(struct uart_8250_port *pt)
static int serial8250_request_std_resource(struct uart_8250_port *up)
static void serial8250_release_std_resource(struct uart_8250_port *up)
static int serial8250_request_rsa_resource(struct uart_8250_port *up)
static void serial8250_release_rsa_resource(struct uart_8250_port *up)
static void serial8250_release_port(struct uart_port *port)
static int serial8250_request_port(struct uart_port *port)
static void serial8250_config_port(struct uart_port *port, int flags)
static int
serial8250_verify_port(struct uart_port *port, struct serial_struct *ser)
static const char *
serial8250_type(struct uart_port *port)
static struct uart_ops serial8250_pops = ;
static struct uart_8250_port serial8250_ports[UART_NR];
static void (*serial8250_isa_config)(int port, struct uart_port *up,
unsigned short *capabilities);
void serial8250_set_isa_configurator(
void (*v)(int port, struct uart_port *up, unsigned short *capabilities))
EXPORT_SYMBOL(serial8250_set_isa_configurator);
static void __init serial8250_isa_init_ports(void)
static void
serial8250_init_fixed_type_port(struct uart_8250_port *up, unsigned int type)
static void __init
serial8250_register_ports(struct uart_driver *drv, struct device *dev)
static void serial8250_console_putchar(struct uart_port *port, int ch)
static void
serial8250_console_write(struct console *co, const char *s, unsigned int count)
static int __init serial8250_console_setup(struct console *co, char *options)
static int serial8250_console_early_setup(void)
static struct console serial8250_console = ;
static int __init serial8250_console_init(void)
console_initcall(serial8250_console_init);
int serial8250_find_port(struct uart_port *p)
#define SERIAL8250_CONSOLE	&serial8250_console
#define SERIAL8250_CONSOLE	NULL
static struct uart_driver serial8250_reg = ;
int __init early_serial_setup(struct uart_port *port)
void serial8250_suspend_port(int line)
void serial8250_resume_port(int line)
static int __devinit serial8250_probe(struct platform_device *dev)
static int __devexit serial8250_remove(struct platform_device *dev)
static int serial8250_suspend(struct platform_device *dev, pm_message_t state)
static int serial8250_resume(struct platform_device *dev)
static struct platform_driver serial8250_isa_driver = ;
static struct platform_device *serial8250_isa_devs;
static DEFINE_MUTEX(serial_mutex);
static struct uart_8250_port *serial8250_find_match_or_unused(struct uart_port *port)
int serial8250_register_port(struct uart_port *port)
EXPORT_SYMBOL(serial8250_register_port);
void serial8250_unregister_port(int line)
EXPORT_SYMBOL(serial8250_unregister_port);
static int __init serial8250_init(void)
static void __exit serial8250_exit(void)
module_init(serial8250_init);
module_exit(serial8250_exit);
EXPORT_SYMBOL(serial8250_suspend_port);
EXPORT_SYMBOL(serial8250_resume_port);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Generic 8250/16x50 serial driver");
module_param(share_irqs, uint, 0644);
MODULE_PARM_DESC(share_irqs, "Share IRQs with other non-8250/16x50 devices"
" (unsafe)");
module_param(nr_uarts, uint, 0644);
MODULE_PARM_DESC(nr_uarts, "Maximum number of UARTs supported. (1-" __MODULE_STRING(CONFIG_SERIAL_8250_NR_UARTS) ")");
module_param(skip_txen_test, uint, 0644);
MODULE_PARM_DESC(skip_txen_test, "Skip checking for the TXEN bug at init time");
module_param_array(probe_rsa, ulong, &probe_rsa_count, 0444);
MODULE_PARM_DESC(probe_rsa, "Probe I/O ports for RSA");
MODULE_ALIAS_CHARDEV_MAJOR(TTY_MAJOR);
