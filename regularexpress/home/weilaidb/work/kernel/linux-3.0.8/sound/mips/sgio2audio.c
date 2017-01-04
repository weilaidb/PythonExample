#define SNDRV_GET_ID
MODULE_AUTHOR("Vivien Chappelier <vivien.chappelier@linux-mips.org>");
MODULE_DESCRIPTION("SGI O2 Audio");
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("");
static int index = SNDRV_DEFAULT_IDX1;
static char *id = SNDRV_DEFAULT_STR1;
module_param(index, int, 0444);
MODULE_PARM_DESC(index, "Index value for SGI O2 soundcard.");
module_param(id, charp, 0444);
MODULE_PARM_DESC(id, "ID string for SGI O2 soundcard.");
#define AUDIO_CONTROL_RESET              BIT(0)
#define AUDIO_CONTROL_CODEC_PRESENT      BIT(1)
#define CODEC_CONTROL_WORD_SHIFT        0
#define CODEC_CONTROL_READ              BIT(16)
#define CODEC_CONTROL_ADDRESS_SHIFT     17
#define CHANNEL_CONTROL_RESET           BIT(10)
#define CHANNEL_DMA_ENABLE              BIT(9)
#define CHANNEL_INT_THRESHOLD_DISABLED  (0 << 5)
#define CHANNEL_INT_THRESHOLD_25        (1 << 5)
#define CHANNEL_INT_THRESHOLD_50        (2 << 5)
#define CHANNEL_INT_THRESHOLD_75        (3 << 5)
#define CHANNEL_INT_THRESHOLD_EMPTY     (4 << 5)
#define CHANNEL_INT_THRESHOLD_NOT_EMPTY (5 << 5)
#define CHANNEL_INT_THRESHOLD_FULL      (6 << 5)
#define CHANNEL_INT_THRESHOLD_NOT_FULL  (7 << 5)
#define CHANNEL_RING_SHIFT              12
#define CHANNEL_RING_SIZE               (1 << CHANNEL_RING_SHIFT)
#define CHANNEL_RING_MASK               (CHANNEL_RING_SIZE - 1)
#define CHANNEL_LEFT_SHIFT 40
#define CHANNEL_RIGHT_SHIFT 8
struct snd_sgio2audio_chan ;
struct snd_sgio2audio ;
static int read_ad1843_reg(void *priv, int reg)
static int write_ad1843_reg(void *priv, int reg, int word)
static int sgio2audio_gain_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int sgio2audio_gain_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int sgio2audio_gain_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int sgio2audio_source_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int sgio2audio_source_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int sgio2audio_source_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new sgio2audio_ctrl_pcm0 __devinitdata = ;
static struct snd_kcontrol_new sgio2audio_ctrl_pcm1 __devinitdata = ;
static struct snd_kcontrol_new sgio2audio_ctrl_reclevel __devinitdata = ;
static struct snd_kcontrol_new sgio2audio_ctrl_recsource __devinitdata = ;
static struct snd_kcontrol_new sgio2audio_ctrl_line __devinitdata = ;
static struct snd_kcontrol_new sgio2audio_ctrl_cd __devinitdata = ;
static struct snd_kcontrol_new sgio2audio_ctrl_mic __devinitdata = ;
static int __devinit snd_sgio2audio_new_mixer(struct snd_sgio2audio *chip)
static int snd_sgio2audio_dma_pull_frag(struct snd_sgio2audio *chip,
unsigned int ch, unsigned int count)
static int snd_sgio2audio_dma_push_frag(struct snd_sgio2audio *chip,
unsigned int ch, unsigned int count)
static int snd_sgio2audio_dma_start(struct snd_pcm_substream *substream)
static int snd_sgio2audio_dma_stop(struct snd_pcm_substream *substream)
static irqreturn_t snd_sgio2audio_dma_in_isr(int irq, void *dev_id)
static irqreturn_t snd_sgio2audio_dma_out_isr(int irq, void *dev_id)
static irqreturn_t snd_sgio2audio_error_isr(int irq, void *dev_id)
static struct snd_pcm_hardware snd_sgio2audio_pcm_hw = ;
static int snd_sgio2audio_playback1_open(struct snd_pcm_substream *substream)
static int snd_sgio2audio_playback2_open(struct snd_pcm_substream *substream)
static int snd_sgio2audio_capture_open(struct snd_pcm_substream *substream)
static int snd_sgio2audio_pcm_close(struct snd_pcm_substream *substream)
static int snd_sgio2audio_pcm_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int snd_sgio2audio_pcm_hw_free(struct snd_pcm_substream *substream)
static int snd_sgio2audio_pcm_prepare(struct snd_pcm_substream *substream)
static int snd_sgio2audio_pcm_trigger(struct snd_pcm_substream *substream,
int cmd)
static snd_pcm_uframes_t
snd_sgio2audio_pcm_pointer(struct snd_pcm_substream *substream)
static struct snd_pcm_ops snd_sgio2audio_playback1_ops = ;
static struct snd_pcm_ops snd_sgio2audio_playback2_ops = ;
static struct snd_pcm_ops snd_sgio2audio_capture_ops = ;
static int __devinit snd_sgio2audio_new_pcm(struct snd_sgio2audio *chip)
static struct  snd_sgio2_isr_table[] = ;
static int snd_sgio2audio_free(struct snd_sgio2audio *chip)
static int snd_sgio2audio_dev_free(struct snd_device *device)
static struct snd_device_ops ops = ;
static int __devinit snd_sgio2audio_create(struct snd_card *card,
struct snd_sgio2audio **rchip)
static int __devinit snd_sgio2audio_probe(struct platform_device *pdev)
static int __devexit snd_sgio2audio_remove(struct platform_device *pdev)
static struct platform_driver sgio2audio_driver = ;
static int __init alsa_card_sgio2audio_init(void)
static void __exit alsa_card_sgio2audio_exit(void)
module_init(alsa_card_sgio2audio_init)
module_exit(alsa_card_sgio2audio_exit)
