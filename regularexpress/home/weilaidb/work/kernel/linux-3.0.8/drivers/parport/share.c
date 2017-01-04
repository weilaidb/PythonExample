#undef PARPORT_DEBUG_SHARING
#undef PARPORT_PARANOID
#define PARPORT_DEFAULT_TIMESLICE	(HZ/5)
unsigned long parport_default_timeslice = PARPORT_DEFAULT_TIMESLICE;
int parport_default_spintime =  DEFAULT_SPIN_TIME;
static LIST_HEAD(portlist);
static DEFINE_SPINLOCK(parportlist_lock);
static LIST_HEAD(all_ports);
static DEFINE_SPINLOCK(full_list_lock);
static LIST_HEAD(drivers);
static DEFINE_MUTEX(registration_lock);
static void dead_write_lines (struct parport *p, unsigned char b)
static unsigned char dead_read_lines (struct parport *p)
static unsigned char dead_frob_lines (struct parport *p, unsigned char b,
unsigned char c)
static void dead_onearg (struct parport *p)
static void dead_initstate (struct pardevice *d, struct parport_state *s)
static void dead_state (struct parport *p, struct parport_state *s)
static size_t dead_write (struct parport *p, const void *b, size_t l, int f)
static size_t dead_read (struct parport *p, void *b, size_t l, int f)
static struct parport_operations dead_ops = ;
static void attach_driver_chain(struct parport *port)
static void detach_driver_chain(struct parport *port)
static void get_lowlevel_driver (void)
int parport_register_driver (struct parport_driver *drv)
void parport_unregister_driver (struct parport_driver *drv)
static void free_port (struct parport *port)
struct parport *parport_get_port (struct parport *port)
void parport_put_port (struct parport *port)
struct parport *parport_register_port(unsigned long base, int irq, int dma,
struct parport_operations *ops)
void parport_announce_port (struct parport *port)
void parport_remove_port(struct parport *port)
struct pardevice *
parport_register_device(struct parport *port, const char *name,
int (*pf)(void *), void (*kf)(void *),
void (*irq_func)(void *),
int flags, void *handle)
void parport_unregister_device(struct pardevice *dev)
struct parport *parport_find_number (int number)
struct parport *parport_find_base (unsigned long base)
int parport_claim(struct pardevice *dev)
int parport_claim_or_block(struct pardevice *dev)
void parport_release(struct pardevice *dev)
irqreturn_t parport_irq_handler(int irq, void *dev_id)
EXPORT_SYMBOL(parport_claim);
EXPORT_SYMBOL(parport_claim_or_block);
EXPORT_SYMBOL(parport_release);
EXPORT_SYMBOL(parport_register_port);
EXPORT_SYMBOL(parport_announce_port);
EXPORT_SYMBOL(parport_remove_port);
EXPORT_SYMBOL(parport_register_driver);
EXPORT_SYMBOL(parport_unregister_driver);
EXPORT_SYMBOL(parport_register_device);
EXPORT_SYMBOL(parport_unregister_device);
EXPORT_SYMBOL(parport_get_port);
EXPORT_SYMBOL(parport_put_port);
EXPORT_SYMBOL(parport_find_number);
EXPORT_SYMBOL(parport_find_base);
EXPORT_SYMBOL(parport_irq_handler);
MODULE_LICENSE("GPL");
