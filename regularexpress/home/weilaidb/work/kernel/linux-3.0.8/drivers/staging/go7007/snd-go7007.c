static int index[SNDRV_CARDS] = SNDRV_DEFAULT_IDX;
static char *id[SNDRV_CARDS] = SNDRV_DEFAULT_STR;
static int enable[SNDRV_CARDS] = SNDRV_DEFAULT_ENABLE_PNP;
module_param_array(index, int, NULL, 0444);
module_param_array(id, charp, NULL, 0444);
module_param_array(enable, bool, NULL, 0444);
MODULE_PARM_DESC(index, "Index value for the go7007 audio driver");
MODULE_PARM_DESC(id, "ID string for the go7007 audio driver");
MODULE_PARM_DESC(enable, "Enable for the go7007 audio driver");
struct go7007_snd ;
static struct snd_pcm_hardware go7007_snd_capture_hw = ;
static void parse_audio_stream_data(struct go7007 *go, u8 *buf, int length)
static int go7007_snd_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int go7007_snd_hw_free(struct snd_pcm_substream *substream)
static int go7007_snd_capture_open(struct snd_pcm_substream *substream)
static int go7007_snd_capture_close(struct snd_pcm_substream *substream)
static int go7007_snd_pcm_prepare(struct snd_pcm_substream *substream)
static int go7007_snd_pcm_trigger(struct snd_pcm_substream *substream, int cmd)
static snd_pcm_uframes_t go7007_snd_pcm_pointer(struct snd_pcm_substream *substream)
static struct page *go7007_snd_pcm_page(struct snd_pcm_substream *substream,
unsigned long offset)
static struct snd_pcm_ops go7007_snd_capture_ops = ;
static int go7007_snd_free(struct snd_device *device)
static struct snd_device_ops go7007_snd_device_ops = ;
int go7007_snd_init(struct go7007 *go)
EXPORT_SYMBOL(go7007_snd_init);
int go7007_snd_remove(struct go7007 *go)
EXPORT_SYMBOL(go7007_snd_remove);
MODULE_LICENSE("GPL v2");
