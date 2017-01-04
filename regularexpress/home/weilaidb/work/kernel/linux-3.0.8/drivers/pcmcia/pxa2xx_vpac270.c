static struct gpio vpac270_pcmcia_gpios[] = ;
static struct gpio vpac270_cf_gpios[] = ;
static struct pcmcia_irqs cd_irqs[] = ;
static int vpac270_pcmcia_hw_init(struct soc_pcmcia_socket *skt)
static void vpac270_pcmcia_hw_shutdown(struct soc_pcmcia_socket *skt)
static void vpac270_pcmcia_socket_state(struct soc_pcmcia_socket *skt,
struct pcmcia_state *state)
static int
vpac270_pcmcia_configure_socket(struct soc_pcmcia_socket *skt,
const socket_state_t *state)
static void vpac270_pcmcia_socket_init(struct soc_pcmcia_socket *skt)
static void vpac270_pcmcia_socket_suspend(struct soc_pcmcia_socket *skt)
static struct pcmcia_low_level vpac270_pcmcia_ops = ;
static struct platform_device *vpac270_pcmcia_device;
static int __init vpac270_pcmcia_init(void)
static void __exit vpac270_pcmcia_exit(void)
module_init(vpac270_pcmcia_init);
module_exit(vpac270_pcmcia_exit);
MODULE_AUTHOR("Marek Vasut <marek.vasut@gmail.com>");
MODULE_DESCRIPTION("PCMCIA support for Voipac PXA270");
MODULE_ALIAS("platform:pxa2xx-pcmcia");
MODULE_LICENSE("GPL");
