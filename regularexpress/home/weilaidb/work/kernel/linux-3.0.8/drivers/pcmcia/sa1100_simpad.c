extern long get_cs3_shadow(void);
extern void set_cs3_bit(int value);
extern void clear_cs3_bit(int value);
static struct pcmcia_irqs irqs[] = ;
static int simpad_pcmcia_hw_init(struct soc_pcmcia_socket *skt)
static void simpad_pcmcia_hw_shutdown(struct soc_pcmcia_socket *skt)
static void
simpad_pcmcia_socket_state(struct soc_pcmcia_socket *skt,
struct pcmcia_state *state)
static int
simpad_pcmcia_configure_socket(struct soc_pcmcia_socket *skt,
const socket_state_t *state)
static void simpad_pcmcia_socket_init(struct soc_pcmcia_socket *skt)
static void simpad_pcmcia_socket_suspend(struct soc_pcmcia_socket *skt)
static struct pcmcia_low_level simpad_pcmcia_ops = ;
int __devinit pcmcia_simpad_init(struct device *dev)
