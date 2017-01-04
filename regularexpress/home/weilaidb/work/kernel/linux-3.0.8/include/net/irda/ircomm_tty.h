#define IRCOMM_TTY_H
#define IRCOMM_TTY_PORTS 32
#define IRCOMM_TTY_MAGIC 0x3432
#define IRCOMM_TTY_MAJOR 161
#define IRCOMM_TTY_MINOR 0
#define IRCOMM_TTY_HDR_UNINITIALISED	16
#define IRCOMM_TTY_DATA_UNINITIALISED	(64 - IRCOMM_TTY_HDR_UNINITIALISED)
#define ASYNC_B_INITIALIZED	31
#define ASYNC_B_NORMAL_ACTIVE	29
#define ASYNC_B_CLOSING		27
struct ircomm_tty_cb ;
void ircomm_tty_start(struct tty_struct *tty);
void ircomm_tty_check_modem_status(struct ircomm_tty_cb *self);
extern int ircomm_tty_tiocmget(struct tty_struct *tty);
extern int ircomm_tty_tiocmset(struct tty_struct *tty,
unsigned int set, unsigned int clear);
extern int ircomm_tty_ioctl(struct tty_struct *tty,
unsigned int cmd, unsigned long arg);
extern void ircomm_tty_set_termios(struct tty_struct *tty,
struct ktermios *old_termios);
