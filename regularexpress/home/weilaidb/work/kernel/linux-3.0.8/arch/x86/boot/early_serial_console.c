#define DEFAULT_SERIAL_PORT 0x3f8
#define XMTRDY          0x20
#define DLAB		0x80
#define TXR             0
#define RXR             0
#define IER             1
#define IIR             2
#define FCR             2
#define LCR             3
#define MCR             4
#define LSR             5
#define MSR             6
#define DLL             0
#define DLH             1
#define DEFAULT_BAUD 9600
static void early_serial_init(int port, int baud)
static void parse_earlyprintk(void)
#define BASE_BAUD (1843200/16)
static unsigned int probe_baud(int port)
static void parse_console_uart8250(void)
void console_init(void)
