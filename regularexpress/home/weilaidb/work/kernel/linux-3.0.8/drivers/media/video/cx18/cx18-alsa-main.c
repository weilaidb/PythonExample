int cx18_alsa_debug;
#define CX18_DEBUG_ALSA_INFO(fmt, arg...) \
do  while (0);
module_param_named(debug, cx18_alsa_debug, int, 0644);
MODULE_PARM_DESC(debug,
"Debug level (bitmask). Default: 0\n"
"\t\t\t  1/0x0001: warning\n"
"\t\t\t  2/0x0002: info\n");
MODULE_AUTHOR("Andy Walls");
MODULE_DESCRIPTION("CX23418 ALSA Interface");
MODULE_SUPPORTED_DEVICE("CX23418 MPEG2 encoder");
MODULE_LICENSE("GPL");
MODULE_VERSION(CX18_VERSION);
static inline
struct snd_cx18_card *to_snd_cx18_card(struct v4l2_device *v4l2_dev)
static inline
struct snd_cx18_card *p_to_snd_cx18_card(struct v4l2_device **v4l2_dev)
static void snd_cx18_card_free(struct snd_cx18_card *cxsc)
static void snd_cx18_card_private_free(struct snd_card *sc)
static int snd_cx18_card_create(struct v4l2_device *v4l2_dev,
struct snd_card *sc,
struct snd_cx18_card **cxsc)
static int snd_cx18_card_set_names(struct snd_cx18_card *cxsc)
static int snd_cx18_init(struct v4l2_device *v4l2_dev)
int cx18_alsa_load(struct cx18 *cx)
static int __init cx18_alsa_init(void)
static void __exit snd_cx18_exit(struct snd_cx18_card *cxsc)
static int __exit cx18_alsa_exit_callback(struct device *dev, void *data)
static void __exit cx18_alsa_exit(void)
module_init(cx18_alsa_init);
module_exit(cx18_alsa_exit);
