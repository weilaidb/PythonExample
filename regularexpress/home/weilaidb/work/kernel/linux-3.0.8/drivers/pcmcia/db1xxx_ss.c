#define MEM_MAP_SIZE	0x400000
#define IO_MAP_SIZE	0x1000
struct db1x_pcmcia_sock ;
#define to_db1x_socket(x) container_of(x, struct db1x_pcmcia_sock, socket)
static int db1200_card_inserted(struct db1x_pcmcia_sock *sock)
static int db1000_card_inserted(struct db1x_pcmcia_sock *sock)
static int db1x_card_inserted(struct db1x_pcmcia_sock *sock)
static inline void set_stschg(struct db1x_pcmcia_sock *sock, int en)
static irqreturn_t db1000_pcmcia_cdirq(int irq, void *data)
static irqreturn_t db1000_pcmcia_stschgirq(int irq, void *data)
static irqreturn_t db1200_pcmcia_cdirq(int irq, void *data)
static int db1x_pcmcia_setup_irqs(struct db1x_pcmcia_sock *sock)
static void db1x_pcmcia_free_irqs(struct db1x_pcmcia_sock *sock)
static int db1x_pcmcia_configure(struct pcmcia_socket *skt,
struct socket_state_t *state)
#define GET_VCC(cr, socknr)		\
((((cr) >> 2) >> ((socknr) * 8)) & 3)
#define GET_VS(sr, socknr)		\
(((sr) >> (2 * (socknr))) & 3)
#define GET_RESET(cr, socknr)		\
((cr) & (1 << (7 + (8 * (socknr)))))
static int db1x_pcmcia_get_status(struct pcmcia_socket *skt,
unsigned int *value)
static int db1x_pcmcia_sock_init(struct pcmcia_socket *skt)
static int db1x_pcmcia_sock_suspend(struct pcmcia_socket *skt)
static int au1x00_pcmcia_set_io_map(struct pcmcia_socket *skt,
struct pccard_io_map *map)
static int au1x00_pcmcia_set_mem_map(struct pcmcia_socket *skt,
struct pccard_mem_map *map)
static struct pccard_operations db1x_pcmcia_operations = ;
static int __devinit db1x_pcmcia_socket_probe(struct platform_device *pdev)
static int __devexit db1x_pcmcia_socket_remove(struct platform_device *pdev)
static struct platform_driver db1x_pcmcia_socket_driver = ;
int __init db1x_pcmcia_socket_load(void)
void  __exit db1x_pcmcia_socket_unload(void)
module_init(db1x_pcmcia_socket_load);
module_exit(db1x_pcmcia_socket_unload);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("PCMCIA Socket Services for Alchemy Db/Pb1x00 boards");
MODULE_AUTHOR("Manuel Lauss");
