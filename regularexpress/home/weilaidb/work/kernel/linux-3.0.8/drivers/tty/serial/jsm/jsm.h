#define __JSM_DRIVER_H
enum ;
#define jsm_printk(nlevel, klevel, pdev, fmt, args...)	\
if ((DBG_##nlevel & jsm_debug))			\
dev_printk(KERN_##klevel, pdev->dev, fmt, ## args)
#define	MAXLINES	256
#define MAXPORTS	8
#define MAX_STOPS_SENT	5
#define T_NEO		0000
#define T_CLASSIC	0001
#define T_PCIBUS	0400
#define BD_RUNNING	0x0
#define BD_REASON	0x7f
#define BD_NOTFOUND	0x1
#define BD_NOIOPORT	0x2
#define BD_NOMEM	0x3
#define BD_NOBIOS	0x4
#define BD_NOFEP	0x5
#define BD_FAILED	0x6
#define BD_ALLOCATED	0x7
#define BD_TRIBOOT	0x8
#define BD_BADKME	0x80
#define WRITEBUFLEN	((4096) + 4)
#define MYFLIPLEN	N_TTY_BUF_SIZE
#define JSM_VERSION	"jsm: 1.2-1-INKERNEL"
#define JSM_PARTNUM	"40002438_A-INKERNEL"
struct jsm_board;
struct jsm_channel;
struct board_ops ;
struct jsm_board
;
#define CH_PRON		0x0001
#define CH_STOP		0x0002
#define CH_STOPI	0x0004
#define CH_CD		0x0008
#define CH_FCAR		0x0010
#define CH_HANGUP	0x0020
#define CH_RECEIVER_OFF	0x0040
#define CH_OPENING	0x0080
#define CH_CLOSING	0x0100
#define CH_FIFO_ENABLED 0x0200
#define CH_TX_FIFO_EMPTY 0x0400
#define CH_TX_FIFO_LWM	0x0800
#define CH_BREAK_SENDING 0x1000
#define CH_LOOPBACK 0x2000
#define CH_FLIPBUF_IN_USE 0x4000
#define CH_BAUD0	0x08000
#define RQUEUEMASK	0x1FFF
#define EQUEUEMASK	0x1FFF
#define WQUEUEMASK	0x0FFF
#define RQUEUESIZE	(RQUEUEMASK + 1)
#define EQUEUESIZE	RQUEUESIZE
#define WQUEUESIZE	(WQUEUEMASK + 1)
struct jsm_channel ;
struct neo_uart_struct ;
#define	UART_17158_POLL_ADDR_OFFSET	0x80
#define UART_17158_FCTR_RTS_NODELAY	0x00
#define UART_17158_FCTR_RTS_4DELAY	0x01
#define UART_17158_FCTR_RTS_6DELAY	0x02
#define UART_17158_FCTR_RTS_8DELAY	0x03
#define UART_17158_FCTR_RTS_12DELAY	0x12
#define UART_17158_FCTR_RTS_16DELAY	0x05
#define UART_17158_FCTR_RTS_20DELAY	0x13
#define UART_17158_FCTR_RTS_24DELAY	0x06
#define UART_17158_FCTR_RTS_28DELAY	0x14
#define UART_17158_FCTR_RTS_32DELAY	0x07
#define UART_17158_FCTR_RTS_36DELAY	0x16
#define UART_17158_FCTR_RTS_40DELAY	0x08
#define UART_17158_FCTR_RTS_44DELAY	0x09
#define UART_17158_FCTR_RTS_48DELAY	0x10
#define UART_17158_FCTR_RTS_52DELAY	0x11
#define UART_17158_FCTR_RTS_IRDA	0x10
#define UART_17158_FCTR_RS485		0x20
#define UART_17158_FCTR_TRGA		0x00
#define UART_17158_FCTR_TRGB		0x40
#define UART_17158_FCTR_TRGC		0x80
#define UART_17158_FCTR_TRGD		0xC0
#define UART_17158_FCTR_BIT6		0x40
#define UART_17158_FCTR_BIT7		0x80
#define UART_17158_RX_FIFOSIZE		64
#define UART_17158_TX_FIFOSIZE		64
#define UART_17158_IIR_RDI_TIMEOUT	0x0C
#define UART_17158_IIR_XONXOFF		0x10
#define UART_17158_IIR_HWFLOW_STATE_CHANGE 0x20
#define UART_17158_IIR_FIFO_ENABLED	0xC0
#define UART_17158_RX_LINE_STATUS	0x1
#define UART_17158_RXRDY_TIMEOUT	0x2
#define UART_17158_TXRDY		0x3
#define UART_17158_MSR			0x4
#define UART_17158_TX_AND_FIFO_CLR	0x40
#define UART_17158_RX_FIFO_DATA_ERROR	0x80
#define UART_17158_EFR_ECB	0x10
#define UART_17158_EFR_IXON	0x2
#define UART_17158_EFR_IXOFF	0x8
#define UART_17158_EFR_RTSDTR	0x40
#define UART_17158_EFR_CTSDSR	0x80
#define UART_17158_XOFF_DETECT	0x1
#define UART_17158_XON_DETECT	0x2
#define UART_17158_IER_RSVD1	0x10
#define UART_17158_IER_XOFF	0x20
#define UART_17158_IER_RTSDTR	0x40
#define UART_17158_IER_CTSDSR	0x80
#define PCI_DEVICE_NEO_2DB9_PCI_NAME		"Neo 2 - DB9 Universal PCI"
#define PCI_DEVICE_NEO_2DB9PRI_PCI_NAME		"Neo 2 - DB9 Universal PCI - Powered Ring Indicator"
#define PCI_DEVICE_NEO_2RJ45_PCI_NAME		"Neo 2 - RJ45 Universal PCI"
#define PCI_DEVICE_NEO_2RJ45PRI_PCI_NAME	"Neo 2 - RJ45 Universal PCI - Powered Ring Indicator"
#define PCIE_DEVICE_NEO_IBM_PCI_NAME		"Neo 4 - PCI Express - IBM"
extern struct	uart_driver jsm_uart_driver;
extern struct	board_ops jsm_neo_ops;
extern int	jsm_debug;
int jsm_tty_write(struct uart_port *port);
int jsm_tty_init(struct jsm_board *);
int jsm_uart_port_init(struct jsm_board *);
int jsm_remove_uart_port(struct jsm_board *);
void jsm_input(struct jsm_channel *ch);
void jsm_check_queue_flow_control(struct jsm_channel *ch);
