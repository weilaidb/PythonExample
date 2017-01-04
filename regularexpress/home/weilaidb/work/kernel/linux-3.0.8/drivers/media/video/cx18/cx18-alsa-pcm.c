static unsigned int pcm_debug;
module_param(pcm_debug, int, 0644);
MODULE_PARM_DESC(pcm_debug, "enable debug messages for pcm");
#define dprintk(fmt, arg...) do  while (0)
static struct snd_pcm_hardware snd_cx18_hw_capture = ;
void cx18_alsa_announce_pcm_data(struct snd_cx18_card *cxsc, u8 *pcm_data,
size_t num_bytes)
static int snd_cx18_pcm_capture_open(struct snd_pcm_substream *substream)
static int snd_cx18_pcm_capture_close(struct snd_pcm_substream *substream)
static int snd_cx18_pcm_ioctl(struct snd_pcm_substream *substream,
unsigned int cmd, void *arg)
static int snd_pcm_alloc_vmalloc_buffer(struct snd_pcm_substream *subs,
size_t size)
static int snd_cx18_pcm_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static int snd_cx18_pcm_hw_free(struct snd_pcm_substream *substream)
static int snd_cx18_pcm_prepare(struct snd_pcm_substream *substream)
static int snd_cx18_pcm_trigger(struct snd_pcm_substream *substream, int cmd)
static
snd_pcm_uframes_t snd_cx18_pcm_pointer(struct snd_pcm_substream *substream)
static struct page *snd_pcm_get_vmalloc_page(struct snd_pcm_substream *subs,
unsigned long offset)
static struct snd_pcm_ops snd_cx18_pcm_capture_ops = ;
int snd_cx18_pcm_create(struct snd_cx18_card *cxsc)
