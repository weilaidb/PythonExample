#define PORT(offset) (0x3f8 + (offset))
static inline unsigned int serial_in(int offset)
static inline void serial_out(int offset, int value)
int prom_putchar(char c)
