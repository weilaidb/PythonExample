#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
MODULE_AUTHOR("Vinod Koul <vinod.koul@intel.com>");
MODULE_AUTHOR("Harsha Priya <priya.harsha@intel.com>");
MODULE_AUTHOR("Dharageswari R <dharageswari.r@intel.com>");
MODULE_AUTHOR("KP Jeeja <jeeja.kp@intel.com>");
MODULE_DESCRIPTION("Intel MAD Sound card driver");
MODULE_LICENSE("GPL v2");
MODULE_SUPPORTED_DEVICE("");
static int card_index = SNDRV_DEFAULT_IDX1;
static char *card_id = SNDRV_DEFAULT_STR1;
module_param(card_index, int, 0444);
MODULE_PARM_DESC(card_index, "Index value for INTELMAD soundcard.");
module_param(card_id, charp, 0444);
MODULE_PARM_DESC(card_id, "ID string for INTELMAD soundcard.");
int	sst_card_vendor_id;
int intelmid_audio_interrupt_enable;
struct snd_intelmad *intelmad_drv;
#define INFO(_cpu_id, _irq_cache, _size) \
((kernel_ulong_t)&(struct snd_intelmad_probe_info) )
static struct snd_pcm_hardware snd_intelmad_stream = ;
static int snd_intelmad_pcm_trigger(struct snd_pcm_substream *substream,
int cmd)
static int snd_intelmad_pcm_prepare(struct snd_pcm_substream *substream)
static int snd_intelmad_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int snd_intelmad_hw_free(struct snd_pcm_substream *substream)
static snd_pcm_uframes_t snd_intelmad_pcm_pointer
(struct snd_pcm_substream *substream)
static int snd_intelmad_close(struct snd_pcm_substream *substream)
static int snd_intelmad_open(struct snd_pcm_substream *substream,
enum snd_sst_audio_device_type type)
static int snd_intelmad_headset_open(struct snd_pcm_substream *substream)
static int snd_intelmad_ihf_open(struct snd_pcm_substream *substream)
static int snd_intelmad_vibra_open(struct snd_pcm_substream *substream)
static int snd_intelmad_haptic_open(struct snd_pcm_substream *substream)
static struct snd_pcm_ops snd_intelmad_headset_ops = ;
static struct snd_pcm_ops snd_intelmad_ihf_ops = ;
static struct snd_pcm_ops snd_intelmad_vibra_ops = ;
static struct snd_pcm_ops snd_intelmad_haptic_ops = ;
static struct snd_pcm_ops snd_intelmad_capture_ops = ;
int intelmad_get_mic_bias(void)
EXPORT_SYMBOL_GPL(intelmad_get_mic_bias);
int intelmad_set_headset_state(int state)
EXPORT_SYMBOL_GPL(intelmad_set_headset_state);
void sst_process_mad_jack_detection(struct work_struct *work)
static irqreturn_t snd_intelmad_intr_handler(int irq, void *dev)
void sst_mad_send_jack_report(struct snd_jack *jack,
int buttonpressevent , int status)
static int __devinit snd_intelmad_register_irq(
struct snd_intelmad *intelmaddata, unsigned int regbase,
unsigned int regsize)
static int __devinit snd_intelmad_sst_register(
struct snd_intelmad *intelmaddata)
static void snd_intelmad_page_free(struct snd_pcm *pcm)
static int __devinit snd_intelmad_pcm_new(struct snd_card *card,
struct snd_intelmad *intelmaddata,
unsigned int pb, unsigned int cap, unsigned int index)
static int __devinit snd_intelmad_pcm(struct snd_card *card,
struct snd_intelmad *intelmaddata)
static int snd_intelmad_jack(struct snd_intelmad *intelmaddata)
static int __devinit snd_intelmad_mixer(struct snd_intelmad *intelmaddata)
static int snd_intelmad_dev_free(struct snd_device *device)
static int __devinit snd_intelmad_create(
struct snd_intelmad *intelmaddata,
struct snd_card *card)
int __devinit snd_intelmad_probe(struct platform_device *pdev)
static int snd_intelmad_remove(struct platform_device *pdev)
static const struct platform_device_id snd_intelmad_ids[] = ;
static struct platform_driver snd_intelmad_driver = ;
static int __init alsa_card_intelmad_init(void)
static void __exit alsa_card_intelmad_exit(void)
module_init(alsa_card_intelmad_init)
module_exit(alsa_card_intelmad_exit)
