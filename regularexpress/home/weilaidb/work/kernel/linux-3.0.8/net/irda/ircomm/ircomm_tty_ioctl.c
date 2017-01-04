#define RELEVANT_IFLAG(iflag) (iflag & (IGNBRK|BRKINT|IGNPAR|PARMRK|INPCK))
static void ircomm_tty_change_speed(struct ircomm_tty_cb *self)
void ircomm_tty_set_termios(struct tty_struct *tty,
struct ktermios *old_termios)
int ircomm_tty_tiocmget(struct tty_struct *tty)
int ircomm_tty_tiocmset(struct tty_struct *tty,
unsigned int set, unsigned int clear)
static int ircomm_tty_get_serial_info(struct ircomm_tty_cb *self,
struct serial_struct __user *retinfo)
static int ircomm_tty_set_serial_info(struct ircomm_tty_cb *self,
struct serial_struct __user *new_info)
int ircomm_tty_ioctl(struct tty_struct *tty,
unsigned int cmd, unsigned long arg)
