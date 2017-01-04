#define GPIO_PCMCIA_S0_CD_VALID	(84)
#define GPIO_PCMCIA_S0_RDYINT	(82)
#define GPIO_PCMCIA_RESET	(53)
#define PCMCIA_S0_CD_VALID	IRQ_GPIO(GPIO_PCMCIA_S0_CD_VALID)
#define PCMCIA_S0_RDYINT	IRQ_GPIO(GPIO_PCMCIA_S0_RDYINT)
static struct pcmcia_irqs irqs[] = ;
static int cmx270_pcmcia_hw_init(struct soc_pcmcia_socket *skt)
static void cmx270_pcmcia_shutdown(struct soc_pcmcia_socket *skt)
static void cmx270_pcmcia_socket_state(struct soc_pcmcia_socket *skt,
struct pcmcia_state *state)
static int cmx270_pcmcia_configure_socket(struct soc_pcmcia_socket *skt,
const socket_state_t *state)
static void cmx270_pcmcia_socket_init(struct soc_pcmcia_socket *skt)
static void cmx270_pcmcia_socket_suspend(struct soc_pcmcia_socket *skt)
static struct pcmcia_low_level cmx270_pcmcia_ops __initdata = ;
static struct platform_device *cmx270_pcmcia_device;
int __init cmx270_pcmcia_init(void)
void __exit cmx270_pcmcia_exit(void)
