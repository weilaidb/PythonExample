static struct pcmcia_irqs cd_irqs[] = ;
static int e740_pcmcia_hw_init(struct soc_pcmcia_socket *skt)
static void e740_pcmcia_hw_shutdown(struct soc_pcmcia_socket *skt)
static void e740_pcmcia_socket_state(struct soc_pcmcia_socket *skt,
struct pcmcia_state *state)
static int e740_pcmcia_configure_socket(struct soc_pcmcia_socket *skt,
const socket_state_t *state)
static void e740_pcmcia_socket_init(struct soc_pcmcia_socket *skt)
static void e740_pcmcia_socket_suspend(struct soc_pcmcia_socket *skt)
static struct pcmcia_low_level e740_pcmcia_ops = ;
static struct platform_device *e740_pcmcia_device;
static int __init e740_pcmcia_init(void)
static void __exit e740_pcmcia_exit(void)
module_init(e740_pcmcia_init);
module_exit(e740_pcmcia_exit);
MODULE_LICENSE("GPL v2");
MODULE_AUTHOR("Ian Molton <spyro@f2s.com>");
MODULE_ALIAS("platform:pxa2xx-pcmcia");
MODULE_DESCRIPTION("e740 PCMCIA platform support");
