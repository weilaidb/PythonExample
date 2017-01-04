#define LINUX_SERIAL_CORE_H
#define PORT_UNKNOWN	0
#define PORT_8250	1
#define PORT_16450	2
#define PORT_16550	3
#define PORT_16550A	4
#define PORT_CIRRUS	5
#define PORT_16650	6
#define PORT_16650V2	7
#define PORT_16750	8
#define PORT_STARTECH	9
#define PORT_16C950	10
#define PORT_16654	11
#define PORT_16850	12
#define PORT_RSA	13
#define PORT_NS16550A	14
#define PORT_XSCALE	15
#define PORT_RM9000	16
#define PORT_OCTEON	17
#define PORT_AR7	18
#define PORT_U6_16550A	19
#define PORT_TEGRA	20
#define PORT_MAX_8250	20
#define PORT_PXA	31
#define PORT_AMBA	32
#define PORT_CLPS711X	33
#define PORT_SA1100	34
#define PORT_UART00	35
#define PORT_21285	37
#define PORT_SUNZILOG	38
#define PORT_SUNSAB	39
#define PORT_DZ		46
#define PORT_ZS		47
#define PORT_MUX	48
#define PORT_ATMEL	49
#define PORT_MAC_ZILOG	50
#define PORT_PMAC_ZILOG	51
#define PORT_SCI	52
#define PORT_SCIF	53
#define PORT_IRDA	54
#define PORT_S3C2410    55
#define PORT_IP22ZILOG	56
#define PORT_LH7A40X	57
#define PORT_CPM        58
#define PORT_MPC52xx	59
#define PORT_ICOM	60
#define PORT_S3C2440	61
#define PORT_IMX	62
#define PORT_MPSC	63
#define PORT_TXX9	64
#define PORT_VR41XX_SIU		65
#define PORT_VR41XX_DSIU	66
#define PORT_S3C2400	67
#define PORT_M32R_SIO	68
#define PORT_JSM        69
#define PORT_PNX8XXX	70
#define PORT_NETX	71
#define PORT_SUNHV	72
#define PORT_S3C2412	73
#define PORT_UARTLITE	74
#define PORT_BFIN	75
#define PORT_KS8695	76
#define PORT_SB1250_DUART	77
#define PORT_MCF	78
#define PORT_BFIN_SPORT		79
#define PORT_MN10300		80
#define PORT_MN10300_CTS	81
#define PORT_SC26XX	82
#define PORT_SCIFA	83
#define PORT_S3C6400	84
#define PORT_NWPSERIAL	85
#define PORT_MAX3100    86
#define PORT_TIMBUART	87
#define PORT_MSM	88
#define PORT_BCM63XX	89
#define PORT_APBUART    90
#define PORT_ALTERA_JTAGUART	91
#define PORT_ALTERA_UART	92
#define PORT_SCIFB	93
#define PORT_MAX3107	94
#define PORT_MFD	95
#define PORT_OMAP	96
#define PORT_VT8500	97
#define PORT_XUARTPS	98
struct uart_port;
struct serial_struct;
struct device;
struct uart_ops ;
#define NO_POLL_CHAR		0x00ff0000
#define UART_CONFIG_TYPE	(1 << 0)
#define UART_CONFIG_IRQ		(1 << 1)
struct uart_icount ;
typedef unsigned int __bitwise__ upf_t;
struct uart_port ;
struct uart_state ;
#define UART_XMIT_SIZE	PAGE_SIZE
#define WAKEUP_CHARS		256
struct module;
struct tty_driver;
struct uart_driver ;
void uart_write_wakeup(struct uart_port *port);
void uart_update_timeout(struct uart_port *port, unsigned int cflag,
unsigned int baud);
unsigned int uart_get_baud_rate(struct uart_port *port, struct ktermios *termios,
struct ktermios *old, unsigned int min,
unsigned int max);
unsigned int uart_get_divisor(struct uart_port *port, unsigned int baud);
static inline int uart_poll_timeout(struct uart_port *port)
struct uart_port *uart_get_console(struct uart_port *ports, int nr,
struct console *c);
void uart_parse_options(char *options, int *baud, int *parity, int *bits,
int *flow);
int uart_set_options(struct uart_port *port, struct console *co, int baud,
int parity, int bits, int flow);
struct tty_driver *uart_console_device(struct console *co, int *index);
void uart_console_write(struct uart_port *port, const char *s,
unsigned int count,
void (*putchar)(struct uart_port *, int));
int uart_register_driver(struct uart_driver *uart);
void uart_unregister_driver(struct uart_driver *uart);
int uart_add_one_port(struct uart_driver *reg, struct uart_port *port);
int uart_remove_one_port(struct uart_driver *reg, struct uart_port *port);
int uart_match_port(struct uart_port *port1, struct uart_port *port2);
int uart_suspend_port(struct uart_driver *reg, struct uart_port *port);
int uart_resume_port(struct uart_driver *reg, struct uart_port *port);
#define uart_circ_empty(circ)		((circ)->head == (circ)->tail)
#define uart_circ_clear(circ)		((circ)->head = (circ)->tail = 0)
#define uart_circ_chars_pending(circ)	\
(CIRC_CNT((circ)->head, (circ)->tail, UART_XMIT_SIZE))
#define uart_circ_chars_free(circ)	\
(CIRC_SPACE((circ)->head, (circ)->tail, UART_XMIT_SIZE))
static inline int uart_tx_stopped(struct uart_port *port)
static inline int
uart_handle_sysrq_char(struct uart_port *port, unsigned int ch)
#define uart_handle_sysrq_char(port,ch) uart_handle_sysrq_char(port, 0)
static inline int uart_handle_break(struct uart_port *port)
static inline void
uart_handle_dcd_change(struct uart_port *uport, unsigned int status)
static inline void
uart_handle_cts_change(struct uart_port *uport, unsigned int status)
static inline void
uart_insert_char(struct uart_port *port, unsigned int status,
unsigned int overrun, unsigned int ch, unsigned int flag)
#define UART_ENABLE_MS(port,cflag)	((port)->flags & UPF_HARDPPS_CD || \
(cflag) & CRTSCTS || \
!((cflag) & CLOCAL))
