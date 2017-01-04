static struct gpio palmtx_pcmcia_gpios[] = ;
static int palmtx_pcmcia_hw_init(struct soc_pcmcia_socket *skt)
static void palmtx_pcmcia_hw_shutdown(struct soc_pcmcia_socket *skt)
static void palmtx_pcmcia_socket_state(struct soc_pcmcia_socket *skt,
struct pcmcia_state *state)
static int
palmtx_pcmcia_configure_socket(struct soc_pcmcia_socket *skt,
const socket_state_t *state)
static void palmtx_pcmcia_socket_init(struct soc_pcmcia_socket *skt)
static void palmtx_pcmcia_socket_suspend(struct soc_pcmcia_socket *skt)
static struct pcmcia_low_level palmtx_pcmcia_ops = ;
static struct platform_device *palmtx_pcmcia_device;
static int __init palmtx_pcmcia_init(void)
static void __exit palmtx_pcmcia_exit(void)
module_init(palmtx_pcmcia_init);
module_exit(palmtx_pcmcia_exit);
MODULE_AUTHOR("Marek Vasut <marek.vasut@gmail.com>");
MODULE_DESCRIPTION("PCMCIA support for Palm T|X");
MODULE_ALIAS("platform:pxa2xx-pcmcia");
MODULE_LICENSE("GPL");
