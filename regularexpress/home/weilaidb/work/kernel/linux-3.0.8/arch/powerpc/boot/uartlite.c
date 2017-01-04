#define ULITE_RX		0x00
#define ULITE_TX		0x04
#define ULITE_STATUS		0x08
#define ULITE_CONTROL		0x0c
#define ULITE_STATUS_RXVALID	0x01
#define ULITE_STATUS_TXFULL	0x08
#define ULITE_CONTROL_RST_RX	0x02
static void * reg_base;
static int uartlite_open(void)
static void uartlite_putc(unsigned char c)
static unsigned char uartlite_getc(void)
static u8 uartlite_tstc(void)
int uartlite_console_init(void *devp, struct serial_console_data *scdp)
