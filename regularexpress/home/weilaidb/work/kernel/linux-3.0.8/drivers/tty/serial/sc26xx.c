#if defined(CONFIG_MAGIC_SYSRQ)
#define SUPPORT_SYSRQ
#define SC26XX_MAJOR         204
#define SC26XX_MINOR_START   205
#define SC26XX_NR            2
struct uart_sc26xx_port ;
#define RD_ISR      0x14
#define RD_IPR      0x34
#define WR_ACR      0x10
#define WR_IMR      0x14
#define WR_OPCR     0x34
#define WR_OPR_SET  0x38
#define WR_OPR_CLR  0x3C
#define READ_SC(p, r)        readb((p)->membase + RD_##r)
#define WRITE_SC(p, r, v)    writeb((v), (p)->membase + WR_##r)
#define RD_PORT_MRx 0x00
#define RD_PORT_SR  0x04
#define RD_PORT_RHR 0x0c
#define WR_PORT_MRx 0x00
#define WR_PORT_CSR 0x04
#define WR_PORT_CR  0x08
#define WR_PORT_THR 0x0c
#define SR_BREAK    (1 << 7)
#define SR_FRAME    (1 << 6)
#define SR_PARITY   (1 << 5)
#define SR_OVERRUN  (1 << 4)
#define SR_TXRDY    (1 << 2)
#define SR_RXRDY    (1 << 0)
#define CR_RES_MR   (1 << 4)
#define CR_RES_RX   (2 << 4)
#define CR_RES_TX   (3 << 4)
#define CR_STRT_BRK (6 << 4)
#define CR_STOP_BRK (7 << 4)
#define CR_DIS_TX   (1 << 3)
#define CR_ENA_TX   (1 << 2)
#define CR_DIS_RX   (1 << 1)
#define CR_ENA_RX   (1 << 0)
#define ISR_RXRDYB  (1 << 5)
#define ISR_TXRDYB  (1 << 4)
#define ISR_RXRDYA  (1 << 1)
#define ISR_TXRDYA  (1 << 0)
#define IMR_RXRDY   (1 << 1)
#define IMR_TXRDY   (1 << 0)
static inline u8 read_sc_port(struct uart_port *p, u8 reg)
static inline void write_sc_port(struct uart_port *p, u8 reg, u8 val)
#define READ_SC_PORT(p, r)     read_sc_port(p, RD_PORT_##r)
#define WRITE_SC_PORT(p, r, v) write_sc_port(p, WR_PORT_##r, v)
static void sc26xx_enable_irq(struct uart_port *port, int mask)
static void sc26xx_disable_irq(struct uart_port *port, int mask)
static struct tty_struct *receive_chars(struct uart_port *port)
static void transmit_chars(struct uart_port *port)
static irqreturn_t sc26xx_interrupt(int irq, void *dev_id)
static unsigned int sc26xx_tx_empty(struct uart_port *port)
static void sc26xx_set_mctrl(struct uart_port *port, unsigned int mctrl)
static unsigned int sc26xx_get_mctrl(struct uart_port *port)
static void sc26xx_stop_tx(struct uart_port *port)
static void sc26xx_start_tx(struct uart_port *port)
static void sc26xx_stop_rx(struct uart_port *port)
static void sc26xx_enable_ms(struct uart_port *port)
static void sc26xx_break_ctl(struct uart_port *port, int break_state)
static int sc26xx_startup(struct uart_port *port)
static void sc26xx_shutdown(struct uart_port *port)
static void sc26xx_set_termios(struct uart_port *port, struct ktermios *termios,
struct ktermios *old)
static const char *sc26xx_type(struct uart_port *port)
static void sc26xx_release_port(struct uart_port *port)
static int sc26xx_request_port(struct uart_port *port)
static void sc26xx_config_port(struct uart_port *port, int flags)
static int sc26xx_verify_port(struct uart_port *port, struct serial_struct *ser)
static struct uart_ops sc26xx_ops = ;
static struct uart_port *sc26xx_port;
static void sc26xx_console_putchar(struct uart_port *port, char c)
static void sc26xx_console_write(struct console *con, const char *s, unsigned n)
static int __init sc26xx_console_setup(struct console *con, char *options)
static struct uart_driver sc26xx_reg;
static struct console sc26xx_console = ;
#define SC26XX_CONSOLE   &sc26xx_console
#define SC26XX_CONSOLE   NULL
static struct uart_driver sc26xx_reg = ;
static u8 sc26xx_flags2mask(unsigned int flags, unsigned int bitpos)
static void __devinit sc26xx_init_masks(struct uart_sc26xx_port *up,
int line, unsigned int data)
static int __devinit sc26xx_probe(struct platform_device *dev)
static int __exit sc26xx_driver_remove(struct platform_device *dev)
static struct platform_driver sc26xx_driver = ;
static int __init sc26xx_init(void)
static void __exit sc26xx_exit(void)
module_init(sc26xx_init);
module_exit(sc26xx_exit);
MODULE_AUTHOR("Thomas Bogendörfer");
MODULE_DESCRIPTION("SC681/SC2692 serial driver");
MODULE_VERSION("1.0");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:SC26xx");
