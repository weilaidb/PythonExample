#define UCC_SLOW_GUMR_H_SUART   	0x00004000
static int soft_uart;
static int firmware_loaded;
#define SERIAL_QE_MAJOR 204
#define SERIAL_QE_MINOR 46
#define UCC_MAX_UART    4
#define RX_NUM_FIFO     4
#define TX_NUM_FIFO     4
#define RX_BUF_SIZE     32
#define TX_BUF_SIZE     32
#define UCC_WAIT_CLOSING 100
struct ucc_uart_pram  __attribute__ ((packed));
#define UCC_UART_SUPSMR_SL      	0x8000
#define UCC_UART_SUPSMR_RPM_MASK	0x6000
#define UCC_UART_SUPSMR_RPM_ODD 	0x0000
#define UCC_UART_SUPSMR_RPM_LOW 	0x2000
#define UCC_UART_SUPSMR_RPM_EVEN	0x4000
#define UCC_UART_SUPSMR_RPM_HIGH	0x6000
#define UCC_UART_SUPSMR_PEN     	0x1000
#define UCC_UART_SUPSMR_TPM_MASK	0x0C00
#define UCC_UART_SUPSMR_TPM_ODD 	0x0000
#define UCC_UART_SUPSMR_TPM_LOW 	0x0400
#define UCC_UART_SUPSMR_TPM_EVEN	0x0800
#define UCC_UART_SUPSMR_TPM_HIGH	0x0C00
#define UCC_UART_SUPSMR_FRZ     	0x0100
#define UCC_UART_SUPSMR_UM_MASK 	0x00c0
#define UCC_UART_SUPSMR_UM_NORMAL       0x0000
#define UCC_UART_SUPSMR_UM_MAN_MULTI    0x0040
#define UCC_UART_SUPSMR_UM_AUTO_MULTI   0x00c0
#define UCC_UART_SUPSMR_CL_MASK 	0x0030
#define UCC_UART_SUPSMR_CL_8    	0x0030
#define UCC_UART_SUPSMR_CL_7    	0x0020
#define UCC_UART_SUPSMR_CL_6    	0x0010
#define UCC_UART_SUPSMR_CL_5    	0x0000
#define UCC_UART_TX_STATE_AHDLC 	0x00
#define UCC_UART_TX_STATE_UART  	0x01
#define UCC_UART_TX_STATE_X1    	0x00
#define UCC_UART_TX_STATE_X16   	0x80
#define UCC_UART_PRAM_ALIGNMENT 0x100
#define UCC_UART_SIZE_OF_BD     UCC_SLOW_SIZE_OF_BD
#define NUM_CONTROL_CHARS       8
struct uart_qe_port ;
static struct uart_driver ucc_uart_driver = ;
static inline dma_addr_t cpu2qe_addr(void *addr, struct uart_qe_port *qe_port)
static inline void *qe2cpu_addr(dma_addr_t addr, struct uart_qe_port *qe_port)
static unsigned int qe_uart_tx_empty(struct uart_port *port)
void qe_uart_set_mctrl(struct uart_port *port, unsigned int mctrl)
static unsigned int qe_uart_get_mctrl(struct uart_port *port)
static void qe_uart_stop_tx(struct uart_port *port)
static int qe_uart_tx_pump(struct uart_qe_port *qe_port)
static void qe_uart_start_tx(struct uart_port *port)
static void qe_uart_stop_rx(struct uart_port *port)
static void qe_uart_enable_ms(struct uart_port *port)
static void qe_uart_break_ctl(struct uart_port *port, int break_state)
static void qe_uart_int_rx(struct uart_qe_port *qe_port)
static irqreturn_t qe_uart_int(int irq, void *data)
static void qe_uart_initbd(struct uart_qe_port *qe_port)
static void qe_uart_init_ucc(struct uart_qe_port *qe_port)
static int qe_uart_startup(struct uart_port *port)
static void qe_uart_shutdown(struct uart_port *port)
static void qe_uart_set_termios(struct uart_port *port,
struct ktermios *termios, struct ktermios *old)
static const char *qe_uart_type(struct uart_port *port)
static int qe_uart_request_port(struct uart_port *port)
static void qe_uart_config_port(struct uart_port *port, int flags)
static void qe_uart_release_port(struct uart_port *port)
static int qe_uart_verify_port(struct uart_port *port,
struct serial_struct *ser)
static struct uart_ops qe_uart_pops = ;
static unsigned int soc_info(unsigned int *rev_h, unsigned int *rev_l)
static void uart_firmware_cont(const struct firmware *fw, void *context)
static int ucc_uart_probe(struct platform_device *ofdev)
static int ucc_uart_remove(struct platform_device *ofdev)
static struct of_device_id ucc_uart_match[] = ;
MODULE_DEVICE_TABLE(of, ucc_uart_match);
static struct platform_driver ucc_uart_of_driver = ;
static int __init ucc_uart_init(void)
static void __exit ucc_uart_exit(void)
module_init(ucc_uart_init);
module_exit(ucc_uart_exit);
MODULE_DESCRIPTION("Freescale QUICC Engine (QE) UART");
MODULE_AUTHOR("Timur Tabi <timur@freescale.com>");
MODULE_LICENSE("GPL v2");
MODULE_ALIAS_CHARDEV_MAJOR(SERIAL_QE_MAJOR);
