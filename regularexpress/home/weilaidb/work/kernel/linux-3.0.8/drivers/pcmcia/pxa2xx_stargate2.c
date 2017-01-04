#define SG2_S0_BUFF_CTL		120
#define SG2_S0_POWER_CTL	108
#define SG2_S0_GPIO_RESET	82
#define SG2_S0_GPIO_DETECT	53
#define SG2_S0_GPIO_READY	81
static struct pcmcia_irqs irqs[] = ;
static int sg2_pcmcia_hw_init(struct soc_pcmcia_socket *skt)
static void sg2_pcmcia_hw_shutdown(struct soc_pcmcia_socket *skt)
static void sg2_pcmcia_socket_state(struct soc_pcmcia_socket *skt,
struct pcmcia_state *state)
static int sg2_pcmcia_configure_socket(struct soc_pcmcia_socket *skt,
const socket_state_t *state)
static void sg2_pcmcia_socket_init(struct soc_pcmcia_socket *skt)
static void sg2_pcmcia_socket_suspend(struct soc_pcmcia_socket *skt)
static struct pcmcia_low_level sg2_pcmcia_ops __initdata = ;
static struct platform_device *sg2_pcmcia_device;
static int __init sg2_pcmcia_init(void)
static void __exit sg2_pcmcia_exit(void)
fs_initcall(sg2_pcmcia_init);
module_exit(sg2_pcmcia_exit);
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:pxa2xx-pcmcia");
