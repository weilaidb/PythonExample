int early_serial_base;
#define XMTRDY          0x20
#define TXR             0
#define LSR             5
static void __attribute__((section(".inittext"))) serial_putchar(int ch)
static void __attribute__((section(".inittext"))) bios_putchar(int ch)
void __attribute__((section(".inittext"))) putchar(int ch)
void __attribute__((section(".inittext"))) puts(const char *str)
static u8 gettime(void)
int getchar(void)
static int kbd_pending(void)
void kbd_flush(void)
int getchar_timeout(void)
