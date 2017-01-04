extern void board_pcmcia_power(int power);
static struct pcmcia_irqs irqs[] = ;
static int trizeps_pcmcia_hw_init(struct soc_pcmcia_socket *skt)
static void trizeps_pcmcia_hw_shutdown(struct soc_pcmcia_socket *skt)
static unsigned long trizeps_pcmcia_status[2];
static void trizeps_pcmcia_socket_state(struct soc_pcmcia_socket *skt,
struct pcmcia_state *state)
static int trizeps_pcmcia_configure_socket(struct soc_pcmcia_socket *skt,
const socket_state_t *state)
static void trizeps_pcmcia_socket_init(struct soc_pcmcia_socket *skt)
static void trizeps_pcmcia_socket_suspend(struct soc_pcmcia_socket *skt)
static struct pcmcia_low_level trizeps_pcmcia_ops = ;
static struct platform_device *trizeps_pcmcia_device;
static int __init trizeps_pcmcia_init(void)
static void __exit trizeps_pcmcia_exit(void)
fs_initcall(trizeps_pcmcia_init);
module_exit(trizeps_pcmcia_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Juergen Schindele");
MODULE_ALIAS("platform:pxa2xx-pcmcia");
