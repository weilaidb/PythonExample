extern void pcc_ioread_byte(int, unsigned long, void *, size_t, size_t, int);
extern void pcc_ioread_word(int, unsigned long, void *, size_t, size_t, int);
extern void pcc_iowrite_byte(int, unsigned long, void *, size_t, size_t, int);
extern void pcc_iowrite_word(int, unsigned long, void *, size_t, size_t, int);
#define CFC_IOSTART	CFC_IOPORT_BASE
#define CFC_IOEND	(CFC_IOSTART + (M32R_PCC_MAPSIZE * M32R_MAX_PCC) - 1)
#if defined(CONFIG_SERIAL_8250) || defined(CONFIG_SERIAL_8250_MODULE)
#define UART0_REGSTART		0x04c20000
#define UART1_REGSTART		0x04c20100
#define UART_IOMAP_SIZE		8
#define UART0_IOSTART		0x3f8
#define UART0_IOEND		(UART0_IOSTART + UART_IOMAP_SIZE - 1)
#define UART1_IOSTART		0x2f8
#define UART1_IOEND		(UART1_IOSTART + UART_IOMAP_SIZE - 1)
#define PORT2ADDR(port)	_port2addr(port)
static inline void *_port2addr(unsigned long port)
static inline void delay(void)
unsigned char _inb(unsigned long port)
unsigned short _inw(unsigned long port)
unsigned long _inl(unsigned long port)
unsigned char _inb_p(unsigned long port)
unsigned short _inw_p(unsigned long port)
unsigned long _inl_p(unsigned long port)
void _outb(unsigned char b, unsigned long port)
void _outw(unsigned short w, unsigned long port)
void _outl(unsigned long l, unsigned long port)
void _outb_p(unsigned char b, unsigned long port)
void _outw_p(unsigned short w, unsigned long port)
void _outl_p(unsigned long l, unsigned long port)
void _insb(unsigned int port, void * addr, unsigned long count)
void _insw(unsigned int port, void * addr, unsigned long count)
void _insl(unsigned int port, void * addr, unsigned long count)
void _outsb(unsigned int port, const void * addr, unsigned long count)
void _outsw(unsigned int port, const void * addr, unsigned long count)
void _outsl(unsigned int port, const void * addr, unsigned long count)
