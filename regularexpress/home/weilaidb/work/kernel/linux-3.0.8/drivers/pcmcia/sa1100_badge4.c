static int badge4_pcmvcc = 50;
static int badge4_pcmvpp = 50;
static int badge4_cfvcc = 33;
static void complain_about_jumpering(const char *whom,
const char *supply,
int given, int wanted)
static int
badge4_pcmcia_configure_socket(struct soc_pcmcia_socket *skt, const socket_state_t *state)
static struct pcmcia_low_level badge4_pcmcia_ops = ;
int pcmcia_badge4_init(struct device *dev)
static int __init pcmv_setup(char *s)
__setup("pcmv=", pcmv_setup);
