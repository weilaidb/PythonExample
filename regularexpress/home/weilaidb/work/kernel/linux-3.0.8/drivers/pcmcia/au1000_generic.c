MODULE_LICENSE("GPL");
MODULE_AUTHOR("Pete Popov <ppopov@embeddedalley.com>");
MODULE_DESCRIPTION("Linux PCMCIA Card Services: Au1x00 Socket Controller");
#define MAP_SIZE 0x100000
extern struct au1000_pcmcia_socket au1000_pcmcia_socket[];
#define PCMCIA_SOCKET(x)	(au1000_pcmcia_socket + (x))
#define to_au1000_socket(x)	container_of(x, struct au1000_pcmcia_socket, socket)
u32 *pcmcia_base_vaddrs[2];
extern const unsigned long mips_io_port_base;
static DEFINE_MUTEX(pcmcia_sockets_lock);
static int (*au1x00_pcmcia_hw_init[])(struct device *dev) = ;
static int
au1x00_pcmcia_skt_state(struct au1000_pcmcia_socket *skt)
static int
au1x00_pcmcia_config_skt(struct au1000_pcmcia_socket *skt, socket_state_t *state)
static int au1x00_pcmcia_sock_init(struct pcmcia_socket *sock)
static int au1x00_pcmcia_suspend(struct pcmcia_socket *sock)
static DEFINE_SPINLOCK(status_lock);
static void au1x00_check_status(struct au1000_pcmcia_socket *skt)
static void au1x00_pcmcia_poll_event(unsigned long dummy)
static int
au1x00_pcmcia_get_status(struct pcmcia_socket *sock, unsigned int *status)
static int
au1x00_pcmcia_set_socket(struct pcmcia_socket *sock, socket_state_t *state)
int
au1x00_pcmcia_set_io_map(struct pcmcia_socket *sock, struct pccard_io_map *map)
static int
au1x00_pcmcia_set_mem_map(struct pcmcia_socket *sock, struct pccard_mem_map *map)
static struct pccard_operations au1x00_pcmcia_operations = ;
static const char *skt_names[] = ;
struct skt_dev_info ;
int au1x00_pcmcia_socket_probe(struct device *dev, struct pcmcia_low_level *ops, int first, int nr)
int au1x00_drv_pcmcia_remove(struct platform_device *dev)
static int au1x00_drv_pcmcia_probe(struct platform_device *dev)
static struct platform_driver au1x00_pcmcia_driver = ;
static int __init au1x00_pcmcia_init(void)
static void __exit au1x00_pcmcia_exit(void)
module_init(au1x00_pcmcia_init);
module_exit(au1x00_pcmcia_exit);
