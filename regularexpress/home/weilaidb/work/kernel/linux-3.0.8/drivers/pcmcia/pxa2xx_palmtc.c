static struct gpio palmtc_pcmcia_gpios[] = ;
static int palmtc_pcmcia_hw_init(struct soc_pcmcia_socket *skt)
static void palmtc_pcmcia_hw_shutdown(struct soc_pcmcia_socket *skt)
static void palmtc_pcmcia_socket_state(struct soc_pcmcia_socket *skt,
struct pcmcia_state *state)
static int palmtc_wifi_powerdown(void)
static int palmtc_wifi_powerup(void)
static int palmtc_pcmcia_configure_socket(struct soc_pcmcia_socket *skt,
const socket_state_t *state)
static void palmtc_pcmcia_socket_init(struct soc_pcmcia_socket *skt)
static void palmtc_pcmcia_socket_suspend(struct soc_pcmcia_socket *skt)
static struct pcmcia_low_level palmtc_pcmcia_ops = ;
static struct platform_device *palmtc_pcmcia_device;
static int __init palmtc_pcmcia_init(void)
static void __exit palmtc_pcmcia_exit(void)
module_init(palmtc_pcmcia_init);
module_exit(palmtc_pcmcia_exit);
MODULE_AUTHOR("Alex Osborne <ato@meshy.org>,"
" Marek Vasut <marek.vasut@gmail.com>");
MODULE_DESCRIPTION("PCMCIA support for Palm Tungsten|C");
MODULE_ALIAS("platform:pxa2xx-pcmcia");
MODULE_LICENSE("GPL");
