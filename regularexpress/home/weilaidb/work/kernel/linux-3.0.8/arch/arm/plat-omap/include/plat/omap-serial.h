#define __OMAP_SERIAL_H__
#define DRIVER_NAME	"omap_uart"
#define OMAP_SERIAL_NAME	"ttyO"
#define OMAP_MODE13X_SPEED	230400
#define OMAP_UART_WER_MOD_WKUP	0X7F
#define OMAP_UART_SW_TX		0x04
#define OMAP_UART_SW_RX		0x04
#define OMAP_UART_SYSC_RESET	0X07
#define OMAP_UART_TCR_TRIG	0X0F
#define OMAP_UART_SW_CLR	0XF0
#define OMAP_UART_FIFO_CLR	0X06
#define OMAP_UART_DMA_CH_FREE	-1
#define RX_TIMEOUT		(3 * HZ)
#define OMAP_MAX_HSUART_PORTS	4
#define MSR_SAVE_FLAGS		UART_MSR_ANY_DELTA
struct omap_uart_port_info ;
struct uart_omap_dma ;
struct uart_omap_port ;
