#undef dprintk
#define dprintk(level, fmt, arg...) do  while (0)
static int index[SNDRV_CARDS] = SNDRV_DEFAULT_IDX;
static int enable[SNDRV_CARDS] = ;
module_param_array(enable, bool, NULL, 0444);
MODULE_PARM_DESC(enable, "Enable tm6000x soundcard. default enabled.");
module_param_array(index, int, NULL, 0444);
MODULE_PARM_DESC(index, "Index value for tm6000x capture interface(s).");
MODULE_DESCRIPTION("ALSA driver module for tm5600/tm6000/tm6010 based TV cards");
MODULE_AUTHOR("Mauro Carvalho Chehab <mchehab@redhat.com>");
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("{,"
"{,"
"{");
static unsigned int debug;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "enable debug messages");
static int _tm6000_start_audio_dma(struct snd_tm6000_card *chip)
static int _tm6000_stop_audio_dma(struct snd_tm6000_card *chip)
static void dsp_buffer_free(struct snd_pcm_substream *substream)
static int dsp_buffer_alloc(struct snd_pcm_substream *substream, int size)
#define DEFAULT_FIFO_SIZE	4096
static struct snd_pcm_hardware snd_tm6000_digital_hw = ;
static int snd_tm6000_pcm_open(struct snd_pcm_substream *substream)
static int snd_tm6000_close(struct snd_pcm_substream *substream)
static int tm6000_fillbuf(struct tm6000_core *core, char *buf, int size)
static int snd_tm6000_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int snd_tm6000_hw_free(struct snd_pcm_substream *substream)
static int snd_tm6000_prepare(struct snd_pcm_substream *substream)
static void audio_trigger(struct work_struct *work)
static int snd_tm6000_card_trigger(struct snd_pcm_substream *substream, int cmd)
static snd_pcm_uframes_t snd_tm6000_pointer(struct snd_pcm_substream *substream)
static struct snd_pcm_ops snd_tm6000_pcm_ops = ;
int tm6000_audio_init(struct tm6000_core *dev)
static int tm6000_audio_fini(struct tm6000_core *dev)
struct tm6000_ops audio_ops = ;
static int __init tm6000_alsa_register(void)
static void __exit tm6000_alsa_unregister(void)
module_init(tm6000_alsa_register);
module_exit(tm6000_alsa_unregister);
