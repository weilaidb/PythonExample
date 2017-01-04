static const struct snd_pcm_hardware alsa_hardware = ;
void
easycap_alsa_complete(struct urb *purb)
static int easycap_alsa_open(struct snd_pcm_substream *pss)
static int easycap_alsa_close(struct snd_pcm_substream *pss)
static int easycap_alsa_vmalloc(struct snd_pcm_substream *pss, size_t sz)
static int easycap_alsa_hw_params(struct snd_pcm_substream *pss,
struct snd_pcm_hw_params *phw)
static int easycap_alsa_hw_free(struct snd_pcm_substream *pss)
static int easycap_alsa_prepare(struct snd_pcm_substream *pss)
static int easycap_alsa_ack(struct snd_pcm_substream *pss)
static int easycap_alsa_trigger(struct snd_pcm_substream *pss, int cmd)
static snd_pcm_uframes_t easycap_alsa_pointer(struct snd_pcm_substream *pss)
static struct page *
easycap_alsa_page(struct snd_pcm_substream *pss, unsigned long offset)
static struct snd_pcm_ops easycap_alsa_pcm_ops = ;
int easycap_alsa_probe(struct easycap *peasycap)
int
easycap_sound_setup(struct easycap *peasycap)
int
submit_audio_urbs(struct easycap *peasycap)
int
kill_audio_urbs(struct easycap *peasycap)
