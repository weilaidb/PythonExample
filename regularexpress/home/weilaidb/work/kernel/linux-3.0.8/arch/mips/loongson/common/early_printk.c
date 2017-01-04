#define PORT(base, offset) (u8 *)(base + offset)
static inline unsigned int serial_in(unsigned char *base, int offset)
static inline void serial_out(unsigned char *base, int offset, int value)
void prom_putchar(char c)
