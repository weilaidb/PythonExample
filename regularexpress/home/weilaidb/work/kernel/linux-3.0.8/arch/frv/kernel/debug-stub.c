#define __UART0(X) (*(volatile uint8_t *)(UART0_BASE + (UART_##X)))
#define LSR_WAIT_FOR0(STATE)			\
do  while (!(__UART0(LSR) & UART_LSR_##STATE))
#define FLOWCTL_QUERY0(LINE)	()
#define FLOWCTL_CLEAR0(LINE)	do  while (0)
#define FLOWCTL_SET0(LINE)	do  while (0)
#define FLOWCTL_WAIT_FOR0(LINE)			\
do  while(!FLOWCTL_QUERY(LINE))
struct frv_debug_status __debug_status;
static void __init debug_stub_init(void);
asmlinkage void debug_stub(void)
static void __init debug_stub_init(void)
void debug_stub_exit(int status)
void debug_to_serial(const char *p, int n)
void debug_to_serial2(const char *fmt, ...)
void __init console_set_baud(unsigned baud)
int __init console_get_baud(void)
void __debug_bug_printk(const char *file, unsigned line)
