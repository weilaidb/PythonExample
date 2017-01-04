#define __UART(X) (*(volatile uint8_t *)(UART0_BASE + (UART_##X)))
#define __UART_IRR_NMI 0xff0f0000
#define __UART(X) (*(volatile uint8_t *)(UART1_BASE + (UART_##X)))
#define __UART_IRR_NMI 0xfff00000
#define LSR_WAIT_FOR(STATE)			\
do  while (!(__UART(LSR) & UART_LSR_##STATE))
#define FLOWCTL_QUERY(LINE)	()
#define FLOWCTL_CLEAR(LINE)	do  while (0)
#define FLOWCTL_SET(LINE)	do  while (0)
#define FLOWCTL_WAIT_FOR(LINE)			\
do  while(!FLOWCTL_QUERY(LINE))
void gdbstub_io_init(void)
void gdbstub_set_baud(unsigned baud)
void gdbstub_do_rx(void)
int gdbstub_rx_char(unsigned char *_ch, int nonblock)
void gdbstub_tx_char(unsigned char ch)
void gdbstub_tx_flush(void)
