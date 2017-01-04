#if defined(CONFIG_MACH_LOONGSON) || defined(CONFIG_MIPS_MALTA)
#define UART_BASE 0x1fd003f8
#define PORT(offset) (CKSEG1ADDR(UART_BASE) + (offset))
#define PORT(offset) (CKSEG1ADDR(AR7_REGS_UART0) + (4 * offset))
#error please define the serial port address for your own machine
static inline unsigned int serial_in(int offset)
static inline void serial_out(int offset, int value)
void putc(char c)
