extern u8 real_readb(volatile u8 __iomem  *addr);
extern void real_writeb(u8 data, volatile u8 __iomem *addr);
extern u8 real_205_readb(volatile u8 __iomem  *addr);
extern void real_205_writeb(u8 data, volatile u8 __iomem *addr);
struct NS16550 ;
#define thr rbr
#define iir fcr
#define dll rbr
#define dlm ier
#define dlab lcr
#define LSR_DR   0x01
#define LSR_OE   0x02
#define LSR_PE   0x04
#define LSR_FE   0x08
#define LSR_BI   0x10
#define LSR_THRE 0x20
#define LSR_TEMT 0x40
#define LSR_ERR  0x80
#define LCR_DLAB 0x80
static struct NS16550 __iomem *udbg_comport;
static void udbg_550_flush(void)
static void udbg_550_putc(char c)
static int udbg_550_getc_poll(void)
static int udbg_550_getc(void)
void udbg_init_uart(void __iomem *comport, unsigned int speed,
unsigned int clock)
unsigned int udbg_probe_uart_speed(void __iomem *comport, unsigned int clock)
void udbg_maple_real_flush(void)
void udbg_maple_real_putc(char c)
void __init udbg_init_maple_realmode(void)
void udbg_pas_real_flush(void)
void udbg_pas_real_putc(char c)
void udbg_init_pas_realmode(void)
static void udbg_44x_as1_flush(void)
static void udbg_44x_as1_putc(char c)
static int udbg_44x_as1_getc(void)
void __init udbg_init_44x_as1(void)
static void udbg_40x_real_flush(void)
static void udbg_40x_real_putc(char c)
static int udbg_40x_real_getc(void)
void __init udbg_init_40x_realmode(void)
static void udbg_wsp_flush(void)
static void udbg_wsp_putc(char c)
static int udbg_wsp_getc(void)
static int udbg_wsp_getc_poll(void)
void __init udbg_init_wsp(void)
