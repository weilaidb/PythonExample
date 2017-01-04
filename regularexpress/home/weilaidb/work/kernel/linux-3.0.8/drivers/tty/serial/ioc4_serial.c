#define IOC4_NUM_SERIAL_PORTS	4
#define IOC4_NUM_CARDS		8
#define	GET_SIO_IR(_n)	(_n == 0) ? (IOC4_SIO_IR_S0) : \
(_n == 1) ? (IOC4_SIO_IR_S1) : \
(_n == 2) ? (IOC4_SIO_IR_S2) : \
(IOC4_SIO_IR_S3)
#define	GET_OTHER_IR(_n)  (_n == 0) ? (IOC4_OTHER_IR_S0_MEMERR) : \
(_n == 1) ? (IOC4_OTHER_IR_S1_MEMERR) : \
(_n == 2) ? (IOC4_OTHER_IR_S2_MEMERR) : \
(IOC4_OTHER_IR_S3_MEMERR)
#define IOC4_PCI_ERR_ADDR_L     0x000
#define IOC4_PCI_ERR_ADDR_VLD	        (0x1 << 0)
#define IOC4_PCI_ERR_ADDR_MST_ID_MSK    (0xf << 1)
#define IOC4_PCI_ERR_ADDR_MST_NUM_MSK   (0xe << 1)
#define IOC4_PCI_ERR_ADDR_MST_TYP_MSK   (0x1 << 1)
#define IOC4_PCI_ERR_ADDR_MUL_ERR       (0x1 << 5)
#define IOC4_PCI_ERR_ADDR_ADDR_MSK      (0x3ffffff << 6)
#define	IOC4_SIO_INTR_TYPE	0
#define	IOC4_OTHER_INTR_TYPE	1
#define	IOC4_NUM_INTR_TYPES	2
#define IOC4_SIO_IR_S0_TX_MT	   0x00000001
#define IOC4_SIO_IR_S0_RX_FULL	   0x00000002
#define IOC4_SIO_IR_S0_RX_HIGH	   0x00000004
#define IOC4_SIO_IR_S0_RX_TIMER	   0x00000008
#define IOC4_SIO_IR_S0_DELTA_DCD   0x00000010
#define IOC4_SIO_IR_S0_DELTA_CTS   0x00000020
#define IOC4_SIO_IR_S0_INT	   0x00000040
#define IOC4_SIO_IR_S0_TX_EXPLICIT 0x00000080
#define IOC4_SIO_IR_S1_TX_MT	   0x00000100
#define IOC4_SIO_IR_S1_RX_FULL	   0x00000200
#define IOC4_SIO_IR_S1_RX_HIGH	   0x00000400
#define IOC4_SIO_IR_S1_RX_TIMER	   0x00000800
#define IOC4_SIO_IR_S1_DELTA_DCD   0x00001000
#define IOC4_SIO_IR_S1_DELTA_CTS   0x00002000
#define IOC4_SIO_IR_S1_INT	   0x00004000
#define IOC4_SIO_IR_S1_TX_EXPLICIT 0x00008000
#define IOC4_SIO_IR_S2_TX_MT	   0x00010000
#define IOC4_SIO_IR_S2_RX_FULL	   0x00020000
#define IOC4_SIO_IR_S2_RX_HIGH	   0x00040000
#define IOC4_SIO_IR_S2_RX_TIMER	   0x00080000
#define IOC4_SIO_IR_S2_DELTA_DCD   0x00100000
#define IOC4_SIO_IR_S2_DELTA_CTS   0x00200000
#define IOC4_SIO_IR_S2_INT	   0x00400000
#define IOC4_SIO_IR_S2_TX_EXPLICIT 0x00800000
#define IOC4_SIO_IR_S3_TX_MT	   0x01000000
#define IOC4_SIO_IR_S3_RX_FULL	   0x02000000
#define IOC4_SIO_IR_S3_RX_HIGH	   0x04000000
#define IOC4_SIO_IR_S3_RX_TIMER	   0x08000000
#define IOC4_SIO_IR_S3_DELTA_DCD   0x10000000
#define IOC4_SIO_IR_S3_DELTA_CTS   0x20000000
#define IOC4_SIO_IR_S3_INT	   0x40000000
#define IOC4_SIO_IR_S3_TX_EXPLICIT 0x80000000
#define IOC4_SIO_IR_S0		(IOC4_SIO_IR_S0_TX_MT | \
IOC4_SIO_IR_S0_RX_FULL | \
IOC4_SIO_IR_S0_RX_HIGH | \
IOC4_SIO_IR_S0_RX_TIMER | \
IOC4_SIO_IR_S0_DELTA_DCD | \
IOC4_SIO_IR_S0_DELTA_CTS | \
IOC4_SIO_IR_S0_INT | \
IOC4_SIO_IR_S0_TX_EXPLICIT)
#define IOC4_SIO_IR_S1		(IOC4_SIO_IR_S1_TX_MT | \
IOC4_SIO_IR_S1_RX_FULL | \
IOC4_SIO_IR_S1_RX_HIGH | \
IOC4_SIO_IR_S1_RX_TIMER | \
IOC4_SIO_IR_S1_DELTA_DCD | \
IOC4_SIO_IR_S1_DELTA_CTS | \
IOC4_SIO_IR_S1_INT | \
IOC4_SIO_IR_S1_TX_EXPLICIT)
#define IOC4_SIO_IR_S2		(IOC4_SIO_IR_S2_TX_MT | \
IOC4_SIO_IR_S2_RX_FULL | \
IOC4_SIO_IR_S2_RX_HIGH | \
IOC4_SIO_IR_S2_RX_TIMER | \
IOC4_SIO_IR_S2_DELTA_DCD | \
IOC4_SIO_IR_S2_DELTA_CTS | \
IOC4_SIO_IR_S2_INT | \
IOC4_SIO_IR_S2_TX_EXPLICIT)
#define IOC4_SIO_IR_S3		(IOC4_SIO_IR_S3_TX_MT | \
IOC4_SIO_IR_S3_RX_FULL | \
IOC4_SIO_IR_S3_RX_HIGH | \
IOC4_SIO_IR_S3_RX_TIMER | \
IOC4_SIO_IR_S3_DELTA_DCD | \
IOC4_SIO_IR_S3_DELTA_CTS | \
IOC4_SIO_IR_S3_INT | \
IOC4_SIO_IR_S3_TX_EXPLICIT)
#define IOC4_OTHER_IR_ATA_INT		0x00000001
#define IOC4_OTHER_IR_ATA_MEMERR	0x00000002
#define IOC4_OTHER_IR_S0_MEMERR		0x00000004
#define IOC4_OTHER_IR_S1_MEMERR		0x00000008
#define IOC4_OTHER_IR_S2_MEMERR		0x00000010
#define IOC4_OTHER_IR_S3_MEMERR		0x00000020
#define IOC4_OTHER_IR_KBD_INT		0x00000040
#define IOC4_OTHER_IR_RESERVED		0x007fff80
#define IOC4_OTHER_IR_RT_INT		0x00800000
#define IOC4_OTHER_IR_GEN_INT		0xff000000
#define IOC4_OTHER_IR_SER_MEMERR (IOC4_OTHER_IR_S0_MEMERR | IOC4_OTHER_IR_S1_MEMERR | \
IOC4_OTHER_IR_S2_MEMERR | IOC4_OTHER_IR_S3_MEMERR)
#define IOC4_SIO_CR_CMD_PULSE_SHIFT              0
#define IOC4_SIO_CR_ARB_DIAG_TX0	0x00000000
#define IOC4_SIO_CR_ARB_DIAG_RX0	0x00000010
#define IOC4_SIO_CR_ARB_DIAG_TX1	0x00000020
#define IOC4_SIO_CR_ARB_DIAG_RX1	0x00000030
#define IOC4_SIO_CR_ARB_DIAG_TX2	0x00000040
#define IOC4_SIO_CR_ARB_DIAG_RX2	0x00000050
#define IOC4_SIO_CR_ARB_DIAG_TX3	0x00000060
#define IOC4_SIO_CR_ARB_DIAG_RX3	0x00000070
#define IOC4_SIO_CR_SIO_DIAG_IDLE	0x00000080
#define IOC4_GPCR_UART0_MODESEL	   0x10
#define IOC4_GPCR_UART1_MODESEL	   0x20
#define IOC4_GPCR_UART2_MODESEL	   0x40
#define IOC4_GPCR_UART3_MODESEL	   0x80
#define IOC4_GPPR_UART0_MODESEL_PIN   4
#define IOC4_GPPR_UART1_MODESEL_PIN   5
#define IOC4_GPPR_UART2_MODESEL_PIN   6
#define IOC4_GPPR_UART3_MODESEL_PIN   7
#define IOC4_RXSB_OVERRUN       0x01
#define IOC4_RXSB_PAR_ERR	0x02
#define IOC4_RXSB_FRAME_ERR	0x04
#define IOC4_RXSB_BREAK	        0x08
#define IOC4_RXSB_CTS	        0x10
#define IOC4_RXSB_DCD	        0x20
#define IOC4_RXSB_MODEM_VALID   0x40
#define IOC4_RXSB_DATA_VALID    0x80
#define IOC4_TXCB_INT_WHEN_DONE 0x20
#define IOC4_TXCB_INVALID	0x00
#define IOC4_TXCB_VALID	        0x40
#define IOC4_TXCB_MCR	        0x80
#define IOC4_TXCB_DELAY	        0xc0
#define IOC4_SBBR_L_SIZE	0x00000001
#define IOC4_SSCR_RX_THRESHOLD  0x000001ff
#define IOC4_SSCR_TX_TIMER_BUSY 0x00010000
#define IOC4_SSCR_HFC_EN	0x00020000
#define IOC4_SSCR_RX_RING_DCD   0x00040000
#define IOC4_SSCR_RX_RING_CTS   0x00080000
#define IOC4_SSCR_DIAG	        0x00200000
#define IOC4_SSCR_RX_DRAIN	0x08000000
#define IOC4_SSCR_DMA_EN	0x10000000
#define IOC4_SSCR_DMA_PAUSE	0x20000000
#define IOC4_SSCR_PAUSE_STATE   0x40000000
#define IOC4_SSCR_RESET	        0x80000000
#define IOC4_PROD_CONS_PTR_4K   0x00000ff8
#define IOC4_PROD_CONS_PTR_1K   0x000003f8
#define IOC4_PROD_CONS_PTR_OFF           3
#define IOC4_SRCIR_ARM	        0x80000000
#define IOC4_SHADOW_DR	 0x00000001
#define IOC4_SHADOW_OE	 0x00000002
#define IOC4_SHADOW_PE	 0x00000004
#define IOC4_SHADOW_FE	 0x00000008
#define IOC4_SHADOW_BI	 0x00000010
#define IOC4_SHADOW_THRE 0x00000020
#define IOC4_SHADOW_TEMT 0x00000040
#define IOC4_SHADOW_RFCE 0x00000080
#define IOC4_SHADOW_DCTS 0x00010000
#define IOC4_SHADOW_DDCD 0x00080000
#define IOC4_SHADOW_CTS	 0x00100000
#define IOC4_SHADOW_DCD	 0x00800000
#define IOC4_SHADOW_DTR	 0x01000000
#define IOC4_SHADOW_RTS	 0x02000000
#define IOC4_SHADOW_OUT1 0x04000000
#define IOC4_SHADOW_OUT2 0x08000000
#define IOC4_SHADOW_LOOP 0x10000000
#define IOC4_SRTR_CNT	        0x00000fff
#define IOC4_SRTR_CNT_VAL	0x0fff0000
#define IOC4_SRTR_CNT_VAL_SHIFT         16
#define IOC4_SRTR_HZ                 16000
struct ioc4_serialregs ;
struct ioc4_uartregs ;
#define i4u_dll u1.dll
#define i4u_ier u2.ier
#define i4u_dlm u2.dlm
#define i4u_fcr u3.fcr
struct ioc4_serial  ioc4_serial;
#define IOC4_SER_XIN_CLK_66     66666667
#define IOC4_SER_XIN_CLK_33     33333333
#define IOC4_W_IES		0
#define IOC4_W_IEC		1
typedef void ioc4_intr_func_f(void *, uint32_t);
typedef ioc4_intr_func_f *ioc4_intr_func_t;
static unsigned int Num_of_ioc4_cards;
#define DPRINT_CONFIG(_x...)	;
#define WAKEUP_CHARS	256
#define IOC4_MAX_CHARS	256
#define IOC4_FIFO_CHARS	255
#define DEVICE_NAME_RS232  "ttyIOC"
#define DEVICE_NAME_RS422  "ttyAIOC"
#define DEVICE_MAJOR	   204
#define DEVICE_MINOR_RS232 50
#define DEVICE_MINOR_RS422 84
#define IOC4_SERIAL_OFFSET	0x300
#define NCS_BREAK	0x1
#define NCS_PARITY	0x2
#define NCS_FRAMING	0x4
#define NCS_OVERRUN	0x8
#define MIN_BAUD_SUPPORTED	1200
#define MAX_BAUD_SUPPORTED	115200
#define PROTO_RS232	3
#define PROTO_RS422	7
#define N_DATA_READY	0x01
#define N_OUTPUT_LOWAT	0x02
#define N_BREAK		0x04
#define N_PARITY_ERROR	0x08
#define N_FRAMING_ERROR	0x10
#define N_OVERRUN_ERROR	0x20
#define N_DDCD		0x40
#define N_DCTS		0x80
#define N_ALL_INPUT	(N_DATA_READY | N_BREAK |			\
N_PARITY_ERROR | N_FRAMING_ERROR |		\
N_OVERRUN_ERROR | N_DDCD | N_DCTS)
#define N_ALL_OUTPUT	N_OUTPUT_LOWAT
#define N_ALL_ERRORS	(N_PARITY_ERROR | N_FRAMING_ERROR | N_OVERRUN_ERROR)
#define N_ALL		(N_DATA_READY | N_OUTPUT_LOWAT | N_BREAK |	\
N_PARITY_ERROR | N_FRAMING_ERROR |		\
N_OVERRUN_ERROR | N_DDCD | N_DCTS)
#define SER_DIVISOR(_x, clk)		(((clk) + (_x) * 8) / ((_x) * 16))
#define DIVISOR_TO_BAUD(div, clk)	((clk) / 16 / (div))
#define LCR_MASK_BITS_CHAR	(UART_LCR_WLEN5 | UART_LCR_WLEN6 \
| UART_LCR_WLEN7 | UART_LCR_WLEN8)
#define LCR_MASK_STOP_BITS	(UART_LCR_STOP)
#define PENDING(_p)	(readl(&(_p)->ip_mem->sio_ir.raw) & _p->ip_ienb)
#define READ_SIO_IR(_p) readl(&(_p)->ip_mem->sio_ir.raw)
#define RING_BUF_SIZE 1024
#define IOC4_BUF_SIZE_BIT 0
#define PROD_CONS_MASK IOC4_PROD_CONS_PTR_1K
#define RING_BUF_SIZE 4096
#define IOC4_BUF_SIZE_BIT IOC4_SBBR_L_SIZE
#define PROD_CONS_MASK IOC4_PROD_CONS_PTR_4K
#define TOTAL_RING_BUF_SIZE (RING_BUF_SIZE * 4)
#define UART_PORT_MIN		0
#define UART_PORT_RS232		UART_PORT_MIN
#define UART_PORT_RS422		1
#define UART_PORT_COUNT		2
struct ioc4_control ;
#define MAX_IOC4_INTR_ENTS	(8 * sizeof(uint32_t))
struct ioc4_soft ;
struct ioc4_port ;
#define TX_LOWAT_LATENCY      1000
#define TX_LOWAT_HZ          (1000000 / TX_LOWAT_LATENCY)
#define TX_LOWAT_CHARS(baud) (baud / 10 / TX_LOWAT_HZ)
#define INPUT_HIGH	0x01
#define DCD_ON		0x02
#define LOWAT_WRITTEN	0x04
#define READ_ABORTED	0x08
#define PORT_ACTIVE	0x10
#define PORT_INACTIVE	0
struct hooks ;
static struct hooks hooks_array[IOC4_NUM_SERIAL_PORTS] = ;
struct ring_entry ;
#define RING_ANY_VALID \
((uint32_t)(IOC4_RXSB_MODEM_VALID | IOC4_RXSB_DATA_VALID) * 0x01010101)
#define ring_sc     u.s.sc
#define ring_data   u.s.data
#define ring_allsc  u.all.allsc
#define ENTRIES_PER_RING (RING_BUF_SIZE / (int) sizeof(struct ring_entry))
struct ring ;
struct ring_buffer ;
#define RING(_p, _wh)	&(((struct ring_buffer *)((_p)->ip_cpu_ringbuf))->_wh)
#define MAXITER 10000000
static void receive_chars(struct uart_port *);
static void handle_intr(void *arg, uint32_t sio_ir);
static inline int port_is_active(struct ioc4_port *port,
struct uart_port *uart_port)
static inline void
write_ireg(struct ioc4_soft *ioc4_soft, uint32_t val, int which, int type)
static int set_baud(struct ioc4_port *port, int baud)
static struct ioc4_port *get_ioc4_port(struct uart_port *the_port, int set)
static inline uint32_t
pending_intrs(struct ioc4_soft *soft, int type)
static int inline port_init(struct ioc4_port *port)
static void handle_dma_error_intr(void *arg, uint32_t other_ir)
static void
intr_connect(struct ioc4_soft *soft, int type,
uint32_t intrbits, ioc4_intr_func_f * intr, void *info)
static irqreturn_t ioc4_intr(int irq, void *arg)
static int inline ioc4_attach_local(struct ioc4_driver_data *idd)
static void enable_intrs(struct ioc4_port *port, uint32_t mask)
static inline int local_open(struct ioc4_port *port)
static inline int set_rx_timeout(struct ioc4_port *port, int timeout)
static inline int
config_port(struct ioc4_port *port,
int baud, int byte_size, int stop_bits, int parenb, int parodd)
static inline int do_write(struct ioc4_port *port, char *buf, int len)
static void disable_intrs(struct ioc4_port *port, uint32_t mask)
static int set_notification(struct ioc4_port *port, int mask, int set_on)
static inline int set_mcr(struct uart_port *the_port,
int mask1, int mask2)
static int ioc4_set_proto(struct ioc4_port *port, int proto)
static void transmit_chars(struct uart_port *the_port)
static void
ioc4_change_speed(struct uart_port *the_port,
struct ktermios *new_termios, struct ktermios *old_termios)
static inline int ic4_startup_local(struct uart_port *the_port)
static void ioc4_cb_output_lowat(struct uart_port *the_port)
static void handle_intr(void *arg, uint32_t sio_ir)
static void ioc4_cb_post_ncs(struct uart_port *the_port, int ncs)
static inline int do_read(struct uart_port *the_port, unsigned char *buf,
int len)
static void receive_chars(struct uart_port *the_port)
static const char *ic4_type(struct uart_port *the_port)
static unsigned int ic4_tx_empty(struct uart_port *the_port)
static void ic4_stop_tx(struct uart_port *the_port)
static void null_void_function(struct uart_port *the_port)
static void ic4_shutdown(struct uart_port *the_port)
static void ic4_set_mctrl(struct uart_port *the_port, unsigned int mctrl)
static unsigned int ic4_get_mctrl(struct uart_port *the_port)
static void ic4_start_tx(struct uart_port *the_port)
static void ic4_break_ctl(struct uart_port *the_port, int break_state)
static int ic4_startup(struct uart_port *the_port)
static void
ic4_set_termios(struct uart_port *the_port,
struct ktermios *termios, struct ktermios *old_termios)
static int ic4_request_port(struct uart_port *port)
static struct uart_ops ioc4_ops = ;
static struct uart_driver ioc4_uart_rs232 = ;
static struct uart_driver ioc4_uart_rs422 = ;
static int ioc4_serial_remove_one(struct ioc4_driver_data *idd)
static inline int
ioc4_serial_core_attach(struct pci_dev *pdev, int port_type)
int
ioc4_serial_attach_one(struct ioc4_driver_data *idd)
static struct ioc4_submodule ioc4_serial_submodule = ;
static int __init ioc4_serial_init(void)
static void __exit ioc4_serial_exit(void)
late_initcall(ioc4_serial_init);
module_exit(ioc4_serial_exit);
MODULE_AUTHOR("Pat Gefre - Silicon Graphics Inc. (SGI) <pfg@sgi.com>");
MODULE_DESCRIPTION("Serial PCI driver module for SGI IOC4 Base-IO Card");
MODULE_LICENSE("GPL");
