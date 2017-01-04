#define _ASM_SERIAL_REGS_H
#define SERIAL_ICLK	33333333
#define UART0_BASE	0xfeff9c00
#define UART1_BASE	0xfeff9c40
#define __get_UART0(R) ()
#define __get_UART1(R) ()
#define __set_UART0(R,V) do  while(0)
#define __set_UART1(R,V) do  while(0)
#define __get_UART0_LSR() ()
#define __get_UART1_LSR() ()
#define __set_UART0_IER(V) __set_UART0(UART_IER,(V))
#define __set_UART1_IER(V) __set_UART1(UART_IER,(V))
#define __get_UCPSR()	()
#define __set_UCPSR(V)	do  while(0)
#define UCPSR_SELECT0	0x07000000
#define UCPSR_SELECT1	0x38000000
#define __get_UCPVR()	()
#define __set_UCPVR(V)	do  while(0)
