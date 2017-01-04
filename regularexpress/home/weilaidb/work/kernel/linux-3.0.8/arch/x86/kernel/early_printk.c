#define VGABASE		(__ISA_IO_base + 0xb8000)
static int max_ypos = 25, max_xpos = 80;
static int current_ypos = 25, current_xpos;
static void early_vga_write(struct console *con, const char *str, unsigned n)
static struct console early_vga_console = ;
static int early_serial_base = 0x3f8;
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
static int early_serial_putc(unsigned char ch)
static void early_serial_write(struct console *con, const char *s, unsigned n)
#define DEFAULT_BAUD 9600
static __init void early_serial_init(char *s)
static struct console early_serial_console = ;
static struct console *early_console = &early_vga_console;
static int __initdata early_console_initialized;
asmlinkage void early_printk(const char *fmt, ...)
static inline void early_console_register(struct console *con, int keep_early)
static int __init setup_early_printk(char *buf)
early_param("earlyprintk", setup_early_printk);
