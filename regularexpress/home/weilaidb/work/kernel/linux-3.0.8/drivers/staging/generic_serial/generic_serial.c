#define DEBUG
static int gs_debug;
#define gs_dprintk(f, str...) if (gs_debug & f) printk (str)
#define gs_dprintk(f, str...)
#define func_enter() gs_dprintk (GS_DEBUG_FLOW, "gs: enter %s\n", __func__)
#define func_exit()  gs_dprintk (GS_DEBUG_FLOW, "gs: exit  %s\n", __func__)
#define RS_EVENT_WRITE_WAKEUP	1
module_param(gs_debug, int, 0644);
int gs_put_char(struct tty_struct * tty, unsigned char ch)
int gs_write(struct tty_struct * tty,
const unsigned char *buf, int count)
int gs_write_room(struct tty_struct * tty)
int gs_chars_in_buffer(struct tty_struct *tty)
static int gs_real_chars_in_buffer(struct tty_struct *tty)
static int gs_wait_tx_flushed (void * ptr, unsigned long timeout)
void gs_flush_buffer(struct tty_struct *tty)
void gs_flush_chars(struct tty_struct * tty)
void gs_stop(struct tty_struct * tty)
void gs_start(struct tty_struct * tty)
static void gs_shutdown_port (struct gs_port *port)
void gs_hangup(struct tty_struct *tty)
int gs_block_til_ready(void *port_, struct file * filp)
void gs_close(struct tty_struct * tty, struct file * filp)
void gs_set_termios (struct tty_struct * tty,
struct ktermios * old_termios)
int gs_init_port(struct gs_port *port)
int gs_setserial(struct gs_port *port, struct serial_struct __user *sp)
int gs_getserial(struct gs_port *port, struct serial_struct __user *sp)
void gs_got_break(struct gs_port *port)
EXPORT_SYMBOL(gs_put_char);
EXPORT_SYMBOL(gs_write);
EXPORT_SYMBOL(gs_write_room);
EXPORT_SYMBOL(gs_chars_in_buffer);
EXPORT_SYMBOL(gs_flush_buffer);
EXPORT_SYMBOL(gs_flush_chars);
EXPORT_SYMBOL(gs_stop);
EXPORT_SYMBOL(gs_start);
EXPORT_SYMBOL(gs_hangup);
EXPORT_SYMBOL(gs_block_til_ready);
EXPORT_SYMBOL(gs_close);
EXPORT_SYMBOL(gs_set_termios);
EXPORT_SYMBOL(gs_init_port);
EXPORT_SYMBOL(gs_setserial);
EXPORT_SYMBOL(gs_getserial);
EXPORT_SYMBOL(gs_got_break);
MODULE_LICENSE("GPL");
