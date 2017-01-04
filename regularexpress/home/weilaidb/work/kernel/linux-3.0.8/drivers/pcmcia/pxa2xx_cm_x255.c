#define GPIO_PCMCIA_SKTSEL	(54)
#define GPIO_PCMCIA_S0_CD_VALID	(16)
#define GPIO_PCMCIA_S1_CD_VALID	(17)
#define GPIO_PCMCIA_S0_RDYINT	(6)
#define GPIO_PCMCIA_S1_RDYINT	(8)
#define GPIO_PCMCIA_RESET	(9)
#define PCMCIA_S0_CD_VALID	IRQ_GPIO(GPIO_PCMCIA_S0_CD_VALID)
#define PCMCIA_S1_CD_VALID	IRQ_GPIO(GPIO_PCMCIA_S1_CD_VALID)
#define PCMCIA_S0_RDYINT	IRQ_GPIO(GPIO_PCMCIA_S0_RDYINT)
#define PCMCIA_S1_RDYINT	IRQ_GPIO(GPIO_PCMCIA_S1_RDYINT)
static struct pcmcia_irqs irqs[] = ;
static int cmx255_pcmcia_hw_init(struct soc_pcmcia_socket *skt)
static void cmx255_pcmcia_shutdown(struct soc_pcmcia_socket *skt)
static void cmx255_pcmcia_socket_state(struct soc_pcmcia_socket *skt,
struct pcmcia_state *state)
static int cmx255_pcmcia_configure_socket(struct soc_pcmcia_socket *skt,
const socket_state_t *state)
static void cmx255_pcmcia_socket_init(struct soc_pcmcia_socket *skt)
static void cmx255_pcmcia_socket_suspend(struct soc_pcmcia_socket *skt)
static struct pcmcia_low_level cmx255_pcmcia_ops __initdata = ;
static struct platform_device *cmx255_pcmcia_device;
int __init cmx255_pcmcia_init(void)
void __exit cmx255_pcmcia_exit(void)
