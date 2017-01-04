#define UART_BASE	((void __iomem *)CKSEG1ADDR(0x1c800000))
void prom_putchar(char c)
