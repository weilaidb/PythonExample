static struct pcmcia_irqs irqs[] = ;
static int shannon_pcmcia_hw_init(struct soc_pcmcia_socket *skt)
static void shannon_pcmcia_hw_shutdown(struct soc_pcmcia_socket *skt)
static void
shannon_pcmcia_socket_state(struct soc_pcmcia_socket *skt,
struct pcmcia_state *state)
static int
shannon_pcmcia_configure_socket(struct soc_pcmcia_socket *skt,
const socket_state_t *state)
static void shannon_pcmcia_socket_init(struct soc_pcmcia_socket *skt)
static void shannon_pcmcia_socket_suspend(struct soc_pcmcia_socket *skt)
static struct pcmcia_low_level shannon_pcmcia_ops = ;
int __devinit pcmcia_shannon_init(struct device *dev)
