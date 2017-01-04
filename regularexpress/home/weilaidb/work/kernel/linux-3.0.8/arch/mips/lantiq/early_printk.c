#define LTQ_ASC_BASE	KSEG1ADDR(LTQ_ASC1_BASE_ADDR)
#define ASC_BUF		1024
#define LTQ_ASC_FSTAT	((u32 *)(LTQ_ASC_BASE + 0x0048))
#define LTQ_ASC_TBUF	((u32 *)(LTQ_ASC_BASE + 0x0020))
#define TXMASK		0x3F00
#define TXOFFSET	8
void prom_putchar(char c)
