#define	NO_KEEP_VS 0x0001
#define SCOOP_DEV platform_scoop_config->devs
static void sharpsl_pcmcia_init_reset(struct soc_pcmcia_socket *skt)
static int sharpsl_pcmcia_hw_init(struct soc_pcmcia_socket *skt)
static void sharpsl_pcmcia_hw_shutdown(struct soc_pcmcia_socket *skt)
static void sharpsl_pcmcia_socket_state(struct soc_pcmcia_socket *skt,
struct pcmcia_state *state)
static int sharpsl_pcmcia_configure_socket(struct soc_pcmcia_socket *skt,
const socket_state_t *state)
static void sharpsl_pcmcia_socket_init(struct soc_pcmcia_socket *skt)
static void sharpsl_pcmcia_socket_suspend(struct soc_pcmcia_socket *skt)
static struct pcmcia_low_level sharpsl_pcmcia_ops __initdata = ;
int __devinit pcmcia_collie_init(struct device *dev)
static struct platform_device *sharpsl_pcmcia_device;
static int __init sharpsl_pcmcia_init(void)
static void __exit sharpsl_pcmcia_exit(void)
fs_initcall(sharpsl_pcmcia_init);
module_exit(sharpsl_pcmcia_exit);
MODULE_DESCRIPTION("Sharp SL Series PCMCIA Support");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:pxa2xx-pcmcia");
