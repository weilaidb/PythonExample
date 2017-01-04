#if defined(CONFIG_SERIAL_ZS_CONSOLE) && defined(CONFIG_MAGIC_SYSRQ)
#define SUPPORT_SYSRQ
MODULE_AUTHOR("Maciej W. Rozycki <macro@linux-mips.org>");
MODULE_DESCRIPTION("DECstation Z85C30 serial driver");
MODULE_LICENSE("GPL");
static char zs_name[] __initdata = "DECstation Z85C30 serial driver version ";
static char zs_version[] __initdata = "0.10";
#define ZS_NUM_SCCS	2
#define ZS_NUM_CHAN	2
#define ZS_CHAN_A	0
#define ZS_CHAN_B	1
#define ZS_CHAN_IO_SIZE 8
#define ZS_CHAN_IO_STRIDE 4
#define ZS_CHAN_IO_OFFSET 1
#define ZS_CLOCK        7372800
#define to_zport(uport) container_of(uport, struct zs_port, port)
struct zs_parms ;
static struct zs_scc zs_sccs[ZS_NUM_SCCS];
static u8 zs_init_regs[ZS_NUM_REGS] __initdata = ;
#undef ZS_DEBUG_REGS
static void recovery_delay(void)
static u8 read_zsreg(struct zs_port *zport, int reg)
static void write_zsreg(struct zs_port *zport, int reg, u8 value)
static u8 read_zsdata(struct zs_port *zport)
static void write_zsdata(struct zs_port *zport, u8 value)
void zs_dump(void)
static void zs_spin_lock_cond_irq(spinlock_t *lock, int irq)
static void zs_spin_unlock_cond_irq(spinlock_t *lock, int irq)
static int zs_receive_drain(struct zs_port *zport)
static int zs_transmit_drain(struct zs_port *zport, int irq)
static int zs_line_drain(struct zs_port *zport, int irq)
static void load_zsregs(struct zs_port *zport, u8 *regs, int irq)
static unsigned int zs_tx_empty(struct uart_port *uport)
static unsigned int zs_raw_get_ab_mctrl(struct zs_port *zport_a,
struct zs_port *zport_b)
static unsigned int zs_raw_get_mctrl(struct zs_port *zport)
static unsigned int zs_raw_xor_mctrl(struct zs_port *zport)
static unsigned int zs_get_mctrl(struct uart_port *uport)
static void zs_set_mctrl(struct uart_port *uport, unsigned int mctrl)
static void zs_raw_stop_tx(struct zs_port *zport)
static void zs_stop_tx(struct uart_port *uport)
static void zs_raw_transmit_chars(struct zs_port *);
static void zs_start_tx(struct uart_port *uport)
static void zs_stop_rx(struct uart_port *uport)
static void zs_enable_ms(struct uart_port *uport)
static void zs_break_ctl(struct uart_port *uport, int break_state)
#define Rx_BRK 0x0100
#define Rx_SYS 0x0200
static void zs_receive_chars(struct zs_port *zport)
static void zs_raw_transmit_chars(struct zs_port *zport)
static void zs_transmit_chars(struct zs_port *zport)
static void zs_status_handle(struct zs_port *zport, struct zs_port *zport_a)
static irqreturn_t zs_interrupt(int irq, void *dev_id)
static int zs_startup(struct uart_port *uport)
static void zs_shutdown(struct uart_port *uport)
static void zs_reset(struct zs_port *zport)
static void zs_set_termios(struct uart_port *uport, struct ktermios *termios,
struct ktermios *old_termios)
static void zs_pm(struct uart_port *uport, unsigned int state,
unsigned int oldstate)
static const char *zs_type(struct uart_port *uport)
static void zs_release_port(struct uart_port *uport)
static int zs_map_port(struct uart_port *uport)
static int zs_request_port(struct uart_port *uport)
static void zs_config_port(struct uart_port *uport, int flags)
static int zs_verify_port(struct uart_port *uport, struct serial_struct *ser)
static struct uart_ops zs_ops = ;
static int __init zs_probe_sccs(void)
static void zs_console_putchar(struct uart_port *uport, int ch)
static void zs_console_write(struct console *co, const char *s,
unsigned int count)
static int __init zs_console_setup(struct console *co, char *options)
static struct uart_driver zs_reg;
static struct console zs_console = ;
static int __init zs_serial_console_init(void)
console_initcall(zs_serial_console_init);
#define SERIAL_ZS_CONSOLE	&zs_console
#define SERIAL_ZS_CONSOLE	NULL
static struct uart_driver zs_reg = ;
static int __init zs_init(void)
static void __exit zs_exit(void)
module_init(zs_init);
module_exit(zs_exit);
