static unsigned int debug;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug,"enable debug messages [alsa]");
#define MIXER_ADDR_UNSELECTED	-1
#define MIXER_ADDR_TVTUNER	0
#define MIXER_ADDR_LINE1	1
#define MIXER_ADDR_LINE2	2
#define MIXER_ADDR_LAST		2
static int index[SNDRV_CARDS] = SNDRV_DEFAULT_IDX;
static char *id[SNDRV_CARDS] = SNDRV_DEFAULT_STR;
static int enable[SNDRV_CARDS] = ;
module_param_array(index, int, NULL, 0444);
module_param_array(enable, int, NULL, 0444);
MODULE_PARM_DESC(index, "Index value for SAA7134 capture interface(s).");
MODULE_PARM_DESC(enable, "Enable (or not) the SAA7134 capture interface(s).");
#define dprintk(fmt, arg...)    if (debug) \
printk(KERN_DEBUG "%s/alsa: " fmt, dev->name , ##arg)
typedef struct snd_card_saa7134  snd_card_saa7134_t;
typedef struct snd_card_saa7134_pcm  snd_card_saa7134_pcm_t;
static struct snd_card *snd_saa7134_cards[SNDRV_CARDS];
static void saa7134_dma_stop(struct saa7134_dev *dev)
static void saa7134_dma_start(struct saa7134_dev *dev)
static void saa7134_irq_alsa_done(struct saa7134_dev *dev,
unsigned long status)
static irqreturn_t saa7134_alsa_irq(int irq, void *dev_id)
static int snd_card_saa7134_capture_trigger(struct snd_pcm_substream * substream,
int cmd)
static int dsp_buffer_init(struct saa7134_dev *dev)
static int dsp_buffer_free(struct saa7134_dev *dev)
static int snd_saa7134_capsrc_set(struct snd_kcontrol *kcontrol,
int left, int right, bool force_notify)
static int snd_card_saa7134_capture_prepare(struct snd_pcm_substream * substream)
static snd_pcm_uframes_t
snd_card_saa7134_capture_pointer(struct snd_pcm_substream * substream)
static struct snd_pcm_hardware snd_card_saa7134_capture =
;
static void snd_card_saa7134_runtime_free(struct snd_pcm_runtime *runtime)
static int snd_card_saa7134_hw_params(struct snd_pcm_substream * substream,
struct snd_pcm_hw_params * hw_params)
static int snd_card_saa7134_hw_free(struct snd_pcm_substream * substream)
static int snd_card_saa7134_capture_close(struct snd_pcm_substream * substream)
static int snd_card_saa7134_capture_open(struct snd_pcm_substream * substream)
static struct page *snd_card_saa7134_page(struct snd_pcm_substream *substream,
unsigned long offset)
static struct snd_pcm_ops snd_card_saa7134_capture_ops = ;
static int snd_card_saa7134_pcm(snd_card_saa7134_t *saa7134, int device)
#define SAA713x_VOLUME(xname, xindex, addr) \
static int snd_saa7134_volume_info(struct snd_kcontrol * kcontrol,
struct snd_ctl_elem_info * uinfo)
static int snd_saa7134_volume_get(struct snd_kcontrol * kcontrol,
struct snd_ctl_elem_value * ucontrol)
static int snd_saa7134_volume_put(struct snd_kcontrol * kcontrol,
struct snd_ctl_elem_value * ucontrol)
#define SAA713x_CAPSRC(xname, xindex, addr) \
static int snd_saa7134_capsrc_info(struct snd_kcontrol * kcontrol,
struct snd_ctl_elem_info * uinfo)
static int snd_saa7134_capsrc_get(struct snd_kcontrol * kcontrol,
struct snd_ctl_elem_value * ucontrol)
static int snd_saa7134_capsrc_put(struct snd_kcontrol * kcontrol,
struct snd_ctl_elem_value * ucontrol)
static struct snd_kcontrol_new snd_saa7134_volume_controls[] = ;
static struct snd_kcontrol_new snd_saa7134_capture_controls[] = ;
static int snd_card_saa7134_new_mixer(snd_card_saa7134_t * chip)
static void snd_saa7134_free(struct snd_card * card)
static int alsa_card_saa7134_create(struct saa7134_dev *dev, int devnum)
static int alsa_device_init(struct saa7134_dev *dev)
static int alsa_device_exit(struct saa7134_dev *dev)
static int saa7134_alsa_init(void)
static void saa7134_alsa_exit(void)
late_initcall(saa7134_alsa_init);
module_exit(saa7134_alsa_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Ricardo Cerqueira");
