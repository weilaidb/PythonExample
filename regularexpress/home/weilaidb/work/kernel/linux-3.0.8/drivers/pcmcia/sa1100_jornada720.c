#define SOCKET0_POWER	GPIO_GPIO0
#define SOCKET0_3V	GPIO_GPIO2
#define SOCKET1_POWER	(GPIO_GPIO1 | GPIO_GPIO3)
#define SOCKET1_3V	GPIO_GPIO3
static int
jornada720_pcmcia_configure_socket(struct soc_pcmcia_socket *skt, const socket_state_t *state)
static struct pcmcia_low_level jornada720_pcmcia_ops = ;
int __devinit pcmcia_jornada720_init(struct device *dev)
