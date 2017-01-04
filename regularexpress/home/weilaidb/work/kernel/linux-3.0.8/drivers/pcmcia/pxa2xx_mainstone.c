static struct pcmcia_irqs irqs[] = ;
static int mst_pcmcia_hw_init(struct soc_pcmcia_socket *skt)
static void mst_pcmcia_hw_shutdown(struct soc_pcmcia_socket *skt)
static unsigned long mst_pcmcia_status[2];
static void mst_pcmcia_socket_state(struct soc_pcmcia_socket *skt,
struct pcmcia_state *state)
static int mst_pcmcia_configure_socket(struct soc_pcmcia_socket *skt,
const socket_state_t *state)
static void mst_pcmcia_socket_init(struct soc_pcmcia_socket *skt)
static void mst_pcmcia_socket_suspend(struct soc_pcmcia_socket *skt)
static struct pcmcia_low_level mst_pcmcia_ops __initdata = ;
static struct platform_device *mst_pcmcia_device;
static int __init mst_pcmcia_init(void)
static void __exit mst_pcmcia_exit(void)
fs_initcall(mst_pcmcia_init);
module_exit(mst_pcmcia_exit);
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:pxa2xx-pcmcia");
