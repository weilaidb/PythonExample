#define MEM_MAP_SIZE	0x400000
#define IO_MAP_SIZE	0x1000
#define GPIO_CDA	0
#define GPIO_CDB	1
#define GPIO_CARDIRQ	4
#define GPIO_RESET	204
#define GPIO_OUTEN	205
#define GPIO_VSL	208
#define GPIO_VSH	209
#define GPIO_BATTDEAD	210
#define GPIO_BATTWARN	211
#define GPIO_POWER	214
struct xxs1500_pcmcia_sock ;
#define to_xxs_socket(x) container_of(x, struct xxs1500_pcmcia_sock, socket)
static irqreturn_t cdirq(int irq, void *data)
static int xxs1500_pcmcia_configure(struct pcmcia_socket *skt,
struct socket_state_t *state)
static int xxs1500_pcmcia_get_status(struct pcmcia_socket *skt,
unsigned int *value)
static int xxs1500_pcmcia_sock_init(struct pcmcia_socket *skt)
static int xxs1500_pcmcia_sock_suspend(struct pcmcia_socket *skt)
static int au1x00_pcmcia_set_io_map(struct pcmcia_socket *skt,
struct pccard_io_map *map)
static int au1x00_pcmcia_set_mem_map(struct pcmcia_socket *skt,
struct pccard_mem_map *map)
static struct pccard_operations xxs1500_pcmcia_operations = ;
static int __devinit xxs1500_pcmcia_probe(struct platform_device *pdev)
static int __devexit xxs1500_pcmcia_remove(struct platform_device *pdev)
static struct platform_driver xxs1500_pcmcia_socket_driver = ;
int __init xxs1500_pcmcia_socket_load(void)
void  __exit xxs1500_pcmcia_socket_unload(void)
module_init(xxs1500_pcmcia_socket_load);
module_exit(xxs1500_pcmcia_socket_unload);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("PCMCIA Socket Services for MyCable XXS1500 systems");
MODULE_AUTHOR("Manuel Lauss");
