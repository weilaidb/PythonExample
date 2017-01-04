static int debug;
module_param(debug, int, 0644);
MODULE_PARM_DESC(debug, "activates debug info");
#define dprintk(fmt, arg...) do  while (0)
static int index[SNDRV_CARDS] = SNDRV_DEFAULT_IDX;
static int em28xx_deinit_isoc_audio(struct em28xx *dev)
static void em28xx_audio_isocirq(struct urb *urb)
static int em28xx_init_audio_isoc(struct em28xx *dev)
static int snd_pcm_alloc_vmalloc_buffer(struct snd_pcm_substream *subs,
size_t size)
static struct snd_pcm_hardware snd_em28xx_hw_capture = ;
static int snd_em28xx_capture_open(struct snd_pcm_substream *substream)
static int snd_em28xx_pcm_close(struct snd_pcm_substream *substream)
static int snd_em28xx_hw_capture_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int snd_em28xx_hw_capture_free(struct snd_pcm_substream *substream)
static int snd_em28xx_prepare(struct snd_pcm_substream *substream)
static void audio_trigger(struct work_struct *work)
static int snd_em28xx_capture_trigger(struct snd_pcm_substream *substream,
int cmd)
static snd_pcm_uframes_t snd_em28xx_capture_pointer(struct snd_pcm_substream
*substream)
static struct page *snd_pcm_get_vmalloc_page(struct snd_pcm_substream *subs,
unsigned long offset)
static struct snd_pcm_ops snd_em28xx_pcm_capture = ;
static int em28xx_audio_init(struct em28xx *dev)
static int em28xx_audio_fini(struct em28xx *dev)
static struct em28xx_ops audio_ops = ;
static int __init em28xx_alsa_register(void)
static void __exit em28xx_alsa_unregister(void)
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Markus Rechberger <mrechberger@gmail.com>");
MODULE_AUTHOR("Mauro Carvalho Chehab <mchehab@infradead.org>");
MODULE_DESCRIPTION("Em28xx Audio driver");
module_init(em28xx_alsa_register);
module_exit(em28xx_alsa_unregister);
