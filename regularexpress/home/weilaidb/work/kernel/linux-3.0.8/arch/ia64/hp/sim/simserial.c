#undef SIMSERIAL_DEBUG
#define KEYBOARD_INTR	3
#define NR_PORTS	1
#define IRQ_T(info) ((info->flags & ASYNC_SHARE_IRQ) ? IRQF_SHARED : IRQF_DISABLED)
#define SSC_GETCHAR	21
extern long ia64_ssc (long, long, long, long, int);
extern void ia64_ssc_connect_irq (long intr, long irq);
static char *serial_name = "SimSerial driver";
static char *serial_version = "0.6";
#define BASE_BAUD ( 1843200 / 16 )
#define STD_COM_FLAGS (ASYNC_BOOT_AUTOCONF | ASYNC_SKIP_TEST)
static struct serial_state rs_table[NR_PORTS]=;
static struct serial_uart_config uart_config[] = ;
struct tty_driver *hp_simserial_driver;
static struct async_struct *IRQ_ports[NR_IRQS];
static struct console *console;
static unsigned char *tmp_buf;
extern struct console *console_drivers;
static void rs_stop(struct tty_struct *tty)
static void rs_start(struct tty_struct *tty)
static  void receive_chars(struct tty_struct *tty)
static irqreturn_t rs_interrupt_single(int irq, void *dev_id)
static void do_softint(struct work_struct *private_)
static int rs_put_char(struct tty_struct *tty, unsigned char ch)
static void transmit_chars(struct async_struct *info, int *intr_done)
static void rs_flush_chars(struct tty_struct *tty)
static int rs_write(struct tty_struct * tty,
const unsigned char *buf, int count)
static int rs_write_room(struct tty_struct *tty)
static int rs_chars_in_buffer(struct tty_struct *tty)
static void rs_flush_buffer(struct tty_struct *tty)
static void rs_send_xchar(struct tty_struct *tty, char ch)
static void rs_throttle(struct tty_struct * tty)
static void rs_unthrottle(struct tty_struct * tty)
static int rs_ioctl(struct tty_struct *tty, unsigned int cmd, unsigned long arg)
#define RELEVANT_IFLAG(iflag) (iflag & (IGNBRK|BRKINT|IGNPAR|PARMRK|INPCK))
static void rs_set_termios(struct tty_struct *tty, struct ktermios *old_termios)
static void shutdown(struct async_struct * info)
static void rs_close(struct tty_struct *tty, struct file * filp)
static void rs_wait_until_sent(struct tty_struct *tty, int timeout)
static void rs_hangup(struct tty_struct *tty)
static int get_async_struct(int line, struct async_struct **ret_info)
static int
startup(struct async_struct *info)
static int rs_open(struct tty_struct *tty, struct file * filp)
static inline void line_info(struct seq_file *m, struct serial_state *state)
static int rs_proc_show(struct seq_file *m, void *v)
static int rs_proc_open(struct inode *inode, struct file *file)
static const struct file_operations rs_proc_fops = ;
static inline void show_serial_version(void)
static const struct tty_operations hp_ops = ;
static int __init
simrs_init (void)
__initcall(simrs_init);
