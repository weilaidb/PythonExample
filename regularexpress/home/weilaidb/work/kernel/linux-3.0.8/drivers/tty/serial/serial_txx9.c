#if defined(CONFIG_SERIAL_TXX9_CONSOLE) && defined(CONFIG_MAGIC_SYSRQ)
#define SUPPORT_SYSRQ
static char *serial_version = "1.11";
static char *serial_name = "TX39/49 Serial driver";
#define PASS_LIMIT	256
#if !defined(CONFIG_SERIAL_TXX9_STDSERIAL)
#define TXX9_TTY_NAME "ttyTX"
#define TXX9_TTY_MINOR_START	196
#define TXX9_TTY_MAJOR	204
#define TXX9_TTY_NAME "ttyS"
#define TXX9_TTY_MINOR_START	64
#define TXX9_TTY_MAJOR	TTY_MAJOR
#define UPF_TXX9_HAVE_CTS_LINE	UPF_BUGGY_UART
#define UPF_TXX9_USE_SCLK	UPF_MAGIC_MULTIPLIER
#define ENABLE_SERIAL_TXX9_PCI
#define UART_NR  CONFIG_SERIAL_TXX9_NR_UARTS
struct uart_txx9_port ;
#define TXX9_REGION_SIZE	0x24
#define TXX9_SILCR	0x00
#define TXX9_SIDICR	0x04
#define TXX9_SIDISR	0x08
#define TXX9_SICISR	0x0c
#define TXX9_SIFCR	0x10
#define TXX9_SIFLCR	0x14
#define TXX9_SIBGR	0x18
#define TXX9_SITFIFO	0x1c
#define TXX9_SIRFIFO	0x20
#define TXX9_SILCR_SCS_MASK	0x00000060
#define TXX9_SILCR_SCS_IMCLK	0x00000000
#define TXX9_SILCR_SCS_IMCLK_BG	0x00000020
#define TXX9_SILCR_SCS_SCLK	0x00000040
#define TXX9_SILCR_SCS_SCLK_BG	0x00000060
#define TXX9_SILCR_UEPS	0x00000010
#define TXX9_SILCR_UPEN	0x00000008
#define TXX9_SILCR_USBL_MASK	0x00000004
#define TXX9_SILCR_USBL_1BIT	0x00000000
#define TXX9_SILCR_USBL_2BIT	0x00000004
#define TXX9_SILCR_UMODE_MASK	0x00000003
#define TXX9_SILCR_UMODE_8BIT	0x00000000
#define TXX9_SILCR_UMODE_7BIT	0x00000001
#define TXX9_SIDICR_TDE	0x00008000
#define TXX9_SIDICR_RDE	0x00004000
#define TXX9_SIDICR_TIE	0x00002000
#define TXX9_SIDICR_RIE	0x00001000
#define TXX9_SIDICR_SPIE	0x00000800
#define TXX9_SIDICR_CTSAC	0x00000600
#define TXX9_SIDICR_STIE_MASK	0x0000003f
#define TXX9_SIDICR_STIE_OERS		0x00000020
#define TXX9_SIDICR_STIE_CTSS		0x00000010
#define TXX9_SIDICR_STIE_RBRKD	0x00000008
#define TXX9_SIDICR_STIE_TRDY		0x00000004
#define TXX9_SIDICR_STIE_TXALS	0x00000002
#define TXX9_SIDICR_STIE_UBRKD	0x00000001
#define TXX9_SIDISR_UBRK	0x00008000
#define TXX9_SIDISR_UVALID	0x00004000
#define TXX9_SIDISR_UFER	0x00002000
#define TXX9_SIDISR_UPER	0x00001000
#define TXX9_SIDISR_UOER	0x00000800
#define TXX9_SIDISR_ERI	0x00000400
#define TXX9_SIDISR_TOUT	0x00000200
#define TXX9_SIDISR_TDIS	0x00000100
#define TXX9_SIDISR_RDIS	0x00000080
#define TXX9_SIDISR_STIS	0x00000040
#define TXX9_SIDISR_RFDN_MASK	0x0000001f
#define TXX9_SICISR_OERS	0x00000020
#define TXX9_SICISR_CTSS	0x00000010
#define TXX9_SICISR_RBRKD	0x00000008
#define TXX9_SICISR_TRDY	0x00000004
#define TXX9_SICISR_TXALS	0x00000002
#define TXX9_SICISR_UBRKD	0x00000001
#define TXX9_SIFCR_SWRST	0x00008000
#define TXX9_SIFCR_RDIL_MASK	0x00000180
#define TXX9_SIFCR_RDIL_1	0x00000000
#define TXX9_SIFCR_RDIL_4	0x00000080
#define TXX9_SIFCR_RDIL_8	0x00000100
#define TXX9_SIFCR_RDIL_12	0x00000180
#define TXX9_SIFCR_RDIL_MAX	0x00000180
#define TXX9_SIFCR_TDIL_MASK	0x00000018
#define TXX9_SIFCR_TDIL_MASK	0x00000018
#define TXX9_SIFCR_TDIL_1	0x00000000
#define TXX9_SIFCR_TDIL_4	0x00000001
#define TXX9_SIFCR_TDIL_8	0x00000010
#define TXX9_SIFCR_TDIL_MAX	0x00000010
#define TXX9_SIFCR_TFRST	0x00000004
#define TXX9_SIFCR_RFRST	0x00000002
#define TXX9_SIFCR_FRSTE	0x00000001
#define TXX9_SIO_TX_FIFO	8
#define TXX9_SIO_RX_FIFO	16
#define TXX9_SIFLCR_RCS	0x00001000
#define TXX9_SIFLCR_TES	0x00000800
#define TXX9_SIFLCR_RTSSC	0x00000200
#define TXX9_SIFLCR_RSDE	0x00000100
#define TXX9_SIFLCR_TSDE	0x00000080
#define TXX9_SIFLCR_RTSTL_MASK	0x0000001e
#define TXX9_SIFLCR_RTSTL_MAX	0x0000001e
#define TXX9_SIFLCR_TBRK	0x00000001
#define TXX9_SIBGR_BCLK_MASK	0x00000300
#define TXX9_SIBGR_BCLK_T0	0x00000000
#define TXX9_SIBGR_BCLK_T2	0x00000100
#define TXX9_SIBGR_BCLK_T4	0x00000200
#define TXX9_SIBGR_BCLK_T6	0x00000300
#define TXX9_SIBGR_BRD_MASK	0x000000ff
static inline unsigned int sio_in(struct uart_txx9_port *up, int offset)
static inline void
sio_out(struct uart_txx9_port *up, int offset, int value)
static inline void
sio_mask(struct uart_txx9_port *up, int offset, unsigned int value)
static inline void
sio_set(struct uart_txx9_port *up, int offset, unsigned int value)
static inline void
sio_quot_set(struct uart_txx9_port *up, int quot)
static struct uart_txx9_port *to_uart_txx9_port(struct uart_port *port)
static void serial_txx9_stop_tx(struct uart_port *port)
static void serial_txx9_start_tx(struct uart_port *port)
static void serial_txx9_stop_rx(struct uart_port *port)
static void serial_txx9_enable_ms(struct uart_port *port)
static void serial_txx9_initialize(struct uart_port *port)
static inline void
receive_chars(struct uart_txx9_port *up, unsigned int *status)
static inline void transmit_chars(struct uart_txx9_port *up)
static irqreturn_t serial_txx9_interrupt(int irq, void *dev_id)
static unsigned int serial_txx9_tx_empty(struct uart_port *port)
static unsigned int serial_txx9_get_mctrl(struct uart_port *port)
static void serial_txx9_set_mctrl(struct uart_port *port, unsigned int mctrl)
static void serial_txx9_break_ctl(struct uart_port *port, int break_state)
#if defined(CONFIG_SERIAL_TXX9_CONSOLE) || (CONFIG_CONSOLE_POLL)
static void wait_for_xmitr(struct uart_txx9_port *up)
static int serial_txx9_get_poll_char(struct uart_port *port)
static void serial_txx9_put_poll_char(struct uart_port *port, unsigned char c)
static int serial_txx9_startup(struct uart_port *port)
static void serial_txx9_shutdown(struct uart_port *port)
static void
serial_txx9_set_termios(struct uart_port *port, struct ktermios *termios,
struct ktermios *old)
static void
serial_txx9_pm(struct uart_port *port, unsigned int state,
unsigned int oldstate)
static int serial_txx9_request_resource(struct uart_txx9_port *up)
static void serial_txx9_release_resource(struct uart_txx9_port *up)
static void serial_txx9_release_port(struct uart_port *port)
static int serial_txx9_request_port(struct uart_port *port)
static void serial_txx9_config_port(struct uart_port *port, int uflags)
static const char *
serial_txx9_type(struct uart_port *port)
static struct uart_ops serial_txx9_pops = ;
static struct uart_txx9_port serial_txx9_ports[UART_NR];
static void __init serial_txx9_register_ports(struct uart_driver *drv,
struct device *dev)
static void serial_txx9_console_putchar(struct uart_port *port, int ch)
static void
serial_txx9_console_write(struct console *co, const char *s, unsigned int count)
static int __init serial_txx9_console_setup(struct console *co, char *options)
static struct uart_driver serial_txx9_reg;
static struct console serial_txx9_console = ;
static int __init serial_txx9_console_init(void)
console_initcall(serial_txx9_console_init);
#define SERIAL_TXX9_CONSOLE	&serial_txx9_console
#define SERIAL_TXX9_CONSOLE	NULL
static struct uart_driver serial_txx9_reg = ;
int __init early_serial_txx9_setup(struct uart_port *port)
static DEFINE_MUTEX(serial_txx9_mutex);
static int __devinit serial_txx9_register_port(struct uart_port *port)
static void __devexit serial_txx9_unregister_port(int line)
static int __devinit serial_txx9_probe(struct platform_device *dev)
static int __devexit serial_txx9_remove(struct platform_device *dev)
static int serial_txx9_suspend(struct platform_device *dev, pm_message_t state)
static int serial_txx9_resume(struct platform_device *dev)
static struct platform_driver serial_txx9_plat_driver = ;
static int __devinit
pciserial_txx9_init_one(struct pci_dev *dev, const struct pci_device_id *ent)
static void __devexit pciserial_txx9_remove_one(struct pci_dev *dev)
static int pciserial_txx9_suspend_one(struct pci_dev *dev, pm_message_t state)
static int pciserial_txx9_resume_one(struct pci_dev *dev)
static const struct pci_device_id serial_txx9_pci_tbl[] = ;
static struct pci_driver serial_txx9_pci_driver = ;
MODULE_DEVICE_TABLE(pci, serial_txx9_pci_tbl);
static struct platform_device *serial_txx9_plat_devs;
static int __init serial_txx9_init(void)
static void __exit serial_txx9_exit(void)
module_init(serial_txx9_init);
module_exit(serial_txx9_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("TX39/49 serial driver");
MODULE_ALIAS_CHARDEV_MAJOR(TXX9_TTY_MAJOR);
