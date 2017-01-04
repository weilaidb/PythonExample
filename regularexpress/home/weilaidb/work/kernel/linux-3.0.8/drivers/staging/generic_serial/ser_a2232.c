#undef A2232_SPEEDHACK
#define A2232_SUPPRESS_RTSCTS_WARNING
static irqreturn_t a2232_vbl_inter(int irq, void *data);
static void a2232_init_portstructs(void);
static int a2232_init_drivers(void);
static void a2232_disable_tx_interrupts(void *ptr);
static void a2232_enable_tx_interrupts(void *ptr);
static void a2232_disable_rx_interrupts(void *ptr);
static void a2232_enable_rx_interrupts(void *ptr);
static int  a2232_carrier_raised(struct tty_port *port);
static void a2232_shutdown_port(void *ptr);
static int  a2232_set_real_termios(void *ptr);
static int  a2232_chars_in_buffer(void *ptr);
static void a2232_close(void *ptr);
static void a2232_hungup(void *ptr);
static int  a2232_ioctl(struct tty_struct *tty,
unsigned int cmd, unsigned long arg);
static void a2232_throttle(struct tty_struct *tty);
static void a2232_unthrottle(struct tty_struct *tty);
static int  a2232_open(struct tty_struct * tty, struct file * filp);
static struct real_driver a2232_real_driver = ;
static void *a2232_driver_ID = &a2232_driver_ID;
static struct a2232_port a2232_ports[MAX_A2232_BOARDS*NUMLINES];
static struct tty_driver *a2232_driver;
static int nr_a2232;
static struct zorro_dev *zd_a2232[MAX_A2232_BOARDS];
static inline volatile struct a2232memory *a2232mem(unsigned int board)
static inline volatile struct a2232status *a2232stat(unsigned int board,
unsigned int portonboard)
static inline void a2232_receive_char(struct a2232_port *port, int ch, int err)
static void a2232_disable_tx_interrupts(void *ptr)
static void a2232_enable_tx_interrupts(void *ptr)
static void a2232_disable_rx_interrupts(void *ptr)
static void a2232_enable_rx_interrupts(void *ptr)
static int  a2232_carrier_raised(struct tty_port *port)
static void a2232_shutdown_port(void *ptr)
static int  a2232_set_real_termios(void *ptr)
static int  a2232_chars_in_buffer(void *ptr)
static void a2232_close(void *ptr)
static void a2232_hungup(void *ptr)
static int a2232_ioctl(	struct tty_struct *tty,
unsigned int cmd, unsigned long arg)
static void a2232_throttle(struct tty_struct *tty)
static void a2232_unthrottle(struct tty_struct *tty)
static int  a2232_open(struct tty_struct * tty, struct file * filp)
static irqreturn_t a2232_vbl_inter(int irq, void *data)
static const struct tty_port_operations a2232_port_ops = ;
static void a2232_init_portstructs(void)
static const struct tty_operations a2232_ops = ;
static int a2232_init_drivers(void)
static int __init a2232board_init(void)
static void __exit a2232board_exit(void)
module_init(a2232board_init);
module_exit(a2232board_exit);
MODULE_AUTHOR("Enver Haase");
MODULE_DESCRIPTION("Amiga A2232 multi-serial board driver");
MODULE_LICENSE("GPL");
