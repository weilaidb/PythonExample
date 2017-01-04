static int ce4100_i8042_detect(void)
static unsigned int mem_serial_in(struct uart_port *p, int offset)
static unsigned int ce4100_mem_serial_in(struct uart_port *p, int offset)
static void ce4100_mem_serial_out(struct uart_port *p, int offset, int value)
static void ce4100_serial_fixup(int port, struct uart_port *up,
unsigned short *capabilites)
static __init void sdv_serial_fixup(void)
static inline void sdv_serial_fixup(void);
static void __init sdv_arch_setup(void)
static void __cpuinit sdv_pci_init(void)
void __init x86_ce4100_early_setup(void)
