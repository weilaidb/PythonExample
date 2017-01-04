#define __MANTIS_UART_H
#define MANTIS_UART_CTL			0xe0
#define MANTIS_UART_RXINT		(1 << 4)
#define MANTIS_UART_RXFLUSH		(1 << 2)
#define MANTIS_UART_RXD			0xe8
#define MANTIS_UART_BAUD		0xec
#define MANTIS_UART_STAT		0xf0
#define MANTIS_UART_RXFIFO_DATA		(1 << 7)
#define MANTIS_UART_RXFIFO_EMPTY	(1 << 6)
#define MANTIS_UART_RXFIFO_FULL		(1 << 3)
#define MANTIS_UART_FRAME_ERR		(1 << 2)
#define MANTIS_UART_PARITY_ERR		(1 << 1)
#define MANTIS_UART_RXTHRESH_INT	(1 << 0)
enum mantis_baud ;
enum mantis_parity ;
struct mantis_pci;
extern int mantis_uart_init(struct mantis_pci *mantis);
extern void mantis_uart_exit(struct mantis_pci *mantis);
