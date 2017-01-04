#undef DEBUG
#undef DEBUG_HARD
#undef USE_CTRL_O_SYSRQ
#define of_machine_is_compatible(x) (0)
#if defined (CONFIG_SERIAL_PMACZILOG_CONSOLE) && defined(CONFIG_MAGIC_SYSRQ)
#define SUPPORT_SYSRQ
#undef HAS_DBDMA
static char version[] __initdata = "pmac_zilog: 0.6 (Benjamin Herrenschmidt <benh@kernel.crashing.org>)";
MODULE_AUTHOR("Benjamin Herrenschmidt <benh@kernel.crashing.org>");
MODULE_DESCRIPTION("Driver for the Mac and PowerMac serial ports.");
MODULE_LICENSE("GPL");
#define PMACZILOG_MAJOR		TTY_MAJOR
#define PMACZILOG_MINOR		64
#define PMACZILOG_NAME		"ttyS"
#define PMACZILOG_MAJOR		204
#define PMACZILOG_MINOR		192
#define PMACZILOG_NAME		"ttyPZ"
static struct uart_pmac_port	pmz_ports[MAX_ZS_PORTS];
static int			pmz_ports_count;
static DEFINE_MUTEX(pmz_irq_mutex);
static struct uart_driver pmz_uart_reg = ;
static void pmz_load_zsregs(struct uart_pmac_port *uap, u8 *regs)
static void pmz_maybe_update_regs(struct uart_pmac_port *uap)
static struct tty_struct *pmz_receive_chars(struct uart_pmac_port *uap)
static void pmz_status_handle(struct uart_pmac_port *uap)
static void pmz_transmit_chars(struct uart_pmac_port *uap)
static irqreturn_t pmz_interrupt(int irq, void *dev_id)
static inline u8 pmz_peek_status(struct uart_pmac_port *uap)
static unsigned int pmz_tx_empty(struct uart_port *port)
static void pmz_set_mctrl(struct uart_port *port, unsigned int mctrl)
static unsigned int pmz_get_mctrl(struct uart_port *port)
static void pmz_stop_tx(struct uart_port *port)
static void pmz_start_tx(struct uart_port *port)
static void pmz_stop_rx(struct uart_port *port)
static void pmz_enable_ms(struct uart_port *port)
static void pmz_break_ctl(struct uart_port *port, int break_state)
static int pmz_set_scc_power(struct uart_pmac_port *uap, int state)
static int pmz_set_scc_power(struct uart_pmac_port *uap, int state)
static void pmz_fix_zero_bug_scc(struct uart_pmac_port *uap)
static int __pmz_startup(struct uart_pmac_port *uap)
static void pmz_irda_reset(struct uart_pmac_port *uap)
static int pmz_startup(struct uart_port *port)
static void pmz_shutdown(struct uart_port *port)
static void pmz_convert_to_zs(struct uart_pmac_port *uap, unsigned int cflag,
unsigned int iflag, unsigned long baud)
static void pmz_irda_setup(struct uart_pmac_port *uap, unsigned long *baud)
static void __pmz_set_termios(struct uart_port *port, struct ktermios *termios,
struct ktermios *old)
static void pmz_set_termios(struct uart_port *port, struct ktermios *termios,
struct ktermios *old)
static const char *pmz_type(struct uart_port *port)
static void pmz_release_port(struct uart_port *port)
static int pmz_request_port(struct uart_port *port)
static void pmz_config_port(struct uart_port *port, int flags)
static int pmz_verify_port(struct uart_port *port, struct serial_struct *ser)
static int pmz_poll_get_char(struct uart_port *port)
static void pmz_poll_put_char(struct uart_port *port, unsigned char c)
static struct uart_ops pmz_pops = ;
static int __init pmz_init_port(struct uart_pmac_port *uap)
static void pmz_dispose_port(struct uart_pmac_port *uap)
static int pmz_attach(struct macio_dev *mdev, const struct of_device_id *match)
static int pmz_detach(struct macio_dev *mdev)
static int pmz_suspend(struct macio_dev *mdev, pm_message_t pm_state)
static int pmz_resume(struct macio_dev *mdev)
static int __init pmz_probe(void)
extern struct platform_device scc_a_pdev, scc_b_pdev;
static int __init pmz_init_port(struct uart_pmac_port *uap)
static int __init pmz_probe(void)
static void pmz_dispose_port(struct uart_pmac_port *uap)
static int __init pmz_attach(struct platform_device *pdev)
static int __exit pmz_detach(struct platform_device *pdev)
static void pmz_console_write(struct console *con, const char *s, unsigned int count);
static int __init pmz_console_setup(struct console *co, char *options);
static struct console pmz_console = ;
#define PMACZILOG_CONSOLE	&pmz_console
#define PMACZILOG_CONSOLE	(NULL)
static int __init pmz_register(void)
static struct of_device_id pmz_match[] =
;
MODULE_DEVICE_TABLE (of, pmz_match);
static struct macio_driver pmz_driver = ;
static struct platform_driver pmz_driver = ;
static int __init init_pmz(void)
static void __exit exit_pmz(void)
static void pmz_console_putchar(struct uart_port *port, int ch)
static void pmz_console_write(struct console *con, const char *s, unsigned int count)
static int __init pmz_console_setup(struct console *co, char *options)
static int __init pmz_console_init(void)
console_initcall(pmz_console_init);
module_init(init_pmz);
module_exit(exit_pmz);
