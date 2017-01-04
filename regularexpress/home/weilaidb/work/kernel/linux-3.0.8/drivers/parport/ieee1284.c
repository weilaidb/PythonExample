#undef DEBUG
#undef DEBUG
#define DPRINTK(stuff...) printk (stuff)
#define DPRINTK(stuff...)
static void parport_ieee1284_wakeup (struct parport *port)
static struct parport *port_from_cookie[PARPORT_MAX];
static void timeout_waiting_on_port (unsigned long cookie)
int parport_wait_event (struct parport *port, signed long timeout)
int parport_poll_peripheral(struct parport *port,
unsigned char mask,
unsigned char result,
int usec)
int parport_wait_peripheral(struct parport *port,
unsigned char mask,
unsigned char result)
static void parport_ieee1284_terminate (struct parport *port)
int parport_negotiate (struct parport *port, int mode)
static int parport_ieee1284_ack_data_avail (struct parport *port)
void parport_ieee1284_interrupt (void *handle)
ssize_t parport_write (struct parport *port, const void *buffer, size_t len)
ssize_t parport_read (struct parport *port, void *buffer, size_t len)
long parport_set_timeout (struct pardevice *dev, long inactivity)
EXPORT_SYMBOL(parport_negotiate);
EXPORT_SYMBOL(parport_write);
EXPORT_SYMBOL(parport_read);
EXPORT_SYMBOL(parport_wait_peripheral);
EXPORT_SYMBOL(parport_wait_event);
EXPORT_SYMBOL(parport_set_timeout);
EXPORT_SYMBOL(parport_ieee1284_interrupt);
