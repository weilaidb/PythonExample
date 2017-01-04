#define LOGICAL_PORTS		2
#define PORTS_PER_CARD		2
#define LOGICAL_PORTS_PER_CARD (PORTS_PER_CARD * LOGICAL_PORTS)
#define MAX_CARDS		8
#define MAX_LOGICAL_PORTS	(LOGICAL_PORTS_PER_CARD * MAX_CARDS)
#define GET_PORT_FROM_SIO_IR(_x)	(_x & SIO_IR_SA) ? 0 : 1
#define GET_PHYSICAL_PORT(_x)	((_x) >> 1)
#define GET_LOGICAL_PORT(_x)	((_x) & 1)
#define IS_PHYSICAL_PORT(_x)	!((_x) & 1)
#define IS_RS232(_x)		!((_x) & 1)
static unsigned int Num_of_ioc3_cards;
static unsigned int Submodule_slot;
#define DPRINT_CONFIG(_x...)	;
#define NOT_PROGRESS()	;
#define MAX_CHARS		256
#define FIFO_SIZE		(MAX_CHARS-1)
#define DEVICE_NAME		"ttySIOC"
#define DEVICE_MAJOR		204
#define DEVICE_MINOR		116
#define NCS_BREAK		0x1
#define NCS_PARITY		0x2
#define NCS_FRAMING		0x4
#define NCS_OVERRUN		0x8
#define MIN_BAUD_SUPPORTED	1200
#define MAX_BAUD_SUPPORTED	115200
#define PROTO_RS232		0
#define PROTO_RS422		1
#define N_DATA_READY		0x01
#define N_OUTPUT_LOWAT		0x02
#define N_BREAK			0x04
#define N_PARITY_ERROR		0x08
#define N_FRAMING_ERROR		0x10
#define N_OVERRUN_ERROR		0x20
#define N_DDCD			0x40
#define N_DCTS			0x80
#define N_ALL_INPUT		(N_DATA_READY | N_BREAK			   \
| N_PARITY_ERROR | N_FRAMING_ERROR \
| N_OVERRUN_ERROR | N_DDCD | N_DCTS)
#define N_ALL_OUTPUT		N_OUTPUT_LOWAT
#define N_ALL_ERRORS		(N_PARITY_ERROR | N_FRAMING_ERROR \
| N_OVERRUN_ERROR)
#define N_ALL			(N_DATA_READY | N_OUTPUT_LOWAT | N_BREAK    \
| N_PARITY_ERROR | N_FRAMING_ERROR  \
| N_OVERRUN_ERROR | N_DDCD | N_DCTS)
#define SER_CLK_SPEED(prediv)	((22000000 << 1) / prediv)
#define SER_DIVISOR(x, clk)	(((clk) + (x) * 8) / ((x) * 16))
#define DIVISOR_TO_BAUD(div, clk) ((clk) / 16 / (div))
#define LCR_MASK_BITS_CHAR	(UART_LCR_WLEN5 | UART_LCR_WLEN6 \
| UART_LCR_WLEN7 | UART_LCR_WLEN8)
#define LCR_MASK_STOP_BITS	(UART_LCR_STOP)
#define PENDING(_a, _p)		(readl(&(_p)->vma->sio_ir) & (_a)->ic_enable)
#define RING_BUF_SIZE		4096
#define BUF_SIZE_BIT		SBBR_L_SIZE
#define PROD_CONS_MASK		PROD_CONS_PTR_4K
#define TOTAL_RING_BUF_SIZE	(RING_BUF_SIZE * 4)
struct ioc3_card ;
struct ioc3_port ;
#define TX_LOWAT_LATENCY      1000
#define TX_LOWAT_HZ          (1000000 / TX_LOWAT_LATENCY)
#define TX_LOWAT_CHARS(baud) (baud / 10 / TX_LOWAT_HZ)
#define INPUT_HIGH		0x01
#define DCD_ON			0x02
#define LOWAT_WRITTEN		0x04
#define READ_ABORTED		0x08
#define INPUT_ENABLE		0x10
struct port_hooks ;
static struct port_hooks hooks_array[PORTS_PER_CARD] = ;
struct ring_entry ;
#define RING_ANY_VALID \
((uint32_t)(RXSB_MODEM_VALID | RXSB_DATA_VALID) * 0x01010101)
#define ring_sc		u.s.sc
#define ring_data	u.s.data
#define ring_allsc	u.all.allsc
#define ENTRIES_PER_RING (RING_BUF_SIZE / (int) sizeof(struct ring_entry))
struct ring ;
struct ring_buffer ;
#define RING(_p, _wh)	&(((struct ring_buffer *)((_p)->ip_cpu_ringbuf))->_wh)
#define MAXITER		10000000
static int set_baud(struct ioc3_port *port, int baud)
static struct ioc3_port *get_ioc3_port(struct uart_port *the_port)
static int inline port_init(struct ioc3_port *port)
static void enable_intrs(struct ioc3_port *port, uint32_t mask)
static inline int local_open(struct ioc3_port *port)
static inline int set_rx_timeout(struct ioc3_port *port, int timeout)
static inline int
config_port(struct ioc3_port *port,
int baud, int byte_size, int stop_bits, int parenb, int parodd)
static inline int do_write(struct ioc3_port *port, char *buf, int len)
static inline void disable_intrs(struct ioc3_port *port, uint32_t mask)
static int set_notification(struct ioc3_port *port, int mask, int set_on)
static inline int set_mcr(struct uart_port *the_port,
int mask1, int mask2)
static int ioc3_set_proto(struct ioc3_port *port, int proto)
static void transmit_chars(struct uart_port *the_port)
static void
ioc3_change_speed(struct uart_port *the_port,
struct ktermios *new_termios, struct ktermios *old_termios)
static inline int ic3_startup_local(struct uart_port *the_port)
static void ioc3_cb_output_lowat(struct ioc3_port *port)
static void ioc3_cb_post_ncs(struct uart_port *the_port, int ncs)
static inline int do_read(struct uart_port *the_port, char *buf, int len)
static int receive_chars(struct uart_port *the_port)
static int inline
ioc3uart_intr_one(struct ioc3_submodule *is,
struct ioc3_driver_data *idd,
unsigned int pending)
static int ioc3uart_intr(struct ioc3_submodule *is,
struct ioc3_driver_data *idd,
unsigned int pending)
static const char *ic3_type(struct uart_port *the_port)
static unsigned int ic3_tx_empty(struct uart_port *the_port)
static void ic3_stop_tx(struct uart_port *the_port)
static void ic3_stop_rx(struct uart_port *the_port)
static void null_void_function(struct uart_port *the_port)
static void ic3_shutdown(struct uart_port *the_port)
static void ic3_set_mctrl(struct uart_port *the_port, unsigned int mctrl)
static unsigned int ic3_get_mctrl(struct uart_port *the_port)
static void ic3_start_tx(struct uart_port *the_port)
static void ic3_break_ctl(struct uart_port *the_port, int break_state)
static int ic3_startup(struct uart_port *the_port)
static void
ic3_set_termios(struct uart_port *the_port,
struct ktermios *termios, struct ktermios *old_termios)
static int ic3_request_port(struct uart_port *port)
static struct uart_ops ioc3_ops = ;
static struct uart_driver ioc3_uart = ;
static inline int ioc3_serial_core_attach( struct ioc3_submodule *is,
struct ioc3_driver_data *idd)
static int ioc3uart_remove(struct ioc3_submodule *is,
struct ioc3_driver_data *idd)
static int __devinit
ioc3uart_probe(struct ioc3_submodule *is, struct ioc3_driver_data *idd)
static struct ioc3_submodule ioc3uart_ops = ;
static int __init ioc3uart_init(void)
static void __exit ioc3uart_exit(void)
module_init(ioc3uart_init);
module_exit(ioc3uart_exit);
MODULE_AUTHOR("Pat Gefre - Silicon Graphics Inc. (SGI) <pfg@sgi.com>");
MODULE_DESCRIPTION("Serial PCI driver module for SGI IOC3 card");
MODULE_LICENSE("GPL");
