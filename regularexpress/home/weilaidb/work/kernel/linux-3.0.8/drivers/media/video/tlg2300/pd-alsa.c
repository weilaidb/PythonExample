static void complete_handler_audio(struct urb *urb);
#define AUDIO_EP	(0x83)
#define AUDIO_BUF_SIZE	(512)
#define PERIOD_SIZE	(1024 * 8)
#define PERIOD_MIN	(4)
#define PERIOD_MAX 	PERIOD_MIN
static struct snd_pcm_hardware snd_pd_hw_capture = ;
static int snd_pd_capture_open(struct snd_pcm_substream *substream)
static int snd_pd_pcm_close(struct snd_pcm_substream *substream)
static int snd_pd_hw_capture_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int audio_buf_free(struct poseidon *p)
static int snd_pd_hw_capture_free(struct snd_pcm_substream *substream)
static int snd_pd_prepare(struct snd_pcm_substream *substream)
#define AUDIO_TRAILER_SIZE	(16)
static inline void handle_audio_data(struct urb *urb, int *period_elapsed)
static void complete_handler_audio(struct urb *urb)
static int fire_audio_urb(struct poseidon *p)
static int snd_pd_capture_trigger(struct snd_pcm_substream *substream, int cmd)
static snd_pcm_uframes_t
snd_pd_capture_pointer(struct snd_pcm_substream *substream)
static struct page *snd_pcm_pd_get_page(struct snd_pcm_substream *subs,
unsigned long offset)
static struct snd_pcm_ops pcm_capture_ops = ;
int pm_alsa_suspend(struct poseidon *p)
int pm_alsa_resume(struct poseidon *p)
int poseidon_audio_init(struct poseidon *p)
int poseidon_audio_free(struct poseidon *p)
