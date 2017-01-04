static irqreturn_t i365_count_irq(int, void *);
static inline int _check_irq(int irq, int flags)
static unsigned long i365_base = 0x3e0;
static int extra_sockets = 0;
static int ignore = -1;
static u_int irq_mask = 0xffff;
static int irq_list[16];
static unsigned int irq_list_count;
static int cs_irq = 0;
static int do_scan = 1;
static int poll_interval = 0;
static int cycle_time = 120;
static int has_dma = -1;
static int has_led = -1;
static int has_ring = -1;
static int dynamic_mode = 0;
static int freq_bypass = -1;
static int setup_time = -1;
static int cmd_time = -1;
static int recov_time = -1;
static int async_clock = -1;
static int cable_mode = -1;
static int wakeup = 0;
module_param(i365_base, ulong, 0444);
module_param(ignore, int, 0444);
module_param(extra_sockets, int, 0444);
module_param(irq_mask, int, 0444);
module_param_array(irq_list, int, &irq_list_count, 0444);
module_param(cs_irq, int, 0444);
module_param(async_clock, int, 0444);
module_param(cable_mode, int, 0444);
module_param(wakeup, int, 0444);
module_param(do_scan, int, 0444);
module_param(poll_interval, int, 0444);
module_param(cycle_time, int, 0444);
module_param(has_dma, int, 0444);
module_param(has_led, int, 0444);
module_param(has_ring, int, 0444);
module_param(dynamic_mode, int, 0444);
module_param(freq_bypass, int, 0444);
module_param(setup_time, int, 0444);
module_param(cmd_time, int, 0444);
module_param(recov_time, int, 0444);
typedef struct cirrus_state_t  cirrus_state_t;
typedef struct vg46x_state_t  vg46x_state_t;
struct i82365_socket ;
static int sockets = 0;
static struct i82365_socket socket[8] = ;
#define I365_MASK	0xdeb8
static int grab_irq;
static DEFINE_SPINLOCK(isa_lock);
#define ISA_LOCK(n, f) spin_lock_irqsave(&isa_lock, f)
#define ISA_UNLOCK(n, f) spin_unlock_irqrestore(&isa_lock, f)
static struct timer_list poll_timer;
typedef enum pcic_id  pcic_id;
#define IS_VADEM	0x0001
#define IS_CIRRUS	0x0002
#define IS_VIA		0x0010
#define IS_UNKNOWN	0x0400
#define IS_VG_PWR	0x0800
#define IS_DF_PWR	0x1000
#define IS_REGISTERED	0x2000
#define IS_ALIVE	0x8000
typedef struct pcic_t  pcic_t;
static pcic_t pcic[] = ;
#define PCIC_COUNT	(sizeof(pcic)/sizeof(pcic_t))
static DEFINE_SPINLOCK(bus_lock);
static u_char i365_get(u_short sock, u_short reg)
static void i365_set(u_short sock, u_short reg, u_char data)
static void i365_bset(u_short sock, u_short reg, u_char mask)
static void i365_bclr(u_short sock, u_short reg, u_char mask)
static void i365_bflip(u_short sock, u_short reg, u_char mask, int b)
static u_short i365_get_pair(u_short sock, u_short reg)
static void i365_set_pair(u_short sock, u_short reg, u_short data)
#define flip(v,b,f) (v = ((f)<0) ? v : ((f) ? ((v)|(b)) : ((v)&(~b))))
static void cirrus_get_state(u_short s)
static void cirrus_set_state(u_short s)
static u_int __init cirrus_set_opts(u_short s, char *buf)
static void vg46x_get_state(u_short s)
static void vg46x_set_state(u_short s)
static u_int __init vg46x_set_opts(u_short s, char *buf)
static void get_bridge_state(u_short s)
static void set_bridge_state(u_short s)
static u_int __init set_bridge_opts(u_short s, u_short ns)
static volatile u_int irq_hits;
static u_short irq_sock;
static irqreturn_t i365_count_irq(int irq, void *dev)
static u_int __init test_irq(u_short sock, int irq)
static u_int __init isa_scan(u_short sock, u_int mask0)
static int to_cycles(int ns)
static int __init identify(unsigned int port, u_short sock)
static int __init is_alive(u_short sock)
static void __init add_socket(unsigned int port, int psock, int type)
static void __init add_pcic(int ns, int type)
static struct isapnp_device_id id_table[] __initdata = ;
MODULE_DEVICE_TABLE(isapnp, id_table);
static struct pnp_dev *i82365_pnpdev;
static void __init isa_probe(void)
static irqreturn_t pcic_interrupt(int irq, void *dev)
static void pcic_interrupt_wrapper(u_long data)
static int i365_get_status(u_short sock, u_int *value)
static int i365_set_socket(u_short sock, socket_state_t *state)
static int i365_set_io_map(u_short sock, struct pccard_io_map *io)
static int i365_set_mem_map(u_short sock, struct pccard_mem_map *mem)
#define LOCKED(x) do  while (0)
static int pcic_get_status(struct pcmcia_socket *s, u_int *value)
static int pcic_set_socket(struct pcmcia_socket *s, socket_state_t *state)
static int pcic_set_io_map(struct pcmcia_socket *s, struct pccard_io_map *io)
static int pcic_set_mem_map(struct pcmcia_socket *s, struct pccard_mem_map *mem)
static int pcic_init(struct pcmcia_socket *s)
static struct pccard_operations pcic_operations = ;
static struct platform_driver i82365_driver = ;
static struct platform_device *i82365_device;
static int __init init_i82365(void)
static void __exit exit_i82365(void)
module_init(init_i82365);
module_exit(exit_i82365);
MODULE_LICENSE("Dual MPL/GPL");
