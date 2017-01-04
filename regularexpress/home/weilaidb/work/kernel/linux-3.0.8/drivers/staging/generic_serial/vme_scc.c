#define CHANNEL_A	0
#define CHANNEL_B	1
#define SCC_MINOR_BASE	64
static unsigned char scc_shadow[2][16];
static volatile unsigned char *scc_del = NULL;
static unsigned char scc_last_status_reg[2];
static void scc_disable_tx_interrupts(void * ptr);
static void scc_enable_tx_interrupts(void * ptr);
static void scc_disable_rx_interrupts(void * ptr);
static void scc_enable_rx_interrupts(void * ptr);
static int  scc_carrier_raised(struct tty_port *port);
static void scc_shutdown_port(void * ptr);
static int scc_set_real_termios(void  *ptr);
static void scc_hungup(void  *ptr);
static void scc_close(void  *ptr);
static int scc_chars_in_buffer(void * ptr);
static int scc_open(struct tty_struct * tty, struct file * filp);
static int scc_ioctl(struct tty_struct * tty,
unsigned int cmd, unsigned long arg);
static void scc_throttle(struct tty_struct *tty);
static void scc_unthrottle(struct tty_struct *tty);
static irqreturn_t scc_tx_int(int irq, void *data);
static irqreturn_t scc_rx_int(int irq, void *data);
static irqreturn_t scc_stat_int(int irq, void *data);
static irqreturn_t scc_spcond_int(int irq, void *data);
static void scc_setsignals(struct scc_port *port, int dtr, int rts);
static int scc_break_ctl(struct tty_struct *tty, int break_state);
static struct tty_driver *scc_driver;
static struct scc_port scc_ports[2];
static struct real_driver scc_real_driver = ;
static const struct tty_operations scc_ops = ;
static const struct tty_port_operations scc_port_ops = ;
static int __init scc_init_drivers(void)
static void __init scc_init_portstructs(void)
static int __init mvme147_scc_init(void)
static int __init mvme162_scc_init(void)
static int __init bvme6000_scc_init(void)
static int __init vme_scc_init(void)
module_init(vme_scc_init);
static irqreturn_t scc_rx_int(int irq, void *data)
static irqreturn_t scc_spcond_int(int irq, void *data)
static irqreturn_t scc_tx_int(int irq, void *data)
static irqreturn_t scc_stat_int(int irq, void *data)
static void scc_disable_tx_interrupts(void *ptr)
static void scc_enable_tx_interrupts(void *ptr)
static void scc_disable_rx_interrupts(void *ptr)
static void scc_enable_rx_interrupts(void *ptr)
static int scc_carrier_raised(struct tty_port *port)
static void scc_shutdown_port(void *ptr)
static int scc_set_real_termios (void *ptr)
static int scc_chars_in_buffer (void *ptr)
static void scc_hungup(void *ptr)
static void scc_close(void *ptr)
static void scc_setsignals(struct scc_port *port, int dtr, int rts)
static void scc_send_xchar(struct tty_struct *tty, char ch)
static int scc_open (struct tty_struct * tty, struct file * filp)
static void scc_throttle (struct tty_struct * tty)
static void scc_unthrottle (struct tty_struct * tty)
static int scc_ioctl(struct tty_struct *tty,
unsigned int cmd, unsigned long arg)
static int scc_break_ctl(struct tty_struct *tty, int break_state)
#define scc_delay() do  while (0)
static void scc_ch_write (char ch)
static void scc_console_write (struct console *co, const char *str, unsigned count)
static struct tty_driver *scc_console_device(struct console *c, int *index)
static struct console sercons = ;
static int __init vme_scc_console_init(void)
console_initcall(vme_scc_console_init);
