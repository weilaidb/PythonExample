enum ;
enum ;
#define PCH_UART_DRIVER_DEVICE "ttyPCH"
#define PCH_UART_NR	4
#define PCH_UART_HANDLED_RX_INT	(1<<((PCH_UART_HANDLED_RX_INT_SHIFT)<<1))
#define PCH_UART_HANDLED_TX_INT	(1<<((PCH_UART_HANDLED_TX_INT_SHIFT)<<1))
#define PCH_UART_HANDLED_RX_ERR_INT	(1<<((\
PCH_UART_HANDLED_RX_ERR_INT_SHIFT)<<1))
#define PCH_UART_HANDLED_RX_TRG_INT	(1<<((\
PCH_UART_HANDLED_RX_TRG_INT_SHIFT)<<1))
#define PCH_UART_HANDLED_MS_INT	(1<<((PCH_UART_HANDLED_MS_INT_SHIFT)<<1))
#define PCH_UART_RBR		0x00
#define PCH_UART_THR		0x00
#define PCH_UART_IER_MASK	(PCH_UART_IER_ERBFI|PCH_UART_IER_ETBEI|\
PCH_UART_IER_ELSI|PCH_UART_IER_EDSSI)
#define PCH_UART_IER_ERBFI	0x00000001
#define PCH_UART_IER_ETBEI	0x00000002
#define PCH_UART_IER_ELSI	0x00000004
#define PCH_UART_IER_EDSSI	0x00000008
#define PCH_UART_IIR_IP			0x00000001
#define PCH_UART_IIR_IID		0x00000006
#define PCH_UART_IIR_MSI		0x00000000
#define PCH_UART_IIR_TRI		0x00000002
#define PCH_UART_IIR_RRI		0x00000004
#define PCH_UART_IIR_REI		0x00000006
#define PCH_UART_IIR_TOI		0x00000008
#define PCH_UART_IIR_FIFO256		0x00000020
#define PCH_UART_IIR_FIFO64		PCH_UART_IIR_FIFO256
#define PCH_UART_IIR_FE			0x000000C0
#define PCH_UART_FCR_FIFOE		0x00000001
#define PCH_UART_FCR_RFR		0x00000002
#define PCH_UART_FCR_TFR		0x00000004
#define PCH_UART_FCR_DMS		0x00000008
#define PCH_UART_FCR_FIFO256		0x00000020
#define PCH_UART_FCR_RFTL		0x000000C0
#define PCH_UART_FCR_RFTL1		0x00000000
#define PCH_UART_FCR_RFTL64		0x00000040
#define PCH_UART_FCR_RFTL128		0x00000080
#define PCH_UART_FCR_RFTL224		0x000000C0
#define PCH_UART_FCR_RFTL16		PCH_UART_FCR_RFTL64
#define PCH_UART_FCR_RFTL32		PCH_UART_FCR_RFTL128
#define PCH_UART_FCR_RFTL56		PCH_UART_FCR_RFTL224
#define PCH_UART_FCR_RFTL4		PCH_UART_FCR_RFTL64
#define PCH_UART_FCR_RFTL8		PCH_UART_FCR_RFTL128
#define PCH_UART_FCR_RFTL14		PCH_UART_FCR_RFTL224
#define PCH_UART_FCR_RFTL_SHIFT		6
#define PCH_UART_LCR_WLS	0x00000003
#define PCH_UART_LCR_STB	0x00000004
#define PCH_UART_LCR_PEN	0x00000008
#define PCH_UART_LCR_EPS	0x00000010
#define PCH_UART_LCR_SP		0x00000020
#define PCH_UART_LCR_SB		0x00000040
#define PCH_UART_LCR_DLAB	0x00000080
#define PCH_UART_LCR_NP		0x00000000
#define PCH_UART_LCR_OP		PCH_UART_LCR_PEN
#define PCH_UART_LCR_EP		(PCH_UART_LCR_PEN | PCH_UART_LCR_EPS)
#define PCH_UART_LCR_1P		(PCH_UART_LCR_PEN | PCH_UART_LCR_SP)
#define PCH_UART_LCR_0P		(PCH_UART_LCR_PEN | PCH_UART_LCR_EPS |\
PCH_UART_LCR_SP)
#define PCH_UART_LCR_5BIT	0x00000000
#define PCH_UART_LCR_6BIT	0x00000001
#define PCH_UART_LCR_7BIT	0x00000002
#define PCH_UART_LCR_8BIT	0x00000003
#define PCH_UART_MCR_DTR	0x00000001
#define PCH_UART_MCR_RTS	0x00000002
#define PCH_UART_MCR_OUT	0x0000000C
#define PCH_UART_MCR_LOOP	0x00000010
#define PCH_UART_MCR_AFE	0x00000020
#define PCH_UART_LSR_DR		0x00000001
#define PCH_UART_LSR_ERR	(1<<7)
#define PCH_UART_MSR_DCTS	0x00000001
#define PCH_UART_MSR_DDSR	0x00000002
#define PCH_UART_MSR_TERI	0x00000004
#define PCH_UART_MSR_DDCD	0x00000008
#define PCH_UART_MSR_CTS	0x00000010
#define PCH_UART_MSR_DSR	0x00000020
#define PCH_UART_MSR_RI		0x00000040
#define PCH_UART_MSR_DCD	0x00000080
#define PCH_UART_MSR_DELTA	(PCH_UART_MSR_DCTS | PCH_UART_MSR_DDSR |\
PCH_UART_MSR_TERI | PCH_UART_MSR_DDCD)
#define PCH_UART_DLL		0x00
#define PCH_UART_DLM		0x01
#define DIV_ROUND(a, b)	(((a) + ((b)/2)) / (b))
#define PCH_UART_IID_RLS	(PCH_UART_IIR_REI)
#define PCH_UART_IID_RDR	(PCH_UART_IIR_RRI)
#define PCH_UART_IID_RDR_TO	(PCH_UART_IIR_RRI | PCH_UART_IIR_TOI)
#define PCH_UART_IID_THRE	(PCH_UART_IIR_TRI)
#define PCH_UART_IID_MS		(PCH_UART_IIR_MSI)
#define PCH_UART_HAL_PARITY_NONE	(PCH_UART_LCR_NP)
#define PCH_UART_HAL_PARITY_ODD		(PCH_UART_LCR_OP)
#define PCH_UART_HAL_PARITY_EVEN	(PCH_UART_LCR_EP)
#define PCH_UART_HAL_PARITY_FIX1	(PCH_UART_LCR_1P)
#define PCH_UART_HAL_PARITY_FIX0	(PCH_UART_LCR_0P)
#define PCH_UART_HAL_5BIT		(PCH_UART_LCR_5BIT)
#define PCH_UART_HAL_6BIT		(PCH_UART_LCR_6BIT)
#define PCH_UART_HAL_7BIT		(PCH_UART_LCR_7BIT)
#define PCH_UART_HAL_8BIT		(PCH_UART_LCR_8BIT)
#define PCH_UART_HAL_STB1		0
#define PCH_UART_HAL_STB2		(PCH_UART_LCR_STB)
#define PCH_UART_HAL_CLR_TX_FIFO	(PCH_UART_FCR_TFR)
#define PCH_UART_HAL_CLR_RX_FIFO	(PCH_UART_FCR_RFR)
#define PCH_UART_HAL_CLR_ALL_FIFO	(PCH_UART_HAL_CLR_TX_FIFO | \
PCH_UART_HAL_CLR_RX_FIFO)
#define PCH_UART_HAL_DMA_MODE0		0
#define PCH_UART_HAL_FIFO_DIS		0
#define PCH_UART_HAL_FIFO16		(PCH_UART_FCR_FIFOE)
#define PCH_UART_HAL_FIFO256		(PCH_UART_FCR_FIFOE | \
PCH_UART_FCR_FIFO256)
#define PCH_UART_HAL_FIFO64		(PCH_UART_HAL_FIFO256)
#define PCH_UART_HAL_TRIGGER1		(PCH_UART_FCR_RFTL1)
#define PCH_UART_HAL_TRIGGER64		(PCH_UART_FCR_RFTL64)
#define PCH_UART_HAL_TRIGGER128		(PCH_UART_FCR_RFTL128)
#define PCH_UART_HAL_TRIGGER224		(PCH_UART_FCR_RFTL224)
#define PCH_UART_HAL_TRIGGER16		(PCH_UART_FCR_RFTL16)
#define PCH_UART_HAL_TRIGGER32		(PCH_UART_FCR_RFTL32)
#define PCH_UART_HAL_TRIGGER56		(PCH_UART_FCR_RFTL56)
#define PCH_UART_HAL_TRIGGER4		(PCH_UART_FCR_RFTL4)
#define PCH_UART_HAL_TRIGGER8		(PCH_UART_FCR_RFTL8)
#define PCH_UART_HAL_TRIGGER14		(PCH_UART_FCR_RFTL14)
#define PCH_UART_HAL_TRIGGER_L		(PCH_UART_FCR_RFTL64)
#define PCH_UART_HAL_TRIGGER_M		(PCH_UART_FCR_RFTL128)
#define PCH_UART_HAL_TRIGGER_H		(PCH_UART_FCR_RFTL224)
#define PCH_UART_HAL_RX_INT		(PCH_UART_IER_ERBFI)
#define PCH_UART_HAL_TX_INT		(PCH_UART_IER_ETBEI)
#define PCH_UART_HAL_RX_ERR_INT		(PCH_UART_IER_ELSI)
#define PCH_UART_HAL_MS_INT		(PCH_UART_IER_EDSSI)
#define PCH_UART_HAL_ALL_INT		(PCH_UART_IER_MASK)
#define PCH_UART_HAL_DTR		(PCH_UART_MCR_DTR)
#define PCH_UART_HAL_RTS		(PCH_UART_MCR_RTS)
#define PCH_UART_HAL_OUT		(PCH_UART_MCR_OUT)
#define PCH_UART_HAL_LOOP		(PCH_UART_MCR_LOOP)
#define PCH_UART_HAL_AFE		(PCH_UART_MCR_AFE)
#define PCI_VENDOR_ID_ROHM		0x10DB
struct pch_uart_buffer ;
struct eg20t_port ;
struct pch_uart_driver_data ;
enum pch_uart_num_t ;
static struct pch_uart_driver_data drv_dat[] = ;
static unsigned int default_baud = 9600;
static const int trigger_level_256[4] = ;
static const int trigger_level_64[4] = ;
static const int trigger_level_16[4] = ;
static const int trigger_level_1[4] = ;
static void pch_uart_hal_request(struct pci_dev *pdev, int fifosize,
int base_baud)
static unsigned int get_msr(struct eg20t_port *priv, void __iomem *base)
static void pch_uart_hal_enable_interrupt(struct eg20t_port *priv,
unsigned int flag)
static void pch_uart_hal_disable_interrupt(struct eg20t_port *priv,
unsigned int flag)
static int pch_uart_hal_set_line(struct eg20t_port *priv, int baud,
unsigned int parity, unsigned int bits,
unsigned int stb)
static int pch_uart_hal_fifo_reset(struct eg20t_port *priv,
unsigned int flag)
static int pch_uart_hal_set_fifo(struct eg20t_port *priv,
unsigned int dmamode,
unsigned int fifo_size, unsigned int trigger)
static u8 pch_uart_hal_get_modem(struct eg20t_port *priv)
static void pch_uart_hal_write(struct eg20t_port *priv,
const unsigned char *buf, int tx_size)
static int pch_uart_hal_read(struct eg20t_port *priv, unsigned char *buf,
int rx_size)
static unsigned int pch_uart_hal_get_iid(struct eg20t_port *priv)
static u8 pch_uart_hal_get_line_status(struct eg20t_port *priv)
static void pch_uart_hal_set_break(struct eg20t_port *priv, int on)
static int push_rx(struct eg20t_port *priv, const unsigned char *buf,
int size)
static int pop_tx_x(struct eg20t_port *priv, unsigned char *buf)
static int dma_push_rx(struct eg20t_port *priv, int size)
static void pch_free_dma(struct uart_port *port)
static bool filter(struct dma_chan *chan, void *slave)
static void pch_request_dma(struct uart_port *port)
static void pch_dma_rx_complete(void *arg)
static void pch_dma_tx_complete(void *arg)
static int pop_tx(struct eg20t_port *priv, int size)
static int handle_rx_to(struct eg20t_port *priv)
static int handle_rx(struct eg20t_port *priv)
static int dma_handle_rx(struct eg20t_port *priv)
static unsigned int handle_tx(struct eg20t_port *priv)
static unsigned int dma_handle_tx(struct eg20t_port *priv)
static void pch_uart_err_ir(struct eg20t_port *priv, unsigned int lsr)
static irqreturn_t pch_uart_interrupt(int irq, void *dev_id)
static unsigned int pch_uart_tx_empty(struct uart_port *port)
static unsigned int pch_uart_get_mctrl(struct uart_port *port)
static void pch_uart_set_mctrl(struct uart_port *port, unsigned int mctrl)
static void pch_uart_stop_tx(struct uart_port *port)
static void pch_uart_start_tx(struct uart_port *port)
static void pch_uart_stop_rx(struct uart_port *port)
static void pch_uart_enable_ms(struct uart_port *port)
static void pch_uart_break_ctl(struct uart_port *port, int ctl)
static int pch_uart_startup(struct uart_port *port)
static void pch_uart_shutdown(struct uart_port *port)
static void pch_uart_set_termios(struct uart_port *port,
struct ktermios *termios, struct ktermios *old)
static const char *pch_uart_type(struct uart_port *port)
static void pch_uart_release_port(struct uart_port *port)
static int pch_uart_request_port(struct uart_port *port)
static void pch_uart_config_port(struct uart_port *port, int type)
static int pch_uart_verify_port(struct uart_port *port,
struct serial_struct *serinfo)
static struct uart_ops pch_uart_ops = ;
static struct uart_driver pch_uart_driver = ;
static struct eg20t_port *pch_uart_init_port(struct pci_dev *pdev,
const struct pci_device_id *id)
static void pch_uart_exit_port(struct eg20t_port *priv)
static void pch_uart_pci_remove(struct pci_dev *pdev)
static int pch_uart_pci_suspend(struct pci_dev *pdev, pm_message_t state)
static int pch_uart_pci_resume(struct pci_dev *pdev)
#define pch_uart_pci_suspend NULL
#define pch_uart_pci_resume NULL
static DEFINE_PCI_DEVICE_TABLE(pch_uart_pci_id) = ;
static int __devinit pch_uart_pci_probe(struct pci_dev *pdev,
const struct pci_device_id *id)
static struct pci_driver pch_uart_pci_driver = ;
static int __init pch_uart_module_init(void)
module_init(pch_uart_module_init);
static void __exit pch_uart_module_exit(void)
module_exit(pch_uart_module_exit);
MODULE_LICENSE("GPL v2");
MODULE_DESCRIPTION("Intel EG20T PCH UART PCI Driver");
module_param(default_baud, uint, S_IRUGO);
