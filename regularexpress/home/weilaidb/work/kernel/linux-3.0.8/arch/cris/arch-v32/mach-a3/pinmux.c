#undef DEBUG
#define PINS 80
#define PORT_PINS 32
#define PORTS 3
static char pins[PINS];
static DEFINE_SPINLOCK(pinmux_lock);
static void crisv32_pinmux_set(int port);
int
crisv32_pinmux_init(void)
int
crisv32_pinmux_alloc(int port, int first_pin, int last_pin, enum pin_mode mode)
int
crisv32_pinmux_alloc_fixed(enum fixed_function function)
void
crisv32_pinmux_set(int port)
int
crisv32_pinmux_dealloc(int port, int first_pin, int last_pin)
int
crisv32_pinmux_dealloc_fixed(enum fixed_function function)
void
crisv32_pinmux_dump(void)
__initcall(crisv32_pinmux_init);
