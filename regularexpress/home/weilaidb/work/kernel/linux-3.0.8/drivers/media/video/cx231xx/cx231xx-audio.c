static int debug;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "activates debug info");
#define dprintk(fmt, arg...) do  while (0)
static int index[SNDRV_CARDS] = SNDRV_DEFAULT_IDX;
static int cx231xx_isoc_audio_deinit(struct cx231xx *dev)
static int cx231xx_bulk_audio_deinit(struct cx231xx *dev)
static void cx231xx_audio_isocirq(struct urb *urb)
static void cx231xx_audio_bulkirq(struct urb *urb)
static int cx231xx_init_audio_isoc(struct cx231xx *dev)
static int cx231xx_init_audio_bulk(struct cx231xx *dev)
static int snd_pcm_alloc_vmalloc_buffer(struct snd_pcm_substream *subs,
size_t size)
static struct snd_pcm_hardware snd_cx231xx_hw_capture = ;
static int snd_cx231xx_capture_open(struct snd_pcm_substream *substream)
static int snd_cx231xx_pcm_close(struct snd_pcm_substream *substream)
static int snd_cx231xx_hw_capture_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int snd_cx231xx_hw_capture_free(struct snd_pcm_substream *substream)
static int snd_cx231xx_prepare(struct snd_pcm_substream *substream)
static void audio_trigger(struct work_struct *work)
static int snd_cx231xx_capture_trigger(struct snd_pcm_substream *substream,
int cmd)
static snd_pcm_uframes_t snd_cx231xx_capture_pointer(struct snd_pcm_substream
*substream)
static struct page *snd_pcm_get_vmalloc_page(struct snd_pcm_substream *subs,
unsigned long offset)
static struct snd_pcm_ops snd_cx231xx_pcm_capture = ;
static int cx231xx_audio_init(struct cx231xx *dev)
static int cx231xx_audio_fini(struct cx231xx *dev)
static struct cx231xx_ops audio_ops = ;
static int __init cx231xx_alsa_register(void)
static void __exit cx231xx_alsa_unregister(void)
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Srinivasa Deevi <srinivasa.deevi@conexant.com>");
MODULE_DESCRIPTION("Cx231xx Audio driver");
module_init(cx231xx_alsa_register);
module_exit(cx231xx_alsa_unregister);
