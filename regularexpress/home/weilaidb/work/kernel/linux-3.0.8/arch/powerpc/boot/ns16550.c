#define UART_DLL	0
#define UART_DLM	1
#define UART_FCR	2
#define UART_LCR	3
#define UART_MCR	4
#define UART_LSR	5
#define UART_LSR_THRE	0x20
#define UART_LSR_DR	0x01
#define UART_MSR	6
#define UART_SCR	7
static unsigned char *reg_base;
static u32 reg_shift;
static int ns16550_open(void)
static void ns16550_putc(unsigned char c)
static unsigned char ns16550_getc(void)
static u8 ns16550_tstc(void)
int ns16550_console_init(void *devp, struct serial_console_data *scdp)
