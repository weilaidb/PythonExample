#define UART_DLL		0
#define UART_DLM		1
#define UART_FCR		2
#define UART_FCR_CLEAR_RCVR 	0x02
#define UART_FCR_CLEAR_XMIT	0x04
#define UART_LCR		3
#define UART_MCR		4
#define UART_MCR_RTS		0x02
#define UART_MCR_DTR		0x01
#define UART_LCR_DLAB		0x80
#define UART_LCR_WLEN8		0x03
static int virtex_ns16550_console_init(void *devp)
int platform_specific_init(void)
