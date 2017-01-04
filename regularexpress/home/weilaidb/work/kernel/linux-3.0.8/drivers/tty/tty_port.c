void tty_port_init(struct tty_port *port)
EXPORT_SYMBOL(tty_port_init);
int tty_port_alloc_xmit_buf(struct tty_port *port)
EXPORT_SYMBOL(tty_port_alloc_xmit_buf);
void tty_port_free_xmit_buf(struct tty_port *port)
EXPORT_SYMBOL(tty_port_free_xmit_buf);
static void tty_port_destructor(struct kref *kref)
void tty_port_put(struct tty_port *port)
EXPORT_SYMBOL(tty_port_put);
struct tty_struct *tty_port_tty_get(struct tty_port *port)
EXPORT_SYMBOL(tty_port_tty_get);
void tty_port_tty_set(struct tty_port *port, struct tty_struct *tty)
EXPORT_SYMBOL(tty_port_tty_set);
static void tty_port_shutdown(struct tty_port *port)
void tty_port_hangup(struct tty_port *port)
EXPORT_SYMBOL(tty_port_hangup);
int tty_port_carrier_raised(struct tty_port *port)
EXPORT_SYMBOL(tty_port_carrier_raised);
void tty_port_raise_dtr_rts(struct tty_port *port)
EXPORT_SYMBOL(tty_port_raise_dtr_rts);
void tty_port_lower_dtr_rts(struct tty_port *port)
EXPORT_SYMBOL(tty_port_lower_dtr_rts);
int tty_port_block_til_ready(struct tty_port *port,
struct tty_struct *tty, struct file *filp)
EXPORT_SYMBOL(tty_port_block_til_ready);
int tty_port_close_start(struct tty_port *port,
struct tty_struct *tty, struct file *filp)
EXPORT_SYMBOL(tty_port_close_start);
void tty_port_close_end(struct tty_port *port, struct tty_struct *tty)
EXPORT_SYMBOL(tty_port_close_end);
void tty_port_close(struct tty_port *port, struct tty_struct *tty,
struct file *filp)
EXPORT_SYMBOL(tty_port_close);
int tty_port_open(struct tty_port *port, struct tty_struct *tty,
struct file *filp)
EXPORT_SYMBOL(tty_port_open);
