static struct gpio palmld_pcmcia_gpios[] = ;
static int palmld_pcmcia_hw_init(struct soc_pcmcia_socket *skt)
static void palmld_pcmcia_hw_shutdown(struct soc_pcmcia_socket *skt)
static void palmld_pcmcia_socket_state(struct soc_pcmcia_socket *skt,
struct pcmcia_state *state)
static int palmld_pcmcia_configure_socket(struct soc_pcmcia_socket *skt,
const socket_state_t *state)
static void palmld_pcmcia_socket_init(struct soc_pcmcia_socket *skt)
static void palmld_pcmcia_socket_suspend(struct soc_pcmcia_socket *skt)
static struct pcmcia_low_level palmld_pcmcia_ops = ;
static struct platform_device *palmld_pcmcia_device;
static int __init palmld_pcmcia_init(void)
static void __exit palmld_pcmcia_exit(void)
module_init(palmld_pcmcia_init);
module_exit(palmld_pcmcia_exit);
MODULE_AUTHOR("Alex Osborne <ato@meshy.org>,"
" Marek Vasut <marek.vasut@gmail.com>");
MODULE_DESCRIPTION("PCMCIA support for Palm LifeDrive");
MODULE_ALIAS("platform:pxa2xx-pcmcia");
MODULE_LICENSE("GPL");
