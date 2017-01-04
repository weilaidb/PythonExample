#undef DEBUG
#define DPRINTK(stuff...) printk(stuff)
#define DPRINTK(stuff...)
static struct daisydev  *topology = NULL;
static DEFINE_SPINLOCK(topology_lock);
static int numdevs = 0;
static int mux_present(struct parport *port);
static int num_mux_ports(struct parport *port);
static int select_port(struct parport *port);
static int assign_addrs(struct parport *port);
static void add_dev(int devnum, struct parport *port, int daisy)
static struct parport *clone_parport(struct parport *real, int muxport)
int parport_daisy_init(struct parport *port)
void parport_daisy_fini(struct parport *port)
struct pardevice *parport_open(int devnum, const char *name)
void parport_close(struct pardevice *dev)
static int cpp_daisy(struct parport *port, int cmd)
static int cpp_mux(struct parport *port, int cmd)
void parport_daisy_deselect_all(struct parport *port)
int parport_daisy_select(struct parport *port, int daisy, int mode)
static int mux_present(struct parport *port)
static int num_mux_ports(struct parport *port)
static int select_port(struct parport *port)
static int assign_addrs(struct parport *port)
