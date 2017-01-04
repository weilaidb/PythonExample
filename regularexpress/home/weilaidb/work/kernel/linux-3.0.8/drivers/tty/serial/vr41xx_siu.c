#if defined(CONFIG_SERIAL_VR41XX_CONSOLE) && defined(CONFIG_MAGIC_SYSRQ)
#define SUPPORT_SYSRQ
#define SIU_BAUD_BASE	1152000
#define SIU_MAJOR	204
#define SIU_MINOR_BASE	82
#define RX_MAX_COUNT	256
#define TX_MAX_COUNT	15
#define SIUIRSEL	0x08
#define TMICMODE	0x20
#define TMICTX		0x10
#define IRMSEL		0x0c
#define IRMSEL_HP	0x08
#define IRMSEL_TEMIC	0x04
#define IRMSEL_SHARP	0x00
#define IRUSESEL	0x02
#define SIRSEL		0x01
static struct uart_port siu_uart_ports[SIU_PORTS_MAX] = ;
static uint8_t lsr_break_flag[SIU_PORTS_MAX];
#define siu_read(port, offset)		readb((port)->membase + (offset))
#define siu_write(port, offset, value)	writeb((value), (port)->membase + (offset))
void vr41xx_select_siu_interface(siu_interface_t interface)
EXPORT_SYMBOL_GPL(vr41xx_select_siu_interface);
void vr41xx_use_irda(irda_use_t use)
EXPORT_SYMBOL_GPL(vr41xx_use_irda);
void vr41xx_select_irda_module(irda_module_t module, irda_speed_t speed)
EXPORT_SYMBOL_GPL(vr41xx_select_irda_module);
static inline void siu_clear_fifo(struct uart_port *port)
static inline unsigned long siu_port_size(struct uart_port *port)
static inline unsigned int siu_check_type(struct uart_port *port)
static inline const char *siu_type_name(struct uart_port *port)
static unsigned int siu_tx_empty(struct uart_port *port)
static void siu_set_mctrl(struct uart_port *port, unsigned int mctrl)
static unsigned int siu_get_mctrl(struct uart_port *port)
static void siu_stop_tx(struct uart_port *port)
static void siu_start_tx(struct uart_port *port)
static void siu_stop_rx(struct uart_port *port)
static void siu_enable_ms(struct uart_port *port)
static void siu_break_ctl(struct uart_port *port, int ctl)
static inline void receive_chars(struct uart_port *port, uint8_t *status)
static inline void check_modem_status(struct uart_port *port)
static inline void transmit_chars(struct uart_port *port)
static irqreturn_t siu_interrupt(int irq, void *dev_id)
static int siu_startup(struct uart_port *port)
static void siu_shutdown(struct uart_port *port)
static void siu_set_termios(struct uart_port *port, struct ktermios *new,
struct ktermios *old)
static void siu_pm(struct uart_port *port, unsigned int state, unsigned int oldstate)
static const char *siu_type(struct uart_port *port)
static void siu_release_port(struct uart_port *port)
static int siu_request_port(struct uart_port *port)
static void siu_config_port(struct uart_port *port, int flags)
static int siu_verify_port(struct uart_port *port, struct serial_struct *serial)
static struct uart_ops siu_uart_ops = ;
static int siu_init_ports(struct platform_device *pdev)
#define BOTH_EMPTY	(UART_LSR_TEMT | UART_LSR_THRE)
static void wait_for_xmitr(struct uart_port *port)
static void siu_console_putchar(struct uart_port *port, int ch)
static void siu_console_write(struct console *con, const char *s, unsigned count)
static int __init siu_console_setup(struct console *con, char *options)
static struct uart_driver siu_uart_driver;
static struct console siu_console = ;
static int __devinit siu_console_init(void)
console_initcall(siu_console_init);
void __init vr41xx_siu_early_setup(struct uart_port *port)
#define SERIAL_VR41XX_CONSOLE	&siu_console
#define SERIAL_VR41XX_CONSOLE	NULL
static struct uart_driver siu_uart_driver = ;
static int __devinit siu_probe(struct platform_device *dev)
static int __devexit siu_remove(struct platform_device *dev)
static int siu_suspend(struct platform_device *dev, pm_message_t state)
static int siu_resume(struct platform_device *dev)
static struct platform_driver siu_device_driver = ;
static int __init vr41xx_siu_init(void)
static void __exit vr41xx_siu_exit(void)
module_init(vr41xx_siu_init);
module_exit(vr41xx_siu_exit);
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:SIU");
