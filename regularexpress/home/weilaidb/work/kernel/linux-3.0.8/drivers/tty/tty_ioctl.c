#undef TTY_DEBUG_WAIT_UNTIL_SENT
#undef	DEBUG
#define TERMIOS_FLUSH	1
#define TERMIOS_WAIT	2
#define TERMIOS_TERMIO	4
#define TERMIOS_OLD	8
int tty_chars_in_buffer(struct tty_struct *tty)
EXPORT_SYMBOL(tty_chars_in_buffer);
int tty_write_room(struct tty_struct *tty)
EXPORT_SYMBOL(tty_write_room);
void tty_driver_flush_buffer(struct tty_struct *tty)
EXPORT_SYMBOL(tty_driver_flush_buffer);
void tty_throttle(struct tty_struct *tty)
EXPORT_SYMBOL(tty_throttle);
void tty_unthrottle(struct tty_struct *tty)
EXPORT_SYMBOL(tty_unthrottle);
void tty_wait_until_sent(struct tty_struct *tty, long timeout)
EXPORT_SYMBOL(tty_wait_until_sent);
static void unset_locked_termios(struct ktermios *termios,
struct ktermios *old,
struct ktermios *locked)
static const speed_t baud_table[] = ;
static const tcflag_t baud_bits[] = ;
static const tcflag_t baud_bits[] = ;
static int n_baud_table = ARRAY_SIZE(baud_table);
speed_t tty_termios_baud_rate(struct ktermios *termios)
EXPORT_SYMBOL(tty_termios_baud_rate);
speed_t tty_termios_input_baud_rate(struct ktermios *termios)
EXPORT_SYMBOL(tty_termios_input_baud_rate);
void tty_termios_encode_baud_rate(struct ktermios *termios,
speed_t ibaud, speed_t obaud)
EXPORT_SYMBOL_GPL(tty_termios_encode_baud_rate);
void tty_encode_baud_rate(struct tty_struct *tty, speed_t ibaud, speed_t obaud)
EXPORT_SYMBOL_GPL(tty_encode_baud_rate);
speed_t tty_get_baud_rate(struct tty_struct *tty)
EXPORT_SYMBOL(tty_get_baud_rate);
void tty_termios_copy_hw(struct ktermios *new, struct ktermios *old)
EXPORT_SYMBOL(tty_termios_copy_hw);
int tty_termios_hw_change(struct ktermios *a, struct ktermios *b)
EXPORT_SYMBOL(tty_termios_hw_change);
int tty_set_termios(struct tty_struct *tty, struct ktermios *new_termios)
EXPORT_SYMBOL_GPL(tty_set_termios);
static int set_termios(struct tty_struct *tty, void __user *arg, int opt)
else if (user_termios_to_kernel_termios(&tmp_termios,
(struct termios __user *)arg))
return -EFAULT;
tmp_termios.c_ispeed = tty_termios_input_baud_rate(&tmp_termios);
tmp_termios.c_ospeed = tty_termios_baud_rate(&tmp_termios);
ld = tty_ldisc_ref(tty);
if (ld != NULL)
if (opt & TERMIOS_WAIT)
tty_set_termios(tty, &tmp_termios);
return 0;
}
static void copy_termios(struct tty_struct *tty, struct ktermios *kterm)
static void copy_termios_locked(struct tty_struct *tty, struct ktermios *kterm)
static int get_termio(struct tty_struct *tty, struct termio __user *termio)
static int set_termiox(struct tty_struct *tty, void __user *arg, int opt)
static int get_sgflags(struct tty_struct *tty)
static int get_sgttyb(struct tty_struct *tty, struct sgttyb __user *sgttyb)
static void set_sgflags(struct ktermios *termios, int flags)
static int set_sgttyb(struct tty_struct *tty, struct sgttyb __user *sgttyb)
static int get_tchars(struct tty_struct *tty, struct tchars __user *tchars)
static int set_tchars(struct tty_struct *tty, struct tchars __user *tchars)
static int get_ltchars(struct tty_struct *tty, struct ltchars __user *ltchars)
static int set_ltchars(struct tty_struct *tty, struct ltchars __user *ltchars)
static int send_prio_char(struct tty_struct *tty, char ch)
static int tty_change_softcar(struct tty_struct *tty, int arg)
int tty_mode_ioctl(struct tty_struct *tty, struct file *file,
unsigned int cmd, unsigned long arg)
EXPORT_SYMBOL_GPL(tty_mode_ioctl);
int tty_perform_flush(struct tty_struct *tty, unsigned long arg)
EXPORT_SYMBOL_GPL(tty_perform_flush);
int n_tty_ioctl_helper(struct tty_struct *tty, struct file *file,
unsigned int cmd, unsigned long arg)
EXPORT_SYMBOL(n_tty_ioctl_helper);
