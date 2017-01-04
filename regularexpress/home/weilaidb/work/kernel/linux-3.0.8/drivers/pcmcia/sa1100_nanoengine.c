static struct pcmcia_irqs irqs_skt0[] = ;
static struct pcmcia_irqs irqs_skt1[] = ;
struct nanoengine_pins ;
static struct nanoengine_pins nano_skts[] = ;
unsigned num_nano_pcmcia_sockets = ARRAY_SIZE(nano_skts);
static int nanoengine_pcmcia_hw_init(struct soc_pcmcia_socket *skt)
static void nanoengine_pcmcia_hw_shutdown(struct soc_pcmcia_socket *skt)
static int nanoengine_pcmcia_configure_socket(
struct soc_pcmcia_socket *skt, const socket_state_t *state)
static void nanoengine_pcmcia_socket_state(
struct soc_pcmcia_socket *skt, struct pcmcia_state *state)
static void nanoengine_pcmcia_socket_init(struct soc_pcmcia_socket *skt)
static void nanoengine_pcmcia_socket_suspend(struct soc_pcmcia_socket *skt)
static struct pcmcia_low_level nanoengine_pcmcia_ops = ;
int pcmcia_nanoengine_init(struct device *dev)
