#define debug(fmt, arg...) do  while (0)
#define PCMCIA_IRQ AU1000_GPIO_15
static int pb1x00_pcmcia_init(struct pcmcia_init *init)
static int pb1x00_pcmcia_shutdown(void)
static int
pb1x00_pcmcia_socket_state(unsigned sock, struct pcmcia_state *state)
static int pb1x00_pcmcia_get_irq_info(struct pcmcia_irq_info *info)
static int
pb1x00_pcmcia_configure_socket(const struct pcmcia_configure *configure)
struct pcmcia_low_level pb1x00_pcmcia_ops = ;
