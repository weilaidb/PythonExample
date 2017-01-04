MODULE_AUTHOR("David Hinds <dahinds@users.sourceforge.net>");
MODULE_DESCRIPTION("Databook TCIC-2 PCMCIA socket driver");
MODULE_LICENSE("Dual MPL/GPL");
static unsigned long tcic_base = TCIC_BASE;
static int ignore = -1;
static int do_scan = 1;
static u_int irq_mask = 0xffff;
static int irq_list[16];
static unsigned int irq_list_count;
static int cs_irq;
static int poll_interval;
static int poll_quick = HZ/20;
static int cycle_time = 70;
module_param(tcic_base, ulong, 0444);
module_param(ignore, int, 0444);
module_param(do_scan, int, 0444);
module_param(irq_mask, int, 0444);
module_param_array(irq_list, int, &irq_list_count, 0444);
module_param(cs_irq, int, 0444);
module_param(poll_interval, int, 0444);
module_param(poll_quick, int, 0444);
module_param(cycle_time, int, 0444);
static irqreturn_t tcic_interrupt(int irq, void *dev);
static void tcic_timer(u_long data);
static struct pccard_operations tcic_operations;
struct tcic_socket ;
static struct timer_list poll_timer;
static int tcic_timer_pending;
static int sockets;
static struct tcic_socket socket_table[2];
#define TCIC_IRQ(x) ((x) ? (((x) == 11) ? 1 : (x)) : 15)
static u_char tcic_getb(u_char reg)
static u_short tcic_getw(u_char reg)
static void tcic_setb(u_char reg, u_char data)
static void tcic_setw(u_char reg, u_short data)
#define tcic_getb(reg) inb(tcic_base+reg)
#define tcic_getw(reg) inw(tcic_base+reg)
#define tcic_setb(reg, data) outb(data, tcic_base+reg)
#define tcic_setw(reg, data) outw(data, tcic_base+reg)
static void tcic_setl(u_char reg, u_int data)
static void tcic_aux_setb(u_short reg, u_char data)
static u_short tcic_aux_getw(u_short reg)
static void tcic_aux_setw(u_short reg, u_short data)
static int to_cycles(int ns)
static volatile u_int irq_hits;
static irqreturn_t __init tcic_irq_count(int irq, void *dev)
static u_int __init try_irq(int irq)
static u_int __init irq_scan(u_int mask0)
static int __init is_active(int s)
static int __init get_tcic_id(void)
static struct platform_driver tcic_driver = ;
static struct platform_device tcic_device = ;
static int __init init_tcic(void)
static void __exit exit_tcic(void)
static irqreturn_t tcic_interrupt(int irq, void *dev)
static void tcic_timer(u_long data)
static int tcic_get_status(struct pcmcia_socket *sock, u_int *value)
static int tcic_set_socket(struct pcmcia_socket *sock, socket_state_t *state)
static int tcic_set_io_map(struct pcmcia_socket *sock, struct pccard_io_map *io)
static int tcic_set_mem_map(struct pcmcia_socket *sock, struct pccard_mem_map *mem)
static int tcic_init(struct pcmcia_socket *s)
static struct pccard_operations tcic_operations = ;
module_init(init_tcic);
module_exit(exit_tcic);
