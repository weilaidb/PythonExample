struct port_list ;
struct port_dev ;
struct connection ;
static irqreturn_t pipe_interrupt(int irq, void *data)
#define NO_WAITER_MSG \
"****\n" \
"There are currently no UML consoles waiting for port connections.\n" \
"Either disconnect from one to make it available or activate some more\n" \
"by enabling more consoles in the UML /etc/inittab.\n" \
"****\n"
static int port_accept(struct port_list *port)
static DEFINE_MUTEX(ports_mutex);
static LIST_HEAD(ports);
static void port_work_proc(struct work_struct *unused)
DECLARE_WORK(port_work, port_work_proc);
static irqreturn_t port_interrupt(int irq, void *data)
void *port_data(int port_num)
int port_wait(void *data)
void port_remove_dev(void *d)
void port_kern_free(void *d)
static void free_port(void)
__uml_exitcall(free_port);
