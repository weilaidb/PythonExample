static struct pcmcia_irqs irqs[] = ;
static int h3600_pcmcia_hw_init(struct soc_pcmcia_socket *skt)
static void h3600_pcmcia_hw_shutdown(struct soc_pcmcia_socket *skt)
static void
h3600_pcmcia_socket_state(struct soc_pcmcia_socket *skt, struct pcmcia_state *state)
static int
h3600_pcmcia_configure_socket(struct soc_pcmcia_socket *skt, const socket_state_t *state)
static void h3600_pcmcia_socket_init(struct soc_pcmcia_socket *skt)
static void h3600_pcmcia_socket_suspend(struct soc_pcmcia_socket *skt)
struct pcmcia_low_level h3600_pcmcia_ops = ;
int __devinit pcmcia_h3600_init(struct device *dev)
