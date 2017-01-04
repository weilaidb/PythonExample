#define GENERIC_SERIAL_H
struct real_driver ;
struct gs_port ;
#define GS_TX_INTEN      0x00800000
#define GS_RX_INTEN      0x00400000
#define GS_ACTIVE        0x00200000
#define GS_TYPE_NORMAL   1
#define GS_DEBUG_FLUSH   0x00000001
#define GS_DEBUG_BTR     0x00000002
#define GS_DEBUG_TERMIOS 0x00000004
#define GS_DEBUG_STUFF   0x00000008
#define GS_DEBUG_CLOSE   0x00000010
#define GS_DEBUG_FLOW    0x00000020
#define GS_DEBUG_WRITE   0x00000040
int gs_put_char(struct tty_struct *tty, unsigned char ch);
int  gs_write(struct tty_struct *tty,
const unsigned char *buf, int count);
int  gs_write_room(struct tty_struct *tty);
int  gs_chars_in_buffer(struct tty_struct *tty);
void gs_flush_buffer(struct tty_struct *tty);
void gs_flush_chars(struct tty_struct *tty);
void gs_stop(struct tty_struct *tty);
void gs_start(struct tty_struct *tty);
void gs_hangup(struct tty_struct *tty);
int  gs_block_til_ready(void *port, struct file *filp);
void gs_close(struct tty_struct *tty, struct file *filp);
void gs_set_termios (struct tty_struct * tty,
struct ktermios * old_termios);
int  gs_init_port(struct gs_port *port);
int  gs_setserial(struct gs_port *port, struct serial_struct __user *sp);
int  gs_getserial(struct gs_port *port, struct serial_struct __user *sp);
void gs_got_break(struct gs_port *port);
