static struct pcmcia_irqs irqs[] = ;
static int balloon3_pcmcia_hw_init(struct soc_pcmcia_socket *skt)
static void balloon3_pcmcia_hw_shutdown(struct soc_pcmcia_socket *skt)
static unsigned long balloon3_pcmcia_status[2] = ;
static void balloon3_pcmcia_socket_state(struct soc_pcmcia_socket *skt,
struct pcmcia_state *state)
static int balloon3_pcmcia_configure_socket(struct soc_pcmcia_socket *skt,
const socket_state_t *state)
static void balloon3_pcmcia_socket_init(struct soc_pcmcia_socket *skt)
static void balloon3_pcmcia_socket_suspend(struct soc_pcmcia_socket *skt)
static struct pcmcia_low_level balloon3_pcmcia_ops = ;
static struct platform_device *balloon3_pcmcia_device;
static int __init balloon3_pcmcia_init(void)
static void __exit balloon3_pcmcia_exit(void)
module_init(balloon3_pcmcia_init);
module_exit(balloon3_pcmcia_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Nick Bane <nick@cecomputing.co.uk>");
MODULE_ALIAS("platform:pxa2xx-pcmcia");
MODULE_DESCRIPTION("Balloon3 board CF/PCMCIA driver");
