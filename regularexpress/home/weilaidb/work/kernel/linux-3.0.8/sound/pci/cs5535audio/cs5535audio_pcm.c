static struct snd_pcm_hardware snd_cs5535audio_playback =
;
static struct snd_pcm_hardware snd_cs5535audio_capture =
;
static int snd_cs5535audio_playback_open(struct snd_pcm_substream *substream)
static int snd_cs5535audio_playback_close(struct snd_pcm_substream *substream)
#define CS5535AUDIO_DESC_LIST_SIZE \
PAGE_ALIGN(CS5535AUDIO_MAX_DESCRIPTORS * sizeof(struct cs5535audio_dma_desc))
static int cs5535audio_build_dma_packets(struct cs5535audio *cs5535au,
struct cs5535audio_dma *dma,
struct snd_pcm_substream *substream,
unsigned int periods,
unsigned int period_bytes)
static void cs5535audio_playback_enable_dma(struct cs5535audio *cs5535au)
static void cs5535audio_playback_disable_dma(struct cs5535audio *cs5535au)
static void cs5535audio_playback_pause_dma(struct cs5535audio *cs5535au)
static void cs5535audio_playback_setup_prd(struct cs5535audio *cs5535au,
u32 prd_addr)
static u32 cs5535audio_playback_read_prd(struct cs5535audio *cs5535au)
static u32 cs5535audio_playback_read_dma_pntr(struct cs5535audio *cs5535au)
static void cs5535audio_capture_enable_dma(struct cs5535audio *cs5535au)
static void cs5535audio_capture_disable_dma(struct cs5535audio *cs5535au)
static void cs5535audio_capture_pause_dma(struct cs5535audio *cs5535au)
static void cs5535audio_capture_setup_prd(struct cs5535audio *cs5535au,
u32 prd_addr)
static u32 cs5535audio_capture_read_prd(struct cs5535audio *cs5535au)
static u32 cs5535audio_capture_read_dma_pntr(struct cs5535audio *cs5535au)
static void cs5535audio_clear_dma_packets(struct cs5535audio *cs5535au,
struct cs5535audio_dma *dma,
struct snd_pcm_substream *substream)
static int snd_cs5535audio_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int snd_cs5535audio_hw_free(struct snd_pcm_substream *substream)
static int snd_cs5535audio_playback_prepare(struct snd_pcm_substream *substream)
static int snd_cs5535audio_trigger(struct snd_pcm_substream *substream, int cmd)
static snd_pcm_uframes_t snd_cs5535audio_pcm_pointer(struct snd_pcm_substream
*substream)
static int snd_cs5535audio_capture_open(struct snd_pcm_substream *substream)
static int snd_cs5535audio_capture_close(struct snd_pcm_substream *substream)
static int snd_cs5535audio_capture_prepare(struct snd_pcm_substream *substream)
static struct snd_pcm_ops snd_cs5535audio_playback_ops = ;
static struct snd_pcm_ops snd_cs5535audio_capture_ops = ;
static struct cs5535audio_dma_ops snd_cs5535audio_playback_dma_ops = ;
static struct cs5535audio_dma_ops snd_cs5535audio_capture_dma_ops = ;
int __devinit snd_cs5535audio_pcm(struct cs5535audio *cs5535au)
