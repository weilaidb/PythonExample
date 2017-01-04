#define	COLIBRI270_RESET_GPIO	53
#define	COLIBRI270_PPEN_GPIO	107
#define	COLIBRI270_BVD1_GPIO	83
#define	COLIBRI270_BVD2_GPIO	82
#define	COLIBRI270_DETECT_GPIO	84
#define	COLIBRI270_READY_GPIO	1
#define	COLIBRI320_RESET_GPIO	77
#define	COLIBRI320_PPEN_GPIO	57
#define	COLIBRI320_BVD1_GPIO	53
#define	COLIBRI320_BVD2_GPIO	79
#define	COLIBRI320_DETECT_GPIO	81
#define	COLIBRI320_READY_GPIO	29
enum ;
static struct gpio colibri_pcmcia_gpios[] = ;
static struct pcmcia_irqs colibri_irqs[] = ;
static int colibri_pcmcia_hw_init(struct soc_pcmcia_socket *skt)
static void colibri_pcmcia_hw_shutdown(struct soc_pcmcia_socket *skt)
static void colibri_pcmcia_socket_state(struct soc_pcmcia_socket *skt,
struct pcmcia_state *state)
static int
colibri_pcmcia_configure_socket(struct soc_pcmcia_socket *skt,
const socket_state_t *state)
static void colibri_pcmcia_socket_init(struct soc_pcmcia_socket *skt)
static void colibri_pcmcia_socket_suspend(struct soc_pcmcia_socket *skt)
static struct pcmcia_low_level colibri_pcmcia_ops = ;
static struct platform_device *colibri_pcmcia_device;
static int __init colibri_pcmcia_init(void)
static void __exit colibri_pcmcia_exit(void)
module_init(colibri_pcmcia_init);
module_exit(colibri_pcmcia_exit);
MODULE_AUTHOR("Marek Vasut <marek.vasut@gmail.com>");
MODULE_DESCRIPTION("PCMCIA support for Toradex Colibri PXA270/PXA320");
MODULE_ALIAS("platform:pxa2xx-pcmcia");
MODULE_LICENSE("GPL");
