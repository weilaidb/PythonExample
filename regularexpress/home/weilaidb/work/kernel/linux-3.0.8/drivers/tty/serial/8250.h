struct old_serial_port ;
struct serial8250_config ;
#define UART_CAP_FIFO	(1 << 8)
#define UART_CAP_EFR	(1 << 9)
#define UART_CAP_SLEEP	(1 << 10)
#define UART_CAP_AFE	(1 << 11)
#define UART_CAP_UUE	(1 << 12)
#define UART_CAP_RTOIE	(1 << 13)
#define UART_BUG_QUOT	(1 << 0)
#define UART_BUG_TXEN	(1 << 1)
#define UART_BUG_NOMSR	(1 << 2)
#define UART_BUG_THRE	(1 << 3)
#define PROBE_RSA	(1 << 0)
#define PROBE_ANY	(~0)
#define HIGH_BITS_OFFSET ((sizeof(long)-sizeof(int))*8)
#define SERIAL8250_SHARE_IRQS 1
#define SERIAL8250_SHARE_IRQS 0
#if defined(__alpha__) && !defined(CONFIG_PCI)
#define ALPHA_KLUDGE_MCR  (UART_MCR_OUT2 | UART_MCR_OUT1)
#elif defined(CONFIG_SBC8560)
#define ALPHA_KLUDGE_MCR (UART_MCR_OUT2)
#define ALPHA_KLUDGE_MCR 0
